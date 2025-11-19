// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/FreespacePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FreespacePoint in the package deva_perception_msgs.
/**
  * 障碍物相对于ego垂心的rfu坐标系
  *
  *               y axis
  *                ^
  *                     |
  *                  *  |  *
  *               *     |     *
  *        \    *       |       *    /
  *          \ *     range(r)    * /
  *            \        |        /
  *              \      |      /
  *                \    |    /
  *                  \  |  /         x axis
  *                     --------------->
 */
typedef struct deva_perception_msgs__msg__FreespacePoint
{
  double x;
  double y;
  double z;
  double rfu_x;
  double rfu_y;
  double rfu_z;
  double azim;
  double range;
  /// 0x0: Static
  /// 0x1: Vehicle
  /// 0x2: Large vehicle
  /// 0x3: Bicyle
  /// 0x4: Pedestrian
  uint8_t class_type;
  uint32_t ins_id;
  uint8_t visible;
} deva_perception_msgs__msg__FreespacePoint;

// Struct for a sequence of deva_perception_msgs__msg__FreespacePoint.
typedef struct deva_perception_msgs__msg__FreespacePoint__Sequence
{
  deva_perception_msgs__msg__FreespacePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__FreespacePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__STRUCT_H_
