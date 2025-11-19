// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ori_ids'
#include "environment_model_msgs/msg/detail/pair_int__struct.h"
// Member 'e2e_pair'
#include "environment_model_msgs/msg/detail/pair_double__struct.h"
// Member 'exit_lane_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VirtualLineInfo in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__VirtualLineInfo
{
  uint8_t enum_vlane_type;
  double virtual_score;
  environment_model_msgs__msg__PairInt ori_ids;
  environment_model_msgs__msg__PairDouble e2e_pair;
  rosidl_runtime_c__String exit_lane_id;
  int32_t exit_seq_id;
} environment_model_msgs__msg__VirtualLineInfo;

// Struct for a sequence of environment_model_msgs__msg__VirtualLineInfo.
typedef struct environment_model_msgs__msg__VirtualLineInfo__Sequence
{
  environment_model_msgs__msg__VirtualLineInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__VirtualLineInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__STRUCT_H_
