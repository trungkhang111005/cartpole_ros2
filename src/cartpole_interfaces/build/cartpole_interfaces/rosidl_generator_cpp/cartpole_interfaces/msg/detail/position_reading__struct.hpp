// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartpole_interfaces:msg/PositionReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/position_reading.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__STRUCT_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cartpole_interfaces__msg__PositionReading __attribute__((deprecated))
#else
# define DEPRECATED__cartpole_interfaces__msg__PositionReading __declspec(deprecated)
#endif

namespace cartpole_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionReading_
{
  using Type = PositionReading_<ContainerAllocator>;

  explicit PositionReading_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_cart_m = 0.0f;
    }
  }

  explicit PositionReading_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_cart_m = 0.0f;
    }
  }

  // field types and members
  using _x_cart_m_type =
    float;
  _x_cart_m_type x_cart_m;

  // setters for named parameter idiom
  Type & set__x_cart_m(
    const float & _arg)
  {
    this->x_cart_m = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartpole_interfaces::msg::PositionReading_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartpole_interfaces::msg::PositionReading_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartpole_interfaces::msg::PositionReading_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartpole_interfaces::msg::PositionReading_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartpole_interfaces__msg__PositionReading
    std::shared_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartpole_interfaces__msg__PositionReading
    std::shared_ptr<cartpole_interfaces::msg::PositionReading_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionReading_ & other) const
  {
    if (this->x_cart_m != other.x_cart_m) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionReading_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionReading_

// alias to use template instance with default allocator
using PositionReading =
  cartpole_interfaces::msg::PositionReading_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartpole_interfaces

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__STRUCT_HPP_
