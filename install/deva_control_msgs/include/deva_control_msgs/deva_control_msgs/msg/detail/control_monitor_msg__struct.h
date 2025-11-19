// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__STRUCT_H_

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
// Member 'openloop_trajectory'
#include "deva_planning_msgs2/msg/detail/planning_trajectory__struct.h"

/// Struct defined in msg/ControlMonitorMsg in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__ControlMonitorMsg
{
  std_msgs__msg__Header header;
  /// chassis info
  bool in_auto_drive;
  double chs_yaw_rate;
  double chs_speed;
  double chs_steer;
  double chs_longit_acc;
  double chs_longit_torque;
  uint8_t chs_gear;
  /// localization info
  double loc_x;
  double loc_y;
  double loc_z;
  double loc_speed;
  double loc_acc;
  double loc_heading;
  double loc_pitch;
  /// planning info
  /// 预瞄点
  double preview_path_x;
  double preview_path_y;
  double preview_path_theta;
  /// 匹配点
  double matched_path_x;
  double matched_path_y;
  double matched_path_theta;
  double matched_path_kappa;
  double matched_path_s;
  double matched_path_v;
  double matched_path_a;
  /// control status info
  double current_station;
  double station_ref;
  double station_error;
  double current_speed;
  double speed_ref;
  double preview_speed_ref;
  double speed_error;
  double acc_ref;
  double preview_acc_ref;
  double actual_acc;
  double lat_d;
  double lat_d_rate;
  double heading_d_rate;
  double heading_d;
  double pre_lat_d;
  double pre_lat_theta;
  double cmd_steer;
  double cmd_acc;
  double control_computation_time;
  double loc_header_time;
  double chas_header_time;
  double planning_header_time;
  deva_planning_msgs2__msg__PlanningTrajectory openloop_trajectory;
} deva_control_msgs__msg__ControlMonitorMsg;

// Struct for a sequence of deva_control_msgs__msg__ControlMonitorMsg.
typedef struct deva_control_msgs__msg__ControlMonitorMsg__Sequence
{
  deva_control_msgs__msg__ControlMonitorMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__ControlMonitorMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__STRUCT_H_
