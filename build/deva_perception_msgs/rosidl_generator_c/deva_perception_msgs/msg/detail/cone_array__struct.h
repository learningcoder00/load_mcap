// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/ConeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE_ARRAY__STRUCT_H_

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
// Member 'cone_array'
#include "deva_perception_msgs/msg/detail/cone__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'translation'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/ConeArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__ConeArray
{
  std_msgs__msg__Header header;
  deva_perception_msgs__msg__Cone__Sequence cone_array;
  /// transform
  geometry_msgs__msg__Quaternion orientation;
  geometry_msgs__msg__Point translation;
} deva_perception_msgs__msg__ConeArray;

// Struct for a sequence of deva_perception_msgs__msg__ConeArray.
typedef struct deva_perception_msgs__msg__ConeArray__Sequence
{
  deva_perception_msgs__msg__ConeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__ConeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE_ARRAY__STRUCT_H_
