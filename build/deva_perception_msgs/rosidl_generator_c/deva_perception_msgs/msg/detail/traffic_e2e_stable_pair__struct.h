// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficE2eStablePair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrafficE2eStablePair in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficE2eStablePair
{
  /// 取值参考TrafficE2eResult.msg
  uint8_t traffic_e2e_result;
  bool is_stable;
} deva_perception_msgs__msg__TrafficE2eStablePair;

// Struct for a sequence of deva_perception_msgs__msg__TrafficE2eStablePair.
typedef struct deva_perception_msgs__msg__TrafficE2eStablePair__Sequence
{
  deva_perception_msgs__msg__TrafficE2eStablePair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficE2eStablePair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__STRUCT_H_
