// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__STRUCT_H_

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

/// Struct defined in msg/MachFunctionControl in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__MachFunctionControl
{
  deva_common_msgs__msg__Header header;
  uint8_t asy_aut_drvg_avl;
  uint8_t asy_lat_offst_sts;
  uint8_t asy_noa_degrade_msg;
  uint8_t lane_chg_aut_info_for_asy_hi_way;
  uint8_t lane_chg_aut_sts_for_asy_hi_way;
  uint8_t ti_gap_set_for_lgt_ctrl;
  uint8_t asy_lgt_ctrl_take_over_req;
  float steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  uint8_t strt_req_of_lgt_ctrl_for_prpsn;
  uint8_t asy_noa_deactvd_reasn_mesg;
  uint8_t asy_noa_remind_mesg;
  uint8_t asy_high_beam_flash_warn_rqrd;
  uint8_t asy_noa_takeover_mesg;
  uint8_t asy_fast_lane_swt_sts;
  uint8_t asy_cnoa_auto_lane_chg_style;
  uint8_t asy_cnoa_crs_actv_faild_msg;
  uint8_t asy_cnoa_crs_cross_intsec_msg;
  uint8_t asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg;
  uint8_t asy_cnoa_crs_finshd_msg;
  uint8_t asy_cnoa_crs_ind_ti_gap_msg;
  uint8_t asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg;
  uint8_t asy_cnoa_crs_actv_msg;
  uint32_t asy_cnoa_crs_off_odddistan;
  uint8_t asy_cnoa_crs_sts;
  uint8_t asy_cnoa_game_fail_type;
  uint8_t asy_cnoa_game_reason;
  uint8_t asy_cnoa_crs_sts_csd_msg;
  uint8_t asy_cnoa_crs_swt_on_off;
  uint8_t asy_cnoa_crs_swt_sts;
  uint8_t asy_cnoa_data_download_faild_msg;
  uint8_t asy_cnoa_crs_offs_msg;
  uint8_t asy_cnoa_crs_rmn_msg;
  uint8_t asy_cnoa_sod_lane_chg_swt;
  uint8_t asy_cnoa_lrng_prmpt_msg;
  uint8_t asy_cnoa_lrng_swt_on_off;
  uint8_t asy_cnoa_lrng_swt_sts;
  uint8_t asy_cnoa_takeover_warn_msg;
  uint8_t asy_cnoa_turn_fail_type;
  uint8_t asy_cnoa_turn_sts;
  uint8_t asy_noa_tar_spd_offs;
  uint8_t asy_noa_avl_rmn;
  uint8_t asy_aut_lane_chg_swt_sts;
  uint8_t stop_req_of_lgt_ctrl_for_prpsn;
  uint8_t ad_theme_disp;
  uint8_t cncl_warn_for_aut_drv;
  uint8_t disp_tsi_info_for_lgt_ctrl;
  uint16_t disp_spd_set_for_lgt_ctrl;
  uint8_t hmi_nop_cofm_of_lan_chag;
  uint8_t ad4_lane_chg_for_e2e;
  uint8_t hwa_leading_point_valid;
  float hwa_leading_point_center_y;
  float hwa_leading_point_center_x;
  uint8_t ad4_turn_indic_req_req;
  uint8_t ad4_unavl_sts_for_e2e;
  uint8_t ad4_warn_sts_for_e2e;
  uint8_t ad4_win_open_req;
  uint8_t ad_ctrl_mode_ad_ctrl_mode;
  uint8_t ad4_drv_off_req_for_lgt_ctrl_drv_off_req;
  uint8_t asy_dece_remind;
  uint8_t asy_lat_offs_swt_sts;
  uint8_t asy_undertak_on_off_sts;
  uint8_t asy_undertak_rmind;
  uint8_t asy_warn_mesg_for_aut_drv;
  uint8_t lgt_fusn_trfc_sgn;
  uint8_t drvg_ast_on_sys_sts;
  uint8_t asy_d2d_avl_rmn;
  uint8_t asy_d2d_deactvd_reasn_mesg;
  uint8_t asy_d2d_distan_msg;
  uint8_t asy_d2d_etc_distan_msg;
  uint8_t asy_d2d_remind_msg;
  uint8_t asy_etc_traffic_sw_sts;
  uint8_t asy_d2d_strt_to_end;
  uint8_t asy_safe_stop_sts;
  uint8_t asy_sod_lane_chg_switch;
  uint8_t avl_sts_for_long_aut_drv_sound;
  uint8_t asy_sod_pilot_cfirm;
  uint8_t cncl_warn_for_aut_drv_sound;
  uint8_t cncl_warn_lgt_for_aut_drv_sound;
  uint8_t hmi_auto_lane_chg_style;
  uint8_t hmi_lane_chg_info;
  uint8_t ovrd_wrn_for_fst_actv;
  uint8_t ad4_frt_lamp_req;
  uint8_t ad4_rear_fog_lamp_req;
  uint8_t ad4_res_req_for_e2e;
  uint8_t ad4_trunk_ctrl_req;
  uint8_t acc_fusn_trfc_sgn;
  uint8_t asy_sfty_fct_sts_to_edraccfct_sts;
  uint8_t asy_sfty_fct_sts_to_edracsfb1_fct_sts;
  uint8_t asy_sfty_fct_sts_to_edracsfb2_fct_sts;
  uint8_t asy_sfty_fct_sts_to_edracsfc_fct_sts;
  uint8_t asy_sfty_fct_sts_to_edracsfd_fct_sts;
  uint8_t asy_sfty_fct_sts_to_edracsfe_fct_sts;
  uint8_t asy_cnoa_crs_csd_indcr;
  uint8_t asy_cnoa_crs_hud_indcr;
  uint8_t asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr;
  uint8_t asy_emgy_manoeuvre_aid_sts;
  uint8_t asy_fctn_ihbt_by_trlr;
  uint8_t asy_icc_max_warn_msg;
  uint8_t asy_sfty_hwl_req;
  uint8_t aut_lane_chg_sts;
  uint8_t cllsn_aid_post_ema;
  uint8_t lane_chg_aut_actv_sts;
  uint8_t cam_sts_cam_cam_frnt_cal_not_cmpl;
  uint8_t asy_cnoa_lane_chg_assist_sts;
  uint8_t asy_cnoa_lane_chg_fail_type;
  uint8_t aut_cnoa_lane_chg_sts;
  uint8_t asy_cnoa_req_lane_chg;
} deva_function_msgs__msg__MachFunctionControl;

// Struct for a sequence of deva_function_msgs__msg__MachFunctionControl.
typedef struct deva_function_msgs__msg__MachFunctionControl__Sequence
{
  deva_function_msgs__msg__MachFunctionControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__MachFunctionControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__STRUCT_H_
