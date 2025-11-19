// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'f120trafficobjects'
// Member 'f30trafficobjects'
#include "deva_perception_msgs/msg/detail/traffic_object__struct.h"
// Member 'e2eobjects'
#include "deva_perception_msgs/msg/detail/e2e_result__struct.h"

/// Struct defined in msg/TrafficDetectData in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficDetectData
{
  deva_common_msgs__msg__Header header;
  uint64_t framenum;
  uint64_t timestamp;
  float abs_vel_x;
  float abs_acc_x;
  uint8_t vel_motion;
  uint8_t acc_motion;
  uint8_t f120_object_num;
  uint8_t f30_object_num;
  deva_perception_msgs__msg__TrafficObject f120trafficobjects[64];
  deva_perception_msgs__msg__TrafficObject f30trafficobjects[64];
  deva_perception_msgs__msg__E2eResult e2eobjects;
  uint8_t time_of_day;
  uint8_t reserved[2];
} deva_perception_msgs__msg__TrafficDetectData;

// Struct for a sequence of deva_perception_msgs__msg__TrafficDetectData.
typedef struct deva_perception_msgs__msg__TrafficDetectData__Sequence
{
  deva_perception_msgs__msg__TrafficDetectData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficDetectData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__STRUCT_H_
