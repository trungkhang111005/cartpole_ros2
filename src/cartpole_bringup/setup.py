from setuptools import find_packages, setup

package_name = 'cartpole_bringup'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/cartpole_launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kai',
    maintainer_email='trungkhang111005@gmail.com',
    description='TODO: Package description',
    license='TODO: MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [],
        'launch': [
            'cartpole_launch = cartpole_bringup.launch.cartpole_launch:generate_launch_description',
        ],
    },
)
