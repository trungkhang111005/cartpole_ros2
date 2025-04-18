#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from cartpole_interfaces.msg import ImuReading
from smbus2 import SMBus
import math
import time

class IMUNode(Node):
	def __init__(self):
		super().__init__('imu_node')
		self.publisher_ = self.create_publisher(ImuReading, 'imu_data', 50)
		self.bus = SMBus(1)
		self.timer = self.create_timer(0.005, self.publish_imu_data)
		# Init IMU
		self.addr = 0x68
		for attempt in range(3):
			try:
				self.bus.write_byte_data(self.addr, 0x6B, 0)
				break
			except OSError:
				time.sleep(0.1)
		else:
			self.get_logger().error("MPU6050 not responding. Exiting.")
			rclpy.shutdown()
			return

		self.prev_time = time.perf_counter()
		self.angle = 0.0
		self.angle_vel = 0.0

	def read_word(self, reg):
		high = self.bus.read_byte_data(self.addr, reg)
		low = self.bus.read_byte_data(self.addr, reg + 1)
		val = (high << 8) | low
		return val - 65536 if val > 32767 else val

	def publish_imu_data(self):
		now = time.perf_counter()
		dt = now - self.prev_time
		self.prev_time = now

		ay = self.read_word(0x3D) - 170
		az = self.read_word(0x3F) - 1514
		rx = self.read_word(0x43) - (-166)
		acc_angle = math.degrees(math.atan2(ay, az))
		gyro_measure = rx / 131.0

		self.angle_vel = 0.09 * self.angle_vel + 0.91 * gyro_measure
		self.angle = 0.98 * (self.angle + self.angle_vel * dt) + 0.02 * acc_angle

		msg = ImuReading()
		msg.angle_deg = float(self.angle)
		msg.angular_velocity = float(self.angle_vel)
		self.publisher_.publish(msg)
	def destroy_node(self):
		self.sleep_mpu()  # Add this
		super().destroy_node()

	def sleep_mpu(self):
		try:
			self.bus.write_byte_data(self.addr, 0x6B, 0x40)
			self.get_logger().info("MPU6050 set to sleep mode.")
		except Exception as e:
			self.get_logger().warn(f"Failed to sleep MPU6050: {e}")

def main():
	rclpy.init()
	node = IMUNode()
	try:
		rclpy.spin(node)
	except KeyboardInterrupt:
		pass
	finally:
		node.destroy_node()
		if rclpy.ok():
			rclpy.shutdown()
