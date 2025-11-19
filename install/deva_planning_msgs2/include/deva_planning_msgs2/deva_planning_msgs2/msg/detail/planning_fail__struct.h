// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/PlanningFail.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_FAIL__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_FAIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PlanningFail in the package deva_planning_msgs2.
/**
  * UNKNOWN, NEAR_CONE, CIPV_EMPTY
  * PLANNING_ERROR
  * NAVIGATOR_ERROR
  * VEHICLE_STATE_ERROR
  * GENERATE_REFERENCE_LINE_ERROR
  * INIT_FRAME_ERROR
  * BEHAVIOR_ERROR, MOTION_ERROR
  * LATERAL_SPACE_CONFLICT
  * LONGITUDINAL_FENCE_CONFLICT 
  * KINEMATIC_CONSTRAINT_FAILED 
  * OPTIMIZER_SOLVE_FAILED
  * MERGING_DIFFICULTY
  * EXIT_DIFFICULTY
  * RESERVED_1(预留)
  * RESERVED_2(预留)
 */
typedef struct deva_planning_msgs2__msg__PlanningFail
{
  rosidl_runtime_c__String reason;
  bool request;
} deva_planning_msgs2__msg__PlanningFail;

// Struct for a sequence of deva_planning_msgs2__msg__PlanningFail.
typedef struct deva_planning_msgs2__msg__PlanningFail__Sequence
{
  deva_planning_msgs2__msg__PlanningFail * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__PlanningFail__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_FAIL__STRUCT_H_
