// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/MachButtonControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__STRUCT_H_

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

/// Struct defined in msg/MachButtonControl in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__MachButtonControl
{
  deva_common_msgs__msg__Header header;
  uint8_t asy_a_lgt_sts_asy_a_lgt_sts;
  uint8_t asy_cnoa_crs_lat_offs_anima_sts;
  uint8_t drv_off_req_for_lgt_ctrl;
  uint8_t asy_eyes_off_warn_rqrd;
  uint8_t asy_eyes_off_warn_rqrd_sound;
  uint8_t asy_first_ti_actvn;
  uint8_t asy_noa_actv_suggest_sound;
  uint8_t asy_inform_for_drvr;
  uint8_t asy_lat_deg_sts;
  uint8_t asy_inform_for_drvr_sound;
  uint8_t asy_noa_actv_suggest;
  uint8_t asy_noa_distan_msg;
  uint8_t asy_noa_distan_msg_sound;
  uint8_t asy_noa_sts;
  uint8_t asy_steer_apply_rqrd_sound;
  uint8_t asy_aut_drvg_avl_sound;
  uint8_t asy_lan_chg_color_dsp;
  uint8_t asy_lan_chg_mesg;
  uint8_t asy_lan_chg_sod;
  uint8_t asy_aut_emgy_steer_actv;
  uint8_t brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv;
  uint8_t cllsn_threat;
} deva_function_msgs__msg__MachButtonControl;

// Struct for a sequence of deva_function_msgs__msg__MachButtonControl.
typedef struct deva_function_msgs__msg__MachButtonControl__Sequence
{
  deva_function_msgs__msg__MachButtonControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__MachButtonControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__STRUCT_H_
