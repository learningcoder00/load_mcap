// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFusionObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obslist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle__struct.h"

/// Struct defined in msg/SFFusionObstacleList in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFusionObstacleList
{
  deva_aeb_msgs__msg__SFFusionObstacle obslist[32];
  uint64_t timestamp;
  uint32_t framenum;
  uint8_t validsize;
  uint8_t reserved[3];
} deva_aeb_msgs__msg__SFFusionObstacleList;

// Struct for a sequence of deva_aeb_msgs__msg__SFFusionObstacleList.
typedef struct deva_aeb_msgs__msg__SFFusionObstacleList__Sequence
{
  deva_aeb_msgs__msg__SFFusionObstacleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFusionObstacleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__STRUCT_H_
