// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fault_diagnosis:msg/DiagState.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__STRUCT_H_
#define FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_TYPE_NORMAL'.
enum
{
  fault_diagnosis__msg__DiagState__STATE_TYPE_NORMAL = 0
};

/// Constant 'STATE_TYPE_ERROR'.
enum
{
  fault_diagnosis__msg__DiagState__STATE_TYPE_ERROR = 1
};

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'fault_name'
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DiagState in the package fault_diagnosis.
typedef struct fault_diagnosis__msg__DiagState
{
  deva_common_msgs__msg__Header header;
  rosidl_runtime_c__String fault_name;
  uint8_t state;
  rosidl_runtime_c__String info;
} fault_diagnosis__msg__DiagState;

// Struct for a sequence of fault_diagnosis__msg__DiagState.
typedef struct fault_diagnosis__msg__DiagState__Sequence
{
  fault_diagnosis__msg__DiagState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fault_diagnosis__msg__DiagState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__STRUCT_H_
