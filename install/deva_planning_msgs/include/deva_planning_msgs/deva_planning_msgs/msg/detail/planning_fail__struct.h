// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/PlanningFail.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_FAIL__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_FAIL__STRUCT_H_

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

/// Struct defined in msg/PlanningFail in the package deva_planning_msgs.
/**
  * UNKNOWN, NEAR_CONE, CIPV_EMPTY
  * PLANNING_ERROR
  * NAVIGATOR_ERROR
  * VEHICLE_STATE_ERROR
  * GENERATE_REFERENCE_LINE_ERROR
  * INIT_FRAME_ERROR
  * BEHAVIOR_ERROR, MOTION_ERROR
 */
typedef struct deva_planning_msgs__msg__PlanningFail
{
  rosidl_runtime_c__String reason;
  bool request;
} deva_planning_msgs__msg__PlanningFail;

// Struct for a sequence of deva_planning_msgs__msg__PlanningFail.
typedef struct deva_planning_msgs__msg__PlanningFail__Sequence
{
  deva_planning_msgs__msg__PlanningFail * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__PlanningFail__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_FAIL__STRUCT_H_
