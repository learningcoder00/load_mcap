// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_

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

/// Struct defined in msg/WheelSpeed in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__WheelSpeed
{
  deva_common_msgs__msg__Header header;
  /// 轮速计循环计数开始值, 默认从0开始
  uint32_t loop_count_start;
  /// 轮速计循环计数结束值
  uint32_t loop_count_end;
  /// 四轮速计是否有效，顺序为[FL, FR, RL ,RR]
  bool wheelspeed_rc_valid[4];
  /// 四轮速计的值，顺序为[FL, FR, RL ,RR]
  uint32_t wheelspeed_rc[4];
} deva_control_msgs__msg__WheelSpeed;

// Struct for a sequence of deva_control_msgs__msg__WheelSpeed.
typedef struct deva_control_msgs__msg__WheelSpeed__Sequence
{
  deva_control_msgs__msg__WheelSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__WheelSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_
