// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/PlanningState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__STRUCT_H_

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
// Member 'pilot_planning_state'
// Member 'navi_state'
#include "rosidl_runtime_c/string.h"
// Member 'fail_reason'
#include "deva_planning_msgs/msg/detail/planning_fail__struct.h"

/// Struct defined in msg/PlanningState in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__PlanningState
{
  deva_common_msgs__msg__Header header;
  /// SUCCESS, FAILED, FREEZE[预留], QUIT[预留]
  rosidl_runtime_c__String pilot_planning_state;
  /// ERROR[预留], NOA_NOT_AVAILABLE[planning不支持NOA], NOA_AVAILABLE
  rosidl_runtime_c__String navi_state;
  deva_planning_msgs__msg__PlanningFail__Sequence fail_reason;
} deva_planning_msgs__msg__PlanningState;

// Struct for a sequence of deva_planning_msgs__msg__PlanningState.
typedef struct deva_planning_msgs__msg__PlanningState__Sequence
{
  deva_planning_msgs__msg__PlanningState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__PlanningState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__STRUCT_H_
