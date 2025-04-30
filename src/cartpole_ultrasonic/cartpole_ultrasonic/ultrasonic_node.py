import rclpy
import time
from rclpy.node import Node
from cartpole_interfaces.msg import PositionReading
import lgpio

class UltrasonicNode(Node):
	def __init__(self):
		super().__init__('ultrasonic_node')
		self.publisher_ = self.create_publisher(PositionReading, 'position_data', 20)
		self.timer = self.create_timer(0.02, self.publish_position)
		self.h = lgpio.gpiochip_open(4)
		self.trig, self.echo = 15, 14
		self.midpoint = 0.37
		lgpio.gpio_claim_output(self.h, self.trig)
		lgpio.gpio_claim_input(self.h, self.echo)

	def measure_distance(self):
		lgpio.gpio_write(self.h, self.trig, 0)
		lgpio.gpio_write(self.h, self.trig, 1)
		start = time.perf_counter_ns()
		while (time.perf_counter_ns() - start) < 10000:  # 10 µs
			pass
		lgpio.gpio_write(self.h, self.trig, 0)
		start = time.perf_counter()
		while lgpio.gpio_read(self.h, self.echo) == 0:
			if time.perf_counter() - start > 0.003:
				return None
		start = time.perf_counter()
		while lgpio.gpio_read(self.h, self.echo) == 1:
			if time.perf_counter() - start > 0.005:
				return None
		end = time.perf_counter()
		duration = end - start
		return -((343.0 * duration) / 2) + self.midpoint

	def publish_position(self):
		dist = self.measure_distance()
		if dist is not None:
			msg = PositionReading()
			msg.x_cart_m = dist
			self.publisher_.publish(msg)
def main():
	rclpy.init()
	node = UltrasonicNode()
	try:
		rclpy.spin(node)
	except KeyboardInterrupt:
		pass
	finally:
		node.destroy_node()
		if rclpy.ok():
			rclpy.shutdown()

