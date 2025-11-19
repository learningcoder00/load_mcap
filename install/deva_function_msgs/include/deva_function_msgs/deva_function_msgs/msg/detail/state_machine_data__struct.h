// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/StateMachineData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__STRUCT_H_

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

/// Struct defined in msg/StateMachineData in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__StateMachineData
{
  deva_common_msgs__msg__Header header;
  float three_d_angle_req;
  uint32_t tsm_version;
  uint32_t apa_version;
  uint32_t avm_version;
  uint32_t hmi_version;
  uint8_t drvr_assc_sys_sts;
  uint8_t apa_sub_sys_sts;
  uint8_t last_prk_type;
  uint8_t monr_sys_sts;
  uint8_t obstcl_trig_resp;
  uint8_t pla_mod_sts_resp;
  uint8_t swt_disp_on_and_off_sts_resp;
  uint8_t thr_d_touring_view_resp;
  uint8_t turn_entry_ag_wide_vis_resp;
  uint8_t veh_mdl_clr_resp;
  uint8_t visn_ag_extn_resp;
  uint8_t visn_img_disp_mod_resp;
  uint8_t drvr_assc_sys_disp;
  uint8_t prkg_aux_info_disp;
  uint8_t prkg_back_disp;
  uint8_t prkg_btn_sts_disp_group_cancel;
  uint8_t prkg_btn_sts_disp_group_prkg_in;
  uint8_t prkg_btn_sts_disp_group_prkg_out;
  uint8_t prkg_fct_di_disp;
  uint8_t prkg_fct_di_mod_resp;
  uint8_t prkg_progs_disp;
  bool prkg_stop_aud_warn_req;
  uint8_t back_push_apa_info_req;
  uint8_t voice_prompt_req;
  uint8_t prkg_img_disp_req;
  uint8_t park_in_or_out;
  uint8_t shakehand_rq;
  bool park_enter_req;
  bool park_exit_req;
  uint8_t park_function;
  bool prkg_fct_vmm_mod_req;
  uint8_t eng_runng_req_by_park_assi1;
  uint8_t apa_sts_flag;
  uint8_t aut_actv_prkg_fct_swt_resp;
  uint8_t aut_prkg_voice_swt_resp;
  uint8_t aut_prkg_voice_typ_resp;
  bool img_sn_sr_cal_sts;
  uint8_t prkg_dock_dis_req;
  uint8_t pdc_ctrl_rsn;
  uint32_t system_fault;
  uint8_t prkg_lock_req;
  uint8_t mirr_open_cls_req;
  uint8_t mob_dev_rpa_req_resp;
  uint8_t prkg_mod_incln;
  uint8_t prkg_assi_sys_rem_prkg_sts;
  uint8_t veh_win_sun_roof_cls_req;
  uint8_t veh_prkg_lock_theft_req;
  uint32_t rpa_version;
  uint8_t prkg_usg_drv_mod_tran_req;
  uint8_t mob_dev_rpa_sts_uint8;
  float prkg_proc_dst_disp;
  uint8_t prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1;
  uint8_t mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts;
  uint8_t mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts;
  float rem_straight_prkg_assi_seln_req_resp;
  uint8_t rem_str_sts;
  uint8_t tsm_req_rpa_on;
  uint8_t last_parkg_type_con_rq;
  float forward_distance;
  float backward_distance;
  float total_distance;
  uint32_t apa_self_park_or_out_version;
  uint8_t plan_first_sucs;
  uint8_t disp_interface_chg_req;
  uint8_t prkg_fcts_swt_sts_disp;
  uint8_t avm_drvr_assc_sys_disp;
  uint8_t avm_prkg_fct_di_disp;
  uint8_t prkg_btn_sts_dispset;
  uint8_t drvr_assc_sys_disp_list;
  uint8_t prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5;
  uint8_t prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6;
  uint32_t prkg_fct_test_pnd_req;
  uint32_t sm_hpa_version;
  uint8_t sm_hpa_state_ind;
  uint8_t sm_hpa_state;
  uint8_t sm_hpa_req_apa;
  uint8_t sm_hpa_proc_prompt_req;
  uint8_t sm_hpa_quit_reason;
  uint8_t valt_prkg_failr_notif;
  uint8_t home_prkg_voice_prompt_req;
  uint8_t sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req;
  uint8_t sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1;
  uint8_t valt_prkg_reminder;
  uint8_t veh_home_prkg_sys_sts;
  uint8_t prkg_amb_li_req;
  uint8_t veh_prkg_to_horn;
  uint8_t prkg_accr_ovrdn_ctrl_reqgrp;
  uint8_t hpa_st_code_to_sm;
  uint8_t lo_spd_and_trk_bck_sys_sts;
  uint8_t sm_rem_ctrl_veh_sts;
  uint8_t sm_rem_str_sts;
  uint8_t sm_rcv_mod_incln;
  uint8_t sm_mob_dev_rcv_req_resp;
  uint8_t sm_mob_dev_rcv_sts;
  uint32_t sm_rcv_version;
  uint8_t lgt_control_request;
  uint8_t lat_control_request;
  uint8_t mai_sts;
  uint8_t prkg_emgy_brk_sys_sts;
  uint8_t prkg_btn_sts_disp_float;
  uint8_t prkg_active_push;
  uint8_t prkg_fct_di_mod;
  uint8_t no_touching_for_avm_req;
  uint8_t aut_prkg_in_btn_sts_from_rpa;
  uint8_t asy_a_lgt_sts_asy_a_lgt_sts;
  uint8_t asy_stand_still_req_for_cmft;
  uint8_t drv_off_req_for_lgt_ctrl;
  uint8_t stop_req_of_lgt_ctrl_for_prpsn;
  uint8_t strt_req_of_lgt_ctrl_for_prpsn;
  uint8_t avl_sts_for_long_aut_drv;
  uint8_t hwa_lat_ctrl_sts;
  uint8_t ad_ctrl_mode;
  uint8_t asy_lane_chg_assist_sts;
  uint8_t asy_noa_sts;
  uint8_t aut_lane_chg_sts;
  uint8_t asy_req_lane_chg;
  uint8_t sm_state;
  uint8_t function_status[32];
  uint8_t hwa_odd_off;
  uint8_t smfault_level[32];
  uint8_t prkg_camera_store_resp;
  uint8_t rev[8];
  uint8_t dpa_mode_broadcast;
  uint8_t dpa_btn_sts;
  uint16_t sm_fct_err_code2_hmi;
  uint8_t view_layout_req;
  uint8_t cust_btn_sts;
  uint8_t exit_cust_btn_sts;
  uint8_t frnt_and_re_prkg_in_btn_sts;
  uint8_t mai_version;
  uint8_t peb_version;
  uint8_t lo_spd_and_trk_bck_sub_sts;
  uint8_t fill_light_req;
} deva_function_msgs__msg__StateMachineData;

// Struct for a sequence of deva_function_msgs__msg__StateMachineData.
typedef struct deva_function_msgs__msg__StateMachineData__Sequence
{
  deva_function_msgs__msg__StateMachineData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__StateMachineData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__STRUCT_H_
