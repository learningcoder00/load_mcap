// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFDiagInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_INFO__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFDiagInfo in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFDiagInfo
{
  uint8_t type;
  uint8_t confi;
  uint8_t reserved[2];
  uint32_t timestamp;
  uint32_t framenum;
} deva_aeb_msgs__msg__SFDiagInfo;

// Struct for a sequence of deva_aeb_msgs__msg__SFDiagInfo.
typedef struct deva_aeb_msgs__msg__SFDiagInfo__Sequence
{
  deva_aeb_msgs__msg__SFDiagInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFDiagInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_INFO__STRUCT_H_
