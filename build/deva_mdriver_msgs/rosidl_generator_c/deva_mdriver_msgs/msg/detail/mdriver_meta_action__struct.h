// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_mdriver_msgs:msg/MdriverMetaAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__STRUCT_H_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * MDRIVER_META_ACTION
 */
enum
{
  deva_mdriver_msgs__msg__MdriverMetaAction__UNKNOWN = 0
};

/// Constant 'KEEP_LANE'.
enum
{
  deva_mdriver_msgs__msg__MdriverMetaAction__KEEP_LANE = 1
};

/// Constant 'LANE_LEFT'.
enum
{
  deva_mdriver_msgs__msg__MdriverMetaAction__LANE_LEFT = 2
};

/// Constant 'LANE_RIGHT'.
enum
{
  deva_mdriver_msgs__msg__MdriverMetaAction__LANE_RIGHT = 3
};

// Include directives for member types
// Member 'logits'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MdriverMetaAction in the package deva_mdriver_msgs.
typedef struct deva_mdriver_msgs__msg__MdriverMetaAction
{
  uint8_t best_mdriver_meta_action;
  double score;
  rosidl_runtime_c__double__Sequence logits;
} deva_mdriver_msgs__msg__MdriverMetaAction;

// Struct for a sequence of deva_mdriver_msgs__msg__MdriverMetaAction.
typedef struct deva_mdriver_msgs__msg__MdriverMetaAction__Sequence
{
  deva_mdriver_msgs__msg__MdriverMetaAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_mdriver_msgs__msg__MdriverMetaAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__STRUCT_H_
