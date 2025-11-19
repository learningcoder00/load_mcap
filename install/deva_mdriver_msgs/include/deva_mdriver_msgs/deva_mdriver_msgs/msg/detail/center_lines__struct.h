// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/CenterLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'center_lines'
#include "deva_mdriver_msgs/msg/detail/center_line__struct.h"

/// Struct defined in msg/CenterLines in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__CenterLines
{
  deva_common_msgs__msg__Header header;
  deva_mdriver_msgs__msg__CenterLine__Sequence center_lines;
} deva_mdriver_msgs__msg__CenterLines;

// Struct for a sequence of deva_mdriver_msgs__msg__CenterLines.
typedef struct deva_mdriver_msgs__msg__CenterLines__Sequence
{
  deva_mdriver_msgs__msg__CenterLines * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__CenterLines__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__STRUCT_H_
