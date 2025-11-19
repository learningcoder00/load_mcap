// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__STRUCT_H_

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
  deva_planning_msgs__msg__PlanningResult__SUCCESS = 1
};

/// Constant 'FAILED'.
enum
{
  deva_planning_msgs__msg__PlanningResult__FAILED = 2
};

/// Constant 'FREEZE'.
enum
{
  deva_planning_msgs__msg__PlanningResult__FREEZE = 3
};

/// Constant 'QUIT'.
enum
{
  deva_planning_msgs__msg__PlanningResult__QUIT = 4
};

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'sensor_time'
#include "deva_planning_msgs/msg/detail/sensor_time__struct.h"
// Member 'trajectories'
#include "deva_planning_msgs/msg/detail/planning_trajectory__struct.h"

/// Struct defined in msg/PlanningResult in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__PlanningResult
{
  deva_common_msgs__msg__Header header;
  deva_planning_msgs__msg__SensorTime sensor_time;
  deva_planning_msgs__msg__PlanningTrajectory__Sequence trajectories;
  int8_t status;
} deva_planning_msgs__msg__PlanningResult;

// Struct for a sequence of deva_planning_msgs__msg__PlanningResult.
typedef struct deva_planning_msgs__msg__PlanningResult__Sequence
{
  deva_planning_msgs__msg__PlanningResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__PlanningResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__STRUCT_H_
