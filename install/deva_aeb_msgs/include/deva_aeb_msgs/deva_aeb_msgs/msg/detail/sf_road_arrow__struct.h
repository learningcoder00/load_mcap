// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFRoadArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFRoadArrow in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFRoadArrow
{
  uint32_t id;
  uint8_t type;
  uint8_t confi;
  uint8_t lanassignment;
  uint8_t reserved;
  float poslgt;
  float poslat;
  float headingangle;
} deva_aeb_msgs__msg__SFRoadArrow;

// Struct for a sequence of deva_aeb_msgs__msg__SFRoadArrow.
typedef struct deva_aeb_msgs__msg__SFRoadArrow__Sequence
{
  deva_aeb_msgs__msg__SFRoadArrow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFRoadArrow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__STRUCT_H_
