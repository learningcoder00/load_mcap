// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/BroadCategory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BROAD_CATEGORY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BROAD_CATEGORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNEMPTY'.
enum
{
  deva_perception_msgs__msg__BroadCategory__UNEMPTY = 0
};

/// Constant 'EMPTY'.
enum
{
  deva_perception_msgs__msg__BroadCategory__EMPTY = 1
};

/// Struct defined in msg/BroadCategory in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__BroadCategory
{
  uint8_t structure_needs_at_least_one_member;
} deva_perception_msgs__msg__BroadCategory;

// Struct for a sequence of deva_perception_msgs__msg__BroadCategory.
typedef struct deva_perception_msgs__msg__BroadCategory__Sequence
{
  deva_perception_msgs__msg__BroadCategory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__BroadCategory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BROAD_CATEGORY__STRUCT_H_
