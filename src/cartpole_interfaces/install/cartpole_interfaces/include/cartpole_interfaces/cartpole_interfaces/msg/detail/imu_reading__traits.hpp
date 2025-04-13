// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartpole_interfaces:msg/ImuReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/imu_reading.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__TRAITS_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartpole_interfaces/msg/detail/imu_reading__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cartpole_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuReading & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle_deg
  {
    out << "angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_deg, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuReading & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_deg, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuReading & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cartpole_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cartpole_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cartpole_interfaces::msg::ImuReading & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartpole_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartpole_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartpole_interfaces::msg::ImuReading & msg)
{
  return cartpole_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartpole_interfaces::msg::ImuReading>()
{
  return "cartpole_interfaces::msg::ImuReading";
}

template<>
inline const char * name<cartpole_interfaces::msg::ImuReading>()
{
  return "cartpole_interfaces/msg/ImuReading";
}

template<>
struct has_fixed_size<cartpole_interfaces::msg::ImuReading>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cartpole_interfaces::msg::ImuReading>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cartpole_interfaces::msg::ImuReading>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__TRAITS_HPP_
