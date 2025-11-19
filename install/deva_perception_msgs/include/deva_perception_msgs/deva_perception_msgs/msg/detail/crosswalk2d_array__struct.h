// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Crosswalk2dArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FOV120'.
/**
  * 数据源
 */
enum
{
  deva_perception_msgs__msg__Crosswalk2dArray__FOV120 = 0
};

/// Constant 'FOV30'.
enum
{
  deva_perception_msgs__msg__Crosswalk2dArray__FOV30 = 1
};

/// Constant 'BACK'.
enum
{
  deva_perception_msgs__msg__Crosswalk2dArray__BACK = 2
};

// Include directives for member types
// Member 'crosswalk_2ds'
#include "deva_perception_msgs/msg/detail/crosswalk2d__struct.h"

/// Struct defined in msg/Crosswalk2dArray in the package deva_perception_msgs.
/**
  * 2D斑马线序列
 */
typedef struct deva_perception_msgs__msg__Crosswalk2dArray
{
  deva_perception_msgs__msg__Crosswalk2d__Sequence crosswalk_2ds;
  uint8_t source;
} deva_perception_msgs__msg__Crosswalk2dArray;

// Struct for a sequence of deva_perception_msgs__msg__Crosswalk2dArray.
typedef struct deva_perception_msgs__msg__Crosswalk2dArray__Sequence
{
  deva_perception_msgs__msg__Crosswalk2dArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Crosswalk2dArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__STRUCT_H_
