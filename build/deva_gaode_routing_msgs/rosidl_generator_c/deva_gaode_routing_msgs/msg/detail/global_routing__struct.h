// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/GlobalRouting.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'version'
// Member 'md5'
#include "rosidl_runtime_c/string.h"
// Member 'start_point'
// Member 'way_points'
// Member 'end_point'
// Member 'cur_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.h"
// Member 'locate_step'
// Member 'forward_step'
#include "deva_gaode_routing_msgs/msg/detail/web_step__struct.h"
// Member 'call_back'
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__struct.h"
// Member 'vocal_info'
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__struct.h"
// Member 'global_path'
#include "deva_gaode_routing_msgs/msg/detail/global_path_msg__struct.h"

/// Struct defined in msg/GlobalRouting in the package deva_gaode_routing_msgs.
/**
  * 本消息用于读取安卓高德地图导航信息，发送到planning
 */
typedef struct deva_gaode_routing_msgs__msg__GlobalRouting
{
  std_msgs__msg__Header header;
  /// 版本信息
  rosidl_runtime_c__String version;
  /// 可用状态, 一次更新
  bool status;
  /// 策略更新标志，用于rerouting更新, 一次更新
  rosidl_runtime_c__String md5;
  /// 巡航模式，导航模式等, 一次更新
  uint32_t mode;
  /// 起点, 一次更新
  deva_gaode_routing_msgs__msg__WebPoint start_point;
  /// 途经点, 一次更新
  deva_gaode_routing_msgs__msg__WebPoint__Sequence way_points;
  /// 终点, 一次更新
  deva_gaode_routing_msgs__msg__WebPoint end_point;
  /// 全局行驶距离, 一次更新
  float distance;
  /// 全局行驶时间, 一次更新
  float time;
  /// 总共的step的步数, 一次更新
  int32_t step_num;
  /// 当前所在的大的导航位置（对应高德里的step）, 阶段更新
  deva_gaode_routing_msgs__msg__WebStep locate_step;
  /// 下一个大的导航位置（对应高德里的step）, 阶段更新
  deva_gaode_routing_msgs__msg__WebStep forward_step;
  /// 总的经过红绿灯的数目, 一次更新
  int32_t traffic_light_count;
  /// 全程回调信息, 实时更新
  deva_gaode_routing_msgs__msg__WebCallBack call_back;
  /// 语音回调,实时更新
  deva_gaode_routing_msgs__msg__WebVocalRecMsg vocal_info;
  /// 全局导航信息
  deva_gaode_routing_msgs__msg__GlobalPathMsg global_path;
  /// SD_PRO信息
  /// SdProMap sd_pro_map
  /// adasis v2
  /// AdasisMap adasis_v2
  /// 当前车辆坐标点
  deva_gaode_routing_msgs__msg__WebPoint cur_point;
  /// 轨迹航向角，取值范围：【0，360】，其中0度表示正北方向，90度表示正东，180度表示正南，270度表示正西
  double orientation;
  /// 当前车速，单位： m/s
  float speed;
} deva_gaode_routing_msgs__msg__GlobalRouting;

// Struct for a sequence of deva_gaode_routing_msgs__msg__GlobalRouting.
typedef struct deva_gaode_routing_msgs__msg__GlobalRouting__Sequence
{
  deva_gaode_routing_msgs__msg__GlobalRouting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__GlobalRouting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__STRUCT_H_
