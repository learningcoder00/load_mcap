// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/Point2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__POINT2D__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__POINT2D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2d in the package deva_common_msgs.
typedef struct deva_common_msgs__msg__Point2d
{
  double x;
  double y;
} deva_common_msgs__msg__Point2d;

// Struct for a sequence of deva_common_msgs__msg__Point2d.
typedef struct deva_common_msgs__msg__Point2d__Sequence
{
  deva_common_msgs__msg__Point2d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__Point2d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__POINT2D__STRUCT_H_
