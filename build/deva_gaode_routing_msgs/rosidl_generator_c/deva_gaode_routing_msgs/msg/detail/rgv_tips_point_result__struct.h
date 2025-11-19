// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RGVTipsPointResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RGV_TIPS_POINT_RESULT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RGV_TIPS_POINT_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.h"

/// Struct defined in msg/RGVTipsPointResult in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RGVTipsPointResult
{
  uint64_t raw_link_id;
  int32_t tsection;
  deva_gaode_routing_msgs__msg__RoutePos pos;
} deva_gaode_routing_msgs__msg__RGVTipsPointResult;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RGVTipsPointResult.
typedef struct deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence
{
  deva_gaode_routing_msgs__msg__RGVTipsPointResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RGV_TIPS_POINT_RESULT__STRUCT_H_
