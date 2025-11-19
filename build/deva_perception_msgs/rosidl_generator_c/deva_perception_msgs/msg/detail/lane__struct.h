// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * 车道线属性，取值如下:
  * 0x0: 其他
 */
enum
{
  deva_perception_msgs__msg__Lane__UNKNOWN = 0
};

/// Constant 'DOTTED_YELLOW'.
/**
  * 0x1: 黄色虚线
 */
enum
{
  deva_perception_msgs__msg__Lane__DOTTED_YELLOW = 1
};

/// Constant 'DOTTED_WHITE'.
/**
  * 0x2: 白色虚线
 */
enum
{
  deva_perception_msgs__msg__Lane__DOTTED_WHITE = 2
};

/// Constant 'SOLID_YELLOW'.
/**
  * 0x3: 黄色实线
 */
enum
{
  deva_perception_msgs__msg__Lane__SOLID_YELLOW = 3
};

/// Constant 'SOLID_WHITE'.
/**
  * 0x4: 白色实线
 */
enum
{
  deva_perception_msgs__msg__Lane__SOLID_WHITE = 4
};

/// Constant 'DOUBLE_YELLOW'.
/**
  * 0x5: 双黄线
 */
enum
{
  deva_perception_msgs__msg__Lane__DOUBLE_YELLOW = 5
};

/// Constant 'CURB'.
/**
  * 0x6: 路沿
 */
enum
{
  deva_perception_msgs__msg__Lane__CURB = 6
};

/// Constant 'GUARDRAIL'.
/**
  * 0x7: 栏杆
 */
enum
{
  deva_perception_msgs__msg__Lane__GUARDRAIL = 7
};

/// Constant 'NORMAL'.
/**
  * 分叉线属性，取值如下:
  * 0x0: 非叉线
 */
enum
{
  deva_perception_msgs__msg__Lane__NORMAL = 0
};

/// Constant 'SPLIT'.
/**
  * 0x1: 分叉线
 */
enum
{
  deva_perception_msgs__msg__Lane__SPLIT = 1
};

/// Constant 'MERGE'.
/**
  * 0x2: 合流线
 */
enum
{
  deva_perception_msgs__msg__Lane__MERGE = 2
};

// Include directives for member types
// Member 'imagepoints'
// Member 'rv_fork_point'
#include "deva_common_msgs/msg/detail/point2d__struct.h"
// Member 'waypoints'
// Member 'waypoints_extend'
// Member 'bev_fork_point'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'lane_xy'
// Member 'lane_xz'
#include "deva_common_msgs/msg/detail/line2d__struct.h"

/// Struct defined in msg/Lane in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__Lane
{
  double confidence;
  /// 禁止使用id 0！！！
  uint32_t lane_id;
  /// id为0表示无左/右车道！！！
  uint32_t left_lane_id;
  uint32_t right_lane_id;
  uint32_t fork_lane_id;
  /// 像素坐标系
  deva_common_msgs__msg__Point2d__Sequence imagepoints;
  /// 像素坐标系v轴最小值
  uint32_t v_min;
  /// 像素坐标系v轴最大值
  uint32_t v_max;
  /// ego 坐标系
  geometry_msgs__msg__Point__Sequence waypoints;
  /// ego坐标系x轴最小值
  double x_min;
  /// ego坐标系x轴最大值
  double x_max;
  /// ego 坐标系
  geometry_msgs__msg__Point__Sequence waypoints_extend;
  /// 延长车道线ego坐标系x轴最小值
  double x_min_extend;
  /// 延长车道线ego坐标系x轴最大值
  double x_max_extend;
  uint8_t lane_property;
  uint8_t fork_property;
  deva_common_msgs__msg__Point2d rv_fork_point;
  geometry_msgs__msg__Point bev_fork_point;
  /// 拟合 ego 坐标系车道线下的样条曲线.
  /// lane_xy: xy平面下拟合曲线， lane_xz: xz平面下拟合曲线
  /// x_min, x_max 分别为取样的上界和下界
  deva_common_msgs__msg__Line2d lane_xy;
  deva_common_msgs__msg__Line2d lane_xz;
} deva_perception_msgs__msg__Lane;

// Struct for a sequence of deva_perception_msgs__msg__Lane.
typedef struct deva_perception_msgs__msg__Lane__Sequence
{
  deva_perception_msgs__msg__Lane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Lane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__STRUCT_H_
