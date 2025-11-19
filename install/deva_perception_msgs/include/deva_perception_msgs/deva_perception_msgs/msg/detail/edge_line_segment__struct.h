// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/EdgeLineSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/line_segment__struct.h"

/// Struct defined in msg/EdgeLineSegment in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__EdgeLineSegment
{
  deva_common_msgs__msg__LineSegment segment;
  bool is_blocked;
  float confidence;
  float blocked_confidence;
} deva_perception_msgs__msg__EdgeLineSegment;

// Struct for a sequence of deva_perception_msgs__msg__EdgeLineSegment.
typedef struct deva_perception_msgs__msg__EdgeLineSegment__Sequence
{
  deva_perception_msgs__msg__EdgeLineSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__EdgeLineSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__STRUCT_H_
