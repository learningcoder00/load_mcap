// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'actual_turn'
// Member 'navi_turn'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'md5'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LaneInfo in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__LaneInfo
{
  int32_t lane_num;
  /// 使用 LaneAction 中的常量
  rosidl_runtime_c__uint8__Sequence actual_turn;
  /// 使用 LaneAction 中的常量
  rosidl_runtime_c__uint8__Sequence navi_turn;
  rosidl_runtime_c__String md5;
} deva_perception_msgs__msg__LaneInfo;

// Struct for a sequence of deva_perception_msgs__msg__LaneInfo.
typedef struct deva_perception_msgs__msg__LaneInfo__Sequence
{
  deva_perception_msgs__msg__LaneInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__LaneInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__STRUCT_H_
