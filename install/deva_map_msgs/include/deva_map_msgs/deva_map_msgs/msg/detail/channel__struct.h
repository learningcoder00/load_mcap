// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_lane_id'
#include "rosidl_runtime_c/string.h"
// Member 'laneinfo'
#include "deva_map_msgs/msg/detail/channel_lane_info__struct.h"
// Member 'middle_line'
// Member 'reference_line_vec'
#include "deva_map_msgs/msg/detail/channel_lane_line__struct.h"
// Member 'left_marking'
// Member 'right_marking'
#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.h"
// Member 'object_info'
#include "deva_map_msgs/msg/detail/channel_object_info__struct.h"
// Member 'signal_info'
#include "deva_map_msgs/msg/detail/channel_signal_info__struct.h"

/// Struct defined in msg/Channel in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__Channel
{
  bool available;
  bool is_on_route;
  uint8_t errcode;
  rosidl_runtime_c__String current_lane_id;
  int16_t channel_idx;
  double lane_offset;
  deva_map_msgs__msg__ChannelLaneInfo laneinfo;
  deva_map_msgs__msg__ChannelLaneLine middle_line;
  deva_map_msgs__msg__ChannelLaneLine__Sequence reference_line_vec;
  deva_map_msgs__msg__ChannelLaneMarking left_marking;
  deva_map_msgs__msg__ChannelLaneMarking right_marking;
  int16_t left_channel_idx;
  int16_t right_channel_idx;
  deva_map_msgs__msg__ChannelObjectInfo__Sequence object_info;
  deva_map_msgs__msg__ChannelSignalInfo__Sequence signal_info;
} deva_map_msgs__msg__Channel;

// Struct for a sequence of deva_map_msgs__msg__Channel.
typedef struct deva_map_msgs__msg__Channel__Sequence
{
  deva_map_msgs__msg__Channel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__Channel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__STRUCT_H_
