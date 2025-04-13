// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice
#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "cartpole_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartpole_interfaces/msg/detail/torque_command__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
bool cdr_serialize_cartpole_interfaces__msg__TorqueCommand(
  const cartpole_interfaces__msg__TorqueCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
bool cdr_deserialize_cartpole_interfaces__msg__TorqueCommand(
  eprosima::fastcdr::Cdr &,
  cartpole_interfaces__msg__TorqueCommand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
size_t get_serialized_size_cartpole_interfaces__msg__TorqueCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
size_t max_serialized_size_cartpole_interfaces__msg__TorqueCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
bool cdr_serialize_key_cartpole_interfaces__msg__TorqueCommand(
  const cartpole_interfaces__msg__TorqueCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
size_t get_serialized_size_key_cartpole_interfaces__msg__TorqueCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
size_t max_serialized_size_key_cartpole_interfaces__msg__TorqueCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartpole_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartpole_interfaces, msg, TorqueCommand)();

#ifdef __cplusplus
}
#endif

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
