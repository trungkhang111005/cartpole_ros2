// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from cartpole_interfaces:msg/ImuReading.idl
// generated code does not contain a copyright notice

#include "cartpole_interfaces/msg/detail/imu_reading__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_cartpole_interfaces
const rosidl_type_hash_t *
cartpole_interfaces__msg__ImuReading__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x19, 0x6c, 0x48, 0xbd, 0xa9, 0x71, 0x01,
      0xe8, 0xcb, 0x25, 0x0f, 0x6e, 0x79, 0x76, 0x78,
      0x7f, 0xbe, 0xfa, 0x29, 0x9a, 0x3c, 0xd4, 0x4d,
      0xd1, 0x77, 0x0b, 0xab, 0xdf, 0xfc, 0xed, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char cartpole_interfaces__msg__ImuReading__TYPE_NAME[] = "cartpole_interfaces/msg/ImuReading";

// Define type names, field names, and default values
static char cartpole_interfaces__msg__ImuReading__FIELD_NAME__angle_deg[] = "angle_deg";
static char cartpole_interfaces__msg__ImuReading__FIELD_NAME__angular_velocity[] = "angular_velocity";

static rosidl_runtime_c__type_description__Field cartpole_interfaces__msg__ImuReading__FIELDS[] = {
  {
    {cartpole_interfaces__msg__ImuReading__FIELD_NAME__angle_deg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {cartpole_interfaces__msg__ImuReading__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
cartpole_interfaces__msg__ImuReading__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cartpole_interfaces__msg__ImuReading__TYPE_NAME, 34, 34},
      {cartpole_interfaces__msg__ImuReading__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 angle_deg        # Pendulum angle (in degrees)\n"
  "float32 angular_velocity # Angular velocity (deg/s)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
cartpole_interfaces__msg__ImuReading__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cartpole_interfaces__msg__ImuReading__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cartpole_interfaces__msg__ImuReading__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cartpole_interfaces__msg__ImuReading__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
