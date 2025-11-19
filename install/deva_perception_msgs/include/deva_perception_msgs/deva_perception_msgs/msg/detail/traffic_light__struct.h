// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RED'.
enum
{
  deva_perception_msgs__msg__TrafficLight__RED = 0
};

/// Constant 'YELLOW'.
enum
{
  deva_perception_msgs__msg__TrafficLight__YELLOW = 1
};

/// Constant 'GREEN'.
enum
{
  deva_perception_msgs__msg__TrafficLight__GREEN = 2
};

/// Constant 'UNKNOW'.
enum
{
  deva_perception_msgs__msg__TrafficLight__UNKNOW = 3
};

/// Constant 'CIRCLE'.
enum
{
  deva_perception_msgs__msg__TrafficLight__CIRCLE = 0
};

/// Constant 'TURNLEFT'.
enum
{
  deva_perception_msgs__msg__TrafficLight__TURNLEFT = 1
};

/// Constant 'TURNRIGHT'.
enum
{
  deva_perception_msgs__msg__TrafficLight__TURNRIGHT = 2
};

/// Constant 'GOSTRAIGHT'.
enum
{
  deva_perception_msgs__msg__TrafficLight__GOSTRAIGHT = 3
};

/// Constant 'TURNAROUND'.
enum
{
  deva_perception_msgs__msg__TrafficLight__TURNAROUND = 4
};

/// Constant 'TURNLEFTANDAROUND'.
enum
{
  deva_perception_msgs__msg__TrafficLight__TURNLEFTANDAROUND = 5
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__TrafficLight__BICYCLE = 6
};

/// Constant 'SIDEWALK'.
enum
{
  deva_perception_msgs__msg__TrafficLight__SIDEWALK = 7
};

/// Constant 'COUNDDOWN'.
enum
{
  deva_perception_msgs__msg__TrafficLight__COUNDDOWN = 8
};

/// Constant 'OTHERS'.
enum
{
  deva_perception_msgs__msg__TrafficLight__OTHERS = 9
};

// Include directives for member types
// Member 'perception_obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
// Member 'bind_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TrafficLight in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficLight
{
  deva_perception_msgs__msg__ObstacleCommon perception_obstacle;
  /// 红绿灯状态
  uint8_t color_type;
  /// 红绿灯形状
  uint8_t shape_type;
  /// 是否闪烁
  bool blink;
  double remaining_time;
  rosidl_runtime_c__String bind_id;
} deva_perception_msgs__msg__TrafficLight;

// Struct for a sequence of deva_perception_msgs__msg__TrafficLight.
typedef struct deva_perception_msgs__msg__TrafficLight__Sequence
{
  deva_perception_msgs__msg__TrafficLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
