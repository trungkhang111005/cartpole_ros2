import rclpy
import math
from cartpole_interfaces.msg import ImuReading, PositionReading, VelocityReading, TorqueCommand
from rclpy.node import Node

# === LQR (Inner Loop) Gains ===
K_THETA = 20.1171
K_THETA_DOT = 2.7638

# === PD (Outer Loop) Gains ===
K_X = 6	       # P gain for cart position
K_X_DOT = 0.540413040993283    # D gain for cart velocity

THRESHOLD_THETA = 20.0  # degrees (failsafe)

class ControllerNode(Node):
	def __init__(self):
		super().__init__('controller_node')
		self.sub_imu = self.create_subscription(ImuReading, 'imu_data', self.imu_callback, 10)
		self.sub_pos = self.create_subscription(PositionReading, 'position_data', self.pos_callback, 10)
		self.sub_vel = self.create_subscription(VelocityReading, 'cart_x_dot_m', self.vel_callback, 10)
		self.pub_cmd = self.create_publisher(TorqueCommand, 'torque_cmd', 10)

		# State variables
		self.theta = 0.0
		self.theta_dot = 0.0
		self.x_cart = 0.0
		self.x_cart_dot = 0.0
		self.prev_torque = 0.0

	def imu_callback(self, msg):
		self.theta = math.radians(msg.angle_deg)
		self.theta_dot = math.radians(msg.angular_velocity)
		self.publish_torque()

	def pos_callback(self, msg):
		self.x_cart = msg.x_cart_m
		self.publish_torque()

	def vel_callback(self, msg):
		self.x_cart_dot = msg.cart_x_dot_m
		self.publish_torque()

	def publish_torque(self):
		# === Failsafe: large pole angle ===
		if abs(math.degrees(self.theta)) > THRESHOLD_THETA:

			torque_pd =  (K_X * self.x_cart + K_X_DOT * self.x_cart_dot)
			torque = torque_pd
			torque_lqr = 0.0
		else:
			# Inner loop (LQR): stabilize pole
			torque_lqr = - (K_THETA * self.theta + K_THETA_DOT * self.theta_dot)

			# Outer loop (PD): center cart
			torque_pd = - (K_X * self.x_cart + K_X_DOT * self.x_cart_dot)

			# Combine
			torque = torque_lqr + torque_pd

			# Optional: Torque rate limiting
			delta = torque - self.prev_torque
			if abs(delta) > 0.05:
				torque = self.prev_torque + 0.05 * math.copysign(1, delta)

		self.prev_torque = torque

		# Publish torque
		msg = TorqueCommand()
		msg.torque_nm = float(torque)
		self.pub_cmd.publish(msg)

		# Debug log
		self.get_logger().info(
			f"[Control] θ: {math.degrees(self.theta):.2f}°, θ̇: {math.degrees(self.theta_dot):.2f}°/s, "
			f"x_cart: {self.x_cart:.4f} m, v_cart: {self.x_cart_dot:.4f} m/s, torque: {torque:.3f} Nm"
			f"lqr_torque: {torque_lqr:.4f} Nm, pd_torque: {torque_pd:.4f} Nm"
		)

def main():
	rclpy.init()
	node = ControllerNode()
	rclpy.spin(node)
	node.destroy_node()
	rclpy.shutdown()
