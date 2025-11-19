// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/AccHeadingSteeringStats.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'acc_steering_stats'
// Member 'heading_steering_stats'
#include "deva_mdriver_msgs/msg/detail/mean_variance__struct.h"

/// Struct defined in msg/AccHeadingSteeringStats in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__AccHeadingSteeringStats
{
  /// 每次预测有多少个波峰
  deva_mdriver_msgs__msg__MeanVariance__Sequence acc_steering_stats;
  deva_mdriver_msgs__msg__MeanVariance__Sequence heading_steering_stats;
} deva_mdriver_msgs__msg__AccHeadingSteeringStats;

// Struct for a sequence of deva_mdriver_msgs__msg__AccHeadingSteeringStats.
typedef struct deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence
{
  deva_mdriver_msgs__msg__AccHeadingSteeringStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__STRUCT_H_
