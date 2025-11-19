// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/StateMachineData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/state_machine_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__StateMachineData__init(deva_function_msgs__msg__StateMachineData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__StateMachineData__fini(msg);
    return false;
  }
  // three_d_angle_req
  // tsm_version
  // apa_version
  // avm_version
  // hmi_version
  // drvr_assc_sys_sts
  // apa_sub_sys_sts
  // last_prk_type
  // monr_sys_sts
  // obstcl_trig_resp
  // pla_mod_sts_resp
  // swt_disp_on_and_off_sts_resp
  // thr_d_touring_view_resp
  // turn_entry_ag_wide_vis_resp
  // veh_mdl_clr_resp
  // visn_ag_extn_resp
  // visn_img_disp_mod_resp
  // drvr_assc_sys_disp
  // prkg_aux_info_disp
  // prkg_back_disp
  // prkg_btn_sts_disp_group_cancel
  // prkg_btn_sts_disp_group_prkg_in
  // prkg_btn_sts_disp_group_prkg_out
  // prkg_fct_di_disp
  // prkg_fct_di_mod_resp
  // prkg_progs_disp
  // prkg_stop_aud_warn_req
  // back_push_apa_info_req
  // voice_prompt_req
  // prkg_img_disp_req
  // park_in_or_out
  // shakehand_rq
  // park_enter_req
  // park_exit_req
  // park_function
  // prkg_fct_vmm_mod_req
  // eng_runng_req_by_park_assi1
  // apa_sts_flag
  // aut_actv_prkg_fct_swt_resp
  // aut_prkg_voice_swt_resp
  // aut_prkg_voice_typ_resp
  // img_sn_sr_cal_sts
  // prkg_dock_dis_req
  // pdc_ctrl_rsn
  // system_fault
  // prkg_lock_req
  // mirr_open_cls_req
  // mob_dev_rpa_req_resp
  // prkg_mod_incln
  // prkg_assi_sys_rem_prkg_sts
  // veh_win_sun_roof_cls_req
  // veh_prkg_lock_theft_req
  // rpa_version
  // prkg_usg_drv_mod_tran_req
  // mob_dev_rpa_sts_uint8
  // prkg_proc_dst_disp
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  // rem_straight_prkg_assi_seln_req_resp
  // rem_str_sts
  // tsm_req_rpa_on
  // last_parkg_type_con_rq
  // forward_distance
  // backward_distance
  // total_distance
  // apa_self_park_or_out_version
  // plan_first_sucs
  // disp_interface_chg_req
  // prkg_fcts_swt_sts_disp
  // avm_drvr_assc_sys_disp
  // avm_prkg_fct_di_disp
  // prkg_btn_sts_dispset
  // drvr_assc_sys_disp_list
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  // prkg_fct_test_pnd_req
  // sm_hpa_version
  // sm_hpa_state_ind
  // sm_hpa_state
  // sm_hpa_req_apa
  // sm_hpa_proc_prompt_req
  // sm_hpa_quit_reason
  // valt_prkg_failr_notif
  // home_prkg_voice_prompt_req
  // sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  // sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  // valt_prkg_reminder
  // veh_home_prkg_sys_sts
  // prkg_amb_li_req
  // veh_prkg_to_horn
  // prkg_accr_ovrdn_ctrl_reqgrp
  // hpa_st_code_to_sm
  // lo_spd_and_trk_bck_sys_sts
  // sm_rem_ctrl_veh_sts
  // sm_rem_str_sts
  // sm_rcv_mod_incln
  // sm_mob_dev_rcv_req_resp
  // sm_mob_dev_rcv_sts
  // sm_rcv_version
  // lgt_control_request
  // lat_control_request
  // mai_sts
  // prkg_emgy_brk_sys_sts
  // prkg_btn_sts_disp_float
  // prkg_active_push
  // prkg_fct_di_mod
  // no_touching_for_avm_req
  // aut_prkg_in_btn_sts_from_rpa
  // asy_a_lgt_sts_asy_a_lgt_sts
  // asy_stand_still_req_for_cmft
  // drv_off_req_for_lgt_ctrl
  // stop_req_of_lgt_ctrl_for_prpsn
  // strt_req_of_lgt_ctrl_for_prpsn
  // avl_sts_for_long_aut_drv
  // hwa_lat_ctrl_sts
  // ad_ctrl_mode
  // asy_lane_chg_assist_sts
  // asy_noa_sts
  // aut_lane_chg_sts
  // asy_req_lane_chg
  // sm_state
  // function_status
  // hwa_odd_off
  // smfault_level
  // prkg_camera_store_resp
  // rev
  // dpa_mode_broadcast
  // dpa_btn_sts
  // sm_fct_err_code2_hmi
  // view_layout_req
  // cust_btn_sts
  // exit_cust_btn_sts
  // frnt_and_re_prkg_in_btn_sts
  // mai_version
  // peb_version
  // lo_spd_and_trk_bck_sub_sts
  // fill_light_req
  return true;
}

