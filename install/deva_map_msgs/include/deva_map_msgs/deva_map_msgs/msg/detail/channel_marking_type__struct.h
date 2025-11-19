// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ChannelMarkingType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_MARKING_TYPE__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_MARKING_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChannelMarkingType in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ChannelMarkingType
{
  double s_start;
  double s_end;
  uint8_t markingtype;
  uint8_t markingcolor;
} deva_map_msgs__msg__ChannelMarkingType;

// Struct for a sequence of deva_map_msgs__msg__ChannelMarkingType.
typedef struct deva_map_msgs__msg__ChannelMarkingType__Sequence
{
  deva_map_msgs__msg__ChannelMarkingType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ChannelMarkingType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_MARKING_TYPE__STRUCT_H_
