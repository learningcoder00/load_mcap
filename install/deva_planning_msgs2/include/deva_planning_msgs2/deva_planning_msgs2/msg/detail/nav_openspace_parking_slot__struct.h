// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/NavOpenspaceParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xyz_vec'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NavOpenspaceParkingSlot in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__NavOpenspaceParkingSlot
{
  uint32_t id;
  /// UNKNOWN = 0
  /// CROSSWALK = 1
  /// JUNCTION = 2
  /// VERTICAL_SLOT = 3
  /// SIDE_SLOT = 4
  /// SLANTED_SLOT = 5
  /// ULTRASONIC_VERTICAL_SLOT = 6
  /// ULTRASONIC_SIDE_SLOT = 7
  uint32_t type;
  /// corner point: xyz * 4
  rosidl_runtime_c__double__Sequence xyz_vec;
  bool is_occupied;
  bool is_stable_tracked;
  double occupied_confidence;
} deva_planning_msgs2__msg__NavOpenspaceParkingSlot;

// Struct for a sequence of deva_planning_msgs2__msg__NavOpenspaceParkingSlot.
typedef struct deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence
{
  deva_planning_msgs2__msg__NavOpenspaceParkingSlot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__STRUCT_H_
