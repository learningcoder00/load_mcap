// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ChannelLaneType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChannelLaneType in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ChannelLaneType
{
  double s_start;
  double s_end;
  uint8_t lanetype;
} deva_map_msgs__msg__ChannelLaneType;

// Struct for a sequence of deva_map_msgs__msg__ChannelLaneType.
typedef struct deva_map_msgs__msg__ChannelLaneType__Sequence
{
  deva_map_msgs__msg__ChannelLaneType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ChannelLaneType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__STRUCT_H_
