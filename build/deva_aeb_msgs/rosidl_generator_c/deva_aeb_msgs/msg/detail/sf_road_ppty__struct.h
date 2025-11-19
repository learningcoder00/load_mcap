// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFRoadPpty in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFRoadPpty
{
  uint64_t timestamp;
  uint32_t framenum;
  float lanewidth;
  float offslat;
  float agdir;
  float crvt;
  float crvtrate[3];
  uint8_t crvtratevalidsize;
  float seglen[3];
  uint8_t seglenvalidsize;
  uint8_t strtd;
  uint8_t vld;
  uint8_t reserved[2];
  float titohiqly[32];
  uint8_t titohiqlyvalidsize;
  uint8_t objidtitohiqly[32];
  uint8_t objidtitohiqlyvalidsize;
  float distancewithlowconfidence;
  float distancewithhiahconfidence;
} deva_aeb_msgs__msg__SFRoadPpty;

// Struct for a sequence of deva_aeb_msgs__msg__SFRoadPpty.
typedef struct deva_aeb_msgs__msg__SFRoadPpty__Sequence
{
  deva_aeb_msgs__msg__SFRoadPpty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFRoadPpty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__STRUCT_H_
