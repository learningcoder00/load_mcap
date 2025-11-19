// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/NavRoute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NavRoute in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__NavRoute
{
  rosidl_runtime_c__uint64__Sequence route_list;
  uint32_t navi_status;
  uint32_t match_status;
  double remain_distance;
} deva_gaode_routing_msgs__msg__NavRoute;

// Struct for a sequence of deva_gaode_routing_msgs__msg__NavRoute.
typedef struct deva_gaode_routing_msgs__msg__NavRoute__Sequence
{
  deva_gaode_routing_msgs__msg__NavRoute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__NavRoute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__STRUCT_H_
