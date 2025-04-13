// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartpole_interfaces/msg/detail/torque_command__functions.h"
#include "cartpole_interfaces/msg/detail/torque_command__struct.hpp"
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

void TorqueCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartpole_interfaces::msg::TorqueCommand(_init);
}

void TorqueCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartpole_interfaces::msg::TorqueCommand *>(message_memory);
  typed_message->~TorqueCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TorqueCommand_message_member_array[1] = {
  {
    "torque_nm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartpole_interfaces::msg::TorqueCommand, torque_nm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TorqueCommand_message_members = {
  "cartpole_interfaces::msg",  // message namespace
  "TorqueCommand",  // message name
  1,  // number of fields
  sizeof(cartpole_interfaces::msg::TorqueCommand),
  false,  // has_any_key_member_
  TorqueCommand_message_member_array,  // message members
  TorqueCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  TorqueCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TorqueCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TorqueCommand_message_members,
  get_message_typesupport_handle_function,
  &cartpole_interfaces__msg__TorqueCommand__get_type_hash,
  &cartpole_interfaces__msg__TorqueCommand__get_type_description,
  &cartpole_interfaces__msg__TorqueCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartpole_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartpole_interfaces::msg::TorqueCommand>()
{
  return &::cartpole_interfaces::msg::rosidl_typesupport_introspection_cpp::TorqueCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartpole_interfaces, msg, TorqueCommand)() {
  return &::cartpole_interfaces::msg::rosidl_typesupport_introspection_cpp::TorqueCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
