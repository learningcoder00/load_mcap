// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ChannelTurnType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChannelTurnType in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ChannelTurnType
{
  double s_start;
  double s_end;
  uint8_t laneturntype;
} deva_map_msgs__msg__ChannelTurnType;

// Struct for a sequence of deva_map_msgs__msg__ChannelTurnType.
typedef struct deva_map_msgs__msg__ChannelTurnType__Sequence
{
  deva_map_msgs__msg__ChannelTurnType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ChannelTurnType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__STRUCT_H_
