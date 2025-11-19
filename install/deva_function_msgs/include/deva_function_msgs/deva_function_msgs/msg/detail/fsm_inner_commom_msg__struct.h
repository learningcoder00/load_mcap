// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__STRUCT_H_

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

/// Struct defined in msg/FsmInnerCommomMsg in the package deva_function_msgs.
/**
  * FSM sends out the current state and the state of the sub-state machine.
  * Driving and Parking state machine and sub-state machine state
 */
typedef struct deva_function_msgs__msg__FsmInnerCommomMsg
{
  deva_common_msgs__msg__Header header;
  uint32_t asy_cnoa_crs_lan_chg_msg;
  float set_spd_for_crs_ctrl_fct_active;
  uint32_t asy_lane_chg_assist_sts;
  uint32_t indcr_sts;
  uint32_t asy_noa_takeover_sod;
  uint8_t hmi_drvr_sod_req_pilot;
  uint8_t drvr_crs_ctrl_fct_actv_req;
  uint8_t asy_algt_indcr;
  uint8_t ti_gap_set_for_lgt_ctrl;
  uint8_t drv_mod_req;
  uint8_t drv_off_warn;
  uint8_t asy_alat_indcr;
  uint8_t asy_lgt_ctrl_take_over_req;
  uint8_t ovrd_wrn_for_fst_actv;
  uint8_t asy_inform_for_drvr;
  uint8_t cncl_warn_lgt_for_aut_drv;
  uint8_t avl_sts_for_long_aut_drv;
  uint8_t asy_steer_apply_rqrd;
  uint8_t asy_lan_chg_mesg;
  uint32_t asy_safe_stop_sts;
  uint8_t asy_eyes_off_warn_rqrd;
  uint8_t asy_noa_remind_mesg;
  uint8_t asy_noa_takeover_mesg;
  uint8_t asy_aut_drvg_avl;
  uint8_t asy_noa_actv_suggest;
  uint8_t cncl_warn_for_aut_drv;
  uint8_t asy_lat_deg_sts;
  uint8_t asy_icc_max_warn_msg;
  uint8_t asy_cnoa_takeover_warn_msg;
  uint8_t asy_cnoa_crs_cross_intsec_msg;
  uint8_t asy_d2d_avl_rmn;
  uint8_t asy_d2d_distan_msg;
  uint8_t asy_d2d_strt_to_end;
  uint8_t asy_d2d_deactvd_reasn_mesg;
  uint8_t asy_aut_emgy_steer_actv;
  uint8_t asy_d2d_etc_distan_msg;
  uint8_t asy_d2d_remind_msg;
  uint8_t disp_tsi_info_for_lgt_ctrl;
  float disp_spd_set_for_lgt_ctrl;
  uint8_t ad_dim_light;
  uint8_t asy_d2d_crs_dim_indcr;
  uint8_t asy_aut_drv_ctrl_typ_dim_req;
  uint8_t ihu_set_disp_ad;
  uint8_t aut_lane_chg_sts;
  uint8_t ad_ctrl_mode;
  uint8_t hmi_drvr_sod_req_chg;
  uint8_t cam_status0;
  uint8_t frnt_side_cam_le_sts0;
  uint8_t frnt_side_cam_ri_sts0;
  uint8_t re_side_cam_le_sts0;
  uint8_t re_side_cam_ri_sts0;
  uint8_t hmi_re_cam_sts0;
  uint8_t asy_algt_sts;
  uint8_t hmi_auto_lane_chg_style;
  uint8_t trfc_jam_warn;
} deva_function_msgs__msg__FsmInnerCommomMsg;

// Struct for a sequence of deva_function_msgs__msg__FsmInnerCommomMsg.
typedef struct deva_function_msgs__msg__FsmInnerCommomMsg__Sequence
{
  deva_function_msgs__msg__FsmInnerCommomMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FsmInnerCommomMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__STRUCT_H_
