// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/GroundPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GroundPoint in the package deva_common_msgs.
/**
  * 检测框接地点
 */
typedef struct deva_common_msgs__msg__GroundPoint
{
  uint32_t x;
  uint32_t y;
  float confidence;
} deva_common_msgs__msg__GroundPoint;

// Struct for a sequence of deva_common_msgs__msg__GroundPoint.
typedef struct deva_common_msgs__msg__GroundPoint__Sequence
{
  deva_common_msgs__msg__GroundPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__GroundPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__STRUCT_H_
