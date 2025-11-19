// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_control_msgs:msg/ControlStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_STATUS__STRUCT_H_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKOWN'.
enum
{
  deva_control_msgs__msg__ControlStatus__UNKOWN = 0
};

/// Constant 'FREEZING'.
enum
{
  deva_control_msgs__msg__ControlStatus__FREEZING = 1
};

/// Constant 'WAITING'.
enum
{
  deva_control_msgs__msg__ControlStatus__WAITING = 2
};

/// Constant 'NORMAL'.
enum
{
  deva_control_msgs__msg__ControlStatus__NORMAL = 3
};

/// Constant 'SHIFTGEAR'.
enum
{
  deva_control_msgs__msg__ControlStatus__SHIFTGEAR = 4
};

/// Constant 'FINISHED'.
enum
{
  deva_control_msgs__msg__ControlStatus__FINISHED = 5
};

/// Constant 'TAKEOVER'.
enum
{
  deva_control_msgs__msg__ControlStatus__TAKEOVER = 6
};

/// Constant 'FORCEDFINISH'.
enum
{
  deva_control_msgs__msg__ControlStatus__FORCEDFINISH = 7
};

/// Struct defined in msg/ControlStatus in the package deva_control_msgs.
typedef struct deva_control_msgs__msg__ControlStatus
{
  uint8_t status;
} deva_control_msgs__msg__ControlStatus;

// Struct for a sequence of deva_control_msgs__msg__ControlStatus.
typedef struct deva_control_msgs__msg__ControlStatus__Sequence
{
  deva_control_msgs__msg__ControlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_control_msgs__msg__ControlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_STATUS__STRUCT_H_
