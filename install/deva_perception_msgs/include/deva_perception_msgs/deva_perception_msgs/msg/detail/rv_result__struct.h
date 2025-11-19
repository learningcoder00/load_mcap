// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_RESULT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_RESULT__STRUCT_H_

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
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'dynamic_obs_list'
#include "deva_perception_msgs/msg/detail/dynamic_obstacle_list__struct.h"
// Member 'fixed_obs_list'
#include "deva_perception_msgs/msg/detail/fixed_obstacle_list__struct.h"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"

/// Struct defined in msg/RVResult in the package deva_perception_msgs.
/**
  * 消息头
 */
typedef struct deva_perception_msgs__msg__RVResult
{
  deva_common_msgs__msg__Header header;
  /// 定位信息
  geometry_msgs__msg__Vector3 translation;
  geometry_msgs__msg__Quaternion orientation;
  /// 动态障碍物序列
  deva_perception_msgs__msg__DynamicObstacleList__Sequence dynamic_obs_list;
  /// 静态障碍物序列
  deva_perception_msgs__msg__FixedObstacleList__Sequence fixed_obs_list;
  /// 补充信息
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_infos;
} deva_perception_msgs__msg__RVResult;

// Struct for a sequence of deva_perception_msgs__msg__RVResult.
typedef struct deva_perception_msgs__msg__RVResult__Sequence
{
  deva_perception_msgs__msg__RVResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_RESULT__STRUCT_H_
