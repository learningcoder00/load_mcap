// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/Restriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'toll_mode'
// Member 'toll_lane_type'
// Member 'toll_name'
#include "rosidl_runtime_c/string.h"
// Member 'restriction_detail'
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__struct.h"

/// Struct defined in msg/Restriction in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__Restriction
{
  uint64_t id;
  int32_t limit_type;
  /// 进入点sdnode_id
  uint64_t node_id;
  rosidl_runtime_c__uint64__Sequence pass_list;
  uint64_t out_road;
  int32_t passage;
  int32_t slope;
  rosidl_runtime_c__String toll_mode;
  rosidl_runtime_c__String toll_lane_type;
  rosidl_runtime_c__String toll_name;
  /// 条件限制信息
  deva_gaode_routing_msgs__msg__RestrictionDetail restriction_detail;
} deva_gaode_routing_msgs__msg__Restriction;

// Struct for a sequence of deva_gaode_routing_msgs__msg__Restriction.
typedef struct deva_gaode_routing_msgs__msg__Restriction__Sequence
{
  deva_gaode_routing_msgs__msg__Restriction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__Restriction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__STRUCT_H_
