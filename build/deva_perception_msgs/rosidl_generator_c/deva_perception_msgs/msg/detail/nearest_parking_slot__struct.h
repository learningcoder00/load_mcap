// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/NearestParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NearestParkingSlot in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__NearestParkingSlot
{
  uint64_t nearest_parking_slot_id;
} deva_perception_msgs__msg__NearestParkingSlot;

// Struct for a sequence of deva_perception_msgs__msg__NearestParkingSlot.
typedef struct deva_perception_msgs__msg__NearestParkingSlot__Sequence
{
  deva_perception_msgs__msg__NearestParkingSlot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__NearestParkingSlot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__STRUCT_H_
