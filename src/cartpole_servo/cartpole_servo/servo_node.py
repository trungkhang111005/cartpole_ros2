import rclpy
import lgpio
from rclpy.node import Node
from cartpole_interfaces.msg import TorqueCommand
MAX_TORQUE = 1 #Nm
class ServoNode(Node):
	def __init__(self):
		super().__init__('servo_node')
		self.sub_cmd = self.create_subscription(TorqueCommand, 'torque_cmd', self.command_callback, 10)
		self.h = lgpio.gpiochip_open(4)
		self.pwm_channel = 13
		self.freq = 200
		lgpio.gpio_claim_output(self.h, self.pwm_channel)

	def command_callback(self, msg):
		torque = max(min(msg.torque_nm, MAX_TORQUE), -MAX_TORQUE)
		duty = 50 + (torque / MAX_TORQUE) * 50
		duty = max(min(duty, 100), 0)
		lgpio.tx_pwm(self.h, self.pwm_channel, self.freq, duty)
		self.get_logger().info(f"[Servo] Received torque: {msg.torque_nm:.3f} Nm → duty: {duty:.2f}%")
def main():
        rclpy.init()
        node = ServoNode()
        rclpy.spin(node)
        node.destroy_node()
        rclpy.shutdown()
