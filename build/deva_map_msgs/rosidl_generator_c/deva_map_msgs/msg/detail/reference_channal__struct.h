// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'middle_line'
#include "deva_map_msgs/msg/detail/channel_lane_line__struct.h"
// Member 'left_marking'
// Member 'right_marking'
#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.h"
// Member 'object_infos'
#include "deva_map_msgs/msg/detail/channel_object_info__struct.h"

/// Struct defined in msg/ReferenceChannal in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ReferenceChannal
{
  bool available;
  double confidence_coefficient;
  int16_t channel_idx;
  deva_map_msgs__msg__ChannelLaneLine middle_line;
  deva_map_msgs__msg__ChannelLaneMarking left_marking;
  deva_map_msgs__msg__ChannelLaneMarking right_marking;
  deva_map_msgs__msg__ChannelObjectInfo__Sequence object_infos;
} deva_map_msgs__msg__ReferenceChannal;

// Struct for a sequence of deva_map_msgs__msg__ReferenceChannal.
typedef struct deva_map_msgs__msg__ReferenceChannal__Sequence
{
  deva_map_msgs__msg__ReferenceChannal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ReferenceChannal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__STRUCT_H_
