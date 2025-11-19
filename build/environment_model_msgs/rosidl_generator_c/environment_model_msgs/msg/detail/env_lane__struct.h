// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvLane.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coords'
// Member 'extends'
// Member 'left_boundary'
// Member 'right_boundary'
#include "environment_model_msgs/msg/detail/vec2d__struct.h"
// Member 'left_neibors'
// Member 'right_neibors'
#include "environment_model_msgs/msg/detail/map_ids__struct.h"

/// Struct defined in msg/EnvLane in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvLane
{
  uint32_t id;
  environment_model_msgs__msg__Vec2d__Sequence coords;
  environment_model_msgs__msg__Vec2d__Sequence extends;
  environment_model_msgs__msg__Vec2d__Sequence left_boundary;
  environment_model_msgs__msg__Vec2d__Sequence right_boundary;
  environment_model_msgs__msg__MapIds__Sequence left_neibors;
  environment_model_msgs__msg__MapIds__Sequence right_neibors;
} environment_model_msgs__msg__EnvLane;

// Struct for a sequence of environment_model_msgs__msg__EnvLane.
typedef struct environment_model_msgs__msg__EnvLane__Sequence
{
  environment_model_msgs__msg__EnvLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__STRUCT_H_
