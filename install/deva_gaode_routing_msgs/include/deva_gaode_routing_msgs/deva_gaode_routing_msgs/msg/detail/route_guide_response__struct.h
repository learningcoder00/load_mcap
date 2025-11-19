// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/RouteGuideResponse.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route_guides'
#include "deva_gaode_routing_msgs/msg/detail/route_guide__struct.h"

/// Struct defined in msg/RouteGuideResponse in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__RouteGuideResponse
{
  deva_gaode_routing_msgs__msg__RouteGuide__Sequence route_guides;
} deva_gaode_routing_msgs__msg__RouteGuideResponse;

// Struct for a sequence of deva_gaode_routing_msgs__msg__RouteGuideResponse.
typedef struct deva_gaode_routing_msgs__msg__RouteGuideResponse__Sequence
{
  deva_gaode_routing_msgs__msg__RouteGuideResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__RouteGuideResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__STRUCT_H_
