// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eDecodeBroadResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/E2eDecodeBroadResult in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eDecodeBroadResult
{
  uint8_t pred_category;
  float pred_score;
} deva_perception_msgs__msg__E2eDecodeBroadResult;

// Struct for a sequence of deva_perception_msgs__msg__E2eDecodeBroadResult.
typedef struct deva_perception_msgs__msg__E2eDecodeBroadResult__Sequence
{
  deva_perception_msgs__msg__E2eDecodeBroadResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eDecodeBroadResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__STRUCT_H_
