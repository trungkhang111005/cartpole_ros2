// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartpole_interfaces:msg/ImuReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cartpole_interfaces/msg/imu_reading.h"


#ifndef CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__STRUCT_H_
#define CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ImuReading in the package cartpole_interfaces.
typedef struct cartpole_interfaces__msg__ImuReading
{
  /// Pendulum angle (in degrees)
  float angle_deg;
  /// Angular velocity (deg/s)
  float angular_velocity;
} cartpole_interfaces__msg__ImuReading;

// Struct for a sequence of cartpole_interfaces__msg__ImuReading.
typedef struct cartpole_interfaces__msg__ImuReading__Sequence
{
  cartpole_interfaces__msg__ImuReading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartpole_interfaces__msg__ImuReading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTPOLE_INTERFACES__MSG__DETAIL__IMU_READING__STRUCT_H_
