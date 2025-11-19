// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvSignal.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'polygen'
// Member 'virtual_brake_point'
#include "environment_model_msgs/msg/detail/vec3d__struct.h"

/// Struct defined in msg/EnvSignal in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvSignal
{
  uint8_t enum_color;
  double remain_time;
  rosidl_runtime_c__String id;
  uint8_t enum_shape_type;
  environment_model_msgs__msg__Vec3d__Sequence polygen;
  environment_model_msgs__msg__Vec3d__Sequence virtual_brake_point;
  bool blink;
  uint8_t block;
} environment_model_msgs__msg__EnvSignal;

// Struct for a sequence of environment_model_msgs__msg__EnvSignal.
typedef struct environment_model_msgs__msg__EnvSignal__Sequence
{
  environment_model_msgs__msg__EnvSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__STRUCT_H_
