// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_ads_msgs:msg/AdsMarker.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__STRUCT_H_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'text'
#include "rosidl_runtime_c/string.h"
// Member 'detail'
#include "deva_ads_msgs/msg/detail/ads_info__struct.h"

/// Struct defined in msg/AdsMarker in the package deva_ads_msgs.
/**
  * points：点集   ego坐标
  *  - point: 仅取第一点即可
  *  - circle: 取第一点为圆心
  *  - polyline: 取所有点连成线
  *  - polygon :n个点 连线成的底面 比如四个点代表车障碍物的底面 ads会和高度拼接成一个box
  *  - text: 取第一个点为文本位置
 */
typedef struct deva_ads_msgs__msg__AdsMarker
{
  geometry_msgs__msg__Point__Sequence points;
  /// string type专属值
  rosidl_runtime_c__String text;
  /// 是否可点击  当前协议在障碍物和车道线使用  比如障碍物点击 显示物体信息的框
  bool clickable;
  /// 如果可点击 则展示里面的详细信息 k-v结构
  deva_ads_msgs__msg__AdsInfo__Sequence detail;
} deva_ads_msgs__msg__AdsMarker;

// Struct for a sequence of deva_ads_msgs__msg__AdsMarker.
typedef struct deva_ads_msgs__msg__AdsMarker__Sequence
{
  deva_ads_msgs__msg__AdsMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_ads_msgs__msg__AdsMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__STRUCT_H_
