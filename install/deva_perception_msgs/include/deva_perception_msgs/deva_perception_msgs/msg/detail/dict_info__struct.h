// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/DictInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DICT_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DICT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DictInfo in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__DictInfo
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} deva_perception_msgs__msg__DictInfo;

// Struct for a sequence of deva_perception_msgs__msg__DictInfo.
typedef struct deva_perception_msgs__msg__DictInfo__Sequence
{
  deva_perception_msgs__msg__DictInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__DictInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DICT_INFO__STRUCT_H_
