// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_KEEPING'.
enum
{
  deva_planning_msgs__msg__StateContext__LANE_KEEPING = 0
};

/// Constant 'RIGHT_CHANGE'.
enum
{
  deva_planning_msgs__msg__StateContext__RIGHT_CHANGE = 1
};

/// Constant 'LEFT_CHANGE'.
enum
{
  deva_planning_msgs__msg__StateContext__LEFT_CHANGE = 2
};

/// Constant 'HOLD'.
enum
{
  deva_planning_msgs__msg__StateContext__HOLD = 3
};

/// Constant 'CANCEL'.
enum
{
  deva_planning_msgs__msg__StateContext__CANCEL = 4
};

/// Constant 'LANE_CHANGE'.
enum
{
  deva_planning_msgs__msg__StateContext__LANE_CHANGE = 5
};

/// Constant 'RIGHT_CHANGE_PREPARE'.
enum
{
  deva_planning_msgs__msg__StateContext__RIGHT_CHANGE_PREPARE = 6
};

/// Constant 'LEFT_CHANGE_PREPARE'.
enum
{
  deva_planning_msgs__msg__StateContext__LEFT_CHANGE_PREPARE = 7
};

/// Constant 'UNKNOWN'.
enum
{
  deva_planning_msgs__msg__StateContext__UNKNOWN = 8
};

/// Constant 'TAKE_OVER'.
enum
{
  deva_planning_msgs__msg__StateContext__TAKE_OVER = 9
};

/// Constant 'MAP_NULL'.
enum
{
  deva_planning_msgs__msg__StateContext__MAP_NULL = 0
};

/// Constant 'ACC'.
enum
{
  deva_planning_msgs__msg__StateContext__ACC = 1
};

/// Constant 'ICC'.
enum
{
  deva_planning_msgs__msg__StateContext__ICC = 2
};

/// Constant 'NOA'.
enum
{
  deva_planning_msgs__msg__StateContext__NOA = 3
};

/// Constant 'ROUTING_NULL'.
enum
{
  deva_planning_msgs__msg__StateContext__ROUTING_NULL = 0
};

/// Constant 'INCREASED_ROAD'.
enum
{
  deva_planning_msgs__msg__StateContext__INCREASED_ROAD = 1
};

/// Constant 'LANE'.
enum
{
  deva_planning_msgs__msg__StateContext__LANE = 2
};

/// Constant 'OSM'.
enum
{
  deva_planning_msgs__msg__StateContext__OSM = 3
};

/// Constant 'ROAD'.
enum
{
  deva_planning_msgs__msg__StateContext__ROAD = 4
};

/// Constant 'SDK_NAVI'.
enum
{
  deva_planning_msgs__msg__StateContext__SDK_NAVI = 5
};

/// Constant 'SDK_CRUISE'.
enum
{
  deva_planning_msgs__msg__StateContext__SDK_CRUISE = 6
};

/// Constant 'WEB'.
enum
{
  deva_planning_msgs__msg__StateContext__WEB = 7
};

/// Constant 'NONE'.
enum
{
  deva_planning_msgs__msg__StateContext__NONE = 0
};

/// Constant 'TURN_LEVER'.
enum
{
  deva_planning_msgs__msg__StateContext__TURN_LEVER = 1
};

/// Constant 'OVERTAKE'.
enum
{
  deva_planning_msgs__msg__StateContext__OVERTAKE = 2
};

/// Constant 'NAVIGATION'.
enum
{
  deva_planning_msgs__msg__StateContext__NAVIGATION = 3
};

/// Constant 'OBSTACLE'.
enum
{
  deva_planning_msgs__msg__StateContext__OBSTACLE = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'front_obstacle_id'
// Member 'rear_obstacle_id'
#include "rosidl_runtime_c/string.h"
// Member 'cipv_obstacle_id'
// Member 'nudge_obstacle_id'
// Member 'cutin_follow_obstacle_id'
// Member 'cutin_overtake_obstacle_id'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/StateContext in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__StateContext
{
  std_msgs__msg__Header header;
  uint8_t behavior_type;
  uint8_t navi_map_mode;
  uint8_t routing_mode;
  double target_lane_seq_score;
  double state_score;
  double score;
  int32_t use_mdriver_ego;
  int32_t target_line_id;
  int32_t current_line_id;
  int32_t gap_id;
  int32_t gap_line_id;
  double start_s;
  double end_s;
  double length;
  double future_length;
  /// gap info: 暂时用string后面会改成uint32和感知对齐
  rosidl_runtime_c__String front_obstacle_id;
  rosidl_runtime_c__String rear_obstacle_id;
  /// string merge_front_obstacle_id
  /// string merge_rear_obstacle_id
  /// uint32 front_obstacle_id
  /// uint32 rear_obstacle_id
  rosidl_runtime_c__uint32__Sequence cipv_obstacle_id;
  rosidl_runtime_c__uint32__Sequence nudge_obstacle_id;
  rosidl_runtime_c__uint32__Sequence cutin_follow_obstacle_id;
  rosidl_runtime_c__uint32__Sequence cutin_overtake_obstacle_id;
  uint8_t lane_change_task;
} deva_planning_msgs__msg__StateContext;

// Struct for a sequence of deva_planning_msgs__msg__StateContext.
typedef struct deva_planning_msgs__msg__StateContext__Sequence
{
  deva_planning_msgs__msg__StateContext * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__StateContext__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__STRUCT_H_
