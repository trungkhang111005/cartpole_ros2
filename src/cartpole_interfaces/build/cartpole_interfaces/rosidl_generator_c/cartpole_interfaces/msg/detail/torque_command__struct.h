// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/torque_command.h"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__STRUCT_H_
#define CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TorqueCommand in the package cartpole_interfaces.
typedef struct cartpole_interfaces__msg__TorqueCommand
{
  float torque_nm;
} cartpole_interfaces__msg__TorqueCommand;

// Struct for a sequence of cartpole_interfaces__msg__TorqueCommand.
typedef struct cartpole_interfaces__msg__TorqueCommand__Sequence
{
  cartpole_interfaces__msg__TorqueCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartpole_interfaces__msg__TorqueCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__TORQUE_COMMAND__STRUCT_H_
