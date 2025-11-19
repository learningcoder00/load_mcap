// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/AssociatedInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'associated_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AssociatedInfo in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__AssociatedInfo
{
  int32_t associated_type;
  rosidl_runtime_c__String associated_id;
} deva_perception_msgs__msg__AssociatedInfo;

// Struct for a sequence of deva_perception_msgs__msg__AssociatedInfo.
typedef struct deva_perception_msgs__msg__AssociatedInfo__Sequence
{
  deva_perception_msgs__msg__AssociatedInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__AssociatedInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__STRUCT_H_
