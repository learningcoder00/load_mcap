// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Signal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'so'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.h"

/// Struct defined in msg/Signal in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__Signal
{
  deva_perception_msgs__msg__StaticObstacle so;
  uint8_t signal_type;
  uint8_t geometry_type;
  uint8_t state_type;
} deva_perception_msgs__msg__Signal;

// Struct for a sequence of deva_perception_msgs__msg__Signal.
typedef struct deva_perception_msgs__msg__Signal__Sequence
{
  deva_perception_msgs__msg__Signal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Signal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__STRUCT_H_
