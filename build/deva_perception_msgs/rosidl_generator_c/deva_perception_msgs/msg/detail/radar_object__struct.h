// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'relative_velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'relative_acceleration'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"

/// Struct defined in msg/RadarObject in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RadarObject
{
  /// 障碍物id
  uint8_t id;
  /// 障碍物位置
  /// 实际有效的为position.pose.position.x和position.pose.position.y
  /// 其中坐标为radar坐标系下的坐标，单位m
  geometry_msgs__msg__PoseWithCovariance position;
  /// 障碍物的线速度
  /// 实际有效的为relative_velocity.twist.linear.x和relative_velocity.twist.linear.y
  /// 单位 m/s
  geometry_msgs__msg__TwistWithCovariance relative_velocity;
  /// 障碍物的加速度值，目前无效
  geometry_msgs__msg__AccelWithCovariance relative_acceleration;
  /// 障碍物雷达目标有效截面（dBm）
  double rcs;
  /// 障碍物的动态特性，取值如下:
  /// 0x0: Moving
  /// 0x1: Stationary
  /// 0x2: Oncoming
  /// 0x3: Stationary candidate
  /// 0x4: Unknown
  /// 0x5: Crossing stationary
  /// 0x6: Crossing moving
  /// 0x7: Stopped
  uint8_t dynamic_property;
  /// 信号质量相关字段内容是否有效
  bool quality_valid;
  /// 障碍物测量状态，当quality_valid=true时值有效，取值如下：
  /// 0x0: Deleted
  /// 0x1: New
  /// 0x2: Measured
  /// 0x3: Predicted
  /// 0x4: Deleted for merge
  /// 0x5: New from merge
  uint8_t meas_state;
  /// 障碍物存在的可能性，当quality_valid=true时值有效，取值如下：
  /// 0x0: invalid
  /// 0x1: <25%
  /// 0x2: <50%
  /// 0x3: <75%
  /// 0x4: <90%
  /// 0x5: <99%
  /// 0x6: <99.9%
  /// 0x7: <=100%
  uint8_t prob_of_exist;
  /// 扩展字段是否有效
  bool extended_valid;
  /// 障碍物长度，单位m，当extended_valid=true时值有效
  double length;
  /// 障碍物宽度，单位m，当extended_valid=true时值有效
  double width;
  /// 障碍物轮廓中心点相对于障碍物位置的y坐标
  double center_latitude;
  /// 障碍物轮廓中心点相对于障碍物位置的x坐标
  double center_longitude;
  /// 障碍物方位角，单位deg，当extended_valid=true时值有效
  double orientation_angle;
  /// 障碍物类型，当extended_valid=true时值有效，取值如下:
  /// 0x0: Point
  /// 0x1: Car
  /// 0x2: Truck
  /// 0x3: Pedestrian
  /// 0x4: Motorcycle
  /// 0x5: Bicycle
  /// 0x6: Wide
  /// 0x7: 未知值
  uint8_t class_type;
} deva_perception_msgs__msg__RadarObject;

// Struct for a sequence of deva_perception_msgs__msg__RadarObject.
typedef struct deva_perception_msgs__msg__RadarObject__Sequence
{
  deva_perception_msgs__msg__RadarObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RadarObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_
