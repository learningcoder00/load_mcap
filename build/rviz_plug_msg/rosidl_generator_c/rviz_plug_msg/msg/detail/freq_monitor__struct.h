// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__STRUCT_H_

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
// Member 'topic_names'
#include "rosidl_runtime_c/string.h"
// Member 'freqs'
// Member 'min_thresholds'
// Member 'max_thresholds'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FreqMonitor in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__FreqMonitor
{
  std_msgs__msg__Header header;
  uint32_t valid_length;
  rosidl_runtime_c__String__Sequence topic_names;
  rosidl_runtime_c__double__Sequence freqs;
  rosidl_runtime_c__double__Sequence min_thresholds;
  rosidl_runtime_c__double__Sequence max_thresholds;
} rviz_plug_msg__msg__FreqMonitor;

// Struct for a sequence of rviz_plug_msg__msg__FreqMonitor.
typedef struct rviz_plug_msg__msg__FreqMonitor__Sequence
{
  rviz_plug_msg__msg__FreqMonitor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__FreqMonitor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__STRUCT_H_
