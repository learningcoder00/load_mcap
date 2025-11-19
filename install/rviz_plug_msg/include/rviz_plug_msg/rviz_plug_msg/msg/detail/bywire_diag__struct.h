// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/BywireDiag.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__STRUCT_H_

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
// Member 'node_name'
// Member 'detail'
#include "rosidl_runtime_c/string.h"
// Member 'type'
#include "rviz_plug_msg/msg/detail/bywire_msg_type__struct.h"

/// Struct defined in msg/BywireDiag in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__BywireDiag
{
  std_msgs__msg__Header header;
  /// 定值"bywire_node"
  rosidl_runtime_c__String node_name;
  /// 当前三种类型msg 分别为 ["STATUS", "INFO", "ERROR"] 同种类型覆盖显示最新消息,不同类型消息同时展示使用颜色区分
  rviz_plug_msg__msg__BywireMsgType type;
  /// 消息信息的数字编码根据 上方字段取值不同解释含义不同，具体含义对照["StatusEnum.msg", "InfoEnum.msg", "ErrorEnum.msg"],无特殊需求可以不关注
  uint8_t code;
  /// utf-8编码中文，消息详细信息用于展示
  rosidl_runtime_c__String detail;
} rviz_plug_msg__msg__BywireDiag;

// Struct for a sequence of rviz_plug_msg__msg__BywireDiag.
typedef struct rviz_plug_msg__msg__BywireDiag__Sequence
{
  rviz_plug_msg__msg__BywireDiag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__BywireDiag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__STRUCT_H_
