// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFRearLinePpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_REAR_LINE_PPTY__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_REAR_LINE_PPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFRearLinePpty in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFRearLinePpty
{
  uint8_t clisnsideradarctrlqly;
  uint8_t reserved[3];
} deva_aeb_msgs__msg__SFRearLinePpty;

// Struct for a sequence of deva_aeb_msgs__msg__SFRearLinePpty.
typedef struct deva_aeb_msgs__msg__SFRearLinePpty__Sequence
{
  deva_aeb_msgs__msg__SFRearLinePpty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFRearLinePpty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_REAR_LINE_PPTY__STRUCT_H_
