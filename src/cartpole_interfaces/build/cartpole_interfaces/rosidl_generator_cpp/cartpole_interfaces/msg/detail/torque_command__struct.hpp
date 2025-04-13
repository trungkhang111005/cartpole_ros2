// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/torque_command.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__STRUCT_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cartpole_interfaces__msg__TorqueCommand __attribute__((deprecated))
#else
# define DEPRECATED__cartpole_interfaces__msg__TorqueCommand __declspec(deprecated)
#endif

namespace cartpole_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TorqueCommand_
{
  using Type = TorqueCommand_<ContainerAllocator>;

  explicit TorqueCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torque_nm = 0.0f;
    }
  }

  explicit TorqueCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torque_nm = 0.0f;
    }
  }

  // field types and members
  using _torque_nm_type =
    float;
  _torque_nm_type torque_nm;

  // setters for named parameter idiom
  Type & set__torque_nm(
    const float & _arg)
  {
    this->torque_nm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartpole_interfaces__msg__TorqueCommand
    std::shared_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartpole_interfaces__msg__TorqueCommand
    std::shared_ptr<cartpole_interfaces::msg::TorqueCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TorqueCommand_ & other) const
  {
    if (this->torque_nm != other.torque_nm) {
      return false;
    }
    return true;
  }
  bool operator!=(const TorqueCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TorqueCommand_

// alias to use template instance with default allocator
using TorqueCommand =
  cartpole_interfaces::msg::TorqueCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartpole_interfaces

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__STRUCT_HPP_
