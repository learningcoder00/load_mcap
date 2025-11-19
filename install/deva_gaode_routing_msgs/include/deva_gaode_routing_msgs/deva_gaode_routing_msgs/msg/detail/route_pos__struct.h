// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RoutePos.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__STRUCT_H_

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
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/RoutePos in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RoutePos
{
  deva_gaode_routing_msgs__msg__Coordinate pos;
  uint32_t coor_start;
  uint32_t offset_length;
  uint32_t link_offset;
} deva_gaode_routing_msgs__msg__RoutePos;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RoutePos.
typedef struct deva_gaode_routing_msgs__msg__RoutePos__Sequence
{
  deva_gaode_routing_msgs__msg__RoutePos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RoutePos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__STRUCT_H_
