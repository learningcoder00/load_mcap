// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebIntersection.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_INTERSECTION__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_INTERSECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first_road_id'
// Member 'second_road_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WebIntersection in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebIntersection
{
  float distance;
  rosidl_runtime_c__String first_road_id;
  rosidl_runtime_c__String second_road_id;
} deva_gaode_routing_msgs__msg__WebIntersection;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebIntersection.
typedef struct deva_gaode_routing_msgs__msg__WebIntersection__Sequence
{
  deva_gaode_routing_msgs__msg__WebIntersection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebIntersection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_INTERSECTION__STRUCT_H_
