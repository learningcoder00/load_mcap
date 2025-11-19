// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RouteGuide.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'routes'
#include "deva_gaode_routing_msgs/msg/detail/route__struct.h"

/// Struct defined in msg/RouteGuide in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RouteGuide
{
  deva_gaode_routing_msgs__msg__Route__Sequence routes;
} deva_gaode_routing_msgs__msg__RouteGuide;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RouteGuide.
typedef struct deva_gaode_routing_msgs__msg__RouteGuide__Sequence
{
  deva_gaode_routing_msgs__msg__RouteGuide * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RouteGuide__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE__STRUCT_H_
