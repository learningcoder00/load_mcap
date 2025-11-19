// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/MdriverRefLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__STRUCT_H_

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
  deva_mdriver_msgs__msg__MdriverRefLine__UNKNOWN = 0
};

/// Constant 'WAIT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__WAIT = 1
};

/// Constant 'SPEED_UP'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__SPEED_UP = 2
};

/// Constant 'SLOW_DOWN'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__SLOW_DOWN = 3
};

/// Constant 'SLOW_DOWN_RAPIDLY'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__SLOW_DOWN_RAPIDLY = 4
};

/// Constant 'GO_STRAIGHT_SLOWLY'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__GO_STRAIGHT_SLOWLY = 5
};

/// Constant 'GO_STRAIGHT_AT_A_CONSTANT_SPEED'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__GO_STRAIGHT_AT_A_CONSTANT_SPEED = 6
};

/// Constant 'REVERSE'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__REVERSE = 7
};

/// Constant 'TURN_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__TURN_LEFT = 8
};

/// Constant 'TURN_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__TURN_RIGHT = 9
};

/// Constant 'STOP'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__STOP = 10
};

/// Constant 'CHANGE_LANE_TO_THE_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__CHANGE_LANE_TO_THE_LEFT = 11
};

/// Constant 'CHANGE_LANE_TO_THE_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__CHANGE_LANE_TO_THE_RIGHT = 12
};

/// Constant 'SHIFT_SLIGHTLY_TO_THE_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__SHIFT_SLIGHTLY_TO_THE_LEFT = 13
};

/// Constant 'SHIFT_SLIGHTLY_TO_THE_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__SHIFT_SLIGHTLY_TO_THE_RIGHT = 14
};

/// Constant 'AROUND_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__AROUND_LEFT = 15
};

/// Constant 'AROUND_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__AROUND_RIGHT = 16
};

/// Constant 'SPLIT_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__SPLIT_LEFT = 17
};

/// Constant 'SPLIT_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MdriverRefLine__SPLIT_RIGHT = 18
};

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/MdriverRefLine in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__MdriverRefLine
{
  geometry_msgs__msg__Point__Sequence points;
  uint8_t meta_action;
  double score;
} deva_mdriver_msgs__msg__MdriverRefLine;

// Struct for a sequence of deva_mdriver_msgs__msg__MdriverRefLine.
typedef struct deva_mdriver_msgs__msg__MdriverRefLine__Sequence
{
  deva_mdriver_msgs__msg__MdriverRefLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__MdriverRefLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__STRUCT_H_
