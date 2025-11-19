// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFVehSelf.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFVehSelf in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFVehSelf
{
  float vlgt;
  float vlgtcmpfac;
  float algt;
  float algtraw;
  float alatraw;
  float yawrate;
  float yawrateraw;
  float posnlgtdelta;
  float posnlatdelta;
  float agdirdelta;
} deva_aeb_msgs__msg__SFVehSelf;

// Struct for a sequence of deva_aeb_msgs__msg__SFVehSelf.
typedef struct deva_aeb_msgs__msg__SFVehSelf__Sequence
{
  deva_aeb_msgs__msg__SFVehSelf * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFVehSelf__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__STRUCT_H_
