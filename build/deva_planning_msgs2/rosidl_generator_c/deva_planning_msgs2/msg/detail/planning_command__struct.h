// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/PlanningCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTION_NONE'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__ACTION_NONE = 100
};

/// Constant 'FOLLOW'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__FOLLOW = 0
};

/// Constant 'CHANGE_LEFT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__CHANGE_LEFT = 1
};

/// Constant 'CHANGE_RIGHT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__CHANGE_RIGHT = 2
};

/// Constant 'PULL_OVER'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__PULL_OVER = 3
};

/// Constant 'STOP'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__STOP = 4
};

/// Constant 'RESUME_CRUISE'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__RESUME_CRUISE = 5
};

/// Constant 'FOLLOW_CIPV'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__FOLLOW_CIPV = 6
};

/// Constant 'MAP_MODE'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__MAP_MODE = 7
};

/// Constant 'LIGHT_RED'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__LIGHT_RED = 8
};

/// Constant 'LIGHT_GREEN'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__LIGHT_GREEN = 9
};

/// Constant 'SEARCHING_SLOT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__SEARCHING_SLOT = 10
};

/// Constant 'PARK_IN'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__PARK_IN = 11
};

/// Constant 'PARK_OUT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__PARK_OUT = 12
};

/// Constant 'LIGHT_YELLOW'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__LIGHT_YELLOW = 13
};

/// Constant 'LIGHT_RESET'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__LIGHT_RESET = 14
};

/// Constant 'AUTODRIVE'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__AUTODRIVE = 15
};

/// Constant 'MANUALDRIVE'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__MANUALDRIVE = 16
};

/// Constant 'PARKOUT_DIRECTION_NONE'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__PARKOUT_DIRECTION_NONE = 0
};

/// Constant 'LEFT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__LEFT = 1
};

/// Constant 'LEFTFRONT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__LEFTFRONT = 2
};

/// Constant 'FRONT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__FRONT = 3
};

/// Constant 'RIGHTFRONT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__RIGHTFRONT = 4
};

/// Constant 'RIGHT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__RIGHT = 5
};

/// Constant 'RIGHT_LEFT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__RIGHT_LEFT = 6
};

/// Constant 'LEFT_RIGHT'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__LEFT_RIGHT = 7
};

/// Constant 'MANUAL'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__MANUAL = 0
};

/// Constant 'ACC'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__ACC = 1
};

/// Constant 'ICC'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__ICC = 2
};

/// Constant 'NOA'.
enum
{
  deva_planning_msgs2__msg__PlanningCommand__NOA = 3
};

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'lane_width'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PlanningCommand in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__PlanningCommand
{
  deva_common_msgs__msg__Header header;
  uint8_t action;
  double cruise_speed;
  int32_t park_slot_id;
  uint8_t park_out_direction;
  rosidl_runtime_c__double__Sequence lane_width;
  uint8_t function;
} deva_planning_msgs2__msg__PlanningCommand;

// Struct for a sequence of deva_planning_msgs2__msg__PlanningCommand.
typedef struct deva_planning_msgs2__msg__PlanningCommand__Sequence
{
  deva_planning_msgs2__msg__PlanningCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__PlanningCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__STRUCT_H_
