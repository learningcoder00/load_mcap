// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SDNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'geo'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"
// Member 'in_linklist'
// Member 'out_linklist'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'sd_cross'
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__struct.h"
// Member 'solid_line'
#include "deva_gaode_routing_msgs/msg/detail/solid_line__struct.h"

/// Struct defined in msg/SDNode in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SDNode
{
  uint64_t id;
  deva_gaode_routing_msgs__msg__WebPoint geo;
  rosidl_runtime_c__uint64__Sequence in_linklist;
  rosidl_runtime_c__uint64__Sequence out_linklist;
  /// 是否是车道数变化点，0 否，1 是；
  uint32_t change_point;
  deva_gaode_routing_msgs__msg__SDCross sd_cross;
  /// 长实线
  deva_gaode_routing_msgs__msg__SolidLine__Sequence solid_line;
} deva_gaode_routing_msgs__msg__SDNode;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SDNode.
typedef struct deva_gaode_routing_msgs__msg__SDNode__Sequence
{
  deva_gaode_routing_msgs__msg__SDNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SDNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__STRUCT_H_
