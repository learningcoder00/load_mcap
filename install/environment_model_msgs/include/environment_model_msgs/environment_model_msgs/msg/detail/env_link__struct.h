// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EnvLink in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvLink
{
  uint64_t id;
  uint64_t parent_link_id;
  float angle_with_parent;
  double length;
  bool is_on_routing;
  int32_t lane_num;
  int32_t sub_link_num;
} environment_model_msgs__msg__EnvLink;

// Struct for a sequence of environment_model_msgs__msg__EnvLink.
typedef struct environment_model_msgs__msg__EnvLink__Sequence
{
  environment_model_msgs__msg__EnvLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__STRUCT_H_
