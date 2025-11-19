// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_NONE'.
/**
  * 泊车指令
 */
enum
{
  deva_function_msgs__msg__DbaStateMsg__COMMAND_NONE = 0
};

/// Constant 'SEARCH_SLOT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__SEARCH_SLOT = 1
};

/// Constant 'PARK_IN'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__PARK_IN = 2
};

/// Constant 'PARK_OUT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__PARK_OUT = 3
};

/// Constant 'CRUISE'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__CRUISE = 4
};

/// Constant 'QUIT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__QUIT = 5
};

/// Constant 'DIRECTION_NONE'.
/**
  * 泊出方向
 */
enum
{
  deva_function_msgs__msg__DbaStateMsg__DIRECTION_NONE = 0
};

/// Constant 'LEFT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__LEFT = 1
};

/// Constant 'LEFT_FRONT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__LEFT_FRONT = 2
};

/// Constant 'FRONT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__FRONT = 3
};

/// Constant 'RIGHT_FRONT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__RIGHT_FRONT = 4
};

/// Constant 'RIGHT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__RIGHT = 5
};

/// Constant 'RIGHT_LEFT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__RIGHT_LEFT = 6
};

/// Constant 'LEFT_RIGHT'.
enum
{
  deva_function_msgs__msg__DbaStateMsg__LEFT_RIGHT = 7
};

/// Constant 'APA'.
/**
  * APA模式
 */
enum
{
  deva_function_msgs__msg__DbaStateMsg__APA = 1
};

/// Constant 'HPP'.
/**
  * HPP模式
 */
enum
{
  deva_function_msgs__msg__DbaStateMsg__HPP = 3
};

/// Struct defined in msg/DbaStateMsg in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__DbaStateMsg
{
  double publish_timestamp;
  uint8_t epb_state;
  float speed;
  bool acc_enable;
  bool brake_enable;
  /// 四车门关闭状态，顺序为[FL, FR, RL, RR]
  bool door_open_state[4];
  uint8_t turn_lamp_lever_state;
  bool late_enable;
  bool late_driveover;
  bool longit_enable;
  bool longit_driveover;
  uint8_t gear;
  /// 安全带是否系上 ，顺序为
  bool belt[5];
  uint8_t command;
  bool save_map;
  uint64_t slot_id;
  /// 只有当指令为PARK_OUT 时有效
  uint8_t park_out_direction;
  uint8_t run_mode;
} deva_function_msgs__msg__DbaStateMsg;

// Struct for a sequence of deva_function_msgs__msg__DbaStateMsg.
typedef struct deva_function_msgs__msg__DbaStateMsg__Sequence
{
  deva_function_msgs__msg__DbaStateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__DbaStateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__STRUCT_H_
