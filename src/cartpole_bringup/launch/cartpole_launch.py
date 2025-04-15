from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
	return LaunchDescription([
		Node(
			package='cartpole_imu',
			executable='imu_node',
			name='imu_node',
			output='screen'
		),
		Node(
			package='cartpole_ultrasonic',
			executable='ultrasonic_node',
			name='ultrasonic_node',
			output='screen'
		),
		Node(
                        package='cartpole_hlfb',
                        executable='hlfb_node',
                        name='hlfb_node',
                        output='screen'
                ),
		Node(
			package='cartpole_controller',
			executable='controller_node',
			name='controller_node',
			output='screen'
		),
		Node(
                        package='cartpole_servo',
                        executable='servo_node',
                        name='servo_node',
                        output='screen'
                ),
	])
