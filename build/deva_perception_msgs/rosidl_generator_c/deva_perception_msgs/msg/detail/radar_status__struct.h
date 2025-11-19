// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RadarStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarStatus in the package deva_perception_msgs.
/**
  * ECU Status
  * to do
 */
typedef struct deva_perception_msgs__msg__RadarStatus
{
  /// Radar Status
  /// 点云数量
  uint32_t num_detection;
  /// 目标数量
  uint32_t num_object;
  /// 当前雷达的使能状态
  uint32_t status_enable;
  /// 当前雷达错误状态
  uint32_t status_faulty;
  uint32_t status_latency;
  /// 当前雷达的安全级别错误状态
  uint32_t status_safety_fault;
  /// 当前雷达消息的时间戳timestamp = timestamp_h + timestamp_l
  double timestamp_h;
  double timestamp_l;
  /// Radar VDY
  /// 雷达动态补偿信息：自车车速
  double vdy_velocity;
  /// 雷达动态补偿信息：自车横摆角速度
  double vdy_yawrate;
  /// 雷达动态补偿信息的时间戳
  double vdy_timestamp;
} deva_perception_msgs__msg__RadarStatus;

// Struct for a sequence of deva_perception_msgs__msg__RadarStatus.
typedef struct deva_perception_msgs__msg__RadarStatus__Sequence
{
  deva_perception_msgs__msg__RadarStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RadarStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__STRUCT_H_
