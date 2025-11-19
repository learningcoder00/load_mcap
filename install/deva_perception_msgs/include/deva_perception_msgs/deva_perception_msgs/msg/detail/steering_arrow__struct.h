// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/SteeringArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__STRUCT_H_

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
  deva_perception_msgs__msg__SteeringArrow__UNKNOWN = 0
};

/// Constant 'GUIDE_TURN'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_TURN = 1
};

/// Constant 'GUIDE_TURN_THROUGH'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_TURN_THROUGH = 2
};

/// Constant 'GUIDE_TURN_LEFT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_TURN_LEFT = 3
};

/// Constant 'GUIDE_TURN_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_TURN_RIGHT = 4
};

/// Constant 'GUIDE_LEFT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_LEFT = 5
};

/// Constant 'GUIDE_LEFT_THROUGH'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_LEFT_THROUGH = 6
};

/// Constant 'GUIDE_LEFT_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_LEFT_RIGHT = 7
};

/// Constant 'GUIDE_LEFT_THROUGH_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_LEFT_THROUGH_RIGHT = 8
};

/// Constant 'GUIDE_THROUGH'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_THROUGH = 9
};

/// Constant 'GUIDE_THROUGH_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_THROUGH_RIGHT = 10
};

/// Constant 'GUIDE_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__GUIDE_RIGHT = 11
};

/// Constant 'FORBID_TURN'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_TURN = 12
};

/// Constant 'FORBID_LEFT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_LEFT = 13
};

/// Constant 'FORBID_LEFT_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_LEFT_RIGHT = 14
};

/// Constant 'FORBID_THROUGH'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_THROUGH = 15
};

/// Constant 'FORBID_THROUGH_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_THROUGH_RIGHT = 16
};

/// Constant 'FORBID_THROUGH_LEFT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_THROUGH_LEFT = 17
};

/// Constant 'FORBID_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_RIGHT = 18
};

/// Constant 'MERGE_LEFT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__MERGE_LEFT = 19
};

/// Constant 'MERGE_RIGHT'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__MERGE_RIGHT = 20
};

/// Constant 'FORBID_LEFT_TURN'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__FORBID_LEFT_TURN = 21
};

/// Constant 'BUS_LANE'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__BUS_LANE = 22
};

/// Constant 'REVERSIBLE_LANE'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__REVERSIBLE_LANE = 23
};

/// Constant 'NONMOTOR_LANE'.
enum
{
  deva_perception_msgs__msg__SteeringArrow__NONMOTOR_LANE = 24
};

// Include directives for member types
// Member 'center_point'
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/SteeringArrow in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__SteeringArrow
{
  uint32_t id;
  double confidence;
  geometry_msgs__msg__Point center_point;
  geometry_msgs__msg__Point__Sequence vertices;
  int32_t center_line_id;
  uint8_t property;
} deva_perception_msgs__msg__SteeringArrow;

// Struct for a sequence of deva_perception_msgs__msg__SteeringArrow.
typedef struct deva_perception_msgs__msg__SteeringArrow__Sequence
{
  deva_perception_msgs__msg__SteeringArrow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__SteeringArrow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__STRUCT_H_
