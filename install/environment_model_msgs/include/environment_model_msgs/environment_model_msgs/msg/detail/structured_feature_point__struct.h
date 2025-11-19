// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__STRUCT_H_

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
// Member 'prev_ids'
// Member 'next_ids'
// Member 'lane_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'types'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'position'
#include "environment_model_msgs/msg/detail/vec3d__struct.h"

/// Struct defined in msg/StructuredFeaturePoint in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__StructuredFeaturePoint
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  uint64_t link_id;
  rosidl_runtime_c__uint8__Sequence types;
  uint8_t direction;
  environment_model_msgs__msg__Vec3d position;
  float project_percent;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence prev_ids;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence next_ids;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence lane_ids;
} environment_model_msgs__msg__StructuredFeaturePoint;

// Struct for a sequence of environment_model_msgs__msg__StructuredFeaturePoint.
typedef struct environment_model_msgs__msg__StructuredFeaturePoint__Sequence
{
  environment_model_msgs__msg__StructuredFeaturePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__StructuredFeaturePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__STRUCT_H_
