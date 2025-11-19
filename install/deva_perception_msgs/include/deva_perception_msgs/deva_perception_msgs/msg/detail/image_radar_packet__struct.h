// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/ImageRadarPacket.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ImageRadarPacket in the package deva_perception_msgs.
/**
  * 接受来自以太网的点云数据
 */
typedef struct deva_perception_msgs__msg__ImageRadarPacket
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__uint8__Sequence data;
  uint32_t size;
  /// 数据类型：
  /// 0: UNKNOWN
  /// 1: object
  /// 2: sensor
  /// 3: detection
  uint8_t type;
  bool is_bigendian;
} deva_perception_msgs__msg__ImageRadarPacket;

// Struct for a sequence of deva_perception_msgs__msg__ImageRadarPacket.
typedef struct deva_perception_msgs__msg__ImageRadarPacket__Sequence
{
  deva_perception_msgs__msg__ImageRadarPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__ImageRadarPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__STRUCT_H_
