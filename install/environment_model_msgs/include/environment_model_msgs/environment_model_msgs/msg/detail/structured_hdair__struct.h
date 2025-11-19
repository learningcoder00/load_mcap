// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/StructuredHdair.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__STRUCT_H_

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
// Member 'links'
#include "environment_model_msgs/msg/detail/structured_link__struct.h"
// Member 'feature_points'
#include "environment_model_msgs/msg/detail/structured_feature_point__struct.h"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.h"

/// Struct defined in msg/StructuredHdair in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__StructuredHdair
{
  deva_common_msgs__msg__Header header;
  uint64_t current_link_id;
  environment_model_msgs__msg__StructuredLink__Sequence links;
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence feature_points;
  deva_gaode_routing_msgs__msg__LANE__Sequence lanes;
} environment_model_msgs__msg__StructuredHdair;

// Struct for a sequence of environment_model_msgs__msg__StructuredHdair.
typedef struct environment_model_msgs__msg__StructuredHdair__Sequence
{
  environment_model_msgs__msg__StructuredHdair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__StructuredHdair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__STRUCT_H_
