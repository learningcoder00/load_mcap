// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFObjEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFObjEstimn in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFObjEstimn
{
  float posnlgt;
  float posnlat;
  float spd;
  float vlgt;
  float vlat;
  float a;
  float algt;
  float alat;
  float agdir;
  float crvt;
} deva_aeb_msgs__msg__SFObjEstimn;

// Struct for a sequence of deva_aeb_msgs__msg__SFObjEstimn.
typedef struct deva_aeb_msgs__msg__SFObjEstimn__Sequence
{
  deva_aeb_msgs__msg__SFObjEstimn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFObjEstimn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__STRUCT_H_
