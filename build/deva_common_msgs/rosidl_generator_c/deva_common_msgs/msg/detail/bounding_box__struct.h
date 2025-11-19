// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BoundingBox in the package deva_common_msgs.
/**
  * in pixels, starting from 0
  * for example:
  *
  *   0   1   2
  * 0 +---+---+
  *   |   |   |
  * 1 +---+---+
  *   |   |   |
  * 2 +---+---+
 */
typedef struct deva_common_msgs__msg__BoundingBox
{
  float xmin;
  float ymin;
  float xmax;
  float ymax;
} deva_common_msgs__msg__BoundingBox;

// Struct for a sequence of deva_common_msgs__msg__BoundingBox.
typedef struct deva_common_msgs__msg__BoundingBox__Sequence
{
  deva_common_msgs__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
