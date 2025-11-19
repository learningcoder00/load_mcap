// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RoadType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROAD_TYPE_MAIN_ROAD'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_MAIN_ROAD = 1
};

/// Constant 'ROAD_TYPE_INTERSECTION_INTERNAL'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_INTERSECTION_INTERNAL = 2
};

/// Constant 'ROAD_TYPE_JCT_ROAD'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_JCT_ROAD = 3
};

/// Constant 'ROAD_TYPE_ROUNDABOUT'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_ROUNDABOUT = 4
};

/// Constant 'ROAD_TYPE_SERVICE_AREA'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_SERVICE_AREA = 5
};

/// Constant 'ROAD_TYPE_RAMP'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_RAMP = 6
};

/// Constant 'ROAD_TYPE_SECONDARY_ROAD'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_SECONDARY_ROAD = 7
};

/// Constant 'ROAD_TYPE_RAMP_AND_JCT'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_RAMP_AND_JCT = 8
};

/// Constant 'ROAD_TYPE_EXIT'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_EXIT = 9
};

/// Constant 'ROAD_TYPE_ENTRY'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_ENTRY = 10
};

/// Constant 'ROAD_TYPE_TYPE_A_RIGHT_TURN'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_TYPE_A_RIGHT_TURN = 11
};

/// Constant 'ROAD_TYPE_TYPE_B_RIGHT_TURN'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_TYPE_B_RIGHT_TURN = 12
};

/// Constant 'ROAD_TYPE_TYPE_A_LEFT_TURN'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_TYPE_A_LEFT_TURN = 13
};

/// Constant 'ROAD_TYPE_TYPE_B_LEFT_TURN'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_TYPE_B_LEFT_TURN = 14
};

/// Constant 'ROAD_TYPE_NORMAL_ROAD'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_NORMAL_ROAD = 15
};

/// Constant 'ROAD_TYPE_LEFT_RIGHT_TURN'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_LEFT_RIGHT_TURN = 16
};

/// Constant 'ROAD_TYPE_SERVICE_AREA_AND_RAMP'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_SERVICE_AREA_AND_RAMP = 56
};

/// Constant 'ROAD_TYPE_SERVICE_AREA_AND_JCT'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_SERVICE_AREA_AND_JCT = 53
};

/// Constant 'ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT'.
enum
{
  deva_perception_msgs__msg__RoadType__ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT = 58
};

/// Struct defined in msg/RoadType in the package deva_perception_msgs.
/**
  * RoadType.msg
 */
typedef struct deva_perception_msgs__msg__RoadType
{
  uint8_t structure_needs_at_least_one_member;
} deva_perception_msgs__msg__RoadType;

// Struct for a sequence of deva_perception_msgs__msg__RoadType.
typedef struct deva_perception_msgs__msg__RoadType__Sequence
{
  deva_perception_msgs__msg__RoadType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RoadType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_H_
