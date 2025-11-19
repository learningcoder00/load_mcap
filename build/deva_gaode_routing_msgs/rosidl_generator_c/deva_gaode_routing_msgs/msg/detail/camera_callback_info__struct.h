// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/CameraCallbackInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_info'
#include "deva_gaode_routing_msgs/msg/detail/camera_info__struct.h"

/// Struct defined in msg/CameraCallbackInfo in the package deva_gaode_routing_msgs.
/**
  * 区间限速剩余距离 (仅在区间限速内有效), 单位： 米
 */
typedef struct deva_gaode_routing_msgs__msg__CameraCallbackInfo
{
  int32_t inter_remain_distance;
  deva_gaode_routing_msgs__msg__CameraInfo__Sequence camera_info;
} deva_gaode_routing_msgs__msg__CameraCallbackInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__CameraCallbackInfo.
typedef struct deva_gaode_routing_msgs__msg__CameraCallbackInfo__Sequence
{
  deva_gaode_routing_msgs__msg__CameraCallbackInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__CameraCallbackInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__STRUCT_H_
