// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/BindResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__STRUCT_H_

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
  deva_perception_msgs__msg__BindResult__FAIL = 0
};

/// Constant 'LEFT'.
/**
  * 0x1: 绑定左车道线
 */
enum
{
  deva_perception_msgs__msg__BindResult__LEFT = 1
};

/// Constant 'MID'.
/**
  * 0x2: 绑定中间
 */
enum
{
  deva_perception_msgs__msg__BindResult__MID = 2
};

/// Constant 'RIGHT'.
/**
  * 0x3: 绑定右车道线
 */
enum
{
  deva_perception_msgs__msg__BindResult__RIGHT = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'result'
#include "deva_perception_msgs/msg/detail/perception_result__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/BindResult in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__BindResult
{
  std_msgs__msg__Header header;
  /// 锥桶2d框
  /// deva_common_msgs/BoundingBox bbox
  deva_perception_msgs__msg__PerceptionResult result;
  /// obstacle id. 区别不同实体
  uint32_t id;
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
} deva_perception_msgs__msg__BindResult;

// Struct for a sequence of deva_perception_msgs__msg__BindResult.
typedef struct deva_perception_msgs__msg__BindResult__Sequence
{
  deva_perception_msgs__msg__BindResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__BindResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__STRUCT_H_
