// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_KEEPING'.
/**
  * 最终被选中的PolicyScenario的behavior_type
 */
enum
{
  deva_planning_msgs2__msg__StateContext__LANE_KEEPING = 0
};

/// Constant 'RIGHT_CHANGE'.
enum
{
  deva_planning_msgs2__msg__StateContext__RIGHT_CHANGE = 1
};

/// Constant 'LEFT_CHANGE'.
enum
{
  deva_planning_msgs2__msg__StateContext__LEFT_CHANGE = 2
};

/// Constant 'HOLD'.
enum
{
  deva_planning_msgs2__msg__StateContext__HOLD = 3
};

/// Constant 'CANCEL'.
enum
{
  deva_planning_msgs2__msg__StateContext__CANCEL = 4
};

/// Constant 'LANE_CHANGE'.
enum
{
  deva_planning_msgs2__msg__StateContext__LANE_CHANGE = 5
};

/// Constant 'RIGHT_CHANGE_PREPARE'.
enum
{
  deva_planning_msgs2__msg__StateContext__RIGHT_CHANGE_PREPARE = 6
};

/// Constant 'LEFT_CHANGE_PREPARE'.
enum
{
  deva_planning_msgs2__msg__StateContext__LEFT_CHANGE_PREPARE = 7
};

/// Constant 'UNKNOWN'.
enum
{
  deva_planning_msgs2__msg__StateContext__UNKNOWN = 8
};

/// Constant 'TAKE_OVER'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAKE_OVER = 9
};

/// Constant 'ROUTING_NULL'.
enum
{
  deva_planning_msgs2__msg__StateContext__ROUTING_NULL = 0
};

/// Constant 'INCREASED_ROAD'.
enum
{
  deva_planning_msgs2__msg__StateContext__INCREASED_ROAD = 1
};

/// Constant 'LANE'.
enum
{
  deva_planning_msgs2__msg__StateContext__LANE = 2
};

/// Constant 'OSM'.
enum
{
  deva_planning_msgs2__msg__StateContext__OSM = 3
};

/// Constant 'ROAD'.
enum
{
  deva_planning_msgs2__msg__StateContext__ROAD = 4
};

/// Constant 'SDK_NAVI'.
enum
{
  deva_planning_msgs2__msg__StateContext__SDK_NAVI = 5
};

/// Constant 'SDK_CRUISE'.
enum
{
  deva_planning_msgs2__msg__StateContext__SDK_CRUISE = 6
};

/// Constant 'WEB'.
enum
{
  deva_planning_msgs2__msg__StateContext__WEB = 7
};

/// Constant 'U_TURN'.
enum
{
  deva_planning_msgs2__msg__StateContext__U_TURN = 0
};

/// Constant 'TURN_LEFT'.
enum
{
  deva_planning_msgs2__msg__StateContext__TURN_LEFT = 1
};

/// Constant 'TURN_RIGHT'.
enum
{
  deva_planning_msgs2__msg__StateContext__TURN_RIGHT = 2
};

/// Constant 'LEFT_TURN_WAITING_AREA'.
enum
{
  deva_planning_msgs2__msg__StateContext__LEFT_TURN_WAITING_AREA = 3
};

/// Constant 'RIGHT_TURN_WAITING_AREA'.
enum
{
  deva_planning_msgs2__msg__StateContext__RIGHT_TURN_WAITING_AREA = 4
};

/// Constant 'STRAIGHT_AHEAD_WAITING_AREA'.
enum
{
  deva_planning_msgs2__msg__StateContext__STRAIGHT_AHEAD_WAITING_AREA = 5
};

/// Constant 'GO_STRAIGHT'.
enum
{
  deva_planning_msgs2__msg__StateContext__GO_STRAIGHT = 6
};

/// Constant 'NONE'.
enum
{
  deva_planning_msgs2__msg__StateContext__NONE = 0
};

/// Constant 'TURN_LEVER'.
enum
{
  deva_planning_msgs2__msg__StateContext__TURN_LEVER = 1
};

/// Constant 'OVERTAKE'.
enum
{
  deva_planning_msgs2__msg__StateContext__OVERTAKE = 2
};

