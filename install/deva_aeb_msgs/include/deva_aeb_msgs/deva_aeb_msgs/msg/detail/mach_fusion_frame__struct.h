// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__STRUCT_H_

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

/// Struct defined in msg/MachFusionFrame in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__MachFusionFrame
{
  deva_common_msgs__msg__Header header;
  uint64_t frame_id;
  uint64_t rv_timestamp;
  uint64_t bev_timestamp;
  uint64_t front_radar_timestamp;
  uint64_t front_right_radar_timestamp;
  uint64_t front_left_radar_timestamp;
  uint64_t back_left_radar_timestamp;
  uint64_t back_right_radar_timestamp;
  uint64_t lidar_timestamp;
  uint64_t ins_timestamp;
  double rfu2camera_pose[7];
  double ego2camera_pose[7];
  /// ####Col-major  begin ####
  /// matrix << 1, 2, 3, 4,
  ///          5, 6, 7, 8,
  ///          9, 10, 11, 12,
  ///          13, 14, 15, 16;
  /// results: 1 5 9 13 2 6 10 14 3 7 11 15 4 8 12 16
  double rfu_ego_pose_matirx[16];
  double rfu_imu_pose_matirx[16];
  double ego_world_pose_matirx[16];
  /// #### Col-major matrix end ####
  double camera_k_matrix[9];
  double imu_world_translation[3];
  double imu_world_rotation[4];
  double rfu2camera_pose_front[7];
  double rfu2camera_pose_front_left[7];
  double rfu2camera_pose_front_right[7];
  double rfu2camera_pose_back[7];
  double rfu2camera_pose_back_left[7];
  double rfu2camera_pose_back_right[7];
  uint64_t vehile_report_time;
  int64_t reserve1;
  int64_t reserve2;
  int64_t reserve3;
  int64_t reserve4;
  int64_t reserve5;
  int64_t reserve6;
  int64_t reserve7;
} deva_aeb_msgs__msg__MachFusionFrame;

// Struct for a sequence of deva_aeb_msgs__msg__MachFusionFrame.
typedef struct deva_aeb_msgs__msg__MachFusionFrame__Sequence
{
  deva_aeb_msgs__msg__MachFusionFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__MachFusionFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__STRUCT_H_
