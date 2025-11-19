// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/MdriverResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_RESULT__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_RESULT__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'worlds'
#include "deva_mdriver_msgs/msg/detail/m_world__struct.h"

/// Struct defined in msg/MdriverResult in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__MdriverResult
{
  deva_common_msgs__msg__Header header;
  deva_mdriver_msgs__msg__MWorld__Sequence worlds;
} deva_mdriver_msgs__msg__MdriverResult;

// Struct for a sequence of deva_mdriver_msgs__msg__MdriverResult.
typedef struct deva_mdriver_msgs__msg__MdriverResult__Sequence
{
  deva_mdriver_msgs__msg__MdriverResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__MdriverResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_RESULT__STRUCT_H_
