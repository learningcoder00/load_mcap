// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/Serialize.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__SERIALIZE__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__SERIALIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Serialize in the package deva_common_msgs.
typedef struct deva_common_msgs__msg__Serialize
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence data;
} deva_common_msgs__msg__Serialize;

// Struct for a sequence of deva_common_msgs__msg__Serialize.
typedef struct deva_common_msgs__msg__Serialize__Sequence
{
  deva_common_msgs__msg__Serialize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__Serialize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__SERIALIZE__STRUCT_H_
