// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'broadcategory'
#include "deva_perception_msgs/msg/detail/e2e_decode_broad_result__struct.h"
// Member 'turn_around'
// Member 'left'
// Member 'straight'
// Member 'right'
#include "deva_perception_msgs/msg/detail/e2e_decode_result__struct.h"

/// Struct defined in msg/E2eResult in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eResult
{
  deva_perception_msgs__msg__E2eDecodeBroadResult broadcategory;
  deva_perception_msgs__msg__E2eDecodeResult turn_around;
  deva_perception_msgs__msg__E2eDecodeResult left;
  deva_perception_msgs__msg__E2eDecodeResult straight;
  deva_perception_msgs__msg__E2eDecodeResult right;
} deva_perception_msgs__msg__E2eResult;

// Struct for a sequence of deva_perception_msgs__msg__E2eResult.
typedef struct deva_perception_msgs__msg__E2eResult__Sequence
{
  deva_perception_msgs__msg__E2eResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__STRUCT_H_
