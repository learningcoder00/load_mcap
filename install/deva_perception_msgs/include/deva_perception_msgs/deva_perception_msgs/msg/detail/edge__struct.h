// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Edge in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__Edge
{
  uint8_t segment;
  bool is_blocked;
  float confidence;
  float blocked_confidence;
} deva_perception_msgs__msg__Edge;

// Struct for a sequence of deva_perception_msgs__msg__Edge.
typedef struct deva_perception_msgs__msg__Edge__Sequence
{
  deva_perception_msgs__msg__Edge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Edge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE__STRUCT_H_
