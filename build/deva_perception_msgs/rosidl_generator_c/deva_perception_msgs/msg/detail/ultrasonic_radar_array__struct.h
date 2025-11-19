// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/UltrasonicRadarArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR_ARRAY__STRUCT_H_

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
// Member 'ultrasonic_radar_array'
#include "deva_perception_msgs/msg/detail/ultrasonic_radar__struct.h"

/// Struct defined in msg/UltrasonicRadarArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__UltrasonicRadarArray
{
  std_msgs__msg__Header header;
  /// 当前msg的版本号
  uint8_t version;
  /// 数组，表示多个超声波雷达
  deva_perception_msgs__msg__UltrasonicRadar__Sequence ultrasonic_radar_array;
} deva_perception_msgs__msg__UltrasonicRadarArray;

// Struct for a sequence of deva_perception_msgs__msg__UltrasonicRadarArray.
typedef struct deva_perception_msgs__msg__UltrasonicRadarArray__Sequence
{
  deva_perception_msgs__msg__UltrasonicRadarArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__UltrasonicRadarArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR_ARRAY__STRUCT_H_
