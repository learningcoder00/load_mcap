// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/BoundingBox2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX2D__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX2D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BoundingBox2d in the package deva_common_msgs.
typedef struct deva_common_msgs__msg__BoundingBox2d
{
  /// 2D 框 图片维度
  /// 原生 geometry_msgs 只提供 Point3D. 2D box 需要自己定义.
  /// 坐标为占原图的尺寸. x, y 为bbox 左上角点
  uint32_t x;
  uint32_t y;
  uint32_t width;
  uint32_t height;
} deva_common_msgs__msg__BoundingBox2d;

// Struct for a sequence of deva_common_msgs__msg__BoundingBox2d.
typedef struct deva_common_msgs__msg__BoundingBox2d__Sequence
{
  deva_common_msgs__msg__BoundingBox2d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__BoundingBox2d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX2D__STRUCT_H_
