// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_localization_msgs:msg/Ins.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__STRUCT_H_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__STRUCT_H_

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
// Member 'ins_status'
#include "rosidl_runtime_c/string.h"
// Member 'localization'
// Member 'gcj_localization'
#include "deva_localization_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Ins in the package deva_localization_msgs.
typedef struct deva_localization_msgs__msg__Ins
{
  deva_common_msgs__msg__Header header;
  rosidl_runtime_c__String ins_status;
  ///  # WGS84 经纬度
  /// 纬度
  double lat;
  /// 经度
  double lon;
  /// 高度
  double height;
  deva_localization_msgs__msg__Pose localization;
  ///  # GCJ02 经纬度
  /// 纬度
  double gcj_lat;
  /// 经度
  double gcj_lon;
  deva_localization_msgs__msg__Pose gcj_localization;
  /// 真北航向角，以每条经线所在的方向为北向，Pose中的heading为投影后的网格y轴为北，两者数值有一定的差别
  double true_north_heading;
} deva_localization_msgs__msg__Ins;

// Struct for a sequence of deva_localization_msgs__msg__Ins.
typedef struct deva_localization_msgs__msg__Ins__Sequence
{
  deva_localization_msgs__msg__Ins * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_localization_msgs__msg__Ins__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__STRUCT_H_
