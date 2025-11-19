// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cam_name'
// Member 'distort_model'
#include "rosidl_runtime_c/string.h"
// Member 'resolution'
// Member 'ori_intrinsic'
// Member 'vir_intrinsic'
// Member 'ori_extrinsic'
// Member 'vir_extrinsic'
// Member 'mapx'
// Member 'mapy'
// Member 'pinhole_intrinsic'
// Member 'crops'
// Member 'input_size'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VirtualCamInfo in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__VirtualCamInfo
{
  rosidl_runtime_c__String cam_name;
  rosidl_runtime_c__int32__Sequence resolution;
  rosidl_runtime_c__String distort_model;
  rosidl_runtime_c__float__Sequence ori_intrinsic;
  rosidl_runtime_c__float__Sequence vir_intrinsic;
  rosidl_runtime_c__float__Sequence ori_extrinsic;
  rosidl_runtime_c__float__Sequence vir_extrinsic;
  rosidl_runtime_c__float__Sequence mapx;
  rosidl_runtime_c__float__Sequence mapy;
  rosidl_runtime_c__float__Sequence pinhole_intrinsic;
  rosidl_runtime_c__int32__Sequence crops;
  rosidl_runtime_c__int32__Sequence input_size;
} deva_perception_msgs__msg__VirtualCamInfo;

// Struct for a sequence of deva_perception_msgs__msg__VirtualCamInfo.
typedef struct deva_perception_msgs__msg__VirtualCamInfo__Sequence
{
  deva_perception_msgs__msg__VirtualCamInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__VirtualCamInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__STRUCT_H_
