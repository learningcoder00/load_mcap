// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/OCCVisualization.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__STRUCT_H_

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
// Member 'lidar_header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'points_type'
// Member 'image_points_contours'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/OCCVisualization in the package deva_perception_msgs.
/**
  * cam_front_120的时间戳 
 */
typedef struct deva_perception_msgs__msg__OCCVisualization
{
  deva_common_msgs__msg__Header header;
  /// lidar时间戳，用于和/perception/detection/static_obstacle_result对齐
  deva_common_msgs__msg__Header lidar_header;
  /// shape: n个type值, n = 304x816, 每个值为[0,1,2,3]其中的一个，代表该点的type.
  /// freespace 1， 动态 2， 静态 3, unknow 0
  rosidl_runtime_c__uint8__Sequence points_type;
  /// points_type index 到 rfu坐标映射参数
  /// voxel_size = {0.1, 0.1}
  /// pc_range = {-15.2, 0}
  /// 共4个element，前两个为voxel_size，后两个为pc_range。
  /// points_type index to rfu的映射方式为：
  /// int x = i % 304; (304为points_type的width)
  /// int y = i / 304;
  /// float xs = x * 0.1 - 15.2;（这里的0.1为voxel_size[0]，也就是voxel_pc_params[0]; -15.2为pc_range[0], 也就是voxel_pc_params[2]）
  /// float ys = y * 0.1 + 0.0; （这里的0.1为voxel_size[1]，也就是voxel_pc_params[1]; 0.0为pc_range[1], 也就是voxel_pc_params[3]）
  /// 其中i为points_type的index，范围为0～248064（816x304）；xs和ys分别为rfu坐标的x和y
  float voxel_pc_params[4];
  /// shape: nx2个uint16, n不固定
  rosidl_runtime_c__double__Sequence image_points_contours;
  /// rfu坐标 到 pixel坐标的转换矩阵, 4x4 matrix, 也就是camera_front_120相机的 内参*外参
  double rfu_pixel_matrix[16];
  /// rfu坐标 到 世界坐标的转换矩阵
  double rfu_utm_matrix[16];
} deva_perception_msgs__msg__OCCVisualization;

// Struct for a sequence of deva_perception_msgs__msg__OCCVisualization.
typedef struct deva_perception_msgs__msg__OCCVisualization__Sequence
{
  deva_perception_msgs__msg__OCCVisualization * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__OCCVisualization__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__STRUCT_H_
