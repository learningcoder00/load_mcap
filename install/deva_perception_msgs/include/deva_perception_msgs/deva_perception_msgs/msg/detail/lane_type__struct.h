// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/LaneType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  deva_perception_msgs__msg__LaneType__UNKNOWN = 0
};

/// Constant 'DASHED_LINE'.
enum
{
  deva_perception_msgs__msg__LaneType__DASHED_LINE = 1
};

/// Constant 'SOLID_LINE'.
enum
{
  deva_perception_msgs__msg__LaneType__SOLID_LINE = 2
};

/// Constant 'L_DASHED_R_SOLID'.
enum
{
  deva_perception_msgs__msg__LaneType__L_DASHED_R_SOLID = 3
};

/// Constant 'L_SOLID_R_DASHED'.
enum
{
  deva_perception_msgs__msg__LaneType__L_SOLID_R_DASHED = 4
};

/// Constant 'DOUBLE_DASHED'.
enum
{
  deva_perception_msgs__msg__LaneType__DOUBLE_DASHED = 5
};

/// Constant 'DOUBLE_SOLID'.
enum
{
  deva_perception_msgs__msg__LaneType__DOUBLE_SOLID = 6
};

/// Constant 'CURB'.
enum
{
  deva_perception_msgs__msg__LaneType__CURB = 7
};

/// Constant 'GUARDRAIL'.
enum
{
  deva_perception_msgs__msg__LaneType__GUARDRAIL = 8
};

/// Constant 'CENTER_LINE'.
enum
{
  deva_perception_msgs__msg__LaneType__CENTER_LINE = 9
};

/// Constant 'VIRTUAL_JUNCTION'.
enum
{
  deva_perception_msgs__msg__LaneType__VIRTUAL_JUNCTION = 10
};

/// Constant 'VIRTUAL'.
enum
{
  deva_perception_msgs__msg__LaneType__VIRTUAL = 11
};

/// Constant 'WHITE'.
/**
  * ColorType
 */
enum
{
  deva_perception_msgs__msg__LaneType__WHITE = 1
};

/// Constant 'YELLOW'.
enum
{
  deva_perception_msgs__msg__LaneType__YELLOW = 2
};

/// Constant 'DOUBLE_YELLOW'.
enum
{
  deva_perception_msgs__msg__LaneType__DOUBLE_YELLOW = 3
};

/// Struct defined in msg/LaneType in the package deva_perception_msgs.
/**
  * 车道线属性
 */
typedef struct deva_perception_msgs__msg__LaneType
{
  uint8_t lane_type;
  uint8_t lane_color;
  double s_start;
  double s_end;
} deva_perception_msgs__msg__LaneType;

// Struct for a sequence of deva_perception_msgs__msg__LaneType.
typedef struct deva_perception_msgs__msg__LaneType__Sequence
{
  deva_perception_msgs__msg__LaneType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__LaneType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_H_
