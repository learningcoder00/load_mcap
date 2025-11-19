// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__STRUCT_H_

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

/// Struct defined in msg/MachRemind in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__MachRemind
{
  deva_common_msgs__msg__Header header;
  uint8_t asy_cnoa_crs_actv_faild_voice;
  uint8_t asy_cnoa_crs_cross_intsec_voice;
  uint8_t asy_cnoa_crs_actv_voice;
  uint8_t asy_cnoa_crs_deactvd_voice;
  uint8_t asy_cnoa_crs_finshd_voice;
  uint8_t asy_cnoa_crs_offs_voice;
  uint8_t asy_cnoa_crs_rmn_voice;
  uint8_t asy_cnoa_hands_off_voice;
  uint8_t asy_cnoa_lrng_abort_voice;
  uint8_t asy_noa_avl_rmn_sound;
  uint8_t asy_cnoa_takeover_warn_voice;
  uint8_t asy_dece_remind_sound;
  uint8_t asy_drvr_sod_cfirm_cnoa_main_page;
  uint8_t asy_undertak_rmind_sound;
  uint8_t asy_warn_sod_for_aut_drv;
  uint8_t avl_sts_for_long_aut_drv;
  uint8_t too_many_cars;
  uint8_t drv_off_warn;
  uint8_t ad4_horn_warn;
  uint8_t hmi_auto_lane_chg_sts_for_asy_ai_asist_audio;
  uint8_t drv_off_mod;
  uint8_t asy_horn_warn_rqrd;
  uint8_t asy_cnoa_crs_avl_prompt;
  uint8_t asy_crs_sts_swil_indcr;
  uint8_t asy_d2d_avl_rmn_sod;
  uint8_t asy_d2d_deactvd_reasn_sod;
  uint8_t asy_d2d_etc_distan_sod;
  uint8_t asy_d2d_distan_sod;
  uint8_t asy_d2d_strt_to_end_sod;
  uint8_t asy_d2d_remind_sod;
  uint8_t asy_lane_chg_fail_type;
  uint8_t asy_req_lane_chg;
  uint8_t asy_noa_deactvd_reasn_sod;
  uint8_t asy_noa_remind_sod;
  uint8_t ad4_drvr_belt_warn;
  uint8_t asy_noa_takeover_sod;
  uint8_t ad4_drvr_belt_warn_for_bkp;
  uint8_t asy_lan_chg_sod_sec;
  uint8_t ad4_camera_heating_req;
  uint8_t ad_takeover_req_group_ad_takeover_msg;
  uint8_t ad_takeover_req_group_ad_takeover_audio;
  uint8_t ad_wipr_ctrl_req;
  uint8_t asy_noa_blt_fastn;
  uint8_t turn_indic_req_by_alca;
  uint8_t asy_lane_chg_assist_sts;
  uint8_t ad4_camera_heating_req_zcu;
  uint8_t asy_fct_lrng_mesg;
  uint8_t trfc_jam_warn;
} deva_function_msgs__msg__MachRemind;

// Struct for a sequence of deva_function_msgs__msg__MachRemind.
typedef struct deva_function_msgs__msg__MachRemind__Sequence
{
  deva_function_msgs__msg__MachRemind * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__MachRemind__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__STRUCT_H_
