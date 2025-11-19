// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__STRUCT_H_

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
  * 车灯类型
 */
enum
{
  deva_perception_msgs__msg__RVLight__UNKNOWN = 0
};

/// Constant 'CAR_LIGHT'.
enum
{
  deva_perception_msgs__msg__RVLight__CAR_LIGHT = 1
};

/// Constant 'VAN_LIGHT'.
enum
{
  deva_perception_msgs__msg__RVLight__VAN_LIGHT = 2
};

/// Constant 'MOTOR_LIGHT'.
enum
{
  deva_perception_msgs__msg__RVLight__MOTOR_LIGHT = 3
};

/// Constant 'TRAFFIC_SIGN'.
enum
{
  deva_perception_msgs__msg__RVLight__TRAFFIC_SIGN = 4
};

/// Constant 'HEAD'.
/**
  * 车灯朝向
 */
enum
{
  deva_perception_msgs__msg__RVLight__HEAD = 100
};

/// Constant 'TAIL'.
enum
{
  deva_perception_msgs__msg__RVLight__TAIL = 101
};

/// Constant 'NO_OCC'.
/**
  * traffic sign
 */
enum
{
  deva_perception_msgs__msg__RVLight__NO_OCC = 151
};

/// Constant 'MINOR_OCC'.
enum
{
  deva_perception_msgs__msg__RVLight__MINOR_OCC = 152
};

/// Constant 'PARTIAL_OCC'.
enum
{
  deva_perception_msgs__msg__RVLight__PARTIAL_OCC = 153
};

/// Constant 'SEVERE_OCC'.
enum
{
  deva_perception_msgs__msg__RVLight__SEVERE_OCC = 154
};

/// Constant 'NO_TRUN'.
enum
{
  deva_perception_msgs__msg__RVLight__NO_TRUN = 201
};

/// Constant 'MINOR_TRUN'.
enum
{
  deva_perception_msgs__msg__RVLight__MINOR_TRUN = 202
};

/// Constant 'PARTIAL_TRUN'.
enum
{
  deva_perception_msgs__msg__RVLight__PARTIAL_TRUN = 203
};

/// Constant 'SEVERE_TRUN'.
enum
{
  deva_perception_msgs__msg__RVLight__SEVERE_TRUN = 204
};

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"

/// Struct defined in msg/RVLight in the package deva_perception_msgs.
/**
  * 通用障碍物
 */
typedef struct deva_perception_msgs__msg__RVLight
{
  deva_perception_msgs__msg__ObstacleCommon obstacle;
  uint8_t light_type;
  uint8_t heading_type;
  /// 深度
  float depth;
  uint8_t sign_occ_type;
  uint8_t sign_trun_type;
  /// 补充信息
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_infos;
} deva_perception_msgs__msg__RVLight;

// Struct for a sequence of deva_perception_msgs__msg__RVLight.
typedef struct deva_perception_msgs__msg__RVLight__Sequence
{
  deva_perception_msgs__msg__RVLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__STRUCT_H_
