// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * META_ACTION
 */
enum
{
  deva_mdriver_msgs__msg__MWorld__UNKNOWN = 0
};

/// Constant 'WAIT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__WAIT = 1
};

/// Constant 'SPEED_UP'.
enum
{
  deva_mdriver_msgs__msg__MWorld__SPEED_UP = 2
};

/// Constant 'SLOW_DOWN'.
enum
{
  deva_mdriver_msgs__msg__MWorld__SLOW_DOWN = 3
};

/// Constant 'SLOW_DOWN_RAPIDLY'.
enum
{
  deva_mdriver_msgs__msg__MWorld__SLOW_DOWN_RAPIDLY = 4
};

/// Constant 'GO_STRAIGHT_SLOWLY'.
enum
{
  deva_mdriver_msgs__msg__MWorld__GO_STRAIGHT_SLOWLY = 5
};

/// Constant 'GO_STRAIGHT_AT_A_CONSTANT_SPEED'.
enum
{
  deva_mdriver_msgs__msg__MWorld__GO_STRAIGHT_AT_A_CONSTANT_SPEED = 6
};

/// Constant 'REVERSE'.
enum
{
  deva_mdriver_msgs__msg__MWorld__REVERSE = 7
};

/// Constant 'TURN_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__TURN_LEFT = 8
};

/// Constant 'TURN_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__TURN_RIGHT = 9
};

/// Constant 'STOP'.
enum
{
  deva_mdriver_msgs__msg__MWorld__STOP = 10
};

/// Constant 'CHANGE_LANE_TO_THE_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__CHANGE_LANE_TO_THE_LEFT = 11
};

/// Constant 'CHANGE_LANE_TO_THE_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__CHANGE_LANE_TO_THE_RIGHT = 12
};

/// Constant 'SHIFT_SLIGHTLY_TO_THE_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__SHIFT_SLIGHTLY_TO_THE_LEFT = 13
};

/// Constant 'SHIFT_SLIGHTLY_TO_THE_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__SHIFT_SLIGHTLY_TO_THE_RIGHT = 14
};

/// Constant 'AROUND_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__AROUND_LEFT = 15
};

/// Constant 'AROUND_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__AROUND_RIGHT = 16
};

/// Constant 'SPLIT_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__SPLIT_LEFT = 17
};

/// Constant 'SPLIT_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MWorld__SPLIT_RIGHT = 18
};

// Include directives for member types
// Member 'all_obstacles'
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.h"
// Member 'nudge_buffer'
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__struct.h"
// Member 'ego_ref_v'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'mdriver_meta_actions'
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__struct.h"
// Member 'refline_points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/MWorld in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__MWorld
{
  int32_t world_id;
  uint8_t meta_action;
  deva_mdriver_msgs__msg__MPredictionObstacle__Sequence all_obstacles;
  deva_mdriver_msgs__msg__NudgeBuffer nudge_buffer;
  rosidl_runtime_c__double__Sequence ego_ref_v;
  deva_mdriver_msgs__msg__MdriverMetaAction__Sequence mdriver_meta_actions;
  float score;
  geometry_msgs__msg__Point refline_points[17];
} deva_mdriver_msgs__msg__MWorld;

// Struct for a sequence of deva_mdriver_msgs__msg__MWorld.
typedef struct deva_mdriver_msgs__msg__MWorld__Sequence
{
  deva_mdriver_msgs__msg__MWorld * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__MWorld__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__STRUCT_H_
