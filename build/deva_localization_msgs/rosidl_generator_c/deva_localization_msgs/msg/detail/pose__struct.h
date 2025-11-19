// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_localization_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__STRUCT_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__STRUCT_H_

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
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'linear_acceleration_vrf'
// Member 'angular_velocity_vrf'
// Member 'euler_angles'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/Pose in the package deva_localization_msgs.
/**
  * UTM zone id, -1代表自定义坐标系
 */
typedef struct deva_localization_msgs__msg__Pose
{
  int32_t utm_id;
  /// 车辆参考点(vehicle reference point)在地图参考系中的位置.
  /// VRP是车辆IMU中心点.
  geometry_msgs__msg__Point position;
  /// 表征IMU坐标旋转的四元数.
  geometry_msgs__msg__Quaternion orientation;
  /// VRP在地图参考系中的线性速度.
  /// East/north/up in meters per second.
  geometry_msgs__msg__Point linear_velocity;
  /// VRP在地图参考系中的线性加速度.
  /// East/north/up in meters per square second.
  geometry_msgs__msg__Point linear_acceleration;
  /// VRP在地图参考系中的角速度.
  /// Around east/north/up axes in radians per second.
  geometry_msgs__msg__Point angular_velocity;
  /// Heading
  /// The heading is zero when the car is facing East and positive when facing North.
  double heading;
  /// VRP在车辆参考系中的线性加速度.
  /// forward/left/up in meters per square second.
  geometry_msgs__msg__Point linear_acceleration_vrf;
  /// VRP在车辆参考系中的角速度.
  /// Around forward/left/up axes in radians per second.
  geometry_msgs__msg__Point angular_velocity_vrf;
  /// The roll, in (-pi/2, pi/2), corresponds to a rotation around the x-axis.
  /// The pitch, in [-pi, pi), corresponds to a rotation around the y-axis.
  /// The yaw, in [-pi, pi), corresponds to a rotation around the z-axis.
  /// The direction of rotation follows the right-hand rule.
  geometry_msgs__msg__Point euler_angles;
} deva_localization_msgs__msg__Pose;

// Struct for a sequence of deva_localization_msgs__msg__Pose.
typedef struct deva_localization_msgs__msg__Pose__Sequence
{
  deva_localization_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_localization_msgs__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__STRUCT_H_
