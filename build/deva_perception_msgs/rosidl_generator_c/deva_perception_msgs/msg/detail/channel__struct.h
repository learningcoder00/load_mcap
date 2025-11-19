// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ETC'.
enum
{
  deva_perception_msgs__msg__Channel__ETC = 1ul
};

/// Constant 'MANUAL'.
enum
{
  deva_perception_msgs__msg__Channel__MANUAL = 2ul
};

/// Constant 'ETCORMANUAL'.
enum
{
  deva_perception_msgs__msg__Channel__ETCORMANUAL = 3ul
};

/// Constant 'CLOSE'.
enum
{
  deva_perception_msgs__msg__Channel__CLOSE = 4ul
};

/// Constant 'REVERSE'.
enum
{
  deva_perception_msgs__msg__Channel__REVERSE = 5ul
};

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.h"
// Member 'extra_info'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"

/// Struct defined in msg/Channel in the package deva_perception_msgs.
/**
  * id. 区别不同实体
 */
typedef struct deva_perception_msgs__msg__Channel
{
  uint32_t id;
  /// 单位都是标准单位. m
  /// 位置 朝向
  geometry_msgs__msg__Pose pose;
  /// 尺寸. 即长宽高
  geometry_msgs__msg__Vector3 dimensions;
  /// 置信度
  double score;
  double last_observation_depth;
  /// 交通通道属性
  uint32_t type;
  /// 2d 框. 如果需要的话
  deva_common_msgs__msg__BoundingBox2d bbox2d;
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_info;
} deva_perception_msgs__msg__Channel;

// Struct for a sequence of deva_perception_msgs__msg__Channel.
typedef struct deva_perception_msgs__msg__Channel__Sequence
{
  deva_perception_msgs__msg__Channel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Channel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__STRUCT_H_
