// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVDynObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__STRUCT_H_

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
  * 动态障碍物类型
 */
enum
{
  deva_perception_msgs__msg__RVDynObstacle__UNKNOWN = 0
};

/// Constant 'CAR'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__CAR = 1
};

/// Constant 'TRUCK'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__TRUCK = 2
};

/// Constant 'CONSTRUCTION_VEHICLE'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__CONSTRUCTION_VEHICLE = 3
};

/// Constant 'BUS'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__BUS = 4
};

/// Constant 'MOTORCYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__MOTORCYCLE = 5
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__BICYCLE = 6
};

/// Constant 'TRICYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__TRICYCLE = 7
};

/// Constant 'CYCLIST'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__CYCLIST = 8
};

/// Constant 'PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__PEDESTRIAN = 9
};

/// Constant 'ANIMAL'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__ANIMAL = 10
};

/// Constant 'NO_DIRECTION'.
/**
  * 转向灯
 */
enum
{
  deva_perception_msgs__msg__RVDynObstacle__NO_DIRECTION = 0
};

/// Constant 'TURN_LEFT'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__TURN_LEFT = 1
};

/// Constant 'TURN_RIGHT'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__TURN_RIGHT = 2
};

/// Constant 'DIRECTION_UNKNOWN'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__DIRECTION_UNKNOWN = 3
};

/// Constant 'BRAKE_UNKNOWN'.
/**
  * 刹车灯
 */
enum
{
  deva_perception_msgs__msg__RVDynObstacle__BRAKE_UNKNOWN = 0
};

/// Constant 'BRAKE_OFF'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__BRAKE_OFF = 1
};

/// Constant 'BRAKE_ON'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__BRAKE_ON = 2
};

/// Constant 'HAZARD_UNKNOWN'.
/**
  * 双闪灯
 */
enum
{
  deva_perception_msgs__msg__RVDynObstacle__HAZARD_UNKNOWN = 0
};

/// Constant 'HAZARD_OFF'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__HAZARD_OFF = 1
};

/// Constant 'HAZARD_ON'.
enum
{
  deva_perception_msgs__msg__RVDynObstacle__HAZARD_ON = 2
};

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
// Member 'bbox'
// Member 'head_bbox'
// Member 'tail_bbox'
// Member 'ped_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.h"
// Member 'ground_points'
#include "deva_common_msgs/msg/detail/ground_point__struct.h"
// Member 'subclassification_type'
#include "deva_perception_msgs/msg/detail/subclassification_type__struct.h"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.h"

/// Struct defined in msg/RVDynObstacle in the package deva_perception_msgs.
/**
  * 通用障碍物
 */
typedef struct deva_perception_msgs__msg__RVDynObstacle
{
  deva_perception_msgs__msg__ObstacleCommon obstacle;
  uint8_t dynamic_obstacle_type;
  /// 2d检测框得分
  float det_score;
  /// 检测框及头尾框
  deva_common_msgs__msg__BoundingBox2d bbox;
  deva_common_msgs__msg__BoundingBox2d head_bbox;
  deva_common_msgs__msg__BoundingBox2d tail_bbox;
  /// 接地点
  deva_common_msgs__msg__GroundPoint__Sequence ground_points;
  /// 遮挡/截断
  float full_occ_score;
  float head_occ_score;
  float tail_occ_score;
  float full_trunc_score;
  float head_trunc_score;
  float tail_trunc_score;
  /// 二阶段行人扩框
  deva_common_msgs__msg__BoundingBox2d ped_bbox;
  /// 二阶段细分类
  deva_perception_msgs__msg__SubclassificationType subclassification_type;
  float subclass_score;
  bool light_valid;
  uint8_t turn_type;
  float turn_score;
  uint8_t brake_type;
  float brake_score;
  uint8_t hazard_type;
  float hazard_score;
  /// 补充信息
  deva_perception_msgs__msg__ExtraInfo__Sequence extra_infos;
} deva_perception_msgs__msg__RVDynObstacle;

// Struct for a sequence of deva_perception_msgs__msg__RVDynObstacle.
typedef struct deva_perception_msgs__msg__RVDynObstacle__Sequence
{
  deva_perception_msgs__msg__RVDynObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVDynObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__STRUCT_H_
