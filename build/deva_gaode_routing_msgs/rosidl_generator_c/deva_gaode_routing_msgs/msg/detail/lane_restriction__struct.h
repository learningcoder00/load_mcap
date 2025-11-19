// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LaneRestriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'limit_vehicle_type'
// Member 'special_time_type'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'restrict_time_period'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LaneRestriction in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LaneRestriction
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  /// 限制车辆类型  如果没有则为空
  rosidl_runtime_c__uint8__Sequence limit_vehicle_type;
  /// 该交限时间类型限制 时间限制
  rosidl_runtime_c__uint8__Sequence special_time_type;
  /// 该交限起作用的时间段信息 时间段描述字符
  rosidl_runtime_c__String restrict_time_period;
  /// 限制方向
  uint8_t lane_direction;
  /// 车道限制类型
  uint8_t lane_retriction_type;
  /// 作用开始位置 沿道路行驶方向，除10000表示[0,1]，例如30%~80%的限制范围位置区间，开始位置记为3000
  uint16_t lane_range_start;
  /// 作用结束位置 沿道路行驶方向，除10000表示[0,1]，例如30%~80%的限制范围位置区间，结束位置记为8000
  uint16_t lane_range_end;
} deva_gaode_routing_msgs__msg__LaneRestriction;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LaneRestriction.
typedef struct deva_gaode_routing_msgs__msg__LaneRestriction__Sequence
{
  deva_gaode_routing_msgs__msg__LaneRestriction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LaneRestriction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__STRUCT_H_
