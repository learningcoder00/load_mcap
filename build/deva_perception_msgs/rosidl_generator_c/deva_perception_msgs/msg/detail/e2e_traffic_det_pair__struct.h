// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eTrafficDetPair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'e2e_decode_result'
#include "deva_perception_msgs/msg/detail/e2e_decode_result__struct.h"

/// Struct defined in msg/E2eTrafficDetPair in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eTrafficDetPair
{
  /// 取值参考TrafficE2eResult.msg
  uint8_t traffic_e2e_result;
  deva_perception_msgs__msg__E2eDecodeResult e2e_decode_result;
} deva_perception_msgs__msg__E2eTrafficDetPair;

// Struct for a sequence of deva_perception_msgs__msg__E2eTrafficDetPair.
typedef struct deva_perception_msgs__msg__E2eTrafficDetPair__Sequence
{
  deva_perception_msgs__msg__E2eTrafficDetPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eTrafficDetPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__STRUCT_H_
