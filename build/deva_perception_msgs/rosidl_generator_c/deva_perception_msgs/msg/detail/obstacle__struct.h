// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAR'.
/**
  * TODO(huchong): complete enum type definition
  * # enum
  * uint32 UNKNOWN = 0
  * uint32 UNKNOWN_MOVABLE = 1
  * uint32 UNKNOWN_UNMOVABLE = 2
  * uint32 PEDESTRIAN = 3   # Pedestrian, usually determined by moving behavior.
  * uint32 BICYCLE = 4      # bike, motor bike
  * uint32 VEHICLE = 5      # Passenger car or truck.
 */
enum
{
  deva_perception_msgs__msg__Obstacle__CAR = 1ul
};

/// Constant 'TRUCK'.
enum
{
  deva_perception_msgs__msg__Obstacle__TRUCK = 2ul
};

/// Constant 'CONSTRUCTION_VEHICLE'.
enum
{
  deva_perception_msgs__msg__Obstacle__CONSTRUCTION_VEHICLE = 3ul
};

/// Constant 'BUS'.
enum
{
  deva_perception_msgs__msg__Obstacle__BUS = 4ul
};

/// Constant 'MOTORCYCLE'.
enum
{
  deva_perception_msgs__msg__Obstacle__MOTORCYCLE = 5ul
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__Obstacle__BICYCLE = 6ul
};

/// Constant 'TRICYCLE'.
enum
{
  deva_perception_msgs__msg__Obstacle__TRICYCLE = 7ul
};

/// Constant 'CYCLIST'.
enum
{
  deva_perception_msgs__msg__Obstacle__CYCLIST = 8ul
};

/// Constant 'PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__Obstacle__PEDESTRIAN = 9ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'detection_velocity'
// Member 'velocity'
// Member 'velocity_variance'
// Member 'acceleration'
// Member 'acceleration_variance'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.h"
// Member 'extra_info'
#include "deva_perception_msgs/msg/detail/dict_info__struct.h"

/// Struct defined in msg/Obstacle in the package deva_perception_msgs.
/**
  * This message defines meta information for a obstacle status
 */
typedef struct deva_perception_msgs__msg__Obstacle
{
  std_msgs__msg__Header header;
  /// obstacle id. 区别不同实体
  uint32_t id;
  /// 单位都是标准单位. m, m/s, m/s^2, radian/s, radian/s^2
  /// 位置 朝向
  geometry_msgs__msg__Pose pose;
  /// 尺寸. 即长宽高
  geometry_msgs__msg__Vector3 dimensions;
  /// 速度/速度方差
  geometry_msgs__msg__Twist detection_velocity;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Twist velocity_variance;
  /// 加速度/加速度方差
  geometry_msgs__msg__Twist acceleration;
  geometry_msgs__msg__Twist acceleration_variance;
  /// tracking time. 追踪时间 单位 s
  double tracking_time;
  /// 轨迹长度
  uint32_t track_length;
  /// 置信度
  double score;
  /// 补miss
  bool is_predict;
  /// 障碍物属性
  uint32_t type;
  /// 障碍物2d 框. 如果需要的话
  deva_common_msgs__msg__BoundingBox2d bbox2d;
  deva_perception_msgs__msg__DictInfo__Sequence extra_info;
} deva_perception_msgs__msg__Obstacle;

// Struct for a sequence of deva_perception_msgs__msg__Obstacle.
typedef struct deva_perception_msgs__msg__Obstacle__Sequence
{
  deva_perception_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
