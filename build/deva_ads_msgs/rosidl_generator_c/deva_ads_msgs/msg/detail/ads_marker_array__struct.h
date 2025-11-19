// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_ads_msgs:msg/AdsMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__STRUCT_H_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uuid'
// Member 'classes'
#include "rosidl_runtime_c/string.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'markers'
#include "deva_ads_msgs/msg/detail/ads_marker__struct.h"

/// Struct defined in msg/AdsMarkerArray in the package deva_ads_msgs.
/**
  * uuid：相同绘制对象提供一个唯一标识符 不同帧的相同对象id应该一致
 */
typedef struct deva_ads_msgs__msg__AdsMarkerArray
{
  rosidl_runtime_c__String uuid;
  rosidl_runtime_c__String classes;
  /// 颜色信息
  std_msgs__msg__ColorRGBA color;
  /// width：对于 circle 表示半径，polyline 表示线宽  单位m
  float width;
  /// height：polygon 障碍物的高 单位m
  float height;
  /// 这一帧显示的marker_type得集合
  /// 因为正常 stream都是一种类型的集合 所以结构一组类型对应一组markers
  deva_ads_msgs__msg__AdsMarker__Sequence markers;
} deva_ads_msgs__msg__AdsMarkerArray;

// Struct for a sequence of deva_ads_msgs__msg__AdsMarkerArray.
typedef struct deva_ads_msgs__msg__AdsMarkerArray__Sequence
{
  deva_ads_msgs__msg__AdsMarkerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_ads_msgs__msg__AdsMarkerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__STRUCT_H_
