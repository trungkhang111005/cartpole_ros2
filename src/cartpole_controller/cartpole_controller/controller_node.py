import rclpy
import math
from cartpole_interfaces.msg import ImuReading
from cartpole_interfaces.msg import PositionReading
from cartpole_interfaces.msg import TorqueCommand
from cartpole_interfaces.msg import VelocityReading
from rclpy.node import Node
K_THETA = 7.7720
K_THETA_DOT = 0.9336
K_X = -2.5
K_X_DOT = 1.6281
THRESHOLD_THETA = 20
THRESHOLD_THETA_DOT = 50
class ControllerNode(Node):
	def __init__(self):
		super().__init__('controller_node')
		self.sub_imu = self.create_subscription(ImuReading, 'imu_data', self.imu_callback, 10)
		self.sub_pos = self.create_subscription(PositionReading, 'position_data', self.pos_callback, 10)
		self.sub_pos = self.create_subscription(VelocityReading, 'cart_v_data', self.pos_callback, 10)
		self.pub_cmd = self.create_publisher(TorqueCommand, 'torque_cmd', 10)
		self.theta = 0.0
		self.theta_dot = 0.0
		self.x_cart = 0.0
		self.x_cart_dot = 0.0
		self.prev_torque = 0.0

	def scaled_gain(self, x, base, max_k, thresh):
		return base + (max_k - base) * min(abs(x)/thresh, 1.0)

	def imu_callback(self, msg):
		self.theta = math.radians(msg.angle_deg)
		self.theta_dot = math.radians(msg.angular_velocity)
		self.publish_torque()

	def pos_callback(self, msg):
		self.x_cart = msg.x_cart_m
		self.publish_torque()
	def vel_callback(self, msg):
		self.x_cart_dot = msg.x_cart_dot_m
		self.publish_torque()
	def publish_torque(self):
		k_theta = self.scaled_gain(self.theta, K_THETA, K_THETA, THRESHOLD_THETA)
		k_theta_dot = self.scaled_gain(self.theta_dot, K_THETA_DOT, K_THETA_DOT, THRESHOLD_THETA_DOT)
		if abs(math.degrees(self.theta)) > THRESHOLD_THETA:
			torque = -(0.05 * self.x_cart)
		else:
			torque = -(k_theta * self.theta + k_theta_dot * self.theta_dot + K_X * self.x_cart + K_X_DOT * self.x_cart_dot)
		delta = torque - self.prev_torque
		if abs(delta) > 0.05:
			torque = self.prev_torque + 0.05 * math.copysign(1, delta)
		self.prev_torque = torque
		msg = TorqueCommand()
		msg.torque_nm = float(torque)
		self.pub_cmd.publish(msg)
		self.get_logger().info(
			f"[Control] θ: {math.degrees(self.theta):.2f}°, θ̇: {math.degrees(self.theta_dot):.2f}°/s, "
			f"x_cart: {self.x_cart:.4f} m, v_cart: {self.x_cart_dot:.4f} m/s, torque: {torque:.3f} Nm"
		)

def main():
        rclpy.init()
        node = ControllerNode()
        rclpy.spin(node)
        node.destroy_node()
        rclpy.shutdown()
