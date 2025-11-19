// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/DisperseCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__DISPERSE_CURVE__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__DISPERSE_CURVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/DisperseCurve in the package deva_common_msgs.
typedef struct deva_common_msgs__msg__DisperseCurve
{
  geometry_msgs__msg__Point__Sequence points;
} deva_common_msgs__msg__DisperseCurve;

// Struct for a sequence of deva_common_msgs__msg__DisperseCurve.
typedef struct deva_common_msgs__msg__DisperseCurve__Sequence
{
  deva_common_msgs__msg__DisperseCurve * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__DisperseCurve__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__DISPERSE_CURVE__STRUCT_H_
