// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'tfllist'
// Member 'tfllist_all'
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__struct.h"
// Member 'pop_tfllist'
#include "deva_perception_msgs/msg/detail/po_ptflnoa__struct.h"
// Member 'pop_fs_tfllist'
#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__struct.h"
// Member 'e2e_traffic_det_maps'
#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__struct.h"
// Member 'tracked_traffic_e2e_stable_maps'
#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__struct.h"
// Member 'rount_info'
#include "deva_perception_msgs/msg/detail/traffic_rount__struct.h"

/// Struct defined in msg/SFFusionTFLListNOA in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__SFFusionTFLListNOA
{
  deva_common_msgs__msg__Header header;
  uint64_t timestamp;
  uint32_t framenum;
  uint8_t tflcount;
  uint8_t reserved[2];
  deva_perception_msgs__msg__SFFusionTFLNOA tfllist[8];
  uint8_t validsize;
  deva_perception_msgs__msg__SFFusionTFLNOA__Sequence tfllist_all;
  uint8_t all_validsize;
  deva_perception_msgs__msg__PoPTFLNOA pop_tfllist[8];
  uint8_t pop_lightnum;
  deva_perception_msgs__msg__PoPFusionTFLNOA pop_fs_tfllist[8];
  uint8_t pop_fs_lightnum;
  deva_perception_msgs__msg__E2eTrafficDetPair__Sequence e2e_traffic_det_maps;
  deva_perception_msgs__msg__TrafficE2eStablePair__Sequence tracked_traffic_e2e_stable_maps;
  uint8_t tracked_traffic_e2ebc;
  bool tracked_traffic_e2ebc_stable;
  deva_perception_msgs__msg__TrafficRount rount_info;
} deva_perception_msgs__msg__SFFusionTFLListNOA;

// Struct for a sequence of deva_perception_msgs__msg__SFFusionTFLListNOA.
typedef struct deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence
{
  deva_perception_msgs__msg__SFFusionTFLListNOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__SFFusionTFLListNOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__STRUCT_H_
