// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eCategory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_CATEGORY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_CATEGORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GREEN'.
enum
{
  deva_perception_msgs__msg__E2eCategory__GREEN = 0
};

/// Constant 'YELLOW'.
enum
{
  deva_perception_msgs__msg__E2eCategory__YELLOW = 1
};

/// Constant 'RED'.
enum
{
  deva_perception_msgs__msg__E2eCategory__RED = 2
};

/// Constant 'EMPTY'.
enum
{
  deva_perception_msgs__msg__E2eCategory__EMPTY = 3
};

/// Constant 'UNCLEAR'.
enum
{
  deva_perception_msgs__msg__E2eCategory__UNCLEAR = 4
};

/// Struct defined in msg/E2eCategory in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eCategory
{
  uint8_t structure_needs_at_least_one_member;
} deva_perception_msgs__msg__E2eCategory;

// Struct for a sequence of deva_perception_msgs__msg__E2eCategory.
typedef struct deva_perception_msgs__msg__E2eCategory__Sequence
{
  deva_perception_msgs__msg__E2eCategory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eCategory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_CATEGORY__STRUCT_H_
