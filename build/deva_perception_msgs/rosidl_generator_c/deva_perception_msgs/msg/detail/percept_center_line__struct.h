// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/PerceptCenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
// Member 'bev_fork_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PerceptCenterLine in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__PerceptCenterLine
{
  uint8_t id;
  uint8_t center_line_property;
  geometry_msgs__msg__Point__Sequence waypoints;
  geometry_msgs__msg__Point bev_fork_point;
} deva_perception_msgs__msg__PerceptCenterLine;

// Struct for a sequence of deva_perception_msgs__msg__PerceptCenterLine.
typedef struct deva_perception_msgs__msg__PerceptCenterLine__Sequence
{
  deva_perception_msgs__msg__PerceptCenterLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__PerceptCenterLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__STRUCT_H_
