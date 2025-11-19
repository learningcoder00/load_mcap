// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/NudgeBuffer.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obstacle_nudge_buffer'
#include "deva_mdriver_msgs/msg/detail/obstacle_nudge_buffer__struct.h"

/// Struct defined in msg/NudgeBuffer in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__NudgeBuffer
{
  deva_mdriver_msgs__msg__ObstacleNudgeBuffer__Sequence obstacle_nudge_buffer;
} deva_mdriver_msgs__msg__NudgeBuffer;

// Struct for a sequence of deva_mdriver_msgs__msg__NudgeBuffer.
typedef struct deva_mdriver_msgs__msg__NudgeBuffer__Sequence
{
  deva_mdriver_msgs__msg__NudgeBuffer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__NudgeBuffer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__STRUCT_H_
