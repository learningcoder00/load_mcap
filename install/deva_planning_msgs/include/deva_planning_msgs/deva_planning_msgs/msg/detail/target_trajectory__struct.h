// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__TARGET_TRAJECTORY__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__TARGET_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRACETYPE_GO_STRAIGHT'.
/**
  * ============================================
 */
enum
{
  deva_planning_msgs__msg__TargetTrajectory__TRACETYPE_GO_STRAIGHT = 0
};

/// Constant 'TRACETYPE_TURN_LEFT'.
enum
{
  deva_planning_msgs__msg__TargetTrajectory__TRACETYPE_TURN_LEFT = 1
};

/// Constant 'TRACETYPE_TURN_RIGHT'.
enum
{
  deva_planning_msgs__msg__TargetTrajectory__TRACETYPE_TURN_RIGHT = 2
};

/// Constant 'TRACETYPE_CHANGELINE_LEFT'.
enum
{
  deva_planning_msgs__msg__TargetTrajectory__TRACETYPE_CHANGELINE_LEFT = 3
};

/// Constant 'TRACETYPE_CHANGELINE_RIGHT'.
enum
{
  deva_planning_msgs__msg__TargetTrajectory__TRACETYPE_CHANGELINE_RIGHT = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sensor_timestamp'
#include "deva_planning_msgs/msg/detail/sensor_time__struct.h"
// Member 'trajectory_point'
#include "deva_planning_msgs/msg/detail/trajectory_point__struct.h"
// Member 'path_point'
// Member 'stop_pose'
#include "deva_planning_msgs/msg/detail/path_point__struct.h"
// Member 'gear'
// Member 'estop_reason'
// Member 'stop_reason'
// Member 'replan_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TargetTrajectory in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__TargetTrajectory
{
  std_msgs__msg__Header header;
  deva_planning_msgs__msg__SensorTime sensor_timestamp;
  double start_gnss_time;
  /// in meters​​
  double total_path_length;
  /// in seconds​​
  double total_path_time;
  /// ============================================
  deva_planning_msgs__msg__TrajectoryPoint__Sequence trajectory_point;
  deva_planning_msgs__msg__PathPoint__Sequence path_point;
  rosidl_runtime_c__String gear;
  /// ============================================
  bool is_estop;
  rosidl_runtime_c__String estop_reason;
  bool is_stop;
  deva_planning_msgs__msg__PathPoint stop_pose;
  rosidl_runtime_c__String stop_reason;
  bool is_replan;
  rosidl_runtime_c__String replan_reason;
  bool car_in_dead_end;
  bool high_beam;
  bool low_beam;
  bool horn;
  bool emergency_light;
  uint8_t trace_type;
} deva_planning_msgs__msg__TargetTrajectory;

// Struct for a sequence of deva_planning_msgs__msg__TargetTrajectory.
typedef struct deva_planning_msgs__msg__TargetTrajectory__Sequence
{
  deva_planning_msgs__msg__TargetTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__TargetTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__TARGET_TRAJECTORY__STRUCT_H_
