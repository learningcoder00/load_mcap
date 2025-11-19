// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/EntranceArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE_ARRAY__STRUCT_H_

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
// Member 'entrance_array'
#include "deva_perception_msgs/msg/detail/entrance__struct.h"

/// Struct defined in msg/EntranceArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__EntranceArray
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__Entrance__Sequence entrance_array;
} deva_perception_msgs__msg__EntranceArray;

// Struct for a sequence of deva_perception_msgs__msg__EntranceArray.
typedef struct deva_perception_msgs__msg__EntranceArray__Sequence
{
  deva_perception_msgs__msg__EntranceArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__EntranceArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE_ARRAY__STRUCT_H_
