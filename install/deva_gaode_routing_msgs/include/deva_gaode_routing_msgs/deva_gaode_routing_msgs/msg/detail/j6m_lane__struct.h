// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/J6mLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_id'
// Member 'left_lane_marking_ids'
// Member 'right_lane_marking_ids'
// Member 'lane_successor_lane_ids'
// Member 'lane_predecessor_lane_ids'
// Member 'lane_referenced_roadobject_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'lane_speed_limit'
// Member 'lane_adas'
#include "rosidl_runtime_c/string.h"
// Member 'lane_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"

/// Struct defined in msg/J6mLane in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__J6mLane
{
  /// 车道原始数据Id
  deva_gaode_routing_msgs__msg__LinkIDType lane_id;
  /// 车道编号
  uint8_t lane_seq_num;
  /// 车道类型
  uint8_t lane_type;
  /// 车道限速
  rosidl_runtime_c__String lane_speed_limit;
  /// 车道最大宽度
  uint32_t lane_max_width;
  /// 车道最小宽度
  uint32_t lane_min_width;
  /// 车道左侧边线Id
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence left_lane_marking_ids;
  /// 车道右侧边线Id
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence right_lane_marking_ids;
  /// 车道adas 包括曲率，航向
  rosidl_runtime_c__String lane_adas;
  /// 车道长度
  uint32_t lane_length;
  /// 车道指引方向
  uint8_t lane_turn_direction;
  /// 车道置信度
  uint32_t lane_confidence;
  /// 车道行驶方向
  uint8_t lane_travel_direction;
  /// 车道经验车速
  uint8_t lane_empir_speed;
  /// 车道经验通行轨迹数
  uint8_t lane_empir_traj_count;
  /// 车道所属linkid
  uint64_t lane_host_link_id;
  /// 车道所属link类型
  uint8_t lane_host_link_type;
  /// 车道后继laneId列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence lane_successor_lane_ids;
  /// 车道前驱laneId列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence lane_predecessor_lane_ids;
  /// 车道关联roadObjectId列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence lane_referenced_roadobject_ids;
  /// 车道几何
  deva_gaode_routing_msgs__msg__Coordinate__Sequence lane_coordinates;
} deva_gaode_routing_msgs__msg__J6mLane;

// Struct for a sequence of deva_gaode_routing_msgs__msg__J6mLane.
typedef struct deva_gaode_routing_msgs__msg__J6mLane__Sequence
{
  deva_gaode_routing_msgs__msg__J6mLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__J6mLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__STRUCT_H_
