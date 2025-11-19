// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_lan_bound'
// Member 'right_lane_bound'
// Member 'left_road_bound'
// Member 'right_road_bound'
#include "environment_model_msgs/msg/detail/bound_point__struct.h"

/// Struct defined in msg/EnvPoint in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvPoint
{
  double x;
  double y;
  double heading;
  double s;
  double kappa;
  environment_model_msgs__msg__BoundPoint left_lan_bound;
  environment_model_msgs__msg__BoundPoint right_lane_bound;
  environment_model_msgs__msg__BoundPoint left_road_bound;
  environment_model_msgs__msg__BoundPoint right_road_bound;
  double speed_limit;
  uint8_t enum_lane_type;
  uint8_t enum_road_type;
} environment_model_msgs__msg__EnvPoint;

// Struct for a sequence of environment_model_msgs__msg__EnvPoint.
typedef struct environment_model_msgs__msg__EnvPoint__Sequence
{
  environment_model_msgs__msg__EnvPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__STRUCT_H_
