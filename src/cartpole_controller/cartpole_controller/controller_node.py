import rclpy
import math
from cartpole_interfaces.msg import ImuReading, PositionReading, VelocityReading, TorqueCommand
from rclpy.node import Node

# === LQR (Inner Loop) Gains ===
K_THETA = 4
K_THETA_DOT = 1.2

# === PD (Outer Loop) Gains ===
K_X = 0.228	       # P gain for cart position
K_X_DOT = 0.0065    # D gain for cart velocity

THRESHOLD_THETA = 12.5  # degrees (failsafe)
THETA_REF_MAX = math.radians(5.0)  # limit the reference to ±15 deg

class ControllerNode(Node):
	def __init__(self):
		super().__init__('controller_node')
		self.sub_imu = self.create_subscription(ImuReading, 'imu_data', self.imu_callback, 50)
		self.sub_pos = self.create_subscription(PositionReading, 'position_data', self.pos_callback, 20)
		self.sub_vel = self.create_subscription(VelocityReading, 'cart_x_dot_m', self.vel_callback, 10)
		self.pub_cmd = self.create_publisher(TorqueCommand, 'torque_cmd', 10)

		# State variables
		self.theta = 0.0
		self.theta_dot = 0.0
		self.x_cart = 0.0
		self.x_cart_dot = 0.0
		self.prev_torque = 0.0
				# Run at ~200 Hz
		self.control_timer = self.create_timer(0.005, self.publish_torque)

	def imu_callback(self, msg):
		self.theta = math.radians(msg.angle_deg)
		self.theta_dot = math.radians(msg.angular_velocity)

	def pos_callback(self, msg):
		self.x_cart = msg.x_cart_m

	def vel_callback(self, msg):
		self.x_cart_dot = msg.cart_x_dot_m
	def clamp(self, val, low, high):
		return max(low, min(high, val))

	def publish_torque(self):
		# === Failsafe ===
		if abs(math.degrees(self.theta)) > THRESHOLD_THETA:
			torque = 0.0
			theta_ref = 0.0
		else:
			# === Outer Loop (PD): Compute desired pole angle ===
			if abs(self.x_cart) < 0.02:
				theta_ref = 0.0
			else:
				theta_ref = -K_X * self.x_cart - K_X_DOT * self.x_cart_dot
			theta_ref = self.clamp(theta_ref, -THETA_REF_MAX, THETA_REF_MAX)

			# === Inner Loop (LQR): Track theta_ref ===
			theta_error = self.theta - theta_ref
			torque = - (K_THETA * theta_error + K_THETA_DOT * self.theta_dot)

			# Optional: Torque rate limiting
			delta = torque - self.prev_torque
			if abs(delta) > 0.05:
				torque = self.prev_torque + 0.05 * math.copysign(1, delta)

		self.prev_torque = torque

		# === Publish ===
		msg = TorqueCommand()
		msg.torque_nm = float(torque)
		self.pub_cmd.publish(msg)

	# === Logging ===
		self.get_logger().info(
			f"[Control] θ: {math.degrees(self.theta):.2f}°, θ̇: {math.degrees(self.theta_dot):.2f}°/s, "
			f"x_cart: {self.x_cart:.4f} m, v_cart: {self.x_cart_dot:.4f} m/s, "
			f"θ_ref: {math.degrees(theta_ref):.2f}°, τ: {torque:.3f} Nm"
		)
def main():
	rclpy.init()
	node = ControllerNode()
	rclpy.spin(node)
	node.destroy_node()
	rclpy.shutdown()
