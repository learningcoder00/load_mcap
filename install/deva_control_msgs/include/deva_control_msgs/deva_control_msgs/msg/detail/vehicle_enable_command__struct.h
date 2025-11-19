// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/VehicleEnableCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__STRUCT_H_

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
// Member 'protocol_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VehicleEnableCommand in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__VehicleEnableCommand
{
  std_msgs__msg__Header header;
  /// 消息协议版本号，更改消息后需要增加版本号，保持默认值方式
  rosidl_runtime_c__String protocol_version;
  /// 激活和退出线控命令：
  /// 0: 不激活线控功能
  /// 1：上游正常功能，不激活线控状态（预留）
  /// 2：允许单独激活横向
  /// 3：允许单独激活纵向
  /// 4：允许同时激活横向和纵向
  /// 5：单独退出横向
  /// 6：单独退出纵向
  /// 7：同时退出横向和纵向
  /// 8：强制退出线控（预留）
  uint8_t enable_bywire;
} deva_control_msgs__msg__VehicleEnableCommand;

// Struct for a sequence of deva_control_msgs__msg__VehicleEnableCommand.
typedef struct deva_control_msgs__msg__VehicleEnableCommand__Sequence
{
  deva_control_msgs__msg__VehicleEnableCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__VehicleEnableCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__STRUCT_H_
