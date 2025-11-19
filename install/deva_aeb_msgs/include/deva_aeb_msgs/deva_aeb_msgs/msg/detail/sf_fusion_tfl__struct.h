// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFusionTFL.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFFusionTFL in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFusionTFL
{
  uint32_t id;
  uint32_t lifetime;
  float height;
  uint8_t relevancy;
  uint8_t type;
  uint8_t color;
  uint8_t number;
  uint8_t confi;
  uint8_t flashstatus;
  uint8_t background;
  uint8_t reserved;
  float poslgt;
  float poslat;
} deva_aeb_msgs__msg__SFFusionTFL;

// Struct for a sequence of deva_aeb_msgs__msg__SFFusionTFL.
typedef struct deva_aeb_msgs__msg__SFFusionTFL__Sequence
{
  deva_aeb_msgs__msg__SFFusionTFL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFusionTFL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__STRUCT_H_
