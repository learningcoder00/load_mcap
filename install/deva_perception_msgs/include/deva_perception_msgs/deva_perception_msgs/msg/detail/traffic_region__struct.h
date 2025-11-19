// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficRegion.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_REGION__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_REGION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrafficRegion in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficRegion
{
  float x;
  float y;
  float w;
  float h;
  float score;
} deva_perception_msgs__msg__TrafficRegion;

// Struct for a sequence of deva_perception_msgs__msg__TrafficRegion.
typedef struct deva_perception_msgs__msg__TrafficRegion__Sequence
{
  deva_perception_msgs__msg__TrafficRegion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficRegion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_REGION__STRUCT_H_
