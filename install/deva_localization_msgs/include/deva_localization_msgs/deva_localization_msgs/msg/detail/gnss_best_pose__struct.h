// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__STRUCT_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__STRUCT_H_

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
// Member 'solution_status'
// Member 'position_type'
// Member 'datum_id'
#include "rosidl_runtime_c/string.h"
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/GnssBestPose in the package deva_localization_msgs.
/**
  * Parsed Best Position or Omnistar XP or HP pos data from Novatel OEM6 receiver
 */
typedef struct deva_localization_msgs__msg__GnssBestPose
{
  std_msgs__msg__Header header;
  /// 结算状态
  rosidl_runtime_c__String solution_status;
  /// 位置类型
  rosidl_runtime_c__String position_type;
  /// 纬度
  double lat;
  /// 经度
  double lon;
  /// 海平面高度
  double height_msl;
  /// 高程异常值
  float undulation;
  /// 坐标系 id
  rosidl_runtime_c__String datum_id;
  /// 纬度标准差
  float lat_sigma;
  /// 经度标准差
  float lon_sigma;
  /// 高度标准差
  float height_sigma;
  /// 差分延迟时间 (s)
  float diff_age;
  /// 计算延迟时间 (s)
  float solution_age;
  /// 跟踪卫星数目
  uint8_t num_satellites_tracked;
  /// 解算卫星数目
  uint8_t num_satellites_used_in_solution;
  /// l1/b1/b1 解算卫星数目
  uint8_t num_gps_and_glonass_l1_used_in_solution;
  /// 多频计算卫星数目
  uint8_t num_gps_and_glonass_l1_and_l2_used_in_solution;
  /// 扩展结算状态
  uint32_t extended_solution_status;
  /// GPS和Glonass信号使用标志
  uint32_t gps_glonass_used_mask;
  /// galileo 和北斗信号使用标志
  uint32_t galileo_beidou_used_mask;
  /// 东北天速度
  geometry_msgs__msg__Point linear_velocity;
  /// 速度延迟
  float velocity_latency;
} deva_localization_msgs__msg__GnssBestPose;

// Struct for a sequence of deva_localization_msgs__msg__GnssBestPose.
typedef struct deva_localization_msgs__msg__GnssBestPose__Sequence
{
  deva_localization_msgs__msg__GnssBestPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_localization_msgs__msg__GnssBestPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__STRUCT_H_
