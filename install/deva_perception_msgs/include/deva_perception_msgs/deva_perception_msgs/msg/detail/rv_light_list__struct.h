// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVLightList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__STRUCT_H_

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
  deva_perception_msgs__msg__RVLightList__FOV120 = 0
};

/// Constant 'FOV30'.
enum
{
  deva_perception_msgs__msg__RVLightList__FOV30 = 1
};

/// Constant 'FUSION'.
enum
{
  deva_perception_msgs__msg__RVLightList__FUSION = 2
};

// Include directives for member types
// Member 'lights'
#include "deva_perception_msgs/msg/detail/rv_light__struct.h"

/// Struct defined in msg/RVLightList in the package deva_perception_msgs.
/**
  * 车灯序列
 */
typedef struct deva_perception_msgs__msg__RVLightList
{
  deva_perception_msgs__msg__RVLight__Sequence lights;
  uint8_t source;
} deva_perception_msgs__msg__RVLightList;

// Struct for a sequence of deva_perception_msgs__msg__RVLightList.
typedef struct deva_perception_msgs__msg__RVLightList__Sequence
{
  deva_perception_msgs__msg__RVLightList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVLightList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__STRUCT_H_
