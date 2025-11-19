// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoadInfo in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RoadInfo
{
  int32_t has_traffic_light;
  /// 取值参考 RoadType.msg
  uint8_t road_type;
  /// 取值参考 RoadClass.msg
  uint8_t road_class;
} deva_perception_msgs__msg__RoadInfo;

// Struct for a sequence of deva_perception_msgs__msg__RoadInfo.
typedef struct deva_perception_msgs__msg__RoadInfo__Sequence
{
  deva_perception_msgs__msg__RoadInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RoadInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__STRUCT_H_
