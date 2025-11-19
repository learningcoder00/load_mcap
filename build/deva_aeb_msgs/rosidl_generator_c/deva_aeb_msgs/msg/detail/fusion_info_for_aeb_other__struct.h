// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roadppty'
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.h"
// Member 'vehself'
#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.h"
// Member 'fusiontslist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__struct.h"
// Member 'fusiontfllist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__struct.h"
// Member 'fusionroadsignlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.h"
// Member 'fusiondiaglist'
#include "deva_aeb_msgs/msg/detail/sf_diag_list__struct.h"

/// Struct defined in msg/FusionInfoForAEBOther in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEBOther
{
  deva_aeb_msgs__msg__SFRoadPpty roadppty;
  deva_aeb_msgs__msg__SFVehSelf vehself;
  deva_aeb_msgs__msg__SFFusionTSList fusiontslist;
  deva_aeb_msgs__msg__SFFusionTFLList fusiontfllist;
  deva_aeb_msgs__msg__SFFusionRoadSignList fusionroadsignlist;
  deva_aeb_msgs__msg__SFDiagList fusiondiaglist;
} deva_aeb_msgs__msg__FusionInfoForAEBOther;

// Struct for a sequence of deva_aeb_msgs__msg__FusionInfoForAEBOther.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence
{
  deva_aeb_msgs__msg__FusionInfoForAEBOther * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__STRUCT_H_
