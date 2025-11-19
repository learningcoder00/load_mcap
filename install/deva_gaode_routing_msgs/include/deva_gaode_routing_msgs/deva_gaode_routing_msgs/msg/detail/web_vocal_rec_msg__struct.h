// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebVocalRecMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'voice_content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WebVocalRecMsg in the package deva_gaode_routing_msgs.
/**
  * 语音序号, 实时更新
 */
typedef struct deva_gaode_routing_msgs__msg__WebVocalRecMsg
{
  int32_t sequence_num;
  /// 道路类型, 实时更新
  int32_t road_type;
  /// 转向类型, 实时更新
  int32_t conor_type;
  /// 车道数量（几车道）, 实时更新
  int32_t lane_num;
  /// 剩余距离（米）, 实时更新
  int32_t distance;
  /// 语音内容, 实时更新
  rosidl_runtime_c__String voice_content;
} deva_gaode_routing_msgs__msg__WebVocalRecMsg;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebVocalRecMsg.
typedef struct deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence
{
  deva_gaode_routing_msgs__msg__WebVocalRecMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebVocalRecMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__STRUCT_H_
