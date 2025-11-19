// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/PlanningTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory_points'
#include "deva_planning_msgs/msg/detail/trajectory_point__struct.h"
// Member 'curve'
#include "deva_common_msgs/msg/detail/equation_curve__struct.h"
// Member 'gear'
// Member 'estop_reason'
// Member 'stop_reason'
// Member 'replan_reason'
#include "rosidl_runtime_c/string.h"
// Member 'stop_pose'
// Member 'circle_center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PlanningTrajectory in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__PlanningTrajectory
{
  int8_t path_type;
  deva_planning_msgs__msg__TrajectoryPoint__Sequence trajectory_points;
  deva_common_msgs__msg__EquationCurve curve;
  double total_path_length;
  double total_path_time;
  rosidl_runtime_c__String gear;
  bool is_estop;
  rosidl_runtime_c__String estop_reason;
  bool is_stop;
  rosidl_runtime_c__String stop_reason;
  geometry_msgs__msg__Point stop_pose;
  bool is_replan;
  rosidl_runtime_c__String replan_reason;
  bool car_in_dead_end;
  uint8_t trace_type;
  bool high_beam;
  bool low_beam;
  bool horn;
  bool emergency_light;
  int8_t vehicle_gear;
  geometry_msgs__msg__Point circle_center;
  double radius;
  uint32_t id;
} deva_planning_msgs__msg__PlanningTrajectory;

// Struct for a sequence of deva_planning_msgs__msg__PlanningTrajectory.
typedef struct deva_planning_msgs__msg__PlanningTrajectory__Sequence
{
  deva_planning_msgs__msg__PlanningTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__PlanningTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__STRUCT_H_
