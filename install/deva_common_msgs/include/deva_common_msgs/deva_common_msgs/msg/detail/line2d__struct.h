// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/Line2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POLY'.
/**
  * 0x0: 三次曲线
 */
enum
{
  deva_common_msgs__msg__Line2d__POLY = 0
};

/// Constant 'ARC'.
/**
  * 0x1: 圆弧曲线
 */
enum
{
  deva_common_msgs__msg__Line2d__ARC = 1
};

/// Struct defined in msg/Line2d in the package deva_common_msgs.
/**
  * 拟合线属性，取值如下:
 */
typedef struct deva_common_msgs__msg__Line2d
{
  uint8_t fit_property;
  /// 拟合三次曲线.
  /// y = f(x) = c3*x^3 + c2*x^2 + c1*x + c0
  /// 拟合圆弧曲线.
  /// circular curve:  (y-c1)^2 + (x-c0)^2 = c3 * c3
  ///                  c0 = x_0
  ///                  c1 = y_0
  ///                  c2 = sign(-1 or 1)
  ///                  c3 = r
  double c3;
  double c2;
  double c1;
  double c0;
} deva_common_msgs__msg__Line2d;

// Struct for a sequence of deva_common_msgs__msg__Line2d.
typedef struct deva_common_msgs__msg__Line2d__Sequence
{
  deva_common_msgs__msg__Line2d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__Line2d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__STRUCT_H_
