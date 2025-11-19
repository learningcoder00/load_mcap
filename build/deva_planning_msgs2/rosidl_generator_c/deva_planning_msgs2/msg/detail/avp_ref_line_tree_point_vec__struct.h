// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/AvpRefLineTreePointVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vec'
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point__struct.h"

/// Struct defined in msg/AvpRefLineTreePointVec in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__AvpRefLineTreePointVec
{
  deva_planning_msgs2__msg__AvpRefLineTreePoint__Sequence vec;
} deva_planning_msgs2__msg__AvpRefLineTreePointVec;

// Struct for a sequence of deva_planning_msgs2__msg__AvpRefLineTreePointVec.
typedef struct deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence
{
  deva_planning_msgs2__msg__AvpRefLineTreePointVec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__STRUCT_H_
