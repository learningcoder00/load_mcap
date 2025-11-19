// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebCrossImage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cross_image_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/WebCrossImage in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebCrossImage
{
  /// update id
  int32_t id;
  /// // 枚举: CrossImageTyp  // 路口图类型：// 0：reserved // 1：格栅图 // 2：矢量图
  uint32_t cross_image_type;
  /// // 枚举: CrossImage // 图片尺寸：500*320 // 图片格式：TBD  // Description: event（有路口图就给出
  rosidl_runtime_c__uint8__Sequence cross_image_data;
} deva_gaode_routing_msgs__msg__WebCrossImage;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebCrossImage.
typedef struct deva_gaode_routing_msgs__msg__WebCrossImage__Sequence
{
  deva_gaode_routing_msgs__msg__WebCrossImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebCrossImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__STRUCT_H_