void
deva_function_msgs__msg__StateMachineData__fini(deva_function_msgs__msg__StateMachineData * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // three_d_angle_req
  // tsm_version
  // apa_version
  // avm_version
  // hmi_version
  // drvr_assc_sys_sts
  // apa_sub_sys_sts
  // last_prk_type
  // monr_sys_sts
  // obstcl_trig_resp
  // pla_mod_sts_resp
  // swt_disp_on_and_off_sts_resp
  // thr_d_touring_view_resp
  // turn_entry_ag_wide_vis_resp
  // veh_mdl_clr_resp
  // visn_ag_extn_resp
  // visn_img_disp_mod_resp
  // drvr_assc_sys_disp
  // prkg_aux_info_disp
  // prkg_back_disp
  // prkg_btn_sts_disp_group_cancel
  // prkg_btn_sts_disp_group_prkg_in
  // prkg_btn_sts_disp_group_prkg_out
  // prkg_fct_di_disp
  // prkg_fct_di_mod_resp
  // prkg_progs_disp
  // prkg_stop_aud_warn_req
  // back_push_apa_info_req
  // voice_prompt_req
  // prkg_img_disp_req
  // park_in_or_out
  // shakehand_rq
  // park_enter_req
  // park_exit_req
  // park_function
  // prkg_fct_vmm_mod_req
  // eng_runng_req_by_park_assi1
  // apa_sts_flag
  // aut_actv_prkg_fct_swt_resp
  // aut_prkg_voice_swt_resp
  // aut_prkg_voice_typ_resp
  // img_sn_sr_cal_sts
  // prkg_dock_dis_req
  // pdc_ctrl_rsn
  // system_fault
  // prkg_lock_req
  // mirr_open_cls_req
  // mob_dev_rpa_req_resp
  // prkg_mod_incln
  // prkg_assi_sys_rem_prkg_sts
  // veh_win_sun_roof_cls_req
  // veh_prkg_lock_theft_req
  // rpa_version
  // prkg_usg_drv_mod_tran_req
  // mob_dev_rpa_sts_uint8
  // prkg_proc_dst_disp
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  // rem_straight_prkg_assi_seln_req_resp
  // rem_str_sts
  // tsm_req_rpa_on
  // last_parkg_type_con_rq
  // forward_distance
  // backward_distance
  // total_distance
  // apa_self_park_or_out_version
  // plan_first_sucs
  // disp_interface_chg_req
  // prkg_fcts_swt_sts_disp
  // avm_drvr_assc_sys_disp
  // avm_prkg_fct_di_disp
  // prkg_btn_sts_dispset
  // drvr_assc_sys_disp_list
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  // prkg_fct_test_pnd_req
  // sm_hpa_version
  // sm_hpa_state_ind
  // sm_hpa_state
  // sm_hpa_req_apa
  // sm_hpa_proc_prompt_req
  // sm_hpa_quit_reason
  // valt_prkg_failr_notif
  // home_prkg_voice_prompt_req
  // sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  // sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  // valt_prkg_reminder
  // veh_home_prkg_sys_sts
  // prkg_amb_li_req
  // veh_prkg_to_horn
  // prkg_accr_ovrdn_ctrl_reqgrp
  // hpa_st_code_to_sm
  // lo_spd_and_trk_bck_sys_sts
  // sm_rem_ctrl_veh_sts
  // sm_rem_str_sts
  // sm_rcv_mod_incln
  // sm_mob_dev_rcv_req_resp
  // sm_mob_dev_rcv_sts
  // sm_rcv_version
  // lgt_control_request
  // lat_control_request
  // mai_sts
  // prkg_emgy_brk_sys_sts
  // prkg_btn_sts_disp_float
  // prkg_active_push
  // prkg_fct_di_mod
  // no_touching_for_avm_req
  // aut_prkg_in_btn_sts_from_rpa
  // asy_a_lgt_sts_asy_a_lgt_sts
  // asy_stand_still_req_for_cmft
  // drv_off_req_for_lgt_ctrl
  // stop_req_of_lgt_ctrl_for_prpsn
  // strt_req_of_lgt_ctrl_for_prpsn
  // avl_sts_for_long_aut_drv
  // hwa_lat_ctrl_sts
  // ad_ctrl_mode
  // asy_lane_chg_assist_sts
  // asy_noa_sts
  // aut_lane_chg_sts
  // asy_req_lane_chg
  // sm_state
  // function_status
  // hwa_odd_off
  // smfault_level
  // prkg_camera_store_resp
  // rev
  // dpa_mode_broadcast
  // dpa_btn_sts
  // sm_fct_err_code2_hmi
  // view_layout_req
  // cust_btn_sts
  // exit_cust_btn_sts
  // frnt_and_re_prkg_in_btn_sts
  // mai_version
  // peb_version
  // lo_spd_and_trk_bck_sub_sts
  // fill_light_req
}

