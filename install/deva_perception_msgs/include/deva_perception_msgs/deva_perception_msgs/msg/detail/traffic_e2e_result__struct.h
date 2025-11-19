// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficE2eResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_RESULT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'E2E_TURN_AROUND'.
enum
{
  deva_perception_msgs__msg__TrafficE2eResult__E2E_TURN_AROUND = 0
};

/// Constant 'E2E_LEFT'.
enum
{
  deva_perception_msgs__msg__TrafficE2eResult__E2E_LEFT = 1
};

/// Constant 'E2E_STRAIGHT'.
enum
{
  deva_perception_msgs__msg__TrafficE2eResult__E2E_STRAIGHT = 2
};

/// Constant 'E2E_RIGHT'.
enum
{
  deva_perception_msgs__msg__TrafficE2eResult__E2E_RIGHT = 3
};

/// Struct defined in msg/TrafficE2eResult in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficE2eResult
{
  uint8_t structure_needs_at_least_one_member;
} deva_perception_msgs__msg__TrafficE2eResult;

// Struct for a sequence of deva_perception_msgs__msg__TrafficE2eResult.
typedef struct deva_perception_msgs__msg__TrafficE2eResult__Sequence
{
  deva_perception_msgs__msg__TrafficE2eResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficE2eResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_RESULT__STRUCT_H_
