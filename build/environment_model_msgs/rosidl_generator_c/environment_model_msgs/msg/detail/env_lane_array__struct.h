// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvLaneArray.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'env_lane'
#include "environment_model_msgs/msg/detail/env_lane__struct.h"

/// Struct defined in msg/EnvLaneArray in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvLaneArray
{
  deva_common_msgs__msg__Header header;
  environment_model_msgs__msg__EnvLane__Sequence env_lane;
} environment_model_msgs__msg__EnvLaneArray;

// Struct for a sequence of environment_model_msgs__msg__EnvLaneArray.
typedef struct environment_model_msgs__msg__EnvLaneArray__Sequence
{
  environment_model_msgs__msg__EnvLaneArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvLaneArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__STRUCT_H_
