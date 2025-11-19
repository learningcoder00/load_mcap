// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_id_vec'
#include "rosidl_runtime_c/string.h"
// Member 'lanetype_vec'
#include "deva_map_msgs/msg/detail/channel_lane_type__struct.h"
// Member 'turntype_vec'
#include "deva_map_msgs/msg/detail/channel_turn_type__struct.h"
// Member 'lanespeedlimitation_vec'
#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__struct.h"

/// Struct defined in msg/ChannelLaneInfo in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ChannelLaneInfo
{
  rosidl_runtime_c__String__Sequence lane_id_vec;
  deva_map_msgs__msg__ChannelLaneType__Sequence lanetype_vec;
  deva_map_msgs__msg__ChannelTurnType__Sequence turntype_vec;
  deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence lanespeedlimitation_vec;
} deva_map_msgs__msg__ChannelLaneInfo;

// Struct for a sequence of deva_map_msgs__msg__ChannelLaneInfo.
typedef struct deva_map_msgs__msg__ChannelLaneInfo__Sequence
{
  deva_map_msgs__msg__ChannelLaneInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ChannelLaneInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__STRUCT_H_
