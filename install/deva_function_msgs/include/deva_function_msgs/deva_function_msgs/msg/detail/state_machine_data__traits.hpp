// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/StateMachineData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/state_machine_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateMachineData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: three_d_angle_req
  {
    out << "three_d_angle_req: ";
    rosidl_generator_traits::value_to_yaml(msg.three_d_angle_req, out);
    out << ", ";
  }

  // member: tsm_version
  {
    out << "tsm_version: ";
    rosidl_generator_traits::value_to_yaml(msg.tsm_version, out);
    out << ", ";
  }

  // member: apa_version
  {
    out << "apa_version: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_version, out);
    out << ", ";
  }

  // member: avm_version
  {
    out << "avm_version: ";
    rosidl_generator_traits::value_to_yaml(msg.avm_version, out);
    out << ", ";
  }

  // member: hmi_version
  {
    out << "hmi_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_version, out);
    out << ", ";
  }

  // member: drvr_assc_sys_sts
  {
    out << "drvr_assc_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_sts, out);
    out << ", ";
  }

  // member: apa_sub_sys_sts
  {
    out << "apa_sub_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_sub_sys_sts, out);
    out << ", ";
  }

  // member: last_prk_type
  {
    out << "last_prk_type: ";
    rosidl_generator_traits::value_to_yaml(msg.last_prk_type, out);
    out << ", ";
  }

  // member: monr_sys_sts
  {
    out << "monr_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.monr_sys_sts, out);
    out << ", ";
  }

  // member: obstcl_trig_resp
  {
    out << "obstcl_trig_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.obstcl_trig_resp, out);
    out << ", ";
  }

  // member: pla_mod_sts_resp
  {
    out << "pla_mod_sts_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.pla_mod_sts_resp, out);
    out << ", ";
  }

  // member: swt_disp_on_and_off_sts_resp
  {
    out << "swt_disp_on_and_off_sts_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.swt_disp_on_and_off_sts_resp, out);
    out << ", ";
  }

  // member: thr_d_touring_view_resp
  {
    out << "thr_d_touring_view_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_d_touring_view_resp, out);
    out << ", ";
  }

  // member: turn_entry_ag_wide_vis_resp
  {
    out << "turn_entry_ag_wide_vis_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_entry_ag_wide_vis_resp, out);
    out << ", ";
  }

  // member: veh_mdl_clr_resp
  {
    out << "veh_mdl_clr_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mdl_clr_resp, out);
    out << ", ";
  }

  // member: visn_ag_extn_resp
  {
    out << "visn_ag_extn_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.visn_ag_extn_resp, out);
    out << ", ";
  }

  // member: visn_img_disp_mod_resp
  {
    out << "visn_img_disp_mod_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.visn_img_disp_mod_resp, out);
    out << ", ";
  }

  // member: drvr_assc_sys_disp
  {
    out << "drvr_assc_sys_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_disp, out);
    out << ", ";
  }

  // member: prkg_aux_info_disp
  {
    out << "prkg_aux_info_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_aux_info_disp, out);
    out << ", ";
  }

  // member: prkg_back_disp
  {
    out << "prkg_back_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_back_disp, out);
    out << ", ";
  }

  // member: prkg_btn_sts_disp_group_cancel
  {
    out << "prkg_btn_sts_disp_group_cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_group_cancel, out);
    out << ", ";
  }

  // member: prkg_btn_sts_disp_group_prkg_in
  {
    out << "prkg_btn_sts_disp_group_prkg_in: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_group_prkg_in, out);
    out << ", ";
  }

  // member: prkg_btn_sts_disp_group_prkg_out
  {
    out << "prkg_btn_sts_disp_group_prkg_out: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_group_prkg_out, out);
    out << ", ";
  }

  // member: prkg_fct_di_disp
  {
    out << "prkg_fct_di_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_di_disp, out);
    out << ", ";
  }

  // member: prkg_fct_di_mod_resp
  {
    out << "prkg_fct_di_mod_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_di_mod_resp, out);
    out << ", ";
  }

  // member: prkg_progs_disp
  {
    out << "prkg_progs_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_progs_disp, out);
    out << ", ";
  }

  // member: prkg_stop_aud_warn_req
  {
    out << "prkg_stop_aud_warn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_stop_aud_warn_req, out);
    out << ", ";
  }

  // member: back_push_apa_info_req
  {
    out << "back_push_apa_info_req: ";
    rosidl_generator_traits::value_to_yaml(msg.back_push_apa_info_req, out);
    out << ", ";
  }

  // member: voice_prompt_req
  {
    out << "voice_prompt_req: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_prompt_req, out);
    out << ", ";
  }

  // member: prkg_img_disp_req
  {
    out << "prkg_img_disp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_img_disp_req, out);
    out << ", ";
  }

  // member: park_in_or_out
  {
    out << "park_in_or_out: ";
    rosidl_generator_traits::value_to_yaml(msg.park_in_or_out, out);
    out << ", ";
  }

  // member: shakehand_rq
  {
    out << "shakehand_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.shakehand_rq, out);
    out << ", ";
  }

  // member: park_enter_req
  {
    out << "park_enter_req: ";
    rosidl_generator_traits::value_to_yaml(msg.park_enter_req, out);
    out << ", ";
  }

  // member: park_exit_req
  {
    out << "park_exit_req: ";
    rosidl_generator_traits::value_to_yaml(msg.park_exit_req, out);
    out << ", ";
  }

  // member: park_function
  {
    out << "park_function: ";
    rosidl_generator_traits::value_to_yaml(msg.park_function, out);
    out << ", ";
  }

  // member: prkg_fct_vmm_mod_req
  {
    out << "prkg_fct_vmm_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_vmm_mod_req, out);
    out << ", ";
  }

  // member: eng_runng_req_by_park_assi1
  {
    out << "eng_runng_req_by_park_assi1: ";
    rosidl_generator_traits::value_to_yaml(msg.eng_runng_req_by_park_assi1, out);
    out << ", ";
  }

  // member: apa_sts_flag
  {
    out << "apa_sts_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_sts_flag, out);
    out << ", ";
  }

  // member: aut_actv_prkg_fct_swt_resp
  {
    out << "aut_actv_prkg_fct_swt_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_actv_prkg_fct_swt_resp, out);
    out << ", ";
  }

  // member: aut_prkg_voice_swt_resp
  {
    out << "aut_prkg_voice_swt_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_swt_resp, out);
    out << ", ";
  }

  // member: aut_prkg_voice_typ_resp
  {
    out << "aut_prkg_voice_typ_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_typ_resp, out);
    out << ", ";
  }

  // member: img_sn_sr_cal_sts
  {
    out << "img_sn_sr_cal_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.img_sn_sr_cal_sts, out);
    out << ", ";
  }

  // member: prkg_dock_dis_req
  {
    out << "prkg_dock_dis_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_dock_dis_req, out);
    out << ", ";
  }

  // member: pdc_ctrl_rsn
  {
    out << "pdc_ctrl_rsn: ";
    rosidl_generator_traits::value_to_yaml(msg.pdc_ctrl_rsn, out);
    out << ", ";
  }

  // member: system_fault
  {
    out << "system_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.system_fault, out);
    out << ", ";
  }

  // member: prkg_lock_req
  {
    out << "prkg_lock_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_lock_req, out);
    out << ", ";
  }

  // member: mirr_open_cls_req
  {
    out << "mirr_open_cls_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_open_cls_req, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_resp
  {
    out << "mob_dev_rpa_req_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_resp, out);
    out << ", ";
  }

  // member: prkg_mod_incln
  {
    out << "prkg_mod_incln: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_mod_incln, out);
    out << ", ";
  }

  // member: prkg_assi_sys_rem_prkg_sts
  {
    out << "prkg_assi_sys_rem_prkg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_assi_sys_rem_prkg_sts, out);
    out << ", ";
  }

  // member: veh_win_sun_roof_cls_req
  {
    out << "veh_win_sun_roof_cls_req: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_win_sun_roof_cls_req, out);
    out << ", ";
  }

  // member: veh_prkg_lock_theft_req
  {
    out << "veh_prkg_lock_theft_req: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_prkg_lock_theft_req, out);
    out << ", ";
  }

  // member: rpa_version
  {
    out << "rpa_version: ";
    rosidl_generator_traits::value_to_yaml(msg.rpa_version, out);
    out << ", ";
  }

  // member: prkg_usg_drv_mod_tran_req
  {
    out << "prkg_usg_drv_mod_tran_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_usg_drv_mod_tran_req, out);
    out << ", ";
  }

  // member: mob_dev_rpa_sts_uint8
  {
    out << "mob_dev_rpa_sts_uint8: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_sts_uint8, out);
    out << ", ";
  }

  // member: prkg_proc_dst_disp
  {
    out << "prkg_proc_dst_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_proc_dst_disp, out);
    out << ", ";
  }

  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    out << "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1, out);
    out << ", ";
  }

  // member: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    out << "mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts, out);
    out << ", ";
  }

  // member: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    out << "mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts, out);
    out << ", ";
  }

  // member: rem_straight_prkg_assi_seln_req_resp
  {
    out << "rem_straight_prkg_assi_seln_req_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.rem_straight_prkg_assi_seln_req_resp, out);
    out << ", ";
  }

  // member: rem_str_sts
  {
    out << "rem_str_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.rem_str_sts, out);
    out << ", ";
  }

  // member: tsm_req_rpa_on
  {
    out << "tsm_req_rpa_on: ";
    rosidl_generator_traits::value_to_yaml(msg.tsm_req_rpa_on, out);
    out << ", ";
  }

  // member: last_parkg_type_con_rq
  {
    out << "last_parkg_type_con_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.last_parkg_type_con_rq, out);
    out << ", ";
  }

  // member: forward_distance
  {
    out << "forward_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_distance, out);
    out << ", ";
  }

  // member: backward_distance
  {
    out << "backward_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.backward_distance, out);
    out << ", ";
  }

  // member: total_distance
  {
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
    out << ", ";
  }

  // member: apa_self_park_or_out_version
  {
    out << "apa_self_park_or_out_version: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_self_park_or_out_version, out);
    out << ", ";
  }

  // member: plan_first_sucs
  {
    out << "plan_first_sucs: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_first_sucs, out);
    out << ", ";
  }

  // member: disp_interface_chg_req
  {
    out << "disp_interface_chg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.disp_interface_chg_req, out);
    out << ", ";
  }

  // member: prkg_fcts_swt_sts_disp
  {
    out << "prkg_fcts_swt_sts_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fcts_swt_sts_disp, out);
    out << ", ";
  }

  // member: avm_drvr_assc_sys_disp
  {
    out << "avm_drvr_assc_sys_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.avm_drvr_assc_sys_disp, out);
    out << ", ";
  }

  // member: avm_prkg_fct_di_disp
  {
    out << "avm_prkg_fct_di_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.avm_prkg_fct_di_disp, out);
    out << ", ";
  }

  // member: prkg_btn_sts_dispset
  {
    out << "prkg_btn_sts_dispset: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_dispset, out);
    out << ", ";
  }

  // member: drvr_assc_sys_disp_list
  {
    out << "drvr_assc_sys_disp_list: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_disp_list, out);
    out << ", ";
  }

  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    out << "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5, out);
    out << ", ";
  }

  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    out << "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6, out);
    out << ", ";
  }

  // member: prkg_fct_test_pnd_req
  {
    out << "prkg_fct_test_pnd_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_test_pnd_req, out);
    out << ", ";
  }

  // member: sm_hpa_version
  {
    out << "sm_hpa_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_version, out);
    out << ", ";
  }

  // member: sm_hpa_state_ind
  {
    out << "sm_hpa_state_ind: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_state_ind, out);
    out << ", ";
  }

  // member: sm_hpa_state
  {
    out << "sm_hpa_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_state, out);
    out << ", ";
  }

  // member: sm_hpa_req_apa
  {
    out << "sm_hpa_req_apa: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_req_apa, out);
    out << ", ";
  }

  // member: sm_hpa_proc_prompt_req
  {
    out << "sm_hpa_proc_prompt_req: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_proc_prompt_req, out);
    out << ", ";
  }

  // member: sm_hpa_quit_reason
  {
    out << "sm_hpa_quit_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_quit_reason, out);
    out << ", ";
  }

  // member: valt_prkg_failr_notif
  {
    out << "valt_prkg_failr_notif: ";
    rosidl_generator_traits::value_to_yaml(msg.valt_prkg_failr_notif, out);
    out << ", ";
  }

  // member: home_prkg_voice_prompt_req
  {
    out << "home_prkg_voice_prompt_req: ";
    rosidl_generator_traits::value_to_yaml(msg.home_prkg_voice_prompt_req, out);
    out << ", ";
  }

  // member: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    out << "sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req, out);
    out << ", ";
  }

  // member: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    out << "sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1, out);
    out << ", ";
  }

  // member: valt_prkg_reminder
  {
    out << "valt_prkg_reminder: ";
    rosidl_generator_traits::value_to_yaml(msg.valt_prkg_reminder, out);
    out << ", ";
  }

  // member: veh_home_prkg_sys_sts
  {
    out << "veh_home_prkg_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_home_prkg_sys_sts, out);
    out << ", ";
  }

  // member: prkg_amb_li_req
  {
    out << "prkg_amb_li_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_amb_li_req, out);
    out << ", ";
  }

  // member: veh_prkg_to_horn
  {
    out << "veh_prkg_to_horn: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_prkg_to_horn, out);
    out << ", ";
  }

  // member: prkg_accr_ovrdn_ctrl_reqgrp
  {
    out << "prkg_accr_ovrdn_ctrl_reqgrp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_accr_ovrdn_ctrl_reqgrp, out);
    out << ", ";
  }

  // member: hpa_st_code_to_sm
  {
    out << "hpa_st_code_to_sm: ";
    rosidl_generator_traits::value_to_yaml(msg.hpa_st_code_to_sm, out);
    out << ", ";
  }

  // member: lo_spd_and_trk_bck_sys_sts
  {
    out << "lo_spd_and_trk_bck_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_and_trk_bck_sys_sts, out);
    out << ", ";
  }

  // member: sm_rem_ctrl_veh_sts
  {
    out << "sm_rem_ctrl_veh_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rem_ctrl_veh_sts, out);
    out << ", ";
  }

  // member: sm_rem_str_sts
  {
    out << "sm_rem_str_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rem_str_sts, out);
    out << ", ";
  }

  // member: sm_rcv_mod_incln
  {
    out << "sm_rcv_mod_incln: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rcv_mod_incln, out);
    out << ", ";
  }

  // member: sm_mob_dev_rcv_req_resp
  {
    out << "sm_mob_dev_rcv_req_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_mob_dev_rcv_req_resp, out);
    out << ", ";
  }

  // member: sm_mob_dev_rcv_sts
  {
    out << "sm_mob_dev_rcv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_mob_dev_rcv_sts, out);
    out << ", ";
  }

  // member: sm_rcv_version
  {
    out << "sm_rcv_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rcv_version, out);
    out << ", ";
  }

  // member: lgt_control_request
  {
    out << "lgt_control_request: ";
    rosidl_generator_traits::value_to_yaml(msg.lgt_control_request, out);
    out << ", ";
  }

  // member: lat_control_request
  {
    out << "lat_control_request: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_control_request, out);
    out << ", ";
  }

  // member: mai_sts
  {
    out << "mai_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mai_sts, out);
    out << ", ";
  }

  // member: prkg_emgy_brk_sys_sts
  {
    out << "prkg_emgy_brk_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_emgy_brk_sys_sts, out);
    out << ", ";
  }

  // member: prkg_btn_sts_disp_float
  {
    out << "prkg_btn_sts_disp_float: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_float, out);
    out << ", ";
  }

  // member: prkg_active_push
  {
    out << "prkg_active_push: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_active_push, out);
    out << ", ";
  }

  // member: prkg_fct_di_mod
  {
    out << "prkg_fct_di_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_di_mod, out);
    out << ", ";
  }

  // member: no_touching_for_avm_req
  {
    out << "no_touching_for_avm_req: ";
    rosidl_generator_traits::value_to_yaml(msg.no_touching_for_avm_req, out);
    out << ", ";
  }

  // member: aut_prkg_in_btn_sts_from_rpa
  {
    out << "aut_prkg_in_btn_sts_from_rpa: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_in_btn_sts_from_rpa, out);
    out << ", ";
  }

  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    out << "asy_a_lgt_sts_asy_a_lgt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_sts_asy_a_lgt_sts, out);
    out << ", ";
  }

  // member: asy_stand_still_req_for_cmft
  {
    out << "asy_stand_still_req_for_cmft: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_stand_still_req_for_cmft, out);
    out << ", ";
  }

  // member: drv_off_req_for_lgt_ctrl
  {
    out << "drv_off_req_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_req_for_lgt_ctrl, out);
    out << ", ";
  }

  // member: stop_req_of_lgt_ctrl_for_prpsn
  {
    out << "stop_req_of_lgt_ctrl_for_prpsn: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_req_of_lgt_ctrl_for_prpsn, out);
    out << ", ";
  }

  // member: strt_req_of_lgt_ctrl_for_prpsn
  {
    out << "strt_req_of_lgt_ctrl_for_prpsn: ";
    rosidl_generator_traits::value_to_yaml(msg.strt_req_of_lgt_ctrl_for_prpsn, out);
    out << ", ";
  }

  // member: avl_sts_for_long_aut_drv
  {
    out << "avl_sts_for_long_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.avl_sts_for_long_aut_drv, out);
    out << ", ";
  }

  // member: hwa_lat_ctrl_sts
  {
    out << "hwa_lat_ctrl_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_lat_ctrl_sts, out);
    out << ", ";
  }

  // member: ad_ctrl_mode
  {
    out << "ad_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_ctrl_mode, out);
    out << ", ";
  }

  // member: asy_lane_chg_assist_sts
  {
    out << "asy_lane_chg_assist_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_chg_assist_sts, out);
    out << ", ";
  }

  // member: asy_noa_sts
  {
    out << "asy_noa_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_sts, out);
    out << ", ";
  }

  // member: aut_lane_chg_sts
  {
    out << "aut_lane_chg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_lane_chg_sts, out);
    out << ", ";
  }

  // member: asy_req_lane_chg
  {
    out << "asy_req_lane_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_req_lane_chg, out);
    out << ", ";
  }

  // member: sm_state
  {
    out << "sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_state, out);
    out << ", ";
  }

  // member: function_status
  {
    if (msg.function_status.size() == 0) {
      out << "function_status: []";
    } else {
      out << "function_status: [";
      size_t pending_items = msg.function_status.size();
      for (auto item : msg.function_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hwa_odd_off
  {
    out << "hwa_odd_off: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_odd_off, out);
    out << ", ";
  }

  // member: smfault_level
  {
    if (msg.smfault_level.size() == 0) {
      out << "smfault_level: []";
    } else {
      out << "smfault_level: [";
      size_t pending_items = msg.smfault_level.size();
      for (auto item : msg.smfault_level) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prkg_camera_store_resp
  {
    out << "prkg_camera_store_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_camera_store_resp, out);
    out << ", ";
  }

  // member: rev
  {
    if (msg.rev.size() == 0) {
      out << "rev: []";
    } else {
      out << "rev: [";
      size_t pending_items = msg.rev.size();
      for (auto item : msg.rev) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dpa_mode_broadcast
  {
    out << "dpa_mode_broadcast: ";
    rosidl_generator_traits::value_to_yaml(msg.dpa_mode_broadcast, out);
    out << ", ";
  }

  // member: dpa_btn_sts
  {
    out << "dpa_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.dpa_btn_sts, out);
    out << ", ";
  }

  // member: sm_fct_err_code2_hmi
  {
    out << "sm_fct_err_code2_hmi: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_fct_err_code2_hmi, out);
    out << ", ";
  }

  // member: view_layout_req
  {
    out << "view_layout_req: ";
    rosidl_generator_traits::value_to_yaml(msg.view_layout_req, out);
    out << ", ";
  }

  // member: cust_btn_sts
  {
    out << "cust_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_btn_sts, out);
    out << ", ";
  }

  // member: exit_cust_btn_sts
  {
    out << "exit_cust_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_cust_btn_sts, out);
    out << ", ";
  }

  // member: frnt_and_re_prkg_in_btn_sts
  {
    out << "frnt_and_re_prkg_in_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_and_re_prkg_in_btn_sts, out);
    out << ", ";
  }

  // member: mai_version
  {
    out << "mai_version: ";
    rosidl_generator_traits::value_to_yaml(msg.mai_version, out);
    out << ", ";
  }

  // member: peb_version
  {
    out << "peb_version: ";
    rosidl_generator_traits::value_to_yaml(msg.peb_version, out);
    out << ", ";
  }

  // member: lo_spd_and_trk_bck_sub_sts
  {
    out << "lo_spd_and_trk_bck_sub_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_and_trk_bck_sub_sts, out);
    out << ", ";
  }

  // member: fill_light_req
  {
    out << "fill_light_req: ";
    rosidl_generator_traits::value_to_yaml(msg.fill_light_req, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateMachineData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: three_d_angle_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "three_d_angle_req: ";
    rosidl_generator_traits::value_to_yaml(msg.three_d_angle_req, out);
    out << "\n";
  }

  // member: tsm_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tsm_version: ";
    rosidl_generator_traits::value_to_yaml(msg.tsm_version, out);
    out << "\n";
  }

  // member: apa_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apa_version: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_version, out);
    out << "\n";
  }

  // member: avm_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avm_version: ";
    rosidl_generator_traits::value_to_yaml(msg.avm_version, out);
    out << "\n";
  }

  // member: hmi_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_version, out);
    out << "\n";
  }

  // member: drvr_assc_sys_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_assc_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_sts, out);
    out << "\n";
  }

  // member: apa_sub_sys_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apa_sub_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_sub_sys_sts, out);
    out << "\n";
  }

  // member: last_prk_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_prk_type: ";
    rosidl_generator_traits::value_to_yaml(msg.last_prk_type, out);
    out << "\n";
  }

  // member: monr_sys_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "monr_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.monr_sys_sts, out);
    out << "\n";
  }

  // member: obstcl_trig_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstcl_trig_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.obstcl_trig_resp, out);
    out << "\n";
  }

  // member: pla_mod_sts_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pla_mod_sts_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.pla_mod_sts_resp, out);
    out << "\n";
  }

  // member: swt_disp_on_and_off_sts_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swt_disp_on_and_off_sts_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.swt_disp_on_and_off_sts_resp, out);
    out << "\n";
  }

  // member: thr_d_touring_view_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thr_d_touring_view_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.thr_d_touring_view_resp, out);
    out << "\n";
  }

  // member: turn_entry_ag_wide_vis_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_entry_ag_wide_vis_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_entry_ag_wide_vis_resp, out);
    out << "\n";
  }

  // member: veh_mdl_clr_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_mdl_clr_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mdl_clr_resp, out);
    out << "\n";
  }

  // member: visn_ag_extn_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visn_ag_extn_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.visn_ag_extn_resp, out);
    out << "\n";
  }

  // member: visn_img_disp_mod_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visn_img_disp_mod_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.visn_img_disp_mod_resp, out);
    out << "\n";
  }

  // member: drvr_assc_sys_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_assc_sys_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_disp, out);
    out << "\n";
  }

  // member: prkg_aux_info_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_aux_info_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_aux_info_disp, out);
    out << "\n";
  }

  // member: prkg_back_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_back_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_back_disp, out);
    out << "\n";
  }

  // member: prkg_btn_sts_disp_group_cancel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_btn_sts_disp_group_cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_group_cancel, out);
    out << "\n";
  }

  // member: prkg_btn_sts_disp_group_prkg_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_btn_sts_disp_group_prkg_in: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_group_prkg_in, out);
    out << "\n";
  }

  // member: prkg_btn_sts_disp_group_prkg_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_btn_sts_disp_group_prkg_out: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_group_prkg_out, out);
    out << "\n";
  }

  // member: prkg_fct_di_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_fct_di_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_di_disp, out);
    out << "\n";
  }

  // member: prkg_fct_di_mod_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_fct_di_mod_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_di_mod_resp, out);
    out << "\n";
  }

  // member: prkg_progs_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_progs_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_progs_disp, out);
    out << "\n";
  }

  // member: prkg_stop_aud_warn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_stop_aud_warn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_stop_aud_warn_req, out);
    out << "\n";
  }

  // member: back_push_apa_info_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_push_apa_info_req: ";
    rosidl_generator_traits::value_to_yaml(msg.back_push_apa_info_req, out);
    out << "\n";
  }

  // member: voice_prompt_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_prompt_req: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_prompt_req, out);
    out << "\n";
  }

  // member: prkg_img_disp_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_img_disp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_img_disp_req, out);
    out << "\n";
  }

  // member: park_in_or_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_in_or_out: ";
    rosidl_generator_traits::value_to_yaml(msg.park_in_or_out, out);
    out << "\n";
  }

  // member: shakehand_rq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shakehand_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.shakehand_rq, out);
    out << "\n";
  }

  // member: park_enter_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_enter_req: ";
    rosidl_generator_traits::value_to_yaml(msg.park_enter_req, out);
    out << "\n";
  }

  // member: park_exit_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_exit_req: ";
    rosidl_generator_traits::value_to_yaml(msg.park_exit_req, out);
    out << "\n";
  }

  // member: park_function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_function: ";
    rosidl_generator_traits::value_to_yaml(msg.park_function, out);
    out << "\n";
  }

  // member: prkg_fct_vmm_mod_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_fct_vmm_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_vmm_mod_req, out);
    out << "\n";
  }

  // member: eng_runng_req_by_park_assi1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eng_runng_req_by_park_assi1: ";
    rosidl_generator_traits::value_to_yaml(msg.eng_runng_req_by_park_assi1, out);
    out << "\n";
  }

  // member: apa_sts_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apa_sts_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_sts_flag, out);
    out << "\n";
  }

  // member: aut_actv_prkg_fct_swt_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_actv_prkg_fct_swt_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_actv_prkg_fct_swt_resp, out);
    out << "\n";
  }

  // member: aut_prkg_voice_swt_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_voice_swt_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_swt_resp, out);
    out << "\n";
  }

  // member: aut_prkg_voice_typ_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_voice_typ_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_typ_resp, out);
    out << "\n";
  }

  // member: img_sn_sr_cal_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_sn_sr_cal_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.img_sn_sr_cal_sts, out);
    out << "\n";
  }

  // member: prkg_dock_dis_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_dock_dis_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_dock_dis_req, out);
    out << "\n";
  }

  // member: pdc_ctrl_rsn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdc_ctrl_rsn: ";
    rosidl_generator_traits::value_to_yaml(msg.pdc_ctrl_rsn, out);
    out << "\n";
  }

  // member: system_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.system_fault, out);
    out << "\n";
  }

  // member: prkg_lock_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_lock_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_lock_req, out);
    out << "\n";
  }

  // member: mirr_open_cls_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirr_open_cls_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_open_cls_req, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_resp, out);
    out << "\n";
  }

  // member: prkg_mod_incln
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_mod_incln: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_mod_incln, out);
    out << "\n";
  }

  // member: prkg_assi_sys_rem_prkg_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_assi_sys_rem_prkg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_assi_sys_rem_prkg_sts, out);
    out << "\n";
  }

  // member: veh_win_sun_roof_cls_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_win_sun_roof_cls_req: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_win_sun_roof_cls_req, out);
    out << "\n";
  }

  // member: veh_prkg_lock_theft_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_prkg_lock_theft_req: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_prkg_lock_theft_req, out);
    out << "\n";
  }

  // member: rpa_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpa_version: ";
    rosidl_generator_traits::value_to_yaml(msg.rpa_version, out);
    out << "\n";
  }

  // member: prkg_usg_drv_mod_tran_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_usg_drv_mod_tran_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_usg_drv_mod_tran_req, out);
    out << "\n";
  }

  // member: mob_dev_rpa_sts_uint8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_sts_uint8: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_sts_uint8, out);
    out << "\n";
  }

  // member: prkg_proc_dst_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_proc_dst_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_proc_dst_disp, out);
    out << "\n";
  }

  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1, out);
    out << "\n";
  }

  // member: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts, out);
    out << "\n";
  }

  // member: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts, out);
    out << "\n";
  }

  // member: rem_straight_prkg_assi_seln_req_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rem_straight_prkg_assi_seln_req_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.rem_straight_prkg_assi_seln_req_resp, out);
    out << "\n";
  }

  // member: rem_str_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rem_str_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.rem_str_sts, out);
    out << "\n";
  }

  // member: tsm_req_rpa_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tsm_req_rpa_on: ";
    rosidl_generator_traits::value_to_yaml(msg.tsm_req_rpa_on, out);
    out << "\n";
  }

  // member: last_parkg_type_con_rq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_parkg_type_con_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.last_parkg_type_con_rq, out);
    out << "\n";
  }

  // member: forward_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_distance, out);
    out << "\n";
  }

  // member: backward_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "backward_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.backward_distance, out);
    out << "\n";
  }

  // member: total_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
    out << "\n";
  }

  // member: apa_self_park_or_out_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apa_self_park_or_out_version: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_self_park_or_out_version, out);
    out << "\n";
  }

  // member: plan_first_sucs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_first_sucs: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_first_sucs, out);
    out << "\n";
  }

  // member: disp_interface_chg_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disp_interface_chg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.disp_interface_chg_req, out);
    out << "\n";
  }

  // member: prkg_fcts_swt_sts_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_fcts_swt_sts_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fcts_swt_sts_disp, out);
    out << "\n";
  }

  // member: avm_drvr_assc_sys_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avm_drvr_assc_sys_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.avm_drvr_assc_sys_disp, out);
    out << "\n";
  }

  // member: avm_prkg_fct_di_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avm_prkg_fct_di_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.avm_prkg_fct_di_disp, out);
    out << "\n";
  }

  // member: prkg_btn_sts_dispset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_btn_sts_dispset: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_dispset, out);
    out << "\n";
  }

  // member: drvr_assc_sys_disp_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_assc_sys_disp_list: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_disp_list, out);
    out << "\n";
  }

  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5, out);
    out << "\n";
  }

  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6, out);
    out << "\n";
  }

  // member: prkg_fct_test_pnd_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_fct_test_pnd_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_test_pnd_req, out);
    out << "\n";
  }

  // member: sm_hpa_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_hpa_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_version, out);
    out << "\n";
  }

  // member: sm_hpa_state_ind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_hpa_state_ind: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_state_ind, out);
    out << "\n";
  }

  // member: sm_hpa_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_hpa_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_state, out);
    out << "\n";
  }

  // member: sm_hpa_req_apa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_hpa_req_apa: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_req_apa, out);
    out << "\n";
  }

  // member: sm_hpa_proc_prompt_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_hpa_proc_prompt_req: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_proc_prompt_req, out);
    out << "\n";
  }

  // member: sm_hpa_quit_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_hpa_quit_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_quit_reason, out);
    out << "\n";
  }

  // member: valt_prkg_failr_notif
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valt_prkg_failr_notif: ";
    rosidl_generator_traits::value_to_yaml(msg.valt_prkg_failr_notif, out);
    out << "\n";
  }

  // member: home_prkg_voice_prompt_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_prkg_voice_prompt_req: ";
    rosidl_generator_traits::value_to_yaml(msg.home_prkg_voice_prompt_req, out);
    out << "\n";
  }

  // member: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req, out);
    out << "\n";
  }

  // member: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1, out);
    out << "\n";
  }

  // member: valt_prkg_reminder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valt_prkg_reminder: ";
    rosidl_generator_traits::value_to_yaml(msg.valt_prkg_reminder, out);
    out << "\n";
  }

  // member: veh_home_prkg_sys_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_home_prkg_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_home_prkg_sys_sts, out);
    out << "\n";
  }

  // member: prkg_amb_li_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_amb_li_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_amb_li_req, out);
    out << "\n";
  }

  // member: veh_prkg_to_horn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_prkg_to_horn: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_prkg_to_horn, out);
    out << "\n";
  }

  // member: prkg_accr_ovrdn_ctrl_reqgrp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_accr_ovrdn_ctrl_reqgrp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_accr_ovrdn_ctrl_reqgrp, out);
    out << "\n";
  }

  // member: hpa_st_code_to_sm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpa_st_code_to_sm: ";
    rosidl_generator_traits::value_to_yaml(msg.hpa_st_code_to_sm, out);
    out << "\n";
  }

  // member: lo_spd_and_trk_bck_sys_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lo_spd_and_trk_bck_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_and_trk_bck_sys_sts, out);
    out << "\n";
  }

  // member: sm_rem_ctrl_veh_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_rem_ctrl_veh_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rem_ctrl_veh_sts, out);
    out << "\n";
  }

  // member: sm_rem_str_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_rem_str_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rem_str_sts, out);
    out << "\n";
  }

  // member: sm_rcv_mod_incln
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_rcv_mod_incln: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rcv_mod_incln, out);
    out << "\n";
  }

  // member: sm_mob_dev_rcv_req_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_mob_dev_rcv_req_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_mob_dev_rcv_req_resp, out);
    out << "\n";
  }

  // member: sm_mob_dev_rcv_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_mob_dev_rcv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_mob_dev_rcv_sts, out);
    out << "\n";
  }

  // member: sm_rcv_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_rcv_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_rcv_version, out);
    out << "\n";
  }

  // member: lgt_control_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lgt_control_request: ";
    rosidl_generator_traits::value_to_yaml(msg.lgt_control_request, out);
    out << "\n";
  }

  // member: lat_control_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_control_request: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_control_request, out);
    out << "\n";
  }

  // member: mai_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mai_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mai_sts, out);
    out << "\n";
  }

  // member: prkg_emgy_brk_sys_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_emgy_brk_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_emgy_brk_sys_sts, out);
    out << "\n";
  }

  // member: prkg_btn_sts_disp_float
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_btn_sts_disp_float: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_btn_sts_disp_float, out);
    out << "\n";
  }

  // member: prkg_active_push
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_active_push: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_active_push, out);
    out << "\n";
  }

  // member: prkg_fct_di_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_fct_di_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_fct_di_mod, out);
    out << "\n";
  }

  // member: no_touching_for_avm_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "no_touching_for_avm_req: ";
    rosidl_generator_traits::value_to_yaml(msg.no_touching_for_avm_req, out);
    out << "\n";
  }

  // member: aut_prkg_in_btn_sts_from_rpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_in_btn_sts_from_rpa: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_in_btn_sts_from_rpa, out);
    out << "\n";
  }

  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_a_lgt_sts_asy_a_lgt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_sts_asy_a_lgt_sts, out);
    out << "\n";
  }

  // member: asy_stand_still_req_for_cmft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_stand_still_req_for_cmft: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_stand_still_req_for_cmft, out);
    out << "\n";
  }

  // member: drv_off_req_for_lgt_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drv_off_req_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_req_for_lgt_ctrl, out);
    out << "\n";
  }

  // member: stop_req_of_lgt_ctrl_for_prpsn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_req_of_lgt_ctrl_for_prpsn: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_req_of_lgt_ctrl_for_prpsn, out);
    out << "\n";
  }

  // member: strt_req_of_lgt_ctrl_for_prpsn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strt_req_of_lgt_ctrl_for_prpsn: ";
    rosidl_generator_traits::value_to_yaml(msg.strt_req_of_lgt_ctrl_for_prpsn, out);
    out << "\n";
  }

  // member: avl_sts_for_long_aut_drv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avl_sts_for_long_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.avl_sts_for_long_aut_drv, out);
    out << "\n";
  }

  // member: hwa_lat_ctrl_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hwa_lat_ctrl_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_lat_ctrl_sts, out);
    out << "\n";
  }

  // member: ad_ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_ctrl_mode, out);
    out << "\n";
  }

  // member: asy_lane_chg_assist_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lane_chg_assist_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_chg_assist_sts, out);
    out << "\n";
  }

  // member: asy_noa_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_sts, out);
    out << "\n";
  }

  // member: aut_lane_chg_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_lane_chg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_lane_chg_sts, out);
    out << "\n";
  }

  // member: asy_req_lane_chg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_req_lane_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_req_lane_chg, out);
    out << "\n";
  }

  // member: sm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_state, out);
    out << "\n";
  }

  // member: function_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.function_status.size() == 0) {
      out << "function_status: []\n";
    } else {
      out << "function_status:\n";
      for (auto item : msg.function_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hwa_odd_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hwa_odd_off: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_odd_off, out);
    out << "\n";
  }

  // member: smfault_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.smfault_level.size() == 0) {
      out << "smfault_level: []\n";
    } else {
      out << "smfault_level:\n";
      for (auto item : msg.smfault_level) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prkg_camera_store_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_camera_store_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_camera_store_resp, out);
    out << "\n";
  }

  // member: rev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rev.size() == 0) {
      out << "rev: []\n";
    } else {
      out << "rev:\n";
      for (auto item : msg.rev) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dpa_mode_broadcast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dpa_mode_broadcast: ";
    rosidl_generator_traits::value_to_yaml(msg.dpa_mode_broadcast, out);
    out << "\n";
  }

  // member: dpa_btn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dpa_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.dpa_btn_sts, out);
    out << "\n";
  }

  // member: sm_fct_err_code2_hmi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_fct_err_code2_hmi: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_fct_err_code2_hmi, out);
    out << "\n";
  }

  // member: view_layout_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "view_layout_req: ";
    rosidl_generator_traits::value_to_yaml(msg.view_layout_req, out);
    out << "\n";
  }

  // member: cust_btn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_btn_sts, out);
    out << "\n";
  }

  // member: exit_cust_btn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_cust_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_cust_btn_sts, out);
    out << "\n";
  }

  // member: frnt_and_re_prkg_in_btn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frnt_and_re_prkg_in_btn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_and_re_prkg_in_btn_sts, out);
    out << "\n";
  }

  // member: mai_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mai_version: ";
    rosidl_generator_traits::value_to_yaml(msg.mai_version, out);
    out << "\n";
  }

  // member: peb_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "peb_version: ";
    rosidl_generator_traits::value_to_yaml(msg.peb_version, out);
    out << "\n";
  }

  // member: lo_spd_and_trk_bck_sub_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lo_spd_and_trk_bck_sub_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_and_trk_bck_sub_sts, out);
    out << "\n";
  }

  // member: fill_light_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fill_light_req: ";
    rosidl_generator_traits::value_to_yaml(msg.fill_light_req, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateMachineData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::StateMachineData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::StateMachineData & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::StateMachineData>()
{
  return "deva_function_msgs::msg::StateMachineData";
}

template<>
inline const char * name<deva_function_msgs::msg::StateMachineData>()
{
  return "deva_function_msgs/msg/StateMachineData";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::StateMachineData>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::StateMachineData>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::StateMachineData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__TRAITS_HPP_
