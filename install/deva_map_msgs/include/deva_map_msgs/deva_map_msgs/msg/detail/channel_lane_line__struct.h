// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ChannelLaneLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'markingequation_vec'
#include "deva_common_msgs/msg/detail/equation_curve__struct.h"
// Member 'markingpoint_vec'
#include "deva_common_msgs/msg/detail/point2d__struct.h"

/// Struct defined in msg/ChannelLaneLine in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ChannelLaneLine
{
  bool available;
  deva_common_msgs__msg__EquationCurve__Sequence markingequation_vec;
  deva_common_msgs__msg__Point2d__Sequence markingpoint_vec;
} deva_map_msgs__msg__ChannelLaneLine;

// Struct for a sequence of deva_map_msgs__msg__ChannelLaneLine.
typedef struct deva_map_msgs__msg__ChannelLaneLine__Sequence
{
  deva_map_msgs__msg__ChannelLaneLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ChannelLaneLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__STRUCT_H_
