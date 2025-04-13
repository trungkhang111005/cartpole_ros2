// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartpole_interfaces/msg/detail/torque_command__rosidl_typesupport_introspection_c.h"
#include "cartpole_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartpole_interfaces/msg/detail/torque_command__functions.h"
#include "cartpole_interfaces/msg/detail/torque_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartpole_interfaces__msg__TorqueCommand__init(message_memory);
}

void cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_fini_function(void * message_memory)
{
  cartpole_interfaces__msg__TorqueCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_member_array[1] = {
  {
    "torque_nm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartpole_interfaces__msg__TorqueCommand, torque_nm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_members = {
  "cartpole_interfaces__msg",  // message namespace
  "TorqueCommand",  // message name
  1,  // number of fields
  sizeof(cartpole_interfaces__msg__TorqueCommand),
  false,  // has_any_key_member_
  cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_member_array,  // message members
  cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_type_support_handle = {
  0,
  &cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_members,
  get_message_typesupport_handle_function,
  &cartpole_interfaces__msg__TorqueCommand__get_type_hash,
  &cartpole_interfaces__msg__TorqueCommand__get_type_description,
  &cartpole_interfaces__msg__TorqueCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartpole_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartpole_interfaces, msg, TorqueCommand)() {
  if (!cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_type_support_handle.typesupport_identifier) {
    cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartpole_interfaces__msg__TorqueCommand__rosidl_typesupport_introspection_c__TorqueCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
