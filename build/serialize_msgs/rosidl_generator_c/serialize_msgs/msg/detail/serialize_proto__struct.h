// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serialize_msgs:msg/SerializeProto.idl
// generated code does not contain a copyright notice

#ifndef SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__STRUCT_H_
#define SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SerializeProto in the package serialize_msgs.
typedef struct serialize_msgs__msg__SerializeProto
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence data;
} serialize_msgs__msg__SerializeProto;

// Struct for a sequence of serialize_msgs__msg__SerializeProto.
typedef struct serialize_msgs__msg__SerializeProto__Sequence
{
  serialize_msgs__msg__SerializeProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serialize_msgs__msg__SerializeProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__STRUCT_H_
