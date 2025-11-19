// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/Freq.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Freq in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__Freq
{
  std_msgs__msg__Header header;
  double freqs;
} rviz_plug_msg__msg__Freq;

// Struct for a sequence of rviz_plug_msg__msg__Freq.
typedef struct rviz_plug_msg__msg__Freq__Sequence
{
  rviz_plug_msg__msg__Freq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__Freq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__STRUCT_H_
