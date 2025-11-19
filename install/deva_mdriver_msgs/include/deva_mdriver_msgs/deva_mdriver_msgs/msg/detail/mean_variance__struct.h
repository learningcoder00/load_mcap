// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/MeanVariance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MeanVariance in the package deva_mdriver_msgs.
/**
  * MeanVariance.msg
 */
typedef struct deva_mdriver_msgs__msg__MeanVariance
{
  /// 均值
  double mean;
  /// 方差
  double variance;
} deva_mdriver_msgs__msg__MeanVariance;

// Struct for a sequence of deva_mdriver_msgs__msg__MeanVariance.
typedef struct deva_mdriver_msgs__msg__MeanVariance__Sequence
{
  deva_mdriver_msgs__msg__MeanVariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__MeanVariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__STRUCT_H_
