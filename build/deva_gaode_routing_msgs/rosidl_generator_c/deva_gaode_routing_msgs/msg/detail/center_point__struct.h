// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/CenterPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CENTER_POINT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CENTER_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"

/// Struct defined in msg/CenterPoint in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__CenterPoint
{
  double offset;
  deva_gaode_routing_msgs__msg__WebPoint point;
} deva_gaode_routing_msgs__msg__CenterPoint;

// Struct for a sequence of deva_gaode_routing_msgs__msg__CenterPoint.
typedef struct deva_gaode_routing_msgs__msg__CenterPoint__Sequence
{
  deva_gaode_routing_msgs__msg__CenterPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__CenterPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CENTER_POINT__STRUCT_H_
