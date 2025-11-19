// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/RoadClass.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_CLASS__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROAD_CLASS_EXPRESSWAY'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_EXPRESSWAY = 0
};

/// Constant 'ROAD_CLASS_NATIONAL'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_NATIONAL = 1
};

/// Constant 'ROAD_CLASS_PROVINCIAL'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_PROVINCIAL = 2
};

/// Constant 'ROAD_CLASS_COUNTY'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_COUNTY = 3
};

/// Constant 'ROAD_CLASS_TOWNSHIP'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_TOWNSHIP = 4
};

/// Constant 'ROAD_CLASS_VILLAGE_INTERNAL'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_VILLAGE_INTERNAL = 5
};

/// Constant 'ROAD_CLASS_MAIN_STREET_EXPRESS'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_MAIN_STREET_EXPRESS = 6
};

/// Constant 'ROAD_CLASS_MAIN'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_MAIN = 7
};

/// Constant 'ROAD_CLASS_SECONDARY'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_SECONDARY = 8
};

/// Constant 'ROAD_CLASS_NORMAL'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_NORMAL = 9
};

/// Constant 'ROAD_CLASS_NON_NAVIGATION'.
enum
{
  deva_perception_msgs__msg__RoadClass__ROAD_CLASS_NON_NAVIGATION = 10
};

/// Struct defined in msg/RoadClass in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__RoadClass
{
  uint8_t structure_needs_at_least_one_member;
} deva_perception_msgs__msg__RoadClass;

// Struct for a sequence of deva_perception_msgs__msg__RoadClass.
typedef struct deva_perception_msgs__msg__RoadClass__Sequence
{
  deva_perception_msgs__msg__RoadClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__RoadClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_CLASS__STRUCT_H_
