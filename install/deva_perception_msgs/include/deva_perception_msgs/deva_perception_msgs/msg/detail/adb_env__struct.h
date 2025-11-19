// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/AdbEnv.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__STRUCT_H_

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
// Member 'sign_list'
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__struct.h"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"

/// Struct defined in msg/AdbEnv in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__AdbEnv
{
  deva_common_msgs__msg__Header header;
  deva_perception_msgs__msg__AdbTrafficSign__Sequence sign_list;
  /// 补充信息
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_infos;
} deva_perception_msgs__msg__AdbEnv;

// Struct for a sequence of deva_perception_msgs__msg__AdbEnv.
typedef struct deva_perception_msgs__msg__AdbEnv__Sequence
{
  deva_perception_msgs__msg__AdbEnv * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__AdbEnv__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__STRUCT_H_
