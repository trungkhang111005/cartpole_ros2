import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from smbus2 import SMBus
import math, time

class IMUNode(Node):
	def __init__(self):
		super().__init__('imu_node')
		self.publisher_ = self.create_publisher(Imu, 'imu/data', 10)
		self.bus = SMBus(1)
		self.init_imu()
		self.timer = self.create_timer(0.01, self.timer_callback)
		self.prev_time = time.perf_counter()
		self.angle = 0.0
		self.angle_vel = 0.0

	def init_imu(self):
		# Initialize MPU6050
		MPU_ADDR, PWR_MGMT_1 = 0x68, 0x6B
		self.bus.write_byte_data(MPU_ADDR, PWR_MGMT_1, 0)

	def read_word(self, reg):
		MPU_ADDR = 0x68
		high = self.bus.read_byte_data(MPU_ADDR, reg)
		low = self.bus.read_byte_data(MPU_ADDR, reg + 1)
		val = (high << 8) | low
		return val - 65536 if val > 32767 else val

	def timer_callback(self):
		# Add angle and angular velocity computation here
		# Then publish using sensor_msgs/Imu
		msg = Imu()
		msg.angular_velocity.z = math.radians(self.angle_vel)
		msg.orientation.x = 0.0  # Optional: use quaternion if needed
		self.publisher_.publish(msg)

def main(args=None):
	rclpy.init(args=args)
	node = IMUNode()
	rclpy.spin(node)
	node.destroy_node()
	rclpy.shutdown()
