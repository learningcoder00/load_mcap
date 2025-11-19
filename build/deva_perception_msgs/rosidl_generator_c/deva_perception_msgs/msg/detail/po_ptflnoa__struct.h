// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/PoPTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_PTFLNOA__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_PTFLNOA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PoPTFLNOA in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__PoPTFLNOA
{
  uint8_t color;
  uint8_t type;
  uint8_t flashstatus;
} deva_perception_msgs__msg__PoPTFLNOA;

// Struct for a sequence of deva_perception_msgs__msg__PoPTFLNOA.
typedef struct deva_perception_msgs__msg__PoPTFLNOA__Sequence
{
  deva_perception_msgs__msg__PoPTFLNOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__PoPTFLNOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_PTFLNOA__STRUCT_H_
