// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Cone.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FAIL'.
/**
  * 锥桶绑定属性，取值如下:
  * 0x0: 绑定车道线失败
 */
enum
{
  deva_perception_msgs__msg__Cone__FAIL = 0
};

/// Constant 'LEFT'.
/**
  * 0x1: 绑定左车道线
 */
enum
{
  deva_perception_msgs__msg__Cone__LEFT = 1
};

/// Constant 'MID'.
/**
  * 0x2: 绑定中间
 */
enum
{
  deva_perception_msgs__msg__Cone__MID = 2
};

/// Constant 'RIGHT'.
/**
  * 0x3: 绑定右车道线
 */
enum
{
  deva_perception_msgs__msg__Cone__RIGHT = 3
};

// Include directives for member types
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Cone in the package deva_perception_msgs.
/**
  * obstacle id. 区别不同实体
 */
typedef struct deva_perception_msgs__msg__Cone
{
  uint32_t id;
  /// 锥桶2d框
  deva_common_msgs__msg__BoundingBox2d bbox2d;
  /// 是否有3D框
  bool with_bev_info;
  /// 位置 朝向
  geometry_msgs__msg__Pose pose;
  /// 尺寸. 即长宽高
  geometry_msgs__msg__Vector3 dimensions;
  uint8_t bind_type;
  /// 置信度
  double score;
  /// 纵向距离
  double vertical_distance;
  /// 锥桶左右车道线id和距离
  /// id为0表示无左/右车道！！！
  uint32_t left_lane_id;
  uint32_t right_lane_id;
  double left_lane_distance;
  double right_lane_distance;
} deva_perception_msgs__msg__Cone;

// Struct for a sequence of deva_perception_msgs__msg__Cone.
typedef struct deva_perception_msgs__msg__Cone__Sequence
{
  deva_perception_msgs__msg__Cone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Cone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE__STRUCT_H_
