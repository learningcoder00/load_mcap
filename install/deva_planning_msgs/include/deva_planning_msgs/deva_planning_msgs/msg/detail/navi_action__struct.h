// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/NaviAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__NAVI_ACTION__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__NAVI_ACTION__STRUCT_H_

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
  deva_planning_msgs__msg__NaviAction__UNKNOWN = 0
};

/// Constant 'WAIT'.
enum
{
  deva_planning_msgs__msg__NaviAction__WAIT = 1
};

/// Constant 'SPEED_UP'.
enum
{
  deva_planning_msgs__msg__NaviAction__SPEED_UP = 2
};

/// Constant 'SLOW_DOWN'.
enum
{
  deva_planning_msgs__msg__NaviAction__SLOW_DOWN = 3
};

/// Constant 'SLOW_DOWN_RAPIDLY'.
enum
{
  deva_planning_msgs__msg__NaviAction__SLOW_DOWN_RAPIDLY = 4
};

/// Constant 'GO_STRAIGHT_SLOWLY'.
enum
{
  deva_planning_msgs__msg__NaviAction__GO_STRAIGHT_SLOWLY = 5
};

/// Constant 'GO_STRAIGHT_AT_A_CONSTANT_SPEED'.
enum
{
  deva_planning_msgs__msg__NaviAction__GO_STRAIGHT_AT_A_CONSTANT_SPEED = 6
};

/// Constant 'REVERSE'.
enum
{
  deva_planning_msgs__msg__NaviAction__REVERSE = 7
};

/// Constant 'TURN_LEFT'.
enum
{
  deva_planning_msgs__msg__NaviAction__TURN_LEFT = 8
};

/// Constant 'TURN_RIGHT'.
enum
{
  deva_planning_msgs__msg__NaviAction__TURN_RIGHT = 9
};

/// Constant 'STOP'.
enum
{
  deva_planning_msgs__msg__NaviAction__STOP = 10
};

/// Constant 'CHANGE_LANE_TO_THE_LEFT'.
enum
{
  deva_planning_msgs__msg__NaviAction__CHANGE_LANE_TO_THE_LEFT = 11
};

/// Constant 'CHANGE_LANE_TO_THE_RIGHT'.
enum
{
  deva_planning_msgs__msg__NaviAction__CHANGE_LANE_TO_THE_RIGHT = 12
};

/// Constant 'SHIFT_SLIGHTLY_TO_THE_LEFT'.
enum
{
  deva_planning_msgs__msg__NaviAction__SHIFT_SLIGHTLY_TO_THE_LEFT = 13
};

/// Constant 'SHIFT_SLIGHTLY_TO_THE_RIGHT'.
enum
{
  deva_planning_msgs__msg__NaviAction__SHIFT_SLIGHTLY_TO_THE_RIGHT = 14
};

/// Constant 'AROUND_LEFT'.
enum
{
  deva_planning_msgs__msg__NaviAction__AROUND_LEFT = 15
};

/// Constant 'AROUND_RIGHT'.
enum
{
  deva_planning_msgs__msg__NaviAction__AROUND_RIGHT = 16
};

/// Constant 'SPLIT_LEFT'.
enum
{
  deva_planning_msgs__msg__NaviAction__SPLIT_LEFT = 17
};

/// Constant 'SPLIT_RIGHT'.
enum
{
  deva_planning_msgs__msg__NaviAction__SPLIT_RIGHT = 18
};

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/NaviAction in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__NaviAction
{
  deva_common_msgs__msg__Header header;
  uint8_t meta_action;
  double current_score;
  double left_score;
  double right_score;
} deva_planning_msgs__msg__NaviAction;

// Struct for a sequence of deva_planning_msgs__msg__NaviAction.
typedef struct deva_planning_msgs__msg__NaviAction__Sequence
{
  deva_planning_msgs__msg__NaviAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__NaviAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__NAVI_ACTION__STRUCT_H_
