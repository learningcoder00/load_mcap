// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'exception_content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ExceptionMonitor in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__ExceptionMonitor
{
  /// 异常事件
  rosidl_runtime_c__String__Sequence exception_content;
} rviz_plug_msg__msg__ExceptionMonitor;

// Struct for a sequence of rviz_plug_msg__msg__ExceptionMonitor.
typedef struct rviz_plug_msg__msg__ExceptionMonitor__Sequence
{
  rviz_plug_msg__msg__ExceptionMonitor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__ExceptionMonitor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__STRUCT_H_
