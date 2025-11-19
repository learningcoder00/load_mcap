// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/EdgeDisperseCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_DISPERSE_CURVE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_DISPERSE_CURVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'segment'
#include "deva_common_msgs/msg/detail/disperse_curve__struct.h"

/// Struct defined in msg/EdgeDisperseCurve in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__EdgeDisperseCurve
{
  deva_common_msgs__msg__DisperseCurve segment;
  bool is_blocked;
  float confidence;
  float blocked_confidence;
} deva_perception_msgs__msg__EdgeDisperseCurve;

// Struct for a sequence of deva_perception_msgs__msg__EdgeDisperseCurve.
typedef struct deva_perception_msgs__msg__EdgeDisperseCurve__Sequence
{
  deva_perception_msgs__msg__EdgeDisperseCurve * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__EdgeDisperseCurve__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_DISPERSE_CURVE__STRUCT_H_