bool
deva_function_msgs__msg__StateMachineData__are_equal(const deva_function_msgs__msg__StateMachineData * lhs, const deva_function_msgs__msg__StateMachineData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // three_d_angle_req
  if (lhs->three_d_angle_req != rhs->three_d_angle_req) {
    return false;
  }
  // tsm_version
  if (lhs->tsm_version != rhs->tsm_version) {
    return false;
  }
  // apa_version
  if (lhs->apa_version != rhs->apa_version) {
    return false;
  }
  // avm_version
  if (lhs->avm_version != rhs->avm_version) {
    return false;
  }
  // hmi_version
  if (lhs->hmi_version != rhs->hmi_version) {
    return false;
  }
  // drvr_assc_sys_sts
  if (lhs->drvr_assc_sys_sts != rhs->drvr_assc_sys_sts) {
    return false;
  }
  // apa_sub_sys_sts
  if (lhs->apa_sub_sys_sts != rhs->apa_sub_sys_sts) {
    return false;
  }
  // last_prk_type
  if (lhs->last_prk_type != rhs->last_prk_type) {
    return false;
  }
  // monr_sys_sts
  if (lhs->monr_sys_sts != rhs->monr_sys_sts) {
    return false;
  }
  // obstcl_trig_resp
  if (lhs->obstcl_trig_resp != rhs->obstcl_trig_resp) {
    return false;
  }
  // pla_mod_sts_resp
  if (lhs->pla_mod_sts_resp != rhs->pla_mod_sts_resp) {
    return false;
  }
  // swt_disp_on_and_off_sts_resp
  if (lhs->swt_disp_on_and_off_sts_resp != rhs->swt_disp_on_and_off_sts_resp) {
    return false;
  }
  // thr_d_touring_view_resp
  if (lhs->thr_d_touring_view_resp != rhs->thr_d_touring_view_resp) {
    return false;
  }
  // turn_entry_ag_wide_vis_resp
  if (lhs->turn_entry_ag_wide_vis_resp != rhs->turn_entry_ag_wide_vis_resp) {
    return false;
  }
  // veh_mdl_clr_resp
  if (lhs->veh_mdl_clr_resp != rhs->veh_mdl_clr_resp) {
    return false;
  }
  // visn_ag_extn_resp
  if (lhs->visn_ag_extn_resp != rhs->visn_ag_extn_resp) {
    return false;
  }
  // visn_img_disp_mod_resp
  if (lhs->visn_img_disp_mod_resp != rhs->visn_img_disp_mod_resp) {
    return false;
  }
  // drvr_assc_sys_disp
  if (lhs->drvr_assc_sys_disp != rhs->drvr_assc_sys_disp) {
    return false;
  }
  // prkg_aux_info_disp
  if (lhs->prkg_aux_info_disp != rhs->prkg_aux_info_disp) {
    return false;
  }
  // prkg_back_disp
  if (lhs->prkg_back_disp != rhs->prkg_back_disp) {
    return false;
  }
  // prkg_btn_sts_disp_group_cancel
  if (lhs->prkg_btn_sts_disp_group_cancel != rhs->prkg_btn_sts_disp_group_cancel) {
    return false;
  }
  // prkg_btn_sts_disp_group_prkg_in
  if (lhs->prkg_btn_sts_disp_group_prkg_in != rhs->prkg_btn_sts_disp_group_prkg_in) {
    return false;
  }
  // prkg_btn_sts_disp_group_prkg_out
  if (lhs->prkg_btn_sts_disp_group_prkg_out != rhs->prkg_btn_sts_disp_group_prkg_out) {
    return false;
  }
  // prkg_fct_di_disp
  if (lhs->prkg_fct_di_disp != rhs->prkg_fct_di_disp) {
    return false;
  }
  // prkg_fct_di_mod_resp
  if (lhs->prkg_fct_di_mod_resp != rhs->prkg_fct_di_mod_resp) {
    return false;
  }
  // prkg_progs_disp
  if (lhs->prkg_progs_disp != rhs->prkg_progs_disp) {
    return false;
  }
  // prkg_stop_aud_warn_req
  if (lhs->prkg_stop_aud_warn_req != rhs->prkg_stop_aud_warn_req) {
    return false;
  }
  // back_push_apa_info_req
  if (lhs->back_push_apa_info_req != rhs->back_push_apa_info_req) {
    return false;
  }
  // voice_prompt_req
  if (lhs->voice_prompt_req != rhs->voice_prompt_req) {
    return false;
  }
  // prkg_img_disp_req
  if (lhs->prkg_img_disp_req != rhs->prkg_img_disp_req) {
    return false;
  }
  // park_in_or_out
  if (lhs->park_in_or_out != rhs->park_in_or_out) {
    return false;
  }
  // shakehand_rq
  if (lhs->shakehand_rq != rhs->shakehand_rq) {
    return false;
  }
  // park_enter_req
  if (lhs->park_enter_req != rhs->park_enter_req) {
    return false;
  }
  // park_exit_req
  if (lhs->park_exit_req != rhs->park_exit_req) {
    return false;
  }
  // park_function
  if (lhs->park_function != rhs->park_function) {
    return false;
  }
  // prkg_fct_vmm_mod_req
  if (lhs->prkg_fct_vmm_mod_req != rhs->prkg_fct_vmm_mod_req) {
    return false;
  }
  // eng_runng_req_by_park_assi1
  if (lhs->eng_runng_req_by_park_assi1 != rhs->eng_runng_req_by_park_assi1) {
    return false;
  }
  // apa_sts_flag
  if (lhs->apa_sts_flag != rhs->apa_sts_flag) {
    return false;
  }
  // aut_actv_prkg_fct_swt_resp
  if (lhs->aut_actv_prkg_fct_swt_resp != rhs->aut_actv_prkg_fct_swt_resp) {
    return false;
  }
  // aut_prkg_voice_swt_resp
  if (lhs->aut_prkg_voice_swt_resp != rhs->aut_prkg_voice_swt_resp) {
    return false;
  }
  // aut_prkg_voice_typ_resp
  if (lhs->aut_prkg_voice_typ_resp != rhs->aut_prkg_voice_typ_resp) {
    return false;
  }
  // img_sn_sr_cal_sts
  if (lhs->img_sn_sr_cal_sts != rhs->img_sn_sr_cal_sts) {
    return false;
  }
  // prkg_dock_dis_req
  if (lhs->prkg_dock_dis_req != rhs->prkg_dock_dis_req) {
    return false;
  }
  // pdc_ctrl_rsn
  if (lhs->pdc_ctrl_rsn != rhs->pdc_ctrl_rsn) {
    return false;
  }
  // system_fault
  if (lhs->system_fault != rhs->system_fault) {
    return false;
  }
  // prkg_lock_req
  if (lhs->prkg_lock_req != rhs->prkg_lock_req) {
    return false;
  }
  // mirr_open_cls_req
  if (lhs->mirr_open_cls_req != rhs->mirr_open_cls_req) {
    return false;
  }
  // mob_dev_rpa_req_resp
  if (lhs->mob_dev_rpa_req_resp != rhs->mob_dev_rpa_req_resp) {
    return false;
  }
  // prkg_mod_incln
  if (lhs->prkg_mod_incln != rhs->prkg_mod_incln) {
    return false;
  }
  // prkg_assi_sys_rem_prkg_sts
  if (lhs->prkg_assi_sys_rem_prkg_sts != rhs->prkg_assi_sys_rem_prkg_sts) {
    return false;
  }
  // veh_win_sun_roof_cls_req
  if (lhs->veh_win_sun_roof_cls_req != rhs->veh_win_sun_roof_cls_req) {
    return false;
  }
  // veh_prkg_lock_theft_req
  if (lhs->veh_prkg_lock_theft_req != rhs->veh_prkg_lock_theft_req) {
    return false;
  }
  // rpa_version
  if (lhs->rpa_version != rhs->rpa_version) {
    return false;
  }
  // prkg_usg_drv_mod_tran_req
  if (lhs->prkg_usg_drv_mod_tran_req != rhs->prkg_usg_drv_mod_tran_req) {
    return false;
  }
  // mob_dev_rpa_sts_uint8
  if (lhs->mob_dev_rpa_sts_uint8 != rhs->mob_dev_rpa_sts_uint8) {
    return false;
  }
  // prkg_proc_dst_disp
  if (lhs->prkg_proc_dst_disp != rhs->prkg_proc_dst_disp) {
    return false;
  }
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  if (lhs->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 != rhs->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1) {
    return false;
  }
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  if (lhs->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts != rhs->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts) {
    return false;
  }
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  if (lhs->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts != rhs->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts) {
    return false;
  }
  // rem_straight_prkg_assi_seln_req_resp
  if (lhs->rem_straight_prkg_assi_seln_req_resp != rhs->rem_straight_prkg_assi_seln_req_resp) {
    return false;
  }
  // rem_str_sts
  if (lhs->rem_str_sts != rhs->rem_str_sts) {
    return false;
  }
  // tsm_req_rpa_on
  if (lhs->tsm_req_rpa_on != rhs->tsm_req_rpa_on) {
    return false;
  }
  // last_parkg_type_con_rq
  if (lhs->last_parkg_type_con_rq != rhs->last_parkg_type_con_rq) {
    return false;
  }
  // forward_distance
  if (lhs->forward_distance != rhs->forward_distance) {
    return false;
  }
  // backward_distance
  if (lhs->backward_distance != rhs->backward_distance) {
    return false;
  }
  // total_distance
  if (lhs->total_distance != rhs->total_distance) {
    return false;
  }
  // apa_self_park_or_out_version
  if (lhs->apa_self_park_or_out_version != rhs->apa_self_park_or_out_version) {
    return false;
  }
  // plan_first_sucs
  if (lhs->plan_first_sucs != rhs->plan_first_sucs) {
    return false;
  }
  // disp_interface_chg_req
  if (lhs->disp_interface_chg_req != rhs->disp_interface_chg_req) {
    return false;
  }
  // prkg_fcts_swt_sts_disp
  if (lhs->prkg_fcts_swt_sts_disp != rhs->prkg_fcts_swt_sts_disp) {
    return false;
  }
  // avm_drvr_assc_sys_disp
  if (lhs->avm_drvr_assc_sys_disp != rhs->avm_drvr_assc_sys_disp) {
    return false;
  }
  // avm_prkg_fct_di_disp
  if (lhs->avm_prkg_fct_di_disp != rhs->avm_prkg_fct_di_disp) {
    return false;
  }
  // prkg_btn_sts_dispset
  if (lhs->prkg_btn_sts_dispset != rhs->prkg_btn_sts_dispset) {
    return false;
  }
  // drvr_assc_sys_disp_list
  if (lhs->drvr_assc_sys_disp_list != rhs->drvr_assc_sys_disp_list) {
    return false;
  }
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  if (lhs->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 != rhs->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5) {
    return false;
  }
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  if (lhs->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 != rhs->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6) {
    return false;
  }
  // prkg_fct_test_pnd_req
  if (lhs->prkg_fct_test_pnd_req != rhs->prkg_fct_test_pnd_req) {
    return false;
  }
  // sm_hpa_version
  if (lhs->sm_hpa_version != rhs->sm_hpa_version) {
    return false;
  }
  // sm_hpa_state_ind
  if (lhs->sm_hpa_state_ind != rhs->sm_hpa_state_ind) {
    return false;
  }
  // sm_hpa_state
  if (lhs->sm_hpa_state != rhs->sm_hpa_state) {
    return false;
  }
  // sm_hpa_req_apa
  if (lhs->sm_hpa_req_apa != rhs->sm_hpa_req_apa) {
    return false;
  }
  // sm_hpa_proc_prompt_req
  if (lhs->sm_hpa_proc_prompt_req != rhs->sm_hpa_proc_prompt_req) {
    return false;
  }
  // sm_hpa_quit_reason
  if (lhs->sm_hpa_quit_reason != rhs->sm_hpa_quit_reason) {
    return false;
  }
  // valt_prkg_failr_notif
  if (lhs->valt_prkg_failr_notif != rhs->valt_prkg_failr_notif) {
    return false;
  }
  // home_prkg_voice_prompt_req
  if (lhs->home_prkg_voice_prompt_req != rhs->home_prkg_voice_prompt_req) {
    return false;
  }
  // sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  if (lhs->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req != rhs->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req) {
    return false;
  }
  // sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  if (lhs->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 != rhs->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1) {
    return false;
  }
  // valt_prkg_reminder
  if (lhs->valt_prkg_reminder != rhs->valt_prkg_reminder) {
    return false;
  }
  // veh_home_prkg_sys_sts
  if (lhs->veh_home_prkg_sys_sts != rhs->veh_home_prkg_sys_sts) {
    return false;
  }
  // prkg_amb_li_req
  if (lhs->prkg_amb_li_req != rhs->prkg_amb_li_req) {
    return false;
  }
  // veh_prkg_to_horn
  if (lhs->veh_prkg_to_horn != rhs->veh_prkg_to_horn) {
    return false;
  }
  // prkg_accr_ovrdn_ctrl_reqgrp
  if (lhs->prkg_accr_ovrdn_ctrl_reqgrp != rhs->prkg_accr_ovrdn_ctrl_reqgrp) {
    return false;
  }
  // hpa_st_code_to_sm
  if (lhs->hpa_st_code_to_sm != rhs->hpa_st_code_to_sm) {
    return false;
  }
  // lo_spd_and_trk_bck_sys_sts
  if (lhs->lo_spd_and_trk_bck_sys_sts != rhs->lo_spd_and_trk_bck_sys_sts) {
    return false;
  }
  // sm_rem_ctrl_veh_sts
  if (lhs->sm_rem_ctrl_veh_sts != rhs->sm_rem_ctrl_veh_sts) {
    return false;
  }
  // sm_rem_str_sts
  if (lhs->sm_rem_str_sts != rhs->sm_rem_str_sts) {
    return false;
  }
  // sm_rcv_mod_incln
  if (lhs->sm_rcv_mod_incln != rhs->sm_rcv_mod_incln) {
    return false;
  }
  // sm_mob_dev_rcv_req_resp
  if (lhs->sm_mob_dev_rcv_req_resp != rhs->sm_mob_dev_rcv_req_resp) {
    return false;
  }
  // sm_mob_dev_rcv_sts
  if (lhs->sm_mob_dev_rcv_sts != rhs->sm_mob_dev_rcv_sts) {
    return false;
  }
  // sm_rcv_version
  if (lhs->sm_rcv_version != rhs->sm_rcv_version) {
    return false;
  }
  // lgt_control_request
  if (lhs->lgt_control_request != rhs->lgt_control_request) {
    return false;
  }
  // lat_control_request
  if (lhs->lat_control_request != rhs->lat_control_request) {
    return false;
  }
  // mai_sts
  if (lhs->mai_sts != rhs->mai_sts) {
    return false;
  }
  // prkg_emgy_brk_sys_sts
  if (lhs->prkg_emgy_brk_sys_sts != rhs->prkg_emgy_brk_sys_sts) {
    return false;
  }
  // prkg_btn_sts_disp_float
  if (lhs->prkg_btn_sts_disp_float != rhs->prkg_btn_sts_disp_float) {
    return false;
  }
  // prkg_active_push
  if (lhs->prkg_active_push != rhs->prkg_active_push) {
    return false;
  }
  // prkg_fct_di_mod
  if (lhs->prkg_fct_di_mod != rhs->prkg_fct_di_mod) {
    return false;
  }
  // no_touching_for_avm_req
  if (lhs->no_touching_for_avm_req != rhs->no_touching_for_avm_req) {
    return false;
  }
  // aut_prkg_in_btn_sts_from_rpa
  if (lhs->aut_prkg_in_btn_sts_from_rpa != rhs->aut_prkg_in_btn_sts_from_rpa) {
    return false;
  }
  // asy_a_lgt_sts_asy_a_lgt_sts
  if (lhs->asy_a_lgt_sts_asy_a_lgt_sts != rhs->asy_a_lgt_sts_asy_a_lgt_sts) {
    return false;
  }
  // asy_stand_still_req_for_cmft
  if (lhs->asy_stand_still_req_for_cmft != rhs->asy_stand_still_req_for_cmft) {
    return false;
  }
  // drv_off_req_for_lgt_ctrl
  if (lhs->drv_off_req_for_lgt_ctrl != rhs->drv_off_req_for_lgt_ctrl) {
    return false;
  }
  // stop_req_of_lgt_ctrl_for_prpsn
  if (lhs->stop_req_of_lgt_ctrl_for_prpsn != rhs->stop_req_of_lgt_ctrl_for_prpsn) {
    return false;
  }
  // strt_req_of_lgt_ctrl_for_prpsn
  if (lhs->strt_req_of_lgt_ctrl_for_prpsn != rhs->strt_req_of_lgt_ctrl_for_prpsn) {
    return false;
  }
  // avl_sts_for_long_aut_drv
  if (lhs->avl_sts_for_long_aut_drv != rhs->avl_sts_for_long_aut_drv) {
    return false;
  }
  // hwa_lat_ctrl_sts
  if (lhs->hwa_lat_ctrl_sts != rhs->hwa_lat_ctrl_sts) {
    return false;
  }
  // ad_ctrl_mode
  if (lhs->ad_ctrl_mode != rhs->ad_ctrl_mode) {
    return false;
  }
  // asy_lane_chg_assist_sts
  if (lhs->asy_lane_chg_assist_sts != rhs->asy_lane_chg_assist_sts) {
    return false;
  }
  // asy_noa_sts
  if (lhs->asy_noa_sts != rhs->asy_noa_sts) {
    return false;
  }
  // aut_lane_chg_sts
  if (lhs->aut_lane_chg_sts != rhs->aut_lane_chg_sts) {
    return false;
  }
  // asy_req_lane_chg
  if (lhs->asy_req_lane_chg != rhs->asy_req_lane_chg) {
    return false;
  }
  // sm_state
  if (lhs->sm_state != rhs->sm_state) {
    return false;
  }
  // function_status
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->function_status[i] != rhs->function_status[i]) {
      return false;
    }
  }
  // hwa_odd_off
  if (lhs->hwa_odd_off != rhs->hwa_odd_off) {
    return false;
  }
  // smfault_level
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->smfault_level[i] != rhs->smfault_level[i]) {
      return false;
    }
  }
  // prkg_camera_store_resp
  if (lhs->prkg_camera_store_resp != rhs->prkg_camera_store_resp) {
    return false;
  }
  // rev
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->rev[i] != rhs->rev[i]) {
      return false;
    }
  }
  // dpa_mode_broadcast
  if (lhs->dpa_mode_broadcast != rhs->dpa_mode_broadcast) {
    return false;
  }
  // dpa_btn_sts
  if (lhs->dpa_btn_sts != rhs->dpa_btn_sts) {
    return false;
  }
  // sm_fct_err_code2_hmi
  if (lhs->sm_fct_err_code2_hmi != rhs->sm_fct_err_code2_hmi) {
    return false;
  }
  // view_layout_req
  if (lhs->view_layout_req != rhs->view_layout_req) {
    return false;
  }
  // cust_btn_sts
  if (lhs->cust_btn_sts != rhs->cust_btn_sts) {
    return false;
  }
  // exit_cust_btn_sts
  if (lhs->exit_cust_btn_sts != rhs->exit_cust_btn_sts) {
    return false;
  }
  // frnt_and_re_prkg_in_btn_sts
  if (lhs->frnt_and_re_prkg_in_btn_sts != rhs->frnt_and_re_prkg_in_btn_sts) {
    return false;
  }
  // mai_version
  if (lhs->mai_version != rhs->mai_version) {
    return false;
  }
  // peb_version
  if (lhs->peb_version != rhs->peb_version) {
    return false;
  }
  // lo_spd_and_trk_bck_sub_sts
  if (lhs->lo_spd_and_trk_bck_sub_sts != rhs->lo_spd_and_trk_bck_sub_sts) {
    return false;
  }
  // fill_light_req
  if (lhs->fill_light_req != rhs->fill_light_req) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__StateMachineData__copy(
  const deva_function_msgs__msg__StateMachineData * input,
  deva_function_msgs__msg__StateMachineData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // three_d_angle_req
  output->three_d_angle_req = input->three_d_angle_req;
  // tsm_version
  output->tsm_version = input->tsm_version;
  // apa_version
  output->apa_version = input->apa_version;
  // avm_version
  output->avm_version = input->avm_version;
  // hmi_version
  output->hmi_version = input->hmi_version;
  // drvr_assc_sys_sts
  output->drvr_assc_sys_sts = input->drvr_assc_sys_sts;
  // apa_sub_sys_sts
  output->apa_sub_sys_sts = input->apa_sub_sys_sts;
  // last_prk_type
  output->last_prk_type = input->last_prk_type;
  // monr_sys_sts
  output->monr_sys_sts = input->monr_sys_sts;
  // obstcl_trig_resp
  output->obstcl_trig_resp = input->obstcl_trig_resp;
  // pla_mod_sts_resp
  output->pla_mod_sts_resp = input->pla_mod_sts_resp;
  // swt_disp_on_and_off_sts_resp
  output->swt_disp_on_and_off_sts_resp = input->swt_disp_on_and_off_sts_resp;
  // thr_d_touring_view_resp
  output->thr_d_touring_view_resp = input->thr_d_touring_view_resp;
  // turn_entry_ag_wide_vis_resp
  output->turn_entry_ag_wide_vis_resp = input->turn_entry_ag_wide_vis_resp;
  // veh_mdl_clr_resp
  output->veh_mdl_clr_resp = input->veh_mdl_clr_resp;
  // visn_ag_extn_resp
  output->visn_ag_extn_resp = input->visn_ag_extn_resp;
  // visn_img_disp_mod_resp
  output->visn_img_disp_mod_resp = input->visn_img_disp_mod_resp;
  // drvr_assc_sys_disp
  output->drvr_assc_sys_disp = input->drvr_assc_sys_disp;
  // prkg_aux_info_disp
  output->prkg_aux_info_disp = input->prkg_aux_info_disp;
  // prkg_back_disp
  output->prkg_back_disp = input->prkg_back_disp;
  // prkg_btn_sts_disp_group_cancel
  output->prkg_btn_sts_disp_group_cancel = input->prkg_btn_sts_disp_group_cancel;
  // prkg_btn_sts_disp_group_prkg_in
  output->prkg_btn_sts_disp_group_prkg_in = input->prkg_btn_sts_disp_group_prkg_in;
  // prkg_btn_sts_disp_group_prkg_out
  output->prkg_btn_sts_disp_group_prkg_out = input->prkg_btn_sts_disp_group_prkg_out;
  // prkg_fct_di_disp
  output->prkg_fct_di_disp = input->prkg_fct_di_disp;
  // prkg_fct_di_mod_resp
  output->prkg_fct_di_mod_resp = input->prkg_fct_di_mod_resp;
  // prkg_progs_disp
  output->prkg_progs_disp = input->prkg_progs_disp;
  // prkg_stop_aud_warn_req
  output->prkg_stop_aud_warn_req = input->prkg_stop_aud_warn_req;
  // back_push_apa_info_req
  output->back_push_apa_info_req = input->back_push_apa_info_req;
  // voice_prompt_req
  output->voice_prompt_req = input->voice_prompt_req;
  // prkg_img_disp_req
  output->prkg_img_disp_req = input->prkg_img_disp_req;
  // park_in_or_out
  output->park_in_or_out = input->park_in_or_out;
  // shakehand_rq
  output->shakehand_rq = input->shakehand_rq;
  // park_enter_req
  output->park_enter_req = input->park_enter_req;
  // park_exit_req
  output->park_exit_req = input->park_exit_req;
  // park_function
  output->park_function = input->park_function;
  // prkg_fct_vmm_mod_req
  output->prkg_fct_vmm_mod_req = input->prkg_fct_vmm_mod_req;
  // eng_runng_req_by_park_assi1
  output->eng_runng_req_by_park_assi1 = input->eng_runng_req_by_park_assi1;
  // apa_sts_flag
  output->apa_sts_flag = input->apa_sts_flag;
  // aut_actv_prkg_fct_swt_resp
  output->aut_actv_prkg_fct_swt_resp = input->aut_actv_prkg_fct_swt_resp;
  // aut_prkg_voice_swt_resp
  output->aut_prkg_voice_swt_resp = input->aut_prkg_voice_swt_resp;
  // aut_prkg_voice_typ_resp
  output->aut_prkg_voice_typ_resp = input->aut_prkg_voice_typ_resp;
  // img_sn_sr_cal_sts
  output->img_sn_sr_cal_sts = input->img_sn_sr_cal_sts;
  // prkg_dock_dis_req
  output->prkg_dock_dis_req = input->prkg_dock_dis_req;
  // pdc_ctrl_rsn
  output->pdc_ctrl_rsn = input->pdc_ctrl_rsn;
  // system_fault
  output->system_fault = input->system_fault;
  // prkg_lock_req
  output->prkg_lock_req = input->prkg_lock_req;
  // mirr_open_cls_req
  output->mirr_open_cls_req = input->mirr_open_cls_req;
  // mob_dev_rpa_req_resp
  output->mob_dev_rpa_req_resp = input->mob_dev_rpa_req_resp;
  // prkg_mod_incln
  output->prkg_mod_incln = input->prkg_mod_incln;
  // prkg_assi_sys_rem_prkg_sts
  output->prkg_assi_sys_rem_prkg_sts = input->prkg_assi_sys_rem_prkg_sts;
  // veh_win_sun_roof_cls_req
  output->veh_win_sun_roof_cls_req = input->veh_win_sun_roof_cls_req;
  // veh_prkg_lock_theft_req
  output->veh_prkg_lock_theft_req = input->veh_prkg_lock_theft_req;
  // rpa_version
  output->rpa_version = input->rpa_version;
  // prkg_usg_drv_mod_tran_req
  output->prkg_usg_drv_mod_tran_req = input->prkg_usg_drv_mod_tran_req;
  // mob_dev_rpa_sts_uint8
  output->mob_dev_rpa_sts_uint8 = input->mob_dev_rpa_sts_uint8;
  // prkg_proc_dst_disp
  output->prkg_proc_dst_disp = input->prkg_proc_dst_disp;
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  output->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = input->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1;
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  output->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = input->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts;
  // mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  output->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = input->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts;
  // rem_straight_prkg_assi_seln_req_resp
  output->rem_straight_prkg_assi_seln_req_resp = input->rem_straight_prkg_assi_seln_req_resp;
  // rem_str_sts
  output->rem_str_sts = input->rem_str_sts;
  // tsm_req_rpa_on
  output->tsm_req_rpa_on = input->tsm_req_rpa_on;
  // last_parkg_type_con_rq
  output->last_parkg_type_con_rq = input->last_parkg_type_con_rq;
  // forward_distance
  output->forward_distance = input->forward_distance;
  // backward_distance
  output->backward_distance = input->backward_distance;
  // total_distance
  output->total_distance = input->total_distance;
  // apa_self_park_or_out_version
  output->apa_self_park_or_out_version = input->apa_self_park_or_out_version;
  // plan_first_sucs
  output->plan_first_sucs = input->plan_first_sucs;
  // disp_interface_chg_req
  output->disp_interface_chg_req = input->disp_interface_chg_req;
  // prkg_fcts_swt_sts_disp
  output->prkg_fcts_swt_sts_disp = input->prkg_fcts_swt_sts_disp;
  // avm_drvr_assc_sys_disp
  output->avm_drvr_assc_sys_disp = input->avm_drvr_assc_sys_disp;
  // avm_prkg_fct_di_disp
  output->avm_prkg_fct_di_disp = input->avm_prkg_fct_di_disp;
  // prkg_btn_sts_dispset
  output->prkg_btn_sts_dispset = input->prkg_btn_sts_dispset;
  // drvr_assc_sys_disp_list
  output->drvr_assc_sys_disp_list = input->drvr_assc_sys_disp_list;
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  output->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = input->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5;
  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  output->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = input->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6;
  // prkg_fct_test_pnd_req
  output->prkg_fct_test_pnd_req = input->prkg_fct_test_pnd_req;
  // sm_hpa_version
  output->sm_hpa_version = input->sm_hpa_version;
  // sm_hpa_state_ind
  output->sm_hpa_state_ind = input->sm_hpa_state_ind;
  // sm_hpa_state
  output->sm_hpa_state = input->sm_hpa_state;
  // sm_hpa_req_apa
  output->sm_hpa_req_apa = input->sm_hpa_req_apa;
  // sm_hpa_proc_prompt_req
  output->sm_hpa_proc_prompt_req = input->sm_hpa_proc_prompt_req;
  // sm_hpa_quit_reason
  output->sm_hpa_quit_reason = input->sm_hpa_quit_reason;
  // valt_prkg_failr_notif
  output->valt_prkg_failr_notif = input->valt_prkg_failr_notif;
  // home_prkg_voice_prompt_req
  output->home_prkg_voice_prompt_req = input->home_prkg_voice_prompt_req;
  // sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  output->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = input->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req;
  // sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  output->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = input->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1;
  // valt_prkg_reminder
  output->valt_prkg_reminder = input->valt_prkg_reminder;
  // veh_home_prkg_sys_sts
  output->veh_home_prkg_sys_sts = input->veh_home_prkg_sys_sts;
  // prkg_amb_li_req
  output->prkg_amb_li_req = input->prkg_amb_li_req;
  // veh_prkg_to_horn
  output->veh_prkg_to_horn = input->veh_prkg_to_horn;
  // prkg_accr_ovrdn_ctrl_reqgrp
  output->prkg_accr_ovrdn_ctrl_reqgrp = input->prkg_accr_ovrdn_ctrl_reqgrp;
  // hpa_st_code_to_sm
  output->hpa_st_code_to_sm = input->hpa_st_code_to_sm;
  // lo_spd_and_trk_bck_sys_sts
  output->lo_spd_and_trk_bck_sys_sts = input->lo_spd_and_trk_bck_sys_sts;
  // sm_rem_ctrl_veh_sts
  output->sm_rem_ctrl_veh_sts = input->sm_rem_ctrl_veh_sts;
  // sm_rem_str_sts
  output->sm_rem_str_sts = input->sm_rem_str_sts;
  // sm_rcv_mod_incln
  output->sm_rcv_mod_incln = input->sm_rcv_mod_incln;
  // sm_mob_dev_rcv_req_resp
  output->sm_mob_dev_rcv_req_resp = input->sm_mob_dev_rcv_req_resp;
  // sm_mob_dev_rcv_sts
  output->sm_mob_dev_rcv_sts = input->sm_mob_dev_rcv_sts;
  // sm_rcv_version
  output->sm_rcv_version = input->sm_rcv_version;
  // lgt_control_request
  output->lgt_control_request = input->lgt_control_request;
  // lat_control_request
  output->lat_control_request = input->lat_control_request;
  // mai_sts
  output->mai_sts = input->mai_sts;
  // prkg_emgy_brk_sys_sts
  output->prkg_emgy_brk_sys_sts = input->prkg_emgy_brk_sys_sts;
  // prkg_btn_sts_disp_float
  output->prkg_btn_sts_disp_float = input->prkg_btn_sts_disp_float;
  // prkg_active_push
  output->prkg_active_push = input->prkg_active_push;
  // prkg_fct_di_mod
  output->prkg_fct_di_mod = input->prkg_fct_di_mod;
  // no_touching_for_avm_req
  output->no_touching_for_avm_req = input->no_touching_for_avm_req;
  // aut_prkg_in_btn_sts_from_rpa
  output->aut_prkg_in_btn_sts_from_rpa = input->aut_prkg_in_btn_sts_from_rpa;
  // asy_a_lgt_sts_asy_a_lgt_sts
  output->asy_a_lgt_sts_asy_a_lgt_sts = input->asy_a_lgt_sts_asy_a_lgt_sts;
  // asy_stand_still_req_for_cmft
  output->asy_stand_still_req_for_cmft = input->asy_stand_still_req_for_cmft;
  // drv_off_req_for_lgt_ctrl
  output->drv_off_req_for_lgt_ctrl = input->drv_off_req_for_lgt_ctrl;
  // stop_req_of_lgt_ctrl_for_prpsn
  output->stop_req_of_lgt_ctrl_for_prpsn = input->stop_req_of_lgt_ctrl_for_prpsn;
  // strt_req_of_lgt_ctrl_for_prpsn
  output->strt_req_of_lgt_ctrl_for_prpsn = input->strt_req_of_lgt_ctrl_for_prpsn;
  // avl_sts_for_long_aut_drv
  output->avl_sts_for_long_aut_drv = input->avl_sts_for_long_aut_drv;
  // hwa_lat_ctrl_sts
  output->hwa_lat_ctrl_sts = input->hwa_lat_ctrl_sts;
  // ad_ctrl_mode
  output->ad_ctrl_mode = input->ad_ctrl_mode;
  // asy_lane_chg_assist_sts
  output->asy_lane_chg_assist_sts = input->asy_lane_chg_assist_sts;
  // asy_noa_sts
  output->asy_noa_sts = input->asy_noa_sts;
  // aut_lane_chg_sts
  output->aut_lane_chg_sts = input->aut_lane_chg_sts;
  // asy_req_lane_chg
  output->asy_req_lane_chg = input->asy_req_lane_chg;
  // sm_state
  output->sm_state = input->sm_state;
  // function_status
  for (size_t i = 0; i < 32; ++i) {
    output->function_status[i] = input->function_status[i];
  }
  // hwa_odd_off
  output->hwa_odd_off = input->hwa_odd_off;
  // smfault_level
  for (size_t i = 0; i < 32; ++i) {
    output->smfault_level[i] = input->smfault_level[i];
  }
  // prkg_camera_store_resp
  output->prkg_camera_store_resp = input->prkg_camera_store_resp;
  // rev
  for (size_t i = 0; i < 8; ++i) {
    output->rev[i] = input->rev[i];
  }
  // dpa_mode_broadcast
  output->dpa_mode_broadcast = input->dpa_mode_broadcast;
  // dpa_btn_sts
  output->dpa_btn_sts = input->dpa_btn_sts;
  // sm_fct_err_code2_hmi
  output->sm_fct_err_code2_hmi = input->sm_fct_err_code2_hmi;
  // view_layout_req
  output->view_layout_req = input->view_layout_req;
  // cust_btn_sts
  output->cust_btn_sts = input->cust_btn_sts;
  // exit_cust_btn_sts
  output->exit_cust_btn_sts = input->exit_cust_btn_sts;
  // frnt_and_re_prkg_in_btn_sts
  output->frnt_and_re_prkg_in_btn_sts = input->frnt_and_re_prkg_in_btn_sts;
  // mai_version
  output->mai_version = input->mai_version;
  // peb_version
  output->peb_version = input->peb_version;
  // lo_spd_and_trk_bck_sub_sts
  output->lo_spd_and_trk_bck_sub_sts = input->lo_spd_and_trk_bck_sub_sts;
  // fill_light_req
  output->fill_light_req = input->fill_light_req;
  return true;
}

