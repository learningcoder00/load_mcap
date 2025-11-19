// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/ChannelObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_OBJECT_INFO__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_OBJECT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'lane_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChannelObjectInfo in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__ChannelObjectInfo
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String lane_id;
  uint8_t object_type;
  double offset;
} deva_map_msgs__msg__ChannelObjectInfo;

// Struct for a sequence of deva_map_msgs__msg__ChannelObjectInfo.
typedef struct deva_map_msgs__msg__ChannelObjectInfo__Sequence
{
  deva_map_msgs__msg__ChannelObjectInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__ChannelObjectInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_OBJECT_INFO__STRUCT_H_
