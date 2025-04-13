// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/torque_command.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__BUILDER_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartpole_interfaces/msg/detail/torque_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartpole_interfaces
{

namespace msg
{

namespace builder
{

class Init_TorqueCommand_torque_nm
{
public:
  Init_TorqueCommand_torque_nm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cartpole_interfaces::msg::TorqueCommand torque_nm(::cartpole_interfaces::msg::TorqueCommand::_torque_nm_type arg)
  {
    msg_.torque_nm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartpole_interfaces::msg::TorqueCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartpole_interfaces::msg::TorqueCommand>()
{
  return cartpole_interfaces::msg::builder::Init_TorqueCommand_torque_nm();
}

}  // namespace cartpole_interfaces

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__BUILDER_HPP_
