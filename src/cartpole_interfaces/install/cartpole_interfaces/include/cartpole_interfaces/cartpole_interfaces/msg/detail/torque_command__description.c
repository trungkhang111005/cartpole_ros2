// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from cartpole_interfaces:msg/TorqueCommand.idl
// generated code does not contain a copyright notice

#include "cartpole_interfaces/msg/detail/torque_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_cartpole_interfaces
const rosidl_type_hash_t *
cartpole_interfaces__msg__TorqueCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xbd, 0x57, 0x6a, 0xae, 0xfd, 0xe9, 0xa9,
      0x6e, 0x85, 0x94, 0x9d, 0xb5, 0x3c, 0x20, 0x55,
      0xfb, 0xd4, 0x24, 0x1c, 0xdd, 0x9d, 0x41, 0x22,
      0xaa, 0x69, 0xba, 0x95, 0x22, 0x62, 0x31, 0x40,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char cartpole_interfaces__msg__TorqueCommand__TYPE_NAME[] = "cartpole_interfaces/msg/TorqueCommand";

// Define type names, field names, and default values
static char cartpole_interfaces__msg__TorqueCommand__FIELD_NAME__torque_nm[] = "torque_nm";

static rosidl_runtime_c__type_description__Field cartpole_interfaces__msg__TorqueCommand__FIELDS[] = {
  {
    {cartpole_interfaces__msg__TorqueCommand__FIELD_NAME__torque_nm, 9, 9},
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
cartpole_interfaces__msg__TorqueCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cartpole_interfaces__msg__TorqueCommand__TYPE_NAME, 37, 37},
      {cartpole_interfaces__msg__TorqueCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32\\ttorque_nm";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
cartpole_interfaces__msg__TorqueCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cartpole_interfaces__msg__TorqueCommand__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cartpole_interfaces__msg__TorqueCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cartpole_interfaces__msg__TorqueCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
