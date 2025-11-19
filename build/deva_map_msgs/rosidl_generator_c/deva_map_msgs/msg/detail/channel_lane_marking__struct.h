// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ChannelLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'marking_equation_vec'
#include "deva_common_msgs/msg/detail/equation_curve__struct.h"
// Member 'marking_type_vec'
#include "deva_map_msgs/msg/detail/channel_marking_type__struct.h"
// Member 'marking_point_vec'
#include "deva_common_msgs/msg/detail/point2d__struct.h"

/// Struct defined in msg/ChannelLaneMarking in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ChannelLaneMarking
{
  bool available;
  uint8_t perception_lane_id;
  deva_common_msgs__msg__EquationCurve__Sequence marking_equation_vec;
  deva_map_msgs__msg__ChannelMarkingType__Sequence marking_type_vec;
  deva_common_msgs__msg__Point2d__Sequence marking_point_vec;
} deva_map_msgs__msg__ChannelLaneMarking;

// Struct for a sequence of deva_map_msgs__msg__ChannelLaneMarking.
typedef struct deva_map_msgs__msg__ChannelLaneMarking__Sequence
{
  deva_map_msgs__msg__ChannelLaneMarking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ChannelLaneMarking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__STRUCT_H_
