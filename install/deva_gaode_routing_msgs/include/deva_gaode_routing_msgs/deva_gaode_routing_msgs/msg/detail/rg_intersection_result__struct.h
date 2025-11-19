// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RGIntersectionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'enter_pos'
// Member 'leave_pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.h"
// Member 'inter_raw_link_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RGIntersectionResult in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RGIntersectionResult
{
  uint64_t raw_link_id;
  int32_t inter_type;
  int32_t accessory_info;
  deva_gaode_routing_msgs__msg__RoutePos enter_pos;
  deva_gaode_routing_msgs__msg__RoutePos leave_pos;
  rosidl_runtime_c__uint64__Sequence inter_raw_link_ids;
} deva_gaode_routing_msgs__msg__RGIntersectionResult;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RGIntersectionResult.
typedef struct deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence
{
  deva_gaode_routing_msgs__msg__RGIntersectionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__STRUCT_H_
