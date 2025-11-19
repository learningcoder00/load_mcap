// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/ControlValidLimit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControlValidLimit in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__ControlValidLimit
{
  /// 限制值有效性, 默认值false, 值为false时下面的限制值无效
  bool limit_valid;
  /// 上限限制值（或者正值最大限制值）
  double upper_limit;
  /// 下限限制值（或者负值最低限制值）
  double lower_limit;
} deva_control_msgs__msg__ControlValidLimit;

// Struct for a sequence of deva_control_msgs__msg__ControlValidLimit.
typedef struct deva_control_msgs__msg__ControlValidLimit__Sequence
{
  deva_control_msgs__msg__ControlValidLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__ControlValidLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__STRUCT_H_
