// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/PartitionZone.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PARTITION_ZONE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PARTITION_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PartitionZone in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__PartitionZone
{
  /// 4*空白区域，1*延长交点
  geometry_msgs__msg__Point__Sequence waypoints;
} deva_perception_msgs__msg__PartitionZone;

// Struct for a sequence of deva_perception_msgs__msg__PartitionZone.
typedef struct deva_perception_msgs__msg__PartitionZone__Sequence
{
  deva_perception_msgs__msg__PartitionZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__PartitionZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PARTITION_ZONE__STRUCT_H_
