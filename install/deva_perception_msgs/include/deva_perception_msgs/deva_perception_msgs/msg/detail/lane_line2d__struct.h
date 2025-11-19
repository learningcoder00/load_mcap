// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/LaneLine2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__STRUCT_H_

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
// Member 'curve_line_coeffs'
#include "deva_perception_msgs/msg/detail/curve_coef__struct.h"

/// Struct defined in msg/LaneLine2d in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__LaneLine2d
{
  uint32_t lane_id;
  uint32_t left_lane_id;
  uint32_t right_lane_id;
  float confidence;
  uint32_t num_points;
  uint8_t lane_type;
  uint8_t lane_color;
  uint8_t lane_property;
  deva_common_msgs__msg__Point2d__Sequence pixel_points;
  deva_perception_msgs__msg__CurveCoef__Sequence curve_line_coeffs;
} deva_perception_msgs__msg__LaneLine2d;

// Struct for a sequence of deva_perception_msgs__msg__LaneLine2d.
typedef struct deva_perception_msgs__msg__LaneLine2d__Sequence
{
  deva_perception_msgs__msg__LaneLine2d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__LaneLine2d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__STRUCT_H_
