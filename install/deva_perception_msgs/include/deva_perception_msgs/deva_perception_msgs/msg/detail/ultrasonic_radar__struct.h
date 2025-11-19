// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/UltrasonicRadar.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAX_RADAR_DISTANCE'.
enum
{
  deva_perception_msgs__msg__UltrasonicRadar__MAX_RADAR_DISTANCE = 510
};

// Include directives for member types
// Member 'radar_name'
// Member 'radar_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UltrasonicRadar in the package deva_perception_msgs.
/**
  * the message which will be used by ultrasonic radar
 */
typedef struct deva_perception_msgs__msg__UltrasonicRadar
{
  /// radar的序列号，用于标识当前使用的radar
  uint8_t radar_identify_id;
  /// 当前radar的名字
  rosidl_runtime_c__String radar_name;
  /// 当前radar的型号，与该雷达的性能进行映射
  rosidl_runtime_c__String radar_type;
  /// 当前radar的状态
  bool radar_state;
  /// 当前radar是否正在发声
  bool radar_tx_status;
  /// 当前radar是否正在收声
  bool radar_rx_status;
  /// 障碍物相对于radar的角度
  ///
  ///               x axis
  ///         ^
  ///                     |
  ///                  *  |  *
  ///               *     |     *
  ///        \    *       |       *    /
  ///          \ *     range(i)    * /
  ///            \        |        /
  ///              \      |      /
  ///                \    |    /
  ///       y axis     \  |  /
  ///      <---------------
  ///        ooooooooooooo   #ultrasonic radar front surface
  float range;
  /// 雷达可以探测的最大距离
  uint16_t max_radar_distance;
  /// radar探测到的障碍物的距离
  double radar_distance;
  /// radar探测到的障碍物的距离是否有效
  bool radar_distance_vaild;
} deva_perception_msgs__msg__UltrasonicRadar;

// Struct for a sequence of deva_perception_msgs__msg__UltrasonicRadar.
typedef struct deva_perception_msgs__msg__UltrasonicRadar__Sequence
{
  deva_perception_msgs__msg__UltrasonicRadar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__UltrasonicRadar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__STRUCT_H_
