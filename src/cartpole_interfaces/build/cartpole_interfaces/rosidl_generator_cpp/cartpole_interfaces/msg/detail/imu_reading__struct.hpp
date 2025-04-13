// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartpole_interfaces:msg/ImuReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/imu_reading.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__STRUCT_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cartpole_interfaces__msg__ImuReading __attribute__((deprecated))
#else
# define DEPRECATED__cartpole_interfaces__msg__ImuReading __declspec(deprecated)
#endif

namespace cartpole_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuReading_
{
  using Type = ImuReading_<ContainerAllocator>;

  explicit ImuReading_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_deg = 0.0f;
      this->angular_velocity = 0.0f;
    }
  }

  explicit ImuReading_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_deg = 0.0f;
      this->angular_velocity = 0.0f;
    }
  }

  // field types and members
  using _angle_deg_type =
    float;
  _angle_deg_type angle_deg;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__angle_deg(
    const float & _arg)
  {
    this->angle_deg = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartpole_interfaces::msg::ImuReading_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartpole_interfaces::msg::ImuReading_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartpole_interfaces::msg::ImuReading_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartpole_interfaces::msg::ImuReading_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartpole_interfaces__msg__ImuReading
    std::shared_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartpole_interfaces__msg__ImuReading
    std::shared_ptr<cartpole_interfaces::msg::ImuReading_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuReading_ & other) const
  {
    if (this->angle_deg != other.angle_deg) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuReading_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuReading_

// alias to use template instance with default allocator
using ImuReading =
  cartpole_interfaces::msg::ImuReading_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartpole_interfaces

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__STRUCT_HPP_
