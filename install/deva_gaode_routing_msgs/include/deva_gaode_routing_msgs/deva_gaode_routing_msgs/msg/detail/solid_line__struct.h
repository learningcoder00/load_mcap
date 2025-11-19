// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SolidLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pass_list'
// Member 'lane_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SolidLine in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SolidLine
{
  uint64_t id;
  uint64_t in_road;
  rosidl_runtime_c__uint64__Sequence pass_list;
  uint64_t out_road;
  int32_t lane_num;
  int32_t seq_num;
  rosidl_runtime_c__int32__Sequence lane_list;
  /// 长实线类型：1 单实线，2 左虚右实，3 左实右虚
  int32_t type;
} deva_gaode_routing_msgs__msg__SolidLine;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SolidLine.
typedef struct deva_gaode_routing_msgs__msg__SolidLine__Sequence
{
  deva_gaode_routing_msgs__msg__SolidLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SolidLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__STRUCT_H_
