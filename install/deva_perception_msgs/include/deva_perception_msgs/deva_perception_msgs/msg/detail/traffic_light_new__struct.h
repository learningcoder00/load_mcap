// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficLightNew.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_NEW__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_NEW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrafficLightNew in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficLightNew
{
  bool exist;
  /// RED    = 0
  /// YELLOW = 1
  /// GREEN  = 2
  /// OTHERS = 3
  uint8_t color;
} deva_perception_msgs__msg__TrafficLightNew;

// Struct for a sequence of deva_perception_msgs__msg__TrafficLightNew.
typedef struct deva_perception_msgs__msg__TrafficLightNew__Sequence
{
  deva_perception_msgs__msg__TrafficLightNew * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficLightNew__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_NEW__STRUCT_H_
