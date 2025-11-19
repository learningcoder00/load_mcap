// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/WayLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'car_coord_points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'corner_points_idx'
// Member 'point_confidences'
// Member 'corner_confidences'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.h"

/// Struct defined in msg/WayLink in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__WayLink
{
  geometry_msgs__msg__Point__Sequence car_coord_points;
  rosidl_runtime_c__int32__Sequence corner_points_idx;
  rosidl_runtime_c__float__Sequence point_confidences;
  rosidl_runtime_c__float__Sequence corner_confidences;
  /// Only used by MVIZ
  deva_common_msgs__msg__Point2d__Sequence pixel_points;
} deva_perception_msgs__msg__WayLink;

// Struct for a sequence of deva_perception_msgs__msg__WayLink.
typedef struct deva_perception_msgs__msg__WayLink__Sequence
{
  deva_perception_msgs__msg__WayLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__WayLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__STRUCT_H_
