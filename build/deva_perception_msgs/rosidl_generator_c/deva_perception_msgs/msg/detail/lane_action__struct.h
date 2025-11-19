// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/LaneAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ACTION__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ACTION_NULL'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_NULL = 255
};

/// Constant 'LANE_ACTION_AHEAD'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD = 0
};

/// Constant 'LANE_ACTION_LEFT'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_LEFT = 1
};

/// Constant 'LANE_ACTION_AHEAD_LEFT'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD_LEFT = 2
};

/// Constant 'LANE_ACTION_RIGHT'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_RIGHT = 3
};

/// Constant 'LANE_ACTION_AHEAD_RIGHT'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD_RIGHT = 4
};

/// Constant 'LANE_ACTION_LU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_LU_TURN = 5
};

/// Constant 'LANE_ACTION_LEFT_RIGHT'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_LEFT_RIGHT = 6
};

/// Constant 'LANE_ACTION_AHEAD_LEFT_RIGHT'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD_LEFT_RIGHT = 7
};

/// Constant 'LANE_ACTION_RU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_RU_TURN = 8
};

/// Constant 'LANE_ACTION_AHEAD_LU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD_LU_TURN = 9
};

/// Constant 'LANE_ACTION_AHEAD_RU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD_RU_TURN = 10
};

/// Constant 'LANE_ACTION_LEFT_LU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_LEFT_LU_TURN = 11
};

/// Constant 'LANE_ACTION_RIGHT_RU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_RIGHT_RU_TURN = 12
};

/// Constant 'LANE_ACTION_AHEAD_LEFT_LU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD_LEFT_LU_TURN = 16
};

/// Constant 'LANE_ACTION_RIGHT_LU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_RIGHT_LU_TURN = 17
};

/// Constant 'LANE_ACTION_LEFT_RIGHT_LU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_LEFT_RIGHT_LU_TURN = 18
};

/// Constant 'LANE_ACTION_AHEAD_RIGHT_LU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_AHEAD_RIGHT_LU_TURN = 19
};

/// Constant 'LANE_ACTION_LEFT_RU_TURN'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_LEFT_RU_TURN = 20
};

/// Constant 'LANE_ACTION_BUS'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_BUS = 21
};

/// Constant 'LANE_ACTION_EMPTY'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_EMPTY = 22
};

/// Constant 'LANE_ACTION_VARIABLE'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_VARIABLE = 23
};

/// Constant 'LANE_ACTION_DEDICATED'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_DEDICATED = 24
};

/// Constant 'LANE_ACTION_TIDAL'.
enum
{
  deva_perception_msgs__msg__LaneAction__LANE_ACTION_TIDAL = 25
};

/// Struct defined in msg/LaneAction in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__LaneAction
{
  uint8_t structure_needs_at_least_one_member;
} deva_perception_msgs__msg__LaneAction;

// Struct for a sequence of deva_perception_msgs__msg__LaneAction.
typedef struct deva_perception_msgs__msg__LaneAction__Sequence
{
  deva_perception_msgs__msg__LaneAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__LaneAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ACTION__STRUCT_H_
