// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/FreespaceArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__STRUCT_H_

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
// Member 'freespace_array'
#include "deva_perception_msgs/msg/detail/freespace_point__struct.h"

/// Struct defined in msg/FreespaceArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__FreespaceArray
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__FreespacePoint__Sequence freespace_array;
} deva_perception_msgs__msg__FreespaceArray;

// Struct for a sequence of deva_perception_msgs__msg__FreespaceArray.
typedef struct deva_perception_msgs__msg__FreespaceArray__Sequence
{
  deva_perception_msgs__msg__FreespaceArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__FreespaceArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__STRUCT_H_
