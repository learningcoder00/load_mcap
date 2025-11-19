// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/AvpBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AvpBoundary in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__AvpBoundary
{
  double s;
  double left_x;
  double left_y;
  double left_z;
  double left_region_width;
  double right_x;
  double right_y;
  double right_z;
  double right_region_width;
} deva_map_msgs__msg__AvpBoundary;

// Struct for a sequence of deva_map_msgs__msg__AvpBoundary.
typedef struct deva_map_msgs__msg__AvpBoundary__Sequence
{
  deva_map_msgs__msg__AvpBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__AvpBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__STRUCT_H_
