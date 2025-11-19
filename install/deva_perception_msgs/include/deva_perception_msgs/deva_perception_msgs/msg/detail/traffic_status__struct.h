// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrafficStatus in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficStatus
{
  uint8_t color;
  uint8_t shape;
  float color_confidence;
  float shape_confidence;
  bool blink;
  int32_t countdown_value;
} deva_perception_msgs__msg__TrafficStatus;

// Struct for a sequence of deva_perception_msgs__msg__TrafficStatus.
typedef struct deva_perception_msgs__msg__TrafficStatus__Sequence
{
  deva_perception_msgs__msg__TrafficStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_H_
