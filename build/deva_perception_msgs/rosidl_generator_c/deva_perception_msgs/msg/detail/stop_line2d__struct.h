// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/StopLine2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STOP_LINE2D__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STOP_LINE2D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.h"

/// Struct defined in msg/StopLine2d in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__StopLine2d
{
  uint32_t lane_id;
  float confidence;
  deva_common_msgs__msg__Point2d__Sequence pixel_points;
  float left_point_pos_lgt;
  float left_point_pos_lat;
  float right_point_pos_lgt;
  float right_point_pos_lat;
} deva_perception_msgs__msg__StopLine2d;

// Struct for a sequence of deva_perception_msgs__msg__StopLine2d.
typedef struct deva_perception_msgs__msg__StopLine2d__Sequence
{
  deva_perception_msgs__msg__StopLine2d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__StopLine2d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STOP_LINE2D__STRUCT_H_
