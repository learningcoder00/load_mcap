// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/NavOpenspaceObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xy_vec'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NavOpenspaceObstacle in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__NavOpenspaceObstacle
{
  uint32_t obs_type;
  /// corner point: xy * 4
  rosidl_runtime_c__double__Sequence xy_vec;
} deva_planning_msgs__msg__NavOpenspaceObstacle;

// Struct for a sequence of deva_planning_msgs__msg__NavOpenspaceObstacle.
typedef struct deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence
{
  deva_planning_msgs__msg__NavOpenspaceObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__STRUCT_H_
