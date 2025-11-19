// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RVDynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NA_LEVEL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__NA_LEVEL = -1
};

/// Constant 'OTHER_LEVEL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__OTHER_LEVEL = 0
};

/// Constant 'UNKNOW_LEVEL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__UNKNOW_LEVEL = 4
};

/// Constant 'INIT_LEVEL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__INIT_LEVEL = 5
};

/// Constant 'THIRD_LEVEL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__THIRD_LEVEL = 6
};

/// Constant 'SECOND_LEVEL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SECOND_LEVEL = 7
};

/// Constant 'CIPV_LEVEL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__CIPV_LEVEL = 8
};

/// Constant 'UNKNOWN'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__UNKNOWN = 0
};

/// Constant 'CAR'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__CAR = 1
};

/// Constant 'TRUCK'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__TRUCK = 2
};

/// Constant 'CONSTRUCTION_VEHICLE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__CONSTRUCTION_VEHICLE = 3
};

/// Constant 'BUS'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__BUS = 4
};

/// Constant 'MOTORCYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__MOTORCYCLE = 5
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__BICYCLE = 6
};

/// Constant 'TRICYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__TRICYCLE = 7
};

/// Constant 'CYCLIST'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__CYCLIST = 8
};

/// Constant 'PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__PEDESTRIAN = 9
};

/// Constant 'ANIMAL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__ANIMAL = 10
};

/// Constant 'SUB_TYPE_CAR'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_CAR = 100
};

/// Constant 'SUB_TYPE_SUV'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_SUV = 101
};

/// Constant 'SUB_TYPE_VAN'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_VAN = 102
};

/// Constant 'SUB_TYPE_PICKUP'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_PICKUP = 103
};

/// Constant 'SUB_TYPE_POLICE_CAR'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_POLICE_CAR = 104
};

/// Constant 'SUB_TYPE_AMBULANCE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_AMBULANCE = 105
};

/// Constant 'SUB_TYPE_WRECKING_CAR'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_WRECKING_CAR = 106
};

/// Constant 'SUB_TYPE_FORKLIFT'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_FORKLIFT = 107
};

/// Constant 'SUB_TYPE_TRAILER'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_TRAILER = 108
};

/// Constant 'SUB_TYPE_BOX_TRUCK'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_BOX_TRUCK = 109
};

/// Constant 'SUB_TYPE_FLATBED_TRUCK'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_FLATBED_TRUCK = 110
};

/// Constant 'SUB_TYPE_BUS'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_BUS = 111
};

/// Constant 'SUB_TYPE_OTHER_TRUCK'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_OTHER_TRUCK = 112
};

/// Constant 'SUB_TYPE_TANK_TRUCK'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_TANK_TRUCK = 113
};

/// Constant 'SUB_TYPE_FIRE_ENGINE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_FIRE_ENGINE = 114
};

/// Constant 'SUB_TYPE_CLEAN_TRUCK'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_CLEAN_TRUCK = 115
};

/// Constant 'SUB_TYPE_PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_PEDESTRIAN = 116
};

/// Constant 'SUB_TYPE_CHILD'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_CHILD = 117
};

/// Constant 'SUB_TYPE_BICYCLE_WITH_HUMAN'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_BICYCLE_WITH_HUMAN = 118
};

/// Constant 'SUB_TYPE_MOTORBIKE_WITH_HUMAN'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_MOTORBIKE_WITH_HUMAN = 119
};

/// Constant 'SUB_TYPE_ANIMAL_SMALL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_ANIMAL_SMALL = 120
};

/// Constant 'SUB_TYPE_OTHER_ANIMAL'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_OTHER_ANIMAL = 121
};

/// Constant 'SUB_TYPE_BICYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_BICYCLE = 122
};

/// Constant 'SUB_TYPE_MOTORBIKE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_MOTORBIKE = 123
};

/// Constant 'SUB_TYPE_TRICYCLE'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__SUB_TYPE_TRICYCLE = 124
};

/// Constant 'OBJ_3D'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__OBJ_3D = 0
};

/// Constant 'OBJ_25D'.
enum
{
  deva_perception_msgs__msg__RVDynamicObstacle__OBJ_25D = 1
};

// Include directives for member types
// Member 'world_info'
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__struct.h"
// Member 'full_bbox'
// Member 'tail_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.h"

/// Struct defined in msg/RVDynamicObstacle in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RVDynamicObstacle
{
  int32_t life_time;
  int64_t time_stamp;
  float conf;
  uint32_t age;
  int8_t select_level;
  uint32_t id;
  uint8_t mapped_type;
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo world_info;
  deva_common_msgs__msg__BoundingBox2d full_bbox;
  deva_common_msgs__msg__BoundingBox2d tail_bbox;
  float full_occ_score;
  float full_trunc_score;
  uint8_t obj_source;
} deva_perception_msgs__msg__RVDynamicObstacle;

// Struct for a sequence of deva_perception_msgs__msg__RVDynamicObstacle.
typedef struct deva_perception_msgs__msg__RVDynamicObstacle__Sequence
{
  deva_perception_msgs__msg__RVDynamicObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RVDynamicObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__STRUCT_H_
