// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/AdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"

/// Struct defined in msg/AdbTrafficSign in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__AdbTrafficSign
{
  uint8_t id;
  uint8_t conf;
  uint8_t parsing_conf;
  uint8_t track_info;
  uint32_t age;
  uint32_t life_time;
  float distance;
  float horizon_left_angle;
  float horizon_right_angle;
  float vertical_bottom_angle;
  float vertical_top_angle;
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_infos;
} deva_perception_msgs__msg__AdbTrafficSign;

// Struct for a sequence of deva_perception_msgs__msg__AdbTrafficSign.
typedef struct deva_perception_msgs__msg__AdbTrafficSign__Sequence
{
  deva_perception_msgs__msg__AdbTrafficSign * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__AdbTrafficSign__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__STRUCT_H_
