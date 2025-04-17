#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from cartpole_interfaces.msg import VelocityReading
import lgpio
import time

class HLFBReader:
	def __init__(self, chip=4, pin=19):
		self.chip = lgpio.gpiochip_open(chip)
		self.pin = pin
		lgpio.gpio_claim_input(self.chip, self.pin)

	def measure_duty_cycle(self, timeout=1.0):
		start_time = time.monotonic()
		timeout_time = start_time + timeout
		while lgpio.gpio_read(self.chip, self.pin) == 1:
			if time.monotonic() > timeout_time:
				return None
		while lgpio.gpio_read(self.chip, self.pin) == 0:
			if time.monotonic() > timeout_time:
				return None
		t_rise = time.monotonic_ns()
		while lgpio.gpio_read(self.chip, self.pin) == 1:
			if time.monotonic() > timeout_time:
				return None
		t_fall = time.monotonic_ns()
		high_time = t_fall - t_rise
		while lgpio.gpio_read(self.chip, self.pin) == 0:
			if time.monotonic() > timeout_time:
				return None
		t_rise_next = time.monotonic_ns()
		period = t_rise_next - t_rise
		duty = (high_time / period) * 100
		return round(duty, 2)

	def close(self):
		lgpio.gpio_free(self.chip, self.pin)
		lgpio.gpiochip_close(self.chip)

class HLFBNode(Node):
	def __init__(self):
		super().__init__('hlfb_node')
		self.publisher_ = self.create_publisher(VelocityReading, 'cart_x_dot_m', 10)
		self.timer = self.create_timer(0.023, self.publish_velocity)  # 50 Hz
		self.hlfb = HLFBReader(chip=4, pin=19)
		self.max_velocity = 0.071 * 1500 / 60  # TRACK_LEN * MAX_RPS
		self.filtered_velocity = 0.0
		self.alpha = 0.95
	def publish_velocity(self):
		duty = self.hlfb.measure_duty_cycle()
		if duty is not None:
			if duty < 5.0:
				duty = 5.0
			elif duty > 95.0:
				duty = 95.0
			scaled_duty = (duty - 5.0) / (95.0 - 5.0)  # map 5–95 to 0–1
			raw_velocity = scaled_duty * self.max_velocity

			self.filtered_velocity = (
				self.alpha * raw_velocity + (1 - self.alpha) * self.filtered_velocity
			)
			msg = VelocityReading()
			msg.cart_x_dot_m = float(self.filtered_velocity)
			self.publisher_.publish(msg)
		else:
			self.get_logger().warn("HLFB reading failed")


	def destroy_node(self):
		self.hlfb.close()
		super().destroy_node()

def main():
	rclpy.init()
	node = HLFBNode()
	try:
		rclpy.spin(node)
	finally:
		node.destroy_node()
		if rclpy.ok():
			rclpy.shutdown()
