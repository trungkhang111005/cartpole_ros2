// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartpole_interfaces:msg/PositionReading.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartpole_interfaces/msg/detail/position_reading__functions.h"
#include "cartpole_interfaces/msg/detail/position_reading__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cartpole_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PositionReading_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartpole_interfaces::msg::PositionReading(_init);
}

void PositionReading_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartpole_interfaces::msg::PositionReading *>(message_memory);
  typed_message->~PositionReading();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PositionReading_message_member_array[1] = {
  {
    "x_cart_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartpole_interfaces::msg::PositionReading, x_cart_m),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PositionReading_message_members = {
  "cartpole_interfaces::msg",  // message namespace
  "PositionReading",  // message name
  1,  // number of fields
  sizeof(cartpole_interfaces::msg::PositionReading),
  false,  // has_any_key_member_
  PositionReading_message_member_array,  // message members
  PositionReading_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionReading_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PositionReading_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PositionReading_message_members,
  get_message_typesupport_handle_function,
  &cartpole_interfaces__msg__PositionReading__get_type_hash,
  &cartpole_interfaces__msg__PositionReading__get_type_description,
  &cartpole_interfaces__msg__PositionReading__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartpole_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartpole_interfaces::msg::PositionReading>()
{
  return &::cartpole_interfaces::msg::rosidl_typesupport_introspection_cpp::PositionReading_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartpole_interfaces, msg, PositionReading)() {
  return &::cartpole_interfaces::msg::rosidl_typesupport_introspection_cpp::PositionReading_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
