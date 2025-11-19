// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frontleft'
// Member 'frontright'
// Member 'rearleft'
// Member 'rearright'
#include "deva_aeb_msgs/msg/detail/road_info__struct.h"

/// Struct defined in msg/SFFusionRoadEdge in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFusionRoadEdge
{
  uint64_t timestamp;
  uint32_t framenum;
  deva_aeb_msgs__msg__RoadInfo frontleft;
  deva_aeb_msgs__msg__RoadInfo frontright;
  deva_aeb_msgs__msg__RoadInfo rearleft;
  deva_aeb_msgs__msg__RoadInfo rearright;
} deva_aeb_msgs__msg__SFFusionRoadEdge;

// Struct for a sequence of deva_aeb_msgs__msg__SFFusionRoadEdge.
typedef struct deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence
{
  deva_aeb_msgs__msg__SFFusionRoadEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFusionRoadEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__STRUCT_H_
