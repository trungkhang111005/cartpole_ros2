// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartpole_interfaces:msg/PositionReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/position_reading.hpp"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__TRAITS_HPP_
#define CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartpole_interfaces/msg/detail/position_reading__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cartpole_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionReading & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_cart_m
  {
    out << "x_cart_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_cart_m, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionReading & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_cart_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_cart_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_cart_m, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionReading & msg, bool use_flow_style = false)
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
  const cartpole_interfaces::msg::PositionReading & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartpole_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartpole_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartpole_interfaces::msg::PositionReading & msg)
{
  return cartpole_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartpole_interfaces::msg::PositionReading>()
{
  return "cartpole_interfaces::msg::PositionReading";
}

template<>
inline const char * name<cartpole_interfaces::msg::PositionReading>()
{
  return "cartpole_interfaces/msg/PositionReading";
}

template<>
struct has_fixed_size<cartpole_interfaces::msg::PositionReading>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cartpole_interfaces::msg::PositionReading>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cartpole_interfaces::msg::PositionReading>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__POSITION_READING__TRAITS_HPP_
