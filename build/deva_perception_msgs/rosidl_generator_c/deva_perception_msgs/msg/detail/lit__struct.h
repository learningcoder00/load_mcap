// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Lit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LIT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
/**
  * 空值
 */
enum
{
  deva_perception_msgs__msg__Lit__NONE = 0
};

/// Constant 'DARK'.
/**
  * 黑暗场景
 */
enum
{
  deva_perception_msgs__msg__Lit__DARK = 1
};

/// Constant 'BRIGHT'.
/**
  * 明亮场景
 */
enum
{
  deva_perception_msgs__msg__Lit__BRIGHT = 2
};

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Lit in the package deva_perception_msgs.
/**
  * 消息头
 */
typedef struct deva_perception_msgs__msg__Lit
{
  deva_common_msgs__msg__Header header;
  uint8_t lit_area;
  float brightness;
} deva_perception_msgs__msg__Lit;

// Struct for a sequence of deva_perception_msgs__msg__Lit.
typedef struct deva_perception_msgs__msg__Lit__Sequence
{
  deva_perception_msgs__msg__Lit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Lit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LIT__STRUCT_H_
