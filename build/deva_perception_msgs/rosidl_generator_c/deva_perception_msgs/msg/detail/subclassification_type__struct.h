// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/SubclassificationType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAR'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__CAR = 0
};

/// Constant 'SUV'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__SUV = 1
};

/// Constant 'VAN'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__VAN = 2
};

/// Constant 'PICKUP'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__PICKUP = 3
};

/// Constant 'POLICE_CAR'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__POLICE_CAR = 4
};

/// Constant 'AMBULANCE'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__AMBULANCE = 5
};

/// Constant 'WRECKING_CAR'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__WRECKING_CAR = 6
};

/// Constant 'FORKLIFT'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__FORKLIFT = 7
};

/// Constant 'TRAILER'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__TRAILER = 8
};

/// Constant 'BOX_TRUCK'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__BOX_TRUCK = 9
};

/// Constant 'FLATBED_TRUCK'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__FLATBED_TRUCK = 10
};

/// Constant 'BUS'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__BUS = 11
};

/// Constant 'OTHER_TRUCK'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__OTHER_TRUCK = 12
};

/// Constant 'TANK_TRUCK'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__TANK_TRUCK = 13
};

/// Constant 'FIRE_ENGINE'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__FIRE_ENGINE = 14
};

/// Constant 'CLEAN_TRUCK'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__CLEAN_TRUCK = 15
};

/// Constant 'PEDESTRIAN'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__PEDESTRIAN = 16
};

/// Constant 'CHILD'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__CHILD = 17
};

/// Constant 'BICYCLE_WITH_HUMAN'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__BICYCLE_WITH_HUMAN = 18
};

/// Constant 'MOTORBIKE_WITH_HUMAN'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__MOTORBIKE_WITH_HUMAN = 19
};

/// Constant 'ANIMAL_SMALL'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__ANIMAL_SMALL = 20
};

/// Constant 'OTHER_ANIMAL'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__OTHER_ANIMAL = 21
};

/// Constant 'BICYCLE'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__BICYCLE = 22
};

/// Constant 'MOTORBIKE'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__MOTORBIKE = 23
};

/// Constant 'TRICYCLE'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__TRICYCLE = 24
};

/// Constant 'FAKE_PED'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__FAKE_PED = 25
};

/// Constant 'FAKE_CYCLIST'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__FAKE_CYCLIST = 26
};

/// Constant 'FAKE_CAR'.
enum
{
  deva_perception_msgs__msg__SubclassificationType__FAKE_CAR = 27
};

/// Struct defined in msg/SubclassificationType in the package deva_perception_msgs.
/**
  * RV二阶段细分类
 */
typedef struct deva_perception_msgs__msg__SubclassificationType
{
  uint8_t type;
} deva_perception_msgs__msg__SubclassificationType;

// Struct for a sequence of deva_perception_msgs__msg__SubclassificationType.
typedef struct deva_perception_msgs__msg__SubclassificationType__Sequence
{
  deva_perception_msgs__msg__SubclassificationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__SubclassificationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__STRUCT_H_