deva_function_msgs__msg__StateMachineData *
deva_function_msgs__msg__StateMachineData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__StateMachineData * msg = (deva_function_msgs__msg__StateMachineData *)allocator.allocate(sizeof(deva_function_msgs__msg__StateMachineData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__StateMachineData));
  bool success = deva_function_msgs__msg__StateMachineData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__StateMachineData__destroy(deva_function_msgs__msg__StateMachineData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__StateMachineData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__StateMachineData__Sequence__init(deva_function_msgs__msg__StateMachineData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__StateMachineData * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__StateMachineData *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__StateMachineData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__StateMachineData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__StateMachineData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
deva_function_msgs__msg__StateMachineData__Sequence__fini(deva_function_msgs__msg__StateMachineData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deva_function_msgs__msg__StateMachineData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

deva_function_msgs__msg__StateMachineData__Sequence *
deva_function_msgs__msg__StateMachineData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__StateMachineData__Sequence * array = (deva_function_msgs__msg__StateMachineData__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__StateMachineData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__StateMachineData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__StateMachineData__Sequence__destroy(deva_function_msgs__msg__StateMachineData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__StateMachineData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__StateMachineData__Sequence__are_equal(const deva_function_msgs__msg__StateMachineData__Sequence * lhs, const deva_function_msgs__msg__StateMachineData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__StateMachineData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__StateMachineData__Sequence__copy(
  const deva_function_msgs__msg__StateMachineData__Sequence * input,
  deva_function_msgs__msg__StateMachineData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__StateMachineData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__StateMachineData * data =
      (deva_function_msgs__msg__StateMachineData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__StateMachineData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__StateMachineData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__StateMachineData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
