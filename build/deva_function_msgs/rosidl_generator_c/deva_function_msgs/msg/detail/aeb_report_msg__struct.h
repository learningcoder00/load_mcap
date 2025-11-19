// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/AebReportMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'aeb_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AebReportMsg in the package deva_function_msgs.
/**
  * The AEB function reports the current AEB status.
 */
typedef struct deva_function_msgs__msg__AebReportMsg
{
  double publish_timestamp;
  /// The AEB state, aeb_state == AEB_ACTIVE, or aeb_state == AEB_PREPARATION;
  rosidl_runtime_c__String aeb_state;
} deva_function_msgs__msg__AebReportMsg;

// Struct for a sequence of deva_function_msgs__msg__AebReportMsg.
typedef struct deva_function_msgs__msg__AebReportMsg__Sequence
{
  deva_function_msgs__msg__AebReportMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__AebReportMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__STRUCT_H_
