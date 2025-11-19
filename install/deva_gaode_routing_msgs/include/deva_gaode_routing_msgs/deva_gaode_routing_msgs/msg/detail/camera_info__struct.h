// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraInfo in the package deva_gaode_routing_msgs.
/**
  * // SDKCameraType
 */
typedef struct deva_gaode_routing_msgs__msg__CameraInfo
{
  int32_t camera_type;
  /// // 车速限速值, 单位： km/h
  int32_t limit_speed;
  /// // 距离限速拍照距离, 单位： 米
  int32_t camera_distance;
} deva_gaode_routing_msgs__msg__CameraInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__CameraInfo.
typedef struct deva_gaode_routing_msgs__msg__CameraInfo__Sequence
{
  deva_gaode_routing_msgs__msg__CameraInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__CameraInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_H_
