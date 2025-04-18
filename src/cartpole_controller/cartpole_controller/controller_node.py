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
TORQUE_RATE = 0.025
THRESHOLD_THETA = 12.5  # degrees (failsafe)
THETA_REF_MAX = math.radians(5.0)  # limit the reference to ±15 deg
POS_ALPHA = 0.8
POS_DT = 0.005
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
				# Run at ~200 Hz
		self.control_timer = self.create_timer(0.005, self.publish_torque)
		self.prev_x_cart = 0.0
		self.prev_torque = 0.0
		self.x_cart_filt = 0.0
		self.x_cart_dot_signed = 0.0
	def imu_callback(self, msg):
		self.theta = math.radians(msg.angle_deg)
		self.theta_dot = math.radians(msg.angular_velocity)

	def pos_callback(self, msg):
		self.x_cart = msg.x_cart_m

	def vel_callback(self, msg):
		self.x_cart_dot = msg.cart_x_dot_m

		# Estimate velocity sign
		delta_pos = self.x_cart - self.prev_x_cart
		sign_pos = math.copysign(1.0, delta_pos) if abs(delta_pos) > 0.01 else 0.0
		sign_torque = math.copysign(1.0, self.prev_torque) if abs(self.prev_torque) > 0.01 else 0.0

		# Prefer ultrasonic sign if reliable
		self.vel_sign = sign_pos if sign_pos != 0.0 else sign_torque

		self.x_cart_dot_signed = self.x_cart_dot * self.vel_sign
		self.prev_x_cart = self.x_cart
	def clamp(self, val, low, high):
		return max(low, min(high, val))

	def publish_torque(self):
			# Complementary filter
		dt = 0.005  # match control loop rate
		x_cart_from_vel = self.x_cart_filt + self.x_cart_dot_signed * POS_DT
		self.x_cart_filt = POS_ALPHA * x_cart_from_vel + (1 - POS_ALPHA) * self.x_cart
		# === Failsafe ===
		if abs(math.degrees(self.theta)) > THRESHOLD_THETA:
			torque = 0.0
			theta_ref = 0.0
		else:
			# === Outer Loop (PD): Compute desired pole angle ===
			if abs(self.x_cart) < 0.02:
				theta_ref = 0.0
			else:
				theta_ref = -K_X * self.x_cart_filt - K_X_DOT * self.x_cart_dot_signed
			theta_ref = self.clamp(theta_ref, -THETA_REF_MAX, THETA_REF_MAX)

			# === Inner Loop (LQR): Track theta_ref ===
			theta_error = self.theta - theta_ref
			torque = - (K_THETA * theta_error + K_THETA_DOT * self.theta_dot)

			# Optional: Torque rate limiting
			delta = torque - self.prev_torque
			if abs(delta) > TORQUE_RATE:
				torque = self.prev_torque + TORQUE_RATE * math.copysign(1, delta)

		self.prev_torque = torque

		# === Publish ===
		msg = TorqueCommand()
		msg.torque_nm = float(torque)
		self.pub_cmd.publish(msg)

	# === Logging ===
		self.get_logger().info(
			f"[Control] θ: {math.degrees(self.theta):.2f}°, θ̇: {math.degrees(self.theta_dot):.2f}°/s, "
			f"x_cart: {self.x_cart_filt:.4f} m, v_cart: {self.x_cart_dot_signed:.4f} m/s, "
			f"θ_ref: {math.degrees(theta_ref):.2f}°, τ: {torque:.3f} Nm"
		)
def main():
	rclpy.init()
	node = ControllerNode()
	try:
		rclpy.spin(node)
	except KeyboardInterrupt:
		pass
	finally:
		node.destroy_node()
		if rclpy.ok():
			rclpy.shutdown()

