// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'via_retain_dis'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'lane_info'
#include "deva_gaode_routing_msgs/msg/detail/web_lane__struct.h"
// Member 'camera_callback'
#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__struct.h"
// Member 'not_avoid_info'
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__struct.h"
// Member 'next_cross_info'
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__struct.h"
// Member 'traffic_light_cd'
#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__struct.h"
// Member 'parallel_road'
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__struct.h"
// Member 'cross_image'
#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__struct.h"

/// Struct defined in msg/WebCallBack in the package deva_gaode_routing_msgs.
/**
  * 标志回调信息更新与否, 实时更新
 */
typedef struct deva_gaode_routing_msgs__msg__WebCallBack
{
  int32_t index;
  /// 获取当前大路段索引, 实时更新
  int32_t cur_step;
  /// 获取自车所在小路段索引（对于巡航模式默认road是0）, 实时更新
  int32_t cur_road;
  /// 获取当前位置所在link上的点索引, 实时更新
  int32_t cur_point;
  /// 获取当前road剩余距离，实时更新
  double cur_road_retain_dis;
  /// 获取当前路段剩余距离, 实时更新
  double cur_step_retain_dis;
  /// 获取当前路段剩余时间, 实时更新
  double cur_step_retain_time;
  /// 获取到途经点距离，实时更新
  rosidl_runtime_c__double__Sequence via_retain_dis;
  /// 获取路线剩余距离, 实时更新
  double path_retain_dis;
  /// 获取路线剩余时间, 实时更新
  double path_retain_time;
  /// 当前道路转向图标, 实时更新
  int32_t trun_icon;
  /// 与trun_icon位置对应的剩余距离
  double trun_icon_retain_dis;
  /// 回调的lane info, 实时更新
  deva_gaode_routing_msgs__msg__WebLane lane_info;
  /// 道路限速抓拍信息
  deva_gaode_routing_msgs__msg__CameraCallbackInfo camera_callback;
  /// 环岛出口序号，不是个数
  int32_t ring_out_cnt;
  /// 环岛出口度数（0~360）
  int32_t roundabout_out_angle;
  /// 当前link的历史行驶速度
  int32_t cur_link_speed;
  /// 未避开的设施和禁行
  deva_gaode_routing_msgs__msg__WebNotAvoidInfo not_avoid_info;
  /// 路口转向ID，使用SDKStepForwardDirection
  int32_t cross_maneuver_id;
  /// 下个路口信息，需配置语音配置表才有
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence next_cross_info;
  /// 红绿灯状态
  deva_gaode_routing_msgs__msg__WebTrafficLight traffic_light_cd;
  /// 平行道路/高架上下信息
  deva_gaode_routing_msgs__msg__WebParallelRoad parallel_road;
  /// Ownership 判断内外部道路  0: 公共道路 1：内部道路 2：私有道路 3：地下停车场道路 4：立体停车场道路
  int32_t ownership;
  /// 当前道路限速
  uint32_t cur_road_limit_speed;
  /// 路口放大图
  deva_gaode_routing_msgs__msg__WebCrossImage cross_image;
  /// 当前路口行驶方向
  uint32_t cur_cross_dir;
  /// 自车到当前路口距离
  double cur_cross_dist;
} deva_gaode_routing_msgs__msg__WebCallBack;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebCallBack.
typedef struct deva_gaode_routing_msgs__msg__WebCallBack__Sequence
{
  deva_gaode_routing_msgs__msg__WebCallBack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebCallBack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__STRUCT_H_
