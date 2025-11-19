// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__STRUCT_H_

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
  deva_planning_msgs2__msg__PolicyScenario__LANE_KEEPING = 0
};

/// Constant 'RIGHT_CHANGE'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__RIGHT_CHANGE = 1
};

/// Constant 'LEFT_CHANGE'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__LEFT_CHANGE = 2
};

/// Constant 'HOLD'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__HOLD = 3
};

/// Constant 'CANCEL'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__CANCEL = 4
};

/// Constant 'LANE_CHANGE'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__LANE_CHANGE = 5
};

/// Constant 'RIGHT_CHANGE_PREPARE'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__RIGHT_CHANGE_PREPARE = 6
};

/// Constant 'LEFT_CHANGE_PREPARE'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__LEFT_CHANGE_PREPARE = 7
};

/// Constant 'UNKNOWN'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__UNKNOWN = 8
};

/// Constant 'TREE_NON_GAMING'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__TREE_NON_GAMING = 1
};

/// Constant 'TREE_GAMED'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__TREE_GAMED = 2
};

/// Constant 'TREE_CANDIDATE'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__TREE_CANDIDATE = 3
};

/// Constant 'TREE_LATERAL'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__TREE_LATERAL = 4
};

/// Constant 'TREE_PRE_DECELERATE'.
enum
{
  deva_planning_msgs2__msg__PolicyScenario__TREE_PRE_DECELERATE = 5
};

// Include directives for member types
// Member 'front_obstacle_id'
// Member 'rear_obstacle_id'
#include "rosidl_runtime_c/string.h"
// Member 'game_obstacles'
#include "deva_planning_msgs2/msg/detail/u_int2_string__struct.h"
// Member 'critical_obstacles'
#include "deva_planning_msgs2/msg/detail/planning_obstacle__struct.h"
// Member 'tree_score'
#include "deva_planning_msgs2/msg/detail/string2_double__struct.h"
// Member 'tree_nodes'
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__struct.h"
// Member 'tree_output_trajs'
#include "deva_planning_msgs2/msg/detail/tree_trajectory__struct.h"
// Member 'scalable_flags'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.h"

/// Struct defined in msg/PolicyScenario in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__PolicyScenario
{
  int32_t tree_id;
  uint8_t behavior_type;
  int32_t target_line_id;
  int32_t current_line_id;
  bool is_from_mdriver;
  /// gap info
  rosidl_runtime_c__String front_obstacle_id;
  rosidl_runtime_c__String rear_obstacle_id;
  deva_planning_msgs2__msg__UInt2String__Sequence game_obstacles;
  /// 关键障碍物
  deva_planning_msgs2__msg__PlanningObstacle__Sequence critical_obstacles;
  /// score类型改动较为频繁，故不作为常量
  /// [key: score_type, value：score]
  deva_planning_msgs2__msg__String2Double__Sequence tree_score;
  double rollout_start_time;
  deva_planning_msgs2__msg__SemanticTreeNode__Sequence tree_nodes;
  deva_planning_msgs2__msg__TreeTrajectory__Sequence tree_output_trajs;
  /// 可扩展的标志位
  rosidl_runtime_c__uint8__Sequence scalable_flags;
  /// 可扩展的键值对
  deva_planning_msgs2__msg__String2String__Sequence scalable_multimap;
} deva_planning_msgs2__msg__PolicyScenario;

// Struct for a sequence of deva_planning_msgs2__msg__PolicyScenario.
typedef struct deva_planning_msgs2__msg__PolicyScenario__Sequence
{
  deva_planning_msgs2__msg__PolicyScenario * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__PolicyScenario__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__STRUCT_H_
