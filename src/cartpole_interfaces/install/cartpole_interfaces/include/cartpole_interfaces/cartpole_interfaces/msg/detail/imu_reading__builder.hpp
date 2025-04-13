// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartpole_interfaces:msg/ImuReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/imu_reading.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__BUILDER_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartpole_interfaces/msg/detail/imu_reading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartpole_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImuReading_angular_velocity
{
public:
  explicit Init_ImuReading_angular_velocity(::cartpole_interfaces::msg::ImuReading & msg)
  : msg_(msg)
  {}
  ::cartpole_interfaces::msg::ImuReading angular_velocity(::cartpole_interfaces::msg::ImuReading::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartpole_interfaces::msg::ImuReading msg_;
};

class Init_ImuReading_angle_deg
{
public:
  Init_ImuReading_angle_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuReading_angular_velocity angle_deg(::cartpole_interfaces::msg::ImuReading::_angle_deg_type arg)
  {
    msg_.angle_deg = std::move(arg);
    return Init_ImuReading_angular_velocity(msg_);
  }

private:
  ::cartpole_interfaces::msg::ImuReading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartpole_interfaces::msg::ImuReading>()
{
  return cartpole_interfaces::msg::builder::Init_ImuReading_angle_deg();
}

}  // namespace cartpole_interfaces

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__BUILDER_HPP_
