// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartpole_interfaces:msg/ImuReading.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartpole_interfaces/msg/detail/imu_reading__functions.h"
#include "cartpole_interfaces/msg/detail/imu_reading__struct.hpp"
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

void ImuReading_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartpole_interfaces::msg::ImuReading(_init);
}

void ImuReading_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartpole_interfaces::msg::ImuReading *>(message_memory);
  typed_message->~ImuReading();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImuReading_message_member_array[2] = {
  {
    "angle_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartpole_interfaces::msg::ImuReading, angle_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartpole_interfaces::msg::ImuReading, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImuReading_message_members = {
  "cartpole_interfaces::msg",  // message namespace
  "ImuReading",  // message name
  2,  // number of fields
  sizeof(cartpole_interfaces::msg::ImuReading),
  false,  // has_any_key_member_
  ImuReading_message_member_array,  // message members
  ImuReading_init_function,  // function to initialize message memory (memory has to be allocated)
  ImuReading_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImuReading_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImuReading_message_members,
  get_message_typesupport_handle_function,
  &cartpole_interfaces__msg__ImuReading__get_type_hash,
  &cartpole_interfaces__msg__ImuReading__get_type_description,
  &cartpole_interfaces__msg__ImuReading__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartpole_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartpole_interfaces::msg::ImuReading>()
{
  return &::cartpole_interfaces::msg::rosidl_typesupport_introspection_cpp::ImuReading_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartpole_interfaces, msg, ImuReading)() {
  return &::cartpole_interfaces::msg::rosidl_typesupport_introspection_cpp::ImuReading_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
