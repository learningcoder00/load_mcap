// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/PlanningObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TAG_UNKNOWN'.
/**
  * 增加新tag不必须修改msg文件，在文档中约定好uint8数字对应的tag即可
 */
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_UNKNOWN = 0
};

/// Constant 'TAG_FOLLOW'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_FOLLOW = 1
};

/// Constant 'TAG_OVERTAKE'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_OVERTAKE = 2
};

/// Constant 'TAG_LEFT_PASS'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_LEFT_PASS = 3
};

/// Constant 'TAG_RIGHT_PASS'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_RIGHT_PASS = 4
};

/// Constant 'TAG_PRE_DECELERATE'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_PRE_DECELERATE = 5
};

/// Constant 'TAG_PRE_OVERTAKE_LEFT'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_PRE_OVERTAKE_LEFT = 6
};

/// Constant 'TAG_PRE_OVERTAKE_RIGHT'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__TAG_PRE_OVERTAKE_RIGHT = 7
};

/// Constant 'SCENE_CUTIN'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__SCENE_CUTIN = 1
};

/// Constant 'SCENE_CUTOUT'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__SCENE_CUTOUT = 2
};

/// Constant 'SCENE_CROSS'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__SCENE_CROSS = 3
};

/// Constant 'SCENE_ONCOMING'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__SCENE_ONCOMING = 4
};

/// Constant 'SCENE_DEAD_CAR'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__SCENE_DEAD_CAR = 5
};

/// Constant 'SCENE_BLOCK'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__SCENE_BLOCK = 6
};

/// Constant 'PRIORITY_LOW'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__PRIORITY_LOW = 1
};

/// Constant 'PRIORITY_EQUAL'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__PRIORITY_EQUAL = 2
};

/// Constant 'PRIORITY_HIGH'.
enum
{
  deva_planning_msgs2__msg__PlanningObstacle__PRIORITY_HIGH = 3
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'current_line_id'
// Member 'target_line_id'
// Member 'decision_tag'
// Member 'scene_understanding'
// Member 'scalable_flags'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.h"

/// Struct defined in msg/PlanningObstacle in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__PlanningObstacle
{
  /// 障碍物id
  rosidl_runtime_c__String id;
  rosidl_runtime_c__int32__Sequence current_line_id;
  rosidl_runtime_c__int32__Sequence target_line_id;
  /// 只在最终被选中的PolicyScenario中会被填值
  rosidl_runtime_c__uint8__Sequence decision_tag;
  rosidl_runtime_c__uint8__Sequence scene_understanding;
  double cutin_time;
  double cutout_time;
  double distance;
  double ttc;
  uint8_t priority;
  /// 可扩展的标志位
  rosidl_runtime_c__uint8__Sequence scalable_flags;
  /// 可扩展的键值对
  deva_planning_msgs2__msg__String2String__Sequence scalable_multimap;
} deva_planning_msgs2__msg__PlanningObstacle;

// Struct for a sequence of deva_planning_msgs2__msg__PlanningObstacle.
typedef struct deva_planning_msgs2__msg__PlanningObstacle__Sequence
{
  deva_planning_msgs2__msg__PlanningObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__PlanningObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__STRUCT_H_
