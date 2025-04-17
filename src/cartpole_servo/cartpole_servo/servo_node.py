import rclpy
import lgpio
import math
from rclpy.node import Node
from cartpole_interfaces.msg import TorqueCommand

MAX_TORQUE = 0.8  # Nm
PWM_CHANNEL = 13
PWM_FREQ = 200
EN_CHANNEL = 5
DIR_CHANNEL = 6
RELAY_CHANNEL = 26
DUTY_RATE_LIMIT = 5
class ServoNode(Node):
	def __init__(self):
		super().__init__('servo_node')

		# GPIO setup
		self.h = lgpio.gpiochip_open(4)
		for pin in [PWM_CHANNEL, EN_CHANNEL, RELAY_CHANNEL, DIR_CHANNEL]:
			lgpio.gpio_claim_output(self.h, pin)

		# Initial motor state
		lgpio.gpio_write(self.h, EN_CHANNEL, 0)
		lgpio.gpio_write(self.h, RELAY_CHANNEL, 1)
		lgpio.gpio_write(self.h, DIR_CHANNEL, 0)  # Default: forward
		# PWM setup
		self.pwm_channel = PWM_CHANNEL
		self.freq = PWM_FREQ

		# ROS 2 subscriber
		self.sub_cmd = self.create_subscription(
			TorqueCommand, 'torque_cmd', self.command_callback, 10)
		self.prev_duty = 0.0  # in __init__
		self.last_dir = 0
	def command_callback(self, msg):
		torque = max(min(msg.torque_nm, MAX_TORQUE), -MAX_TORQUE)
		# Convert to unipolar PWM and direction
		duty = abs(torque) / MAX_TORQUE * 100.0
		duty = max(min(duty, 100.0), 0.0)
		if duty < 8.0:
			duty = 0.0
		target_duty = duty  # from torque
		duty_delta = target_duty - self.prev_duty
		if abs(duty_delta) > DUTY_RATE_LIMIT:
			target_duty = self.prev_duty + DUTY_RATE_LIMIT * math.copysign(1, duty_delta)
		self.prev_duty = target_duty
		if abs(torque) > 0.05:
			new_dir = 1 if torque <= 0 else 0
			if new_dir != self.last_dir:
				lgpio.gpio_write(self.h, DIR_CHANNEL, new_dir)
				self.last_dir = new_dir
		lgpio.tx_pwm(self.h, self.pwm_channel, self.freq, target_duty)

		self.get_logger().info(
			f"[Servo] τ: {torque:.3f} Nm → duty: {duty:.1f}%, DIR: {self.last_dir}"
		)

	def destroy_node(self):
		try:
			lgpio.tx_pwm(self.h, self.pwm_channel, self.freq, 0)
			for pin in [EN_CHANNEL, RELAY_CHANNEL, PWM_CHANNEL, DIR_CHANNEL]:
				lgpio.gpio_write(self.h, pin, 0)
				lgpio.gpio_free(self.h, pin)
			lgpio.gpiochip_close(self.h)
			self.get_logger().info("[Shutdown] GPIOs released and motor disabled.")
		except Exception as e:
			self.get_logger().error(f"[Shutdown ERROR] {e}")
		super().destroy_node()

def main():
	rclpy.init()
	node = ServoNode()
	try:
		rclpy.spin(node)
	except KeyboardInterrupt:
		pass
	finally:
		node.destroy_node()
		rclpy.shutdown()
