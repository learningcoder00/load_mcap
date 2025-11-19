// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/CenterLinePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE_POINT__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CenterLinePoint in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__CenterLinePoint
{
  double x;
  double y;
  double z;
} deva_mdriver_msgs__msg__CenterLinePoint;

// Struct for a sequence of deva_mdriver_msgs__msg__CenterLinePoint.
typedef struct deva_mdriver_msgs__msg__CenterLinePoint__Sequence
{
  deva_mdriver_msgs__msg__CenterLinePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__CenterLinePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE_POINT__STRUCT_H_
