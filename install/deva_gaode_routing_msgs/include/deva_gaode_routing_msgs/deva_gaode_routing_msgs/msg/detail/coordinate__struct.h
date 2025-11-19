// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/Coordinate.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__COORDINATE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__COORDINATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Coordinate in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__Coordinate
{
  double x;
  double y;
  double relative_z;
} deva_gaode_routing_msgs__msg__Coordinate;

// Struct for a sequence of deva_gaode_routing_msgs__msg__Coordinate.
typedef struct deva_gaode_routing_msgs__msg__Coordinate__Sequence
{
  deva_gaode_routing_msgs__msg__Coordinate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__Coordinate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__COORDINATE__STRUCT_H_
