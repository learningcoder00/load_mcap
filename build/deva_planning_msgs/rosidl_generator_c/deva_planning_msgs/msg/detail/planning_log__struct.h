// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/PlanningLog.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__STRUCT_H_

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
// Member 'localization'
// Member 'chassis'
// Member 'pad_message'
// Member 'pull_over_msg'
// Member 'traffic_poles'
// Member 'apollo_decision'
// Member 'prediction'
// Member 'megmap_proto'
// Member 'state_context'
// Member 'target_trajectory'
// Member 'speed_solver_debug_sequence'
// Member 'trajectory_solver_debug_sequence'
// Member 'planning_log'
// Member 'navigator_routing'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PlanningLog in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__PlanningLog
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence localization;
  rosidl_runtime_c__uint8__Sequence chassis;
  rosidl_runtime_c__uint8__Sequence pad_message;
  rosidl_runtime_c__uint8__Sequence pull_over_msg;
  rosidl_runtime_c__uint8__Sequence traffic_poles;
  rosidl_runtime_c__uint8__Sequence apollo_decision;
  rosidl_runtime_c__uint8__Sequence prediction;
  rosidl_runtime_c__uint8__Sequence megmap_proto;
  rosidl_runtime_c__uint8__Sequence state_context;
  rosidl_runtime_c__uint8__Sequence target_trajectory;
  rosidl_runtime_c__uint8__Sequence speed_solver_debug_sequence;
  rosidl_runtime_c__uint8__Sequence trajectory_solver_debug_sequence;
  rosidl_runtime_c__uint8__Sequence planning_log;
  rosidl_runtime_c__uint8__Sequence navigator_routing;
  uint32_t drving_state;
  uint32_t auto_function;
  uint32_t drive_action;
  uint32_t env_info_index;
} deva_planning_msgs__msg__PlanningLog;

// Struct for a sequence of deva_planning_msgs__msg__PlanningLog.
typedef struct deva_planning_msgs__msg__PlanningLog__Sequence
{
  deva_planning_msgs__msg__PlanningLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__PlanningLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__STRUCT_H_
