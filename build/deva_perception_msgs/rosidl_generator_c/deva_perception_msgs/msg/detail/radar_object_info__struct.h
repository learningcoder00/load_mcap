// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RadarObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MNTPAT_UNKNOWN'.
/**
  * 目标动态特性
 */
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_UNKNOWN = 0
};

/// Constant 'MNTPAT_STATIONARY'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_STATIONARY = 1
};

/// Constant 'MNTPAT_STATIONARY_FROM_MOVING'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_STATIONARY_FROM_MOVING = 2
};

/// Constant 'MNTPAT_MOVING'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_MOVING = 3
};

/// Constant 'MNTPAT_RECEDING'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_RECEDING = 4
};

/// Constant 'MNTPAT_ONCOMING'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_ONCOMING = 5
};

/// Constant 'MNTPAT_CROSSINGN_FROM_LE'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_CROSSINGN_FROM_LE = 6
};

/// Constant 'MNTPAT_CROSSINGN_FROM_RI'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_CROSSINGN_FROM_RI = 7
};

/// Constant 'MNTPAT_CROSSINGN_STATIONARY'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_CROSSINGN_STATIONARY = 8
};

/// Constant 'MNTPAT_STOPED'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MNTPAT_STOPED = 9
};

/// Constant 'UNKNOWN'.
/**
  * 目标类别
 */
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__UNKNOWN = 0
};

/// Constant 'POINT'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__POINT = 1
};

/// Constant 'CAR'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__CAR = 2
};

/// Constant 'TRUCK'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__TRUCK = 3
};

/// Constant 'PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__PEDESTRIAN = 4
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__BICYCLE = 5
};

/// Constant 'WIDE'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__WIDE = 6
};

/// Constant 'MOTORCYCLE'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__MOTORCYCLE = 7
};

/// Constant 'VEHICLE_UNKNOWN_CLASS'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__VEHICLE_UNKNOWN_CLASS = 8
};

/// Constant 'ANIMAL'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__ANIMAL = 9
};

/// Constant 'TRACK_STATUS_INVALID'.
/**
  * 目标的跟踪状态
 */
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__TRACK_STATUS_INVALID = 0
};

/// Constant 'TRACK_STATUS_UPDATED'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__TRACK_STATUS_UPDATED = 1
};

/// Constant 'TRACK_STATUS_NEW'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__TRACK_STATUS_NEW = 2
};

/// Constant 'TRACK_STATUS_COASTED'.
enum
{
  deva_perception_msgs__msg__RadarObjectInfo__TRACK_STATUS_COASTED = 3
};

// Include directives for member types
// Member 'position'
// Member 'position_std'
// Member 'nearest_point'
// Member 'nearest_point_std'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity_rel'
// Member 'velocity_rel_std'
// Member 'velocity_abs'
// Member 'velocity_abs_std'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration_rel'
// Member 'acceleration_abs'
#include "geometry_msgs/msg/detail/accel__struct.h"
// Member 'box_lwh'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RadarObjectInfo in the package deva_perception_msgs.
/**
  * 目标id
 */
typedef struct deva_perception_msgs__msg__RadarObjectInfo
{
  uint32_t id;
  /// 目标框中心点位置，单位m
  geometry_msgs__msg__Pose position;
  /// 目标框中心点位置的标准差
  geometry_msgs__msg__Pose position_std;
  /// 目标最近点位置，单位m
  geometry_msgs__msg__Pose nearest_point;
  /// 目标最近点位置的标准差
  geometry_msgs__msg__Pose nearest_point_std;
  /// 目标相对速度，单位m/s
  geometry_msgs__msg__Twist velocity_rel;
  /// 目标相对速度的标准差
  geometry_msgs__msg__Twist velocity_rel_std;
  /// 目标绝对速度，单位m/s
  geometry_msgs__msg__Twist velocity_abs;
  /// 目标绝对速度的标准差
  geometry_msgs__msg__Twist velocity_abs_std;
  /// 目标相对加速度，单位m/s^2
  geometry_msgs__msg__Accel acceleration_rel;
  /// 目标绝对加速度，单位m/s^2
  geometry_msgs__msg__Accel acceleration_abs;
  uint32_t dynamic_property;
  /// 目标朝向，单位degree
  double heading_angle;
  /// 目标存活周期
  uint32_t life_cycles;
  /// 目标的长宽高，单位m
  geometry_msgs__msg__Point box_lwh;
  /// 目标框的中心点相对于最近点的横向距离
  double box_center_lat;
  /// 目标框的中心点相对于最近点的纵向距离
  double box_center_lgt;
  /// 信噪比
  double snr;
  uint32_t classification;
  /// 目标是障碍物的可能性，单位%
  double obstacle_probability;
  /// 目标置信度，单位%
  double probability_of_existence;
  /// 目标是镜像目标可能性，单位%
  double mirror_probability;
  /// 目标是鬼点可能性，单位%
  double not_real_probability;
  /// 雷达散射截面
  double rcs;
  /// 目标类别的置信度，单位%
  double target_classification_confidence;
  uint32_t track_status;
} deva_perception_msgs__msg__RadarObjectInfo;

// Struct for a sequence of deva_perception_msgs__msg__RadarObjectInfo.
typedef struct deva_perception_msgs__msg__RadarObjectInfo__Sequence
{
  deva_perception_msgs__msg__RadarObjectInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RadarObjectInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__STRUCT_H_
