// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEB.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB__STRUCT_H_

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
// Member 'fusionobjlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj_list__struct.h"
// Member 'fusionlanemkrlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.h"
// Member 'fusionroadedge'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__struct.h"
// Member 'roadppty'
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.h"
// Member 'vehself'
#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.h"
// Member 'fusiontslist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__struct.h"
// Member 'fusiontfllist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__struct.h"
// Member 'fusionobstraclelist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle_list__struct.h"
// Member 'fusionroadsignlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.h"
// Member 'fusiondiaglist'
#include "deva_aeb_msgs/msg/detail/sf_diag_list__struct.h"

/// Struct defined in msg/FusionInfoForAEB in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEB
{
  deva_common_msgs__msg__Header header;
  deva_aeb_msgs__msg__SFFusionObjList fusionobjlist;
  deva_aeb_msgs__msg__SFFusionLaneMkrList fusionlanemkrlist;
  deva_aeb_msgs__msg__SFFusionRoadEdge fusionroadedge;
  deva_aeb_msgs__msg__SFRoadPpty roadppty;
  deva_aeb_msgs__msg__SFVehSelf vehself;
  deva_aeb_msgs__msg__SFFusionTSList fusiontslist;
  deva_aeb_msgs__msg__SFFusionTFLList fusiontfllist;
  deva_aeb_msgs__msg__SFFusionObstacleList fusionobstraclelist;
  deva_aeb_msgs__msg__SFFusionRoadSignList fusionroadsignlist;
  deva_aeb_msgs__msg__SFDiagList fusiondiaglist;
} deva_aeb_msgs__msg__FusionInfoForAEB;

// Struct for a sequence of deva_aeb_msgs__msg__FusionInfoForAEB.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEB__Sequence
{
  deva_aeb_msgs__msg__FusionInfoForAEB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__FusionInfoForAEB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB__STRUCT_H_