/// Constant 'NAVIGATION'.
enum
{
  deva_planning_msgs2__msg__StateContext__NAVIGATION = 3
};

/// Constant 'OBSTACLE'.
enum
{
  deva_planning_msgs2__msg__StateContext__OBSTACLE = 4
};

/// Constant 'TAG_UNKNOWN'.
/**
  * 最终被选中的PolicyScenario的障碍物决策tag
  * 增加新tag不必须修改msg文件，在文档中约定好uint8数字对应的tag即可
 */
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_UNKNOWN = 0
};

/// Constant 'TAG_FOLLOW'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_FOLLOW = 1
};

/// Constant 'TAG_OVERTAKE'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_OVERTAKE = 2
};

/// Constant 'TAG_LEFT_PASS'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_LEFT_PASS = 3
};

/// Constant 'TAG_RIGHT_PASS'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_RIGHT_PASS = 4
};

/// Constant 'TAG_PRE_DECELERATE'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_PRE_DECELERATE = 5
};

/// Constant 'TAG_PRE_OVERTAKE_LEFT'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_PRE_OVERTAKE_LEFT = 6
};

/// Constant 'TAG_PRE_OVERTAKE_RIGHT'.
enum
{
  deva_planning_msgs2__msg__StateContext__TAG_PRE_OVERTAKE_RIGHT = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'front_obstacle_id'
// Member 'rear_obstacle_id'
#include "rosidl_runtime_c/string.h"
// Member 'mcts_trees'
#include "deva_planning_msgs2/msg/detail/policy_scenario__struct.h"
// Member 'tagged_obstacle'
#include "deva_planning_msgs2/msg/detail/u_int2_string__struct.h"
// Member 'lane_bind_infos'
#include "deva_planning_msgs2/msg/detail/lane_bind_info__struct.h"
// Member 'ego_sl_on_ref_lines'
#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__struct.h"
// Member 'scalable_flags'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.h"
// Member 'scalable_stream'
#include "deva_planning_msgs2/msg/detail/string2_u_int__struct.h"

/// Struct defined in msg/StateContext in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__StateContext
{
  std_msgs__msg__Header header;
  uint8_t behavior_type;
  uint8_t routing_mode;
  uint8_t current_turn_type;
  int32_t use_mdriver_ego;
  int32_t target_line_id;
  int32_t current_line_id;
  /// gap info
  rosidl_runtime_c__String front_obstacle_id;
  rosidl_runtime_c__String rear_obstacle_id;
  uint8_t lane_change_task;
  /// 【核心决策信息】
  int32_t best_tree_id;
  deva_planning_msgs2__msg__PolicyScenario__Sequence mcts_trees;
  /// [key: tag, value: obs_id]
  deva_planning_msgs2__msg__UInt2String__Sequence tagged_obstacle;
  /// 车道线绑定关系和sl投影
  deva_planning_msgs2__msg__LaneBindInfo__Sequence lane_bind_infos;
  /// 自车在每条被关注的车道上的SL
  deva_planning_msgs2__msg__Ref2SLBoundary__Sequence ego_sl_on_ref_lines;
  /// 变道取消原因，使用 bitmask 表示
  /// bit0 (0001): NAVIGATION_CANCEL
  /// bit1 (0010): RISK_CANCEL
  /// bit2 (0100): LINE_VIOLATION_CANCEL
  uint8_t lane_change_cancel_reason;
  /// 可扩展的标志位
  rosidl_runtime_c__uint8__Sequence scalable_flags;
  /// 可扩展的键值对
  deva_planning_msgs2__msg__String2String__Sequence scalable_multimap;
  /// 可扩展的二进制流
  deva_planning_msgs2__msg__String2UInt__Sequence scalable_stream;
} deva_planning_msgs2__msg__StateContext;

// Struct for a sequence of deva_planning_msgs2__msg__StateContext.
typedef struct deva_planning_msgs2__msg__StateContext__Sequence
{
  deva_planning_msgs2__msg__StateContext * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__StateContext__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__STRUCT_H_
