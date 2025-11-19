// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__SUCCESS = 1
};

/// Constant 'FAILED'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__FAILED = 2
};

/// Constant 'FREEZE'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__FREEZE = 3
};

/// Constant 'QUIT'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__QUIT = 4
};

/// Constant 'MANUAL'.
/**
  * 新增字段：规划工作状态
 */
enum
{
  deva_planning_msgs2__msg__PlanningResult__MANUAL = 0
};

/// Constant 'ACC'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__ACC = 1
};

/// Constant 'ICC'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__ICC = 2
};

/// Constant 'NOA'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__NOA = 3
};

/// Constant 'D2D'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__D2D = 4
};

/// Constant 'OFF'.
enum
{
  deva_planning_msgs2__msg__PlanningResult__OFF = 5
};

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'sensor_time'
#include "deva_planning_msgs2/msg/detail/sensor_time__struct.h"
// Member 'trajectories'
#include "deva_planning_msgs2/msg/detail/planning_trajectory__struct.h"
// Member 'fail_reason'
#include "deva_planning_msgs2/msg/detail/planning_fail__struct.h"

/// Struct defined in msg/PlanningResult in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__PlanningResult
{
  deva_common_msgs__msg__Header header;
  deva_planning_msgs2__msg__SensorTime sensor_time;
  deva_planning_msgs2__msg__PlanningTrajectory__Sequence trajectories;
  int8_t pilot_planning_state;
  /// 规划工作状态
  uint8_t planning_work_state;
  /// 功能状态组合，使用 bitmask 表示以下四个模式是否可用
  /// bit0 (0001): ACC_AVAILABLE
  /// bit1 (0010): ICC_AVAILABLE
  /// bit2 (0100): NOA_AVAILABLE
  /// bit3 (1000): D2D_AVAILABLE
  uint8_t function_state_available;
  deva_planning_msgs2__msg__PlanningFail__Sequence fail_reason;
} deva_planning_msgs2__msg__PlanningResult;

// Struct for a sequence of deva_planning_msgs2__msg__PlanningResult.
typedef struct deva_planning_msgs2__msg__PlanningResult__Sequence
{
  deva_planning_msgs2__msg__PlanningResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__PlanningResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__STRUCT_H_
