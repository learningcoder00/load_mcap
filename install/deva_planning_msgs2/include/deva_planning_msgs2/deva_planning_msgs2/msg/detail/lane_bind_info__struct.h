// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/LaneBindInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BIND_ONLANE_BLOCK'.
enum
{
  deva_planning_msgs2__msg__LaneBindInfo__BIND_ONLANE_BLOCK = 1
};

/// Constant 'BIND_ONLANE_NOT_BLOCK'.
enum
{
  deva_planning_msgs2__msg__LaneBindInfo__BIND_ONLANE_NOT_BLOCK = 2
};

/// Constant 'BIND_CUTIN'.
enum
{
  deva_planning_msgs2__msg__LaneBindInfo__BIND_CUTIN = 3
};

/// Constant 'BIND_CUTOUT'.
enum
{
  deva_planning_msgs2__msg__LaneBindInfo__BIND_CUTOUT = 4
};

/// Constant 'BIND_CROSS'.
enum
{
  deva_planning_msgs2__msg__LaneBindInfo__BIND_CROSS = 5
};

/// Constant 'BIND_NEAR'.
enum
{
  deva_planning_msgs2__msg__LaneBindInfo__BIND_NEAR = 6
};

/// Constant 'BIND_NUDGE'.
enum
{
  deva_planning_msgs2__msg__LaneBindInfo__BIND_NUDGE = 7
};

// Include directives for member types
// Member 'binded_obs'
#include "deva_planning_msgs2/msg/detail/u_int2_string__struct.h"
// Member 'sl_boundary'
#include "deva_planning_msgs2/msg/detail/string2_sl_boundary__struct.h"
// Member 'scalable_flags'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.h"

/// Struct defined in msg/LaneBindInfo in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__LaneBindInfo
{
  int32_t ref_id;
  deva_planning_msgs2__msg__UInt2String__Sequence binded_obs;
  deva_planning_msgs2__msg__String2SLBoundary__Sequence sl_boundary;
  /// 可扩展的标志位
  rosidl_runtime_c__uint8__Sequence scalable_flags;
  /// 可扩展的键值对
  deva_planning_msgs2__msg__String2String__Sequence scalable_multimap;
} deva_planning_msgs2__msg__LaneBindInfo;

// Struct for a sequence of deva_planning_msgs2__msg__LaneBindInfo.
typedef struct deva_planning_msgs2__msg__LaneBindInfo__Sequence
{
  deva_planning_msgs2__msg__LaneBindInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__LaneBindInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__STRUCT_H_
