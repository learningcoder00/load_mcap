// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/MachCamSts.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__STRUCT_H_

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

/// Struct defined in msg/MachCamSts in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__MachCamSts
{
  deva_common_msgs__msg__Header header;
  uint16_t trip_reset_sync_req_msg_asdm;
  uint8_t cam_sts_cam_cam_heatr_actv;
  uint8_t cam_sts_cam_frnt_blkd1;
  uint8_t cam_sts_cam_frnt_blkd2;
  uint8_t cam_sts_cam_frnt_blkd3;
  uint8_t cam_sts_cam_frnt_blkd4;
  uint8_t cam_sts_cam_frnt_blkd5;
  uint8_t cam_sts_cam_frnt_blkd6;
  uint8_t cam_sts_cam_frnt_blkd7;
  uint8_t cam_sts_cam_frnt_blkd8;
  uint8_t cam_sts_cam_frnt_cal_not_strtd;
  uint8_t cam_sts_cam_miss_com;
  uint8_t cam_status0;
  uint8_t hmi_re_cam_sts0;
  uint8_t frnt_side_cam_le_sts0;
  uint8_t frnt_side_cam_ri_sts0;
  uint8_t re_side_cam_le_sts0;
  uint8_t re_side_cam_ri_sts0;
} deva_function_msgs__msg__MachCamSts;

// Struct for a sequence of deva_function_msgs__msg__MachCamSts.
typedef struct deva_function_msgs__msg__MachCamSts__Sequence
{
  deva_function_msgs__msg__MachCamSts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__MachCamSts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__STRUCT_H_
