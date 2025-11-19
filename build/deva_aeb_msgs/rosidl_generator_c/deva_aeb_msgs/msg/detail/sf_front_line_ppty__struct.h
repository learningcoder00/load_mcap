// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFFrontLinePpty in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFrontLinePpty
{
  uint8_t drvrpfmncmonqly;
  uint8_t lanekeepaidqly;
  uint8_t trfcjamassiqly;
  uint8_t reserved;
  float tunqly;
  uint32_t id;
  uint32_t lifetime;
} deva_aeb_msgs__msg__SFFrontLinePpty;

// Struct for a sequence of deva_aeb_msgs__msg__SFFrontLinePpty.
typedef struct deva_aeb_msgs__msg__SFFrontLinePpty__Sequence
{
  deva_aeb_msgs__msg__SFFrontLinePpty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFrontLinePpty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__STRUCT_H_
