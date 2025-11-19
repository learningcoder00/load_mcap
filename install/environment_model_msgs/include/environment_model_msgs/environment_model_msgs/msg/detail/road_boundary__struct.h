// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/RoadBoundary.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_physical_bound_line'
// Member 'right_physical_bound_line'
// Member 'left_law_bound_line'
// Member 'right_law_bound_line'
#include "environment_model_msgs/msg/detail/boundary_point__struct.h"
// Member 'isolated_obj_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RoadBoundary in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__RoadBoundary
{
  environment_model_msgs__msg__BoundaryPoint__Sequence left_physical_bound_line;
  environment_model_msgs__msg__BoundaryPoint__Sequence right_physical_bound_line;
  environment_model_msgs__msg__BoundaryPoint__Sequence left_law_bound_line;
  environment_model_msgs__msg__BoundaryPoint__Sequence right_law_bound_line;
  /// bit 0 for on-route or not, could be extended
  uint8_t feature;
  rosidl_runtime_c__String__Sequence isolated_obj_ids;
} environment_model_msgs__msg__RoadBoundary;

// Struct for a sequence of environment_model_msgs__msg__RoadBoundary.
typedef struct environment_model_msgs__msg__RoadBoundary__Sequence
{
  environment_model_msgs__msg__RoadBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__RoadBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__STRUCT_H_
