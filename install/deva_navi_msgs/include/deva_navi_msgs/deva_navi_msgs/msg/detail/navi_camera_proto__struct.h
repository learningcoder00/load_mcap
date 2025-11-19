// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coord_3d'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.h"
// Member 'speed'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'sub_cameras'
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__struct.h"

/// Struct defined in msg/NaviCameraProto in the package deva_navi_msgs.
/**
  * NaviCameraProto.msg
 */
typedef struct deva_navi_msgs__msg__NaviCameraProto
{
  deva_navi_msgs__msg__Coord3DDoubleProto coord_3d;
  int32_t type;
  int32_t distance;
  rosidl_runtime_c__int32__Sequence speed;
  int32_t road_class;
  int32_t segment_index;
  int32_t link_index;
  int32_t distance_to_end;
  deva_navi_msgs__msg__NaviSubCameraProto__Sequence sub_cameras;
  int32_t penalty;
  int64_t id;
  bool is_new;
  bool is_hidden;
} deva_navi_msgs__msg__NaviCameraProto;

// Struct for a sequence of deva_navi_msgs__msg__NaviCameraProto.
typedef struct deva_navi_msgs__msg__NaviCameraProto__Sequence
{
  deva_navi_msgs__msg__NaviCameraProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__NaviCameraProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__STRUCT_H_
