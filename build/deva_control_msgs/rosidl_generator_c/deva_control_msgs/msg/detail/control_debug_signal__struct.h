// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__STRUCT_H_

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

/// Struct defined in msg/ControlDebugSignal in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__ControlDebugSignal
{
  std_msgs__msg__Header header;
  /// for debug 横向偏差反馈
  double c0_val;
  /// for debug 航向角偏差反馈
  double c1_val;
  /// for debug 轨迹曲率前馈
  double c2_val;
  /// for debug 纵向偏差
  double station_error;
  /// for debug 位置补偿
  double speed_offset;
  /// for debug 目标速度
  double speed_target;
  /// for debug 当前速度
  double speed_current;
  /// for debug 速度偏差+位置补偿
  double speed_error;
  /// for debug 预瞄方向盘转角与当前转角偏差
  double preview_steer_error;
  /// for debug 预瞄点速度
  double preview_speed_target;
  /// for debug 横向距离偏差
  double distance_error;
  /// for debug 航向角偏差
  double angle_error;
  /// for debug 预留
  double debug_signal_4;
  /// for debug 预留
  double debug_signal_5;
  /// for debug 预留
  double debug_signal_6;
  /// for debug 预留
  double debug_signal_7;
  /// for debug 预留
  double debug_signal_8;
  /// for debug 预留
  double debug_signal_9;
} deva_control_msgs__msg__ControlDebugSignal;

// Struct for a sequence of deva_control_msgs__msg__ControlDebugSignal.
typedef struct deva_control_msgs__msg__ControlDebugSignal__Sequence
{
  deva_control_msgs__msg__ControlDebugSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__ControlDebugSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__STRUCT_H_
