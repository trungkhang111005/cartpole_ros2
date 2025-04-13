// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartpole_interfaces:msg/PositionReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/position_reading.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__BUILDER_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartpole_interfaces/msg/detail/position_reading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartpole_interfaces
{

namespace msg
{

namespace builder
{

class Init_PositionReading_x_cart_m
{
public:
  Init_PositionReading_x_cart_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cartpole_interfaces::msg::PositionReading x_cart_m(::cartpole_interfaces::msg::PositionReading::_x_cart_m_type arg)
  {
    msg_.x_cart_m = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartpole_interfaces::msg::PositionReading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartpole_interfaces::msg::PositionReading>()
{
  return cartpole_interfaces::msg::builder::Init_PositionReading_x_cart_m();
}

}  // namespace cartpole_interfaces

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__BUILDER_HPP_
