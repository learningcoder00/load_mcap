// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/StateMachineData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/state_machine_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/state_machine_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::Header &);
size_t get_serialized_size(
  const deva_common_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs


namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::StateMachineData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: three_d_angle_req
  cdr << ros_message.three_d_angle_req;
  // Member: tsm_version
  cdr << ros_message.tsm_version;
  // Member: apa_version
  cdr << ros_message.apa_version;
  // Member: avm_version
  cdr << ros_message.avm_version;
  // Member: hmi_version
  cdr << ros_message.hmi_version;
  // Member: drvr_assc_sys_sts
  cdr << ros_message.drvr_assc_sys_sts;
  // Member: apa_sub_sys_sts
  cdr << ros_message.apa_sub_sys_sts;
  // Member: last_prk_type
  cdr << ros_message.last_prk_type;
  // Member: monr_sys_sts
  cdr << ros_message.monr_sys_sts;
  // Member: obstcl_trig_resp
  cdr << ros_message.obstcl_trig_resp;
  // Member: pla_mod_sts_resp
  cdr << ros_message.pla_mod_sts_resp;
  // Member: swt_disp_on_and_off_sts_resp
  cdr << ros_message.swt_disp_on_and_off_sts_resp;
  // Member: thr_d_touring_view_resp
  cdr << ros_message.thr_d_touring_view_resp;
  // Member: turn_entry_ag_wide_vis_resp
  cdr << ros_message.turn_entry_ag_wide_vis_resp;
  // Member: veh_mdl_clr_resp
  cdr << ros_message.veh_mdl_clr_resp;
  // Member: visn_ag_extn_resp
  cdr << ros_message.visn_ag_extn_resp;
  // Member: visn_img_disp_mod_resp
  cdr << ros_message.visn_img_disp_mod_resp;
  // Member: drvr_assc_sys_disp
  cdr << ros_message.drvr_assc_sys_disp;
  // Member: prkg_aux_info_disp
  cdr << ros_message.prkg_aux_info_disp;
  // Member: prkg_back_disp
  cdr << ros_message.prkg_back_disp;
  // Member: prkg_btn_sts_disp_group_cancel
  cdr << ros_message.prkg_btn_sts_disp_group_cancel;
  // Member: prkg_btn_sts_disp_group_prkg_in
  cdr << ros_message.prkg_btn_sts_disp_group_prkg_in;
  // Member: prkg_btn_sts_disp_group_prkg_out
  cdr << ros_message.prkg_btn_sts_disp_group_prkg_out;
  // Member: prkg_fct_di_disp
  cdr << ros_message.prkg_fct_di_disp;
  // Member: prkg_fct_di_mod_resp
  cdr << ros_message.prkg_fct_di_mod_resp;
  // Member: prkg_progs_disp
  cdr << ros_message.prkg_progs_disp;
  // Member: prkg_stop_aud_warn_req
  cdr << (ros_message.prkg_stop_aud_warn_req ? true : false);
  // Member: back_push_apa_info_req
  cdr << ros_message.back_push_apa_info_req;
  // Member: voice_prompt_req
  cdr << ros_message.voice_prompt_req;
  // Member: prkg_img_disp_req
  cdr << ros_message.prkg_img_disp_req;
  // Member: park_in_or_out
  cdr << ros_message.park_in_or_out;
  // Member: shakehand_rq
  cdr << ros_message.shakehand_rq;
  // Member: park_enter_req
  cdr << (ros_message.park_enter_req ? true : false);
  // Member: park_exit_req
  cdr << (ros_message.park_exit_req ? true : false);
  // Member: park_function
  cdr << ros_message.park_function;
  // Member: prkg_fct_vmm_mod_req
  cdr << (ros_message.prkg_fct_vmm_mod_req ? true : false);
  // Member: eng_runng_req_by_park_assi1
  cdr << ros_message.eng_runng_req_by_park_assi1;
  // Member: apa_sts_flag
  cdr << ros_message.apa_sts_flag;
  // Member: aut_actv_prkg_fct_swt_resp
  cdr << ros_message.aut_actv_prkg_fct_swt_resp;
  // Member: aut_prkg_voice_swt_resp
  cdr << ros_message.aut_prkg_voice_swt_resp;
  // Member: aut_prkg_voice_typ_resp
  cdr << ros_message.aut_prkg_voice_typ_resp;
  // Member: img_sn_sr_cal_sts
  cdr << (ros_message.img_sn_sr_cal_sts ? true : false);
  // Member: prkg_dock_dis_req
  cdr << ros_message.prkg_dock_dis_req;
  // Member: pdc_ctrl_rsn
  cdr << ros_message.pdc_ctrl_rsn;
  // Member: system_fault
  cdr << ros_message.system_fault;
  // Member: prkg_lock_req
  cdr << ros_message.prkg_lock_req;
  // Member: mirr_open_cls_req
  cdr << ros_message.mirr_open_cls_req;
  // Member: mob_dev_rpa_req_resp
  cdr << ros_message.mob_dev_rpa_req_resp;
  // Member: prkg_mod_incln
  cdr << ros_message.prkg_mod_incln;
  // Member: prkg_assi_sys_rem_prkg_sts
  cdr << ros_message.prkg_assi_sys_rem_prkg_sts;
  // Member: veh_win_sun_roof_cls_req
  cdr << ros_message.veh_win_sun_roof_cls_req;
  // Member: veh_prkg_lock_theft_req
  cdr << ros_message.veh_prkg_lock_theft_req;
  // Member: rpa_version
  cdr << ros_message.rpa_version;
  // Member: prkg_usg_drv_mod_tran_req
  cdr << ros_message.prkg_usg_drv_mod_tran_req;
  // Member: mob_dev_rpa_sts_uint8
  cdr << ros_message.mob_dev_rpa_sts_uint8;
  // Member: prkg_proc_dst_disp
  cdr << ros_message.prkg_proc_dst_disp;
  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  cdr << ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1;
  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  cdr << ros_message.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts;
  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  cdr << ros_message.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts;
  // Member: rem_straight_prkg_assi_seln_req_resp
  cdr << ros_message.rem_straight_prkg_assi_seln_req_resp;
  // Member: rem_str_sts
  cdr << ros_message.rem_str_sts;
  // Member: tsm_req_rpa_on
  cdr << ros_message.tsm_req_rpa_on;
  // Member: last_parkg_type_con_rq
  cdr << ros_message.last_parkg_type_con_rq;
  // Member: forward_distance
  cdr << ros_message.forward_distance;
  // Member: backward_distance
  cdr << ros_message.backward_distance;
  // Member: total_distance
  cdr << ros_message.total_distance;
  // Member: apa_self_park_or_out_version
  cdr << ros_message.apa_self_park_or_out_version;
  // Member: plan_first_sucs
  cdr << ros_message.plan_first_sucs;
  // Member: disp_interface_chg_req
  cdr << ros_message.disp_interface_chg_req;
  // Member: prkg_fcts_swt_sts_disp
  cdr << ros_message.prkg_fcts_swt_sts_disp;
  // Member: avm_drvr_assc_sys_disp
  cdr << ros_message.avm_drvr_assc_sys_disp;
  // Member: avm_prkg_fct_di_disp
  cdr << ros_message.avm_prkg_fct_di_disp;
  // Member: prkg_btn_sts_dispset
  cdr << ros_message.prkg_btn_sts_dispset;
  // Member: drvr_assc_sys_disp_list
  cdr << ros_message.drvr_assc_sys_disp_list;
  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  cdr << ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5;
  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  cdr << ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6;
  // Member: prkg_fct_test_pnd_req
  cdr << ros_message.prkg_fct_test_pnd_req;
  // Member: sm_hpa_version
  cdr << ros_message.sm_hpa_version;
  // Member: sm_hpa_state_ind
  cdr << ros_message.sm_hpa_state_ind;
  // Member: sm_hpa_state
  cdr << ros_message.sm_hpa_state;
  // Member: sm_hpa_req_apa
  cdr << ros_message.sm_hpa_req_apa;
  // Member: sm_hpa_proc_prompt_req
  cdr << ros_message.sm_hpa_proc_prompt_req;
  // Member: sm_hpa_quit_reason
  cdr << ros_message.sm_hpa_quit_reason;
  // Member: valt_prkg_failr_notif
  cdr << ros_message.valt_prkg_failr_notif;
  // Member: home_prkg_voice_prompt_req
  cdr << ros_message.home_prkg_voice_prompt_req;
  // Member: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  cdr << ros_message.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req;
  // Member: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  cdr << ros_message.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1;
  // Member: valt_prkg_reminder
  cdr << ros_message.valt_prkg_reminder;
  // Member: veh_home_prkg_sys_sts
  cdr << ros_message.veh_home_prkg_sys_sts;
  // Member: prkg_amb_li_req
  cdr << ros_message.prkg_amb_li_req;
  // Member: veh_prkg_to_horn
  cdr << ros_message.veh_prkg_to_horn;
  // Member: prkg_accr_ovrdn_ctrl_reqgrp
  cdr << ros_message.prkg_accr_ovrdn_ctrl_reqgrp;
  // Member: hpa_st_code_to_sm
  cdr << ros_message.hpa_st_code_to_sm;
  // Member: lo_spd_and_trk_bck_sys_sts
  cdr << ros_message.lo_spd_and_trk_bck_sys_sts;
  // Member: sm_rem_ctrl_veh_sts
  cdr << ros_message.sm_rem_ctrl_veh_sts;
  // Member: sm_rem_str_sts
  cdr << ros_message.sm_rem_str_sts;
  // Member: sm_rcv_mod_incln
  cdr << ros_message.sm_rcv_mod_incln;
  // Member: sm_mob_dev_rcv_req_resp
  cdr << ros_message.sm_mob_dev_rcv_req_resp;
  // Member: sm_mob_dev_rcv_sts
  cdr << ros_message.sm_mob_dev_rcv_sts;
  // Member: sm_rcv_version
  cdr << ros_message.sm_rcv_version;
  // Member: lgt_control_request
  cdr << ros_message.lgt_control_request;
  // Member: lat_control_request
  cdr << ros_message.lat_control_request;
  // Member: mai_sts
  cdr << ros_message.mai_sts;
  // Member: prkg_emgy_brk_sys_sts
  cdr << ros_message.prkg_emgy_brk_sys_sts;
  // Member: prkg_btn_sts_disp_float
  cdr << ros_message.prkg_btn_sts_disp_float;
  // Member: prkg_active_push
  cdr << ros_message.prkg_active_push;
  // Member: prkg_fct_di_mod
  cdr << ros_message.prkg_fct_di_mod;
  // Member: no_touching_for_avm_req
  cdr << ros_message.no_touching_for_avm_req;
  // Member: aut_prkg_in_btn_sts_from_rpa
  cdr << ros_message.aut_prkg_in_btn_sts_from_rpa;
  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  cdr << ros_message.asy_a_lgt_sts_asy_a_lgt_sts;
  // Member: asy_stand_still_req_for_cmft
  cdr << ros_message.asy_stand_still_req_for_cmft;
  // Member: drv_off_req_for_lgt_ctrl
  cdr << ros_message.drv_off_req_for_lgt_ctrl;
  // Member: stop_req_of_lgt_ctrl_for_prpsn
  cdr << ros_message.stop_req_of_lgt_ctrl_for_prpsn;
  // Member: strt_req_of_lgt_ctrl_for_prpsn
  cdr << ros_message.strt_req_of_lgt_ctrl_for_prpsn;
  // Member: avl_sts_for_long_aut_drv
  cdr << ros_message.avl_sts_for_long_aut_drv;
  // Member: hwa_lat_ctrl_sts
  cdr << ros_message.hwa_lat_ctrl_sts;
  // Member: ad_ctrl_mode
  cdr << ros_message.ad_ctrl_mode;
  // Member: asy_lane_chg_assist_sts
  cdr << ros_message.asy_lane_chg_assist_sts;
  // Member: asy_noa_sts
  cdr << ros_message.asy_noa_sts;
  // Member: aut_lane_chg_sts
  cdr << ros_message.aut_lane_chg_sts;
  // Member: asy_req_lane_chg
  cdr << ros_message.asy_req_lane_chg;
  // Member: sm_state
  cdr << ros_message.sm_state;
  // Member: function_status
  {
    cdr << ros_message.function_status;
  }
  // Member: hwa_odd_off
  cdr << ros_message.hwa_odd_off;
  // Member: smfault_level
  {
    cdr << ros_message.smfault_level;
  }
  // Member: prkg_camera_store_resp
  cdr << ros_message.prkg_camera_store_resp;
  // Member: rev
  {
    cdr << ros_message.rev;
  }
  // Member: dpa_mode_broadcast
  cdr << ros_message.dpa_mode_broadcast;
  // Member: dpa_btn_sts
  cdr << ros_message.dpa_btn_sts;
  // Member: sm_fct_err_code2_hmi
  cdr << ros_message.sm_fct_err_code2_hmi;
  // Member: view_layout_req
  cdr << ros_message.view_layout_req;
  // Member: cust_btn_sts
  cdr << ros_message.cust_btn_sts;
  // Member: exit_cust_btn_sts
  cdr << ros_message.exit_cust_btn_sts;
  // Member: frnt_and_re_prkg_in_btn_sts
  cdr << ros_message.frnt_and_re_prkg_in_btn_sts;
  // Member: mai_version
  cdr << ros_message.mai_version;
  // Member: peb_version
  cdr << ros_message.peb_version;
  // Member: lo_spd_and_trk_bck_sub_sts
  cdr << ros_message.lo_spd_and_trk_bck_sub_sts;
  // Member: fill_light_req
  cdr << ros_message.fill_light_req;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::StateMachineData & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: three_d_angle_req
  cdr >> ros_message.three_d_angle_req;

  // Member: tsm_version
  cdr >> ros_message.tsm_version;

  // Member: apa_version
  cdr >> ros_message.apa_version;

  // Member: avm_version
  cdr >> ros_message.avm_version;

  // Member: hmi_version
  cdr >> ros_message.hmi_version;

  // Member: drvr_assc_sys_sts
  cdr >> ros_message.drvr_assc_sys_sts;

  // Member: apa_sub_sys_sts
  cdr >> ros_message.apa_sub_sys_sts;

  // Member: last_prk_type
  cdr >> ros_message.last_prk_type;

  // Member: monr_sys_sts
  cdr >> ros_message.monr_sys_sts;

  // Member: obstcl_trig_resp
  cdr >> ros_message.obstcl_trig_resp;

  // Member: pla_mod_sts_resp
  cdr >> ros_message.pla_mod_sts_resp;

  // Member: swt_disp_on_and_off_sts_resp
  cdr >> ros_message.swt_disp_on_and_off_sts_resp;

  // Member: thr_d_touring_view_resp
  cdr >> ros_message.thr_d_touring_view_resp;

  // Member: turn_entry_ag_wide_vis_resp
  cdr >> ros_message.turn_entry_ag_wide_vis_resp;

  // Member: veh_mdl_clr_resp
  cdr >> ros_message.veh_mdl_clr_resp;

  // Member: visn_ag_extn_resp
  cdr >> ros_message.visn_ag_extn_resp;

  // Member: visn_img_disp_mod_resp
  cdr >> ros_message.visn_img_disp_mod_resp;

  // Member: drvr_assc_sys_disp
  cdr >> ros_message.drvr_assc_sys_disp;

  // Member: prkg_aux_info_disp
  cdr >> ros_message.prkg_aux_info_disp;

  // Member: prkg_back_disp
  cdr >> ros_message.prkg_back_disp;

  // Member: prkg_btn_sts_disp_group_cancel
  cdr >> ros_message.prkg_btn_sts_disp_group_cancel;

  // Member: prkg_btn_sts_disp_group_prkg_in
  cdr >> ros_message.prkg_btn_sts_disp_group_prkg_in;

  // Member: prkg_btn_sts_disp_group_prkg_out
  cdr >> ros_message.prkg_btn_sts_disp_group_prkg_out;

  // Member: prkg_fct_di_disp
  cdr >> ros_message.prkg_fct_di_disp;

  // Member: prkg_fct_di_mod_resp
  cdr >> ros_message.prkg_fct_di_mod_resp;

  // Member: prkg_progs_disp
  cdr >> ros_message.prkg_progs_disp;

  // Member: prkg_stop_aud_warn_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.prkg_stop_aud_warn_req = tmp ? true : false;
  }

  // Member: back_push_apa_info_req
  cdr >> ros_message.back_push_apa_info_req;

  // Member: voice_prompt_req
  cdr >> ros_message.voice_prompt_req;

  // Member: prkg_img_disp_req
  cdr >> ros_message.prkg_img_disp_req;

  // Member: park_in_or_out
  cdr >> ros_message.park_in_or_out;

  // Member: shakehand_rq
  cdr >> ros_message.shakehand_rq;

  // Member: park_enter_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.park_enter_req = tmp ? true : false;
  }

  // Member: park_exit_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.park_exit_req = tmp ? true : false;
  }

  // Member: park_function
  cdr >> ros_message.park_function;

  // Member: prkg_fct_vmm_mod_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.prkg_fct_vmm_mod_req = tmp ? true : false;
  }

  // Member: eng_runng_req_by_park_assi1
  cdr >> ros_message.eng_runng_req_by_park_assi1;

  // Member: apa_sts_flag
  cdr >> ros_message.apa_sts_flag;

  // Member: aut_actv_prkg_fct_swt_resp
  cdr >> ros_message.aut_actv_prkg_fct_swt_resp;

  // Member: aut_prkg_voice_swt_resp
  cdr >> ros_message.aut_prkg_voice_swt_resp;

  // Member: aut_prkg_voice_typ_resp
  cdr >> ros_message.aut_prkg_voice_typ_resp;

  // Member: img_sn_sr_cal_sts
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.img_sn_sr_cal_sts = tmp ? true : false;
  }

  // Member: prkg_dock_dis_req
  cdr >> ros_message.prkg_dock_dis_req;

  // Member: pdc_ctrl_rsn
  cdr >> ros_message.pdc_ctrl_rsn;

  // Member: system_fault
  cdr >> ros_message.system_fault;

  // Member: prkg_lock_req
  cdr >> ros_message.prkg_lock_req;

  // Member: mirr_open_cls_req
  cdr >> ros_message.mirr_open_cls_req;

  // Member: mob_dev_rpa_req_resp
  cdr >> ros_message.mob_dev_rpa_req_resp;

  // Member: prkg_mod_incln
  cdr >> ros_message.prkg_mod_incln;

  // Member: prkg_assi_sys_rem_prkg_sts
  cdr >> ros_message.prkg_assi_sys_rem_prkg_sts;

  // Member: veh_win_sun_roof_cls_req
  cdr >> ros_message.veh_win_sun_roof_cls_req;

  // Member: veh_prkg_lock_theft_req
  cdr >> ros_message.veh_prkg_lock_theft_req;

  // Member: rpa_version
  cdr >> ros_message.rpa_version;

  // Member: prkg_usg_drv_mod_tran_req
  cdr >> ros_message.prkg_usg_drv_mod_tran_req;

  // Member: mob_dev_rpa_sts_uint8
  cdr >> ros_message.mob_dev_rpa_sts_uint8;

  // Member: prkg_proc_dst_disp
  cdr >> ros_message.prkg_proc_dst_disp;

  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  cdr >> ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1;

  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  cdr >> ros_message.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts;

  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  cdr >> ros_message.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts;

  // Member: rem_straight_prkg_assi_seln_req_resp
  cdr >> ros_message.rem_straight_prkg_assi_seln_req_resp;

  // Member: rem_str_sts
  cdr >> ros_message.rem_str_sts;

  // Member: tsm_req_rpa_on
  cdr >> ros_message.tsm_req_rpa_on;

  // Member: last_parkg_type_con_rq
  cdr >> ros_message.last_parkg_type_con_rq;

  // Member: forward_distance
  cdr >> ros_message.forward_distance;

  // Member: backward_distance
  cdr >> ros_message.backward_distance;

  // Member: total_distance
  cdr >> ros_message.total_distance;

  // Member: apa_self_park_or_out_version
  cdr >> ros_message.apa_self_park_or_out_version;

  // Member: plan_first_sucs
  cdr >> ros_message.plan_first_sucs;

  // Member: disp_interface_chg_req
  cdr >> ros_message.disp_interface_chg_req;

  // Member: prkg_fcts_swt_sts_disp
  cdr >> ros_message.prkg_fcts_swt_sts_disp;

  // Member: avm_drvr_assc_sys_disp
  cdr >> ros_message.avm_drvr_assc_sys_disp;

  // Member: avm_prkg_fct_di_disp
  cdr >> ros_message.avm_prkg_fct_di_disp;

  // Member: prkg_btn_sts_dispset
  cdr >> ros_message.prkg_btn_sts_dispset;

  // Member: drvr_assc_sys_disp_list
  cdr >> ros_message.drvr_assc_sys_disp_list;

  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  cdr >> ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5;

  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  cdr >> ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6;

  // Member: prkg_fct_test_pnd_req
  cdr >> ros_message.prkg_fct_test_pnd_req;

  // Member: sm_hpa_version
  cdr >> ros_message.sm_hpa_version;

  // Member: sm_hpa_state_ind
  cdr >> ros_message.sm_hpa_state_ind;

  // Member: sm_hpa_state
  cdr >> ros_message.sm_hpa_state;

  // Member: sm_hpa_req_apa
  cdr >> ros_message.sm_hpa_req_apa;

  // Member: sm_hpa_proc_prompt_req
  cdr >> ros_message.sm_hpa_proc_prompt_req;

  // Member: sm_hpa_quit_reason
  cdr >> ros_message.sm_hpa_quit_reason;

  // Member: valt_prkg_failr_notif
  cdr >> ros_message.valt_prkg_failr_notif;

  // Member: home_prkg_voice_prompt_req
  cdr >> ros_message.home_prkg_voice_prompt_req;

  // Member: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  cdr >> ros_message.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req;

  // Member: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  cdr >> ros_message.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1;

  // Member: valt_prkg_reminder
  cdr >> ros_message.valt_prkg_reminder;

  // Member: veh_home_prkg_sys_sts
  cdr >> ros_message.veh_home_prkg_sys_sts;

  // Member: prkg_amb_li_req
  cdr >> ros_message.prkg_amb_li_req;

  // Member: veh_prkg_to_horn
  cdr >> ros_message.veh_prkg_to_horn;

  // Member: prkg_accr_ovrdn_ctrl_reqgrp
  cdr >> ros_message.prkg_accr_ovrdn_ctrl_reqgrp;

  // Member: hpa_st_code_to_sm
  cdr >> ros_message.hpa_st_code_to_sm;

  // Member: lo_spd_and_trk_bck_sys_sts
  cdr >> ros_message.lo_spd_and_trk_bck_sys_sts;

  // Member: sm_rem_ctrl_veh_sts
  cdr >> ros_message.sm_rem_ctrl_veh_sts;

  // Member: sm_rem_str_sts
  cdr >> ros_message.sm_rem_str_sts;

  // Member: sm_rcv_mod_incln
  cdr >> ros_message.sm_rcv_mod_incln;

  // Member: sm_mob_dev_rcv_req_resp
  cdr >> ros_message.sm_mob_dev_rcv_req_resp;

  // Member: sm_mob_dev_rcv_sts
  cdr >> ros_message.sm_mob_dev_rcv_sts;

  // Member: sm_rcv_version
  cdr >> ros_message.sm_rcv_version;

  // Member: lgt_control_request
  cdr >> ros_message.lgt_control_request;

  // Member: lat_control_request
  cdr >> ros_message.lat_control_request;

  // Member: mai_sts
  cdr >> ros_message.mai_sts;

  // Member: prkg_emgy_brk_sys_sts
  cdr >> ros_message.prkg_emgy_brk_sys_sts;

  // Member: prkg_btn_sts_disp_float
  cdr >> ros_message.prkg_btn_sts_disp_float;

  // Member: prkg_active_push
  cdr >> ros_message.prkg_active_push;

  // Member: prkg_fct_di_mod
  cdr >> ros_message.prkg_fct_di_mod;

  // Member: no_touching_for_avm_req
  cdr >> ros_message.no_touching_for_avm_req;

  // Member: aut_prkg_in_btn_sts_from_rpa
  cdr >> ros_message.aut_prkg_in_btn_sts_from_rpa;

  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  cdr >> ros_message.asy_a_lgt_sts_asy_a_lgt_sts;

  // Member: asy_stand_still_req_for_cmft
  cdr >> ros_message.asy_stand_still_req_for_cmft;

  // Member: drv_off_req_for_lgt_ctrl
  cdr >> ros_message.drv_off_req_for_lgt_ctrl;

  // Member: stop_req_of_lgt_ctrl_for_prpsn
  cdr >> ros_message.stop_req_of_lgt_ctrl_for_prpsn;

  // Member: strt_req_of_lgt_ctrl_for_prpsn
  cdr >> ros_message.strt_req_of_lgt_ctrl_for_prpsn;

  // Member: avl_sts_for_long_aut_drv
  cdr >> ros_message.avl_sts_for_long_aut_drv;

  // Member: hwa_lat_ctrl_sts
  cdr >> ros_message.hwa_lat_ctrl_sts;

  // Member: ad_ctrl_mode
  cdr >> ros_message.ad_ctrl_mode;

  // Member: asy_lane_chg_assist_sts
  cdr >> ros_message.asy_lane_chg_assist_sts;

  // Member: asy_noa_sts
  cdr >> ros_message.asy_noa_sts;

  // Member: aut_lane_chg_sts
  cdr >> ros_message.aut_lane_chg_sts;

  // Member: asy_req_lane_chg
  cdr >> ros_message.asy_req_lane_chg;

  // Member: sm_state
  cdr >> ros_message.sm_state;

  // Member: function_status
  {
    cdr >> ros_message.function_status;
  }

  // Member: hwa_odd_off
  cdr >> ros_message.hwa_odd_off;

  // Member: smfault_level
  {
    cdr >> ros_message.smfault_level;
  }

  // Member: prkg_camera_store_resp
  cdr >> ros_message.prkg_camera_store_resp;

  // Member: rev
  {
    cdr >> ros_message.rev;
  }

  // Member: dpa_mode_broadcast
  cdr >> ros_message.dpa_mode_broadcast;

  // Member: dpa_btn_sts
  cdr >> ros_message.dpa_btn_sts;

  // Member: sm_fct_err_code2_hmi
  cdr >> ros_message.sm_fct_err_code2_hmi;

  // Member: view_layout_req
  cdr >> ros_message.view_layout_req;

  // Member: cust_btn_sts
  cdr >> ros_message.cust_btn_sts;

  // Member: exit_cust_btn_sts
  cdr >> ros_message.exit_cust_btn_sts;

  // Member: frnt_and_re_prkg_in_btn_sts
  cdr >> ros_message.frnt_and_re_prkg_in_btn_sts;

  // Member: mai_version
  cdr >> ros_message.mai_version;

  // Member: peb_version
  cdr >> ros_message.peb_version;

  // Member: lo_spd_and_trk_bck_sub_sts
  cdr >> ros_message.lo_spd_and_trk_bck_sub_sts;

  // Member: fill_light_req
  cdr >> ros_message.fill_light_req;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::StateMachineData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: three_d_angle_req
  {
    size_t item_size = sizeof(ros_message.three_d_angle_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tsm_version
  {
    size_t item_size = sizeof(ros_message.tsm_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apa_version
  {
    size_t item_size = sizeof(ros_message.apa_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avm_version
  {
    size_t item_size = sizeof(ros_message.avm_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_version
  {
    size_t item_size = sizeof(ros_message.hmi_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_assc_sys_sts
  {
    size_t item_size = sizeof(ros_message.drvr_assc_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apa_sub_sys_sts
  {
    size_t item_size = sizeof(ros_message.apa_sub_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_prk_type
  {
    size_t item_size = sizeof(ros_message.last_prk_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: monr_sys_sts
  {
    size_t item_size = sizeof(ros_message.monr_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstcl_trig_resp
  {
    size_t item_size = sizeof(ros_message.obstcl_trig_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pla_mod_sts_resp
  {
    size_t item_size = sizeof(ros_message.pla_mod_sts_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: swt_disp_on_and_off_sts_resp
  {
    size_t item_size = sizeof(ros_message.swt_disp_on_and_off_sts_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thr_d_touring_view_resp
  {
    size_t item_size = sizeof(ros_message.thr_d_touring_view_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_entry_ag_wide_vis_resp
  {
    size_t item_size = sizeof(ros_message.turn_entry_ag_wide_vis_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_mdl_clr_resp
  {
    size_t item_size = sizeof(ros_message.veh_mdl_clr_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: visn_ag_extn_resp
  {
    size_t item_size = sizeof(ros_message.visn_ag_extn_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: visn_img_disp_mod_resp
  {
    size_t item_size = sizeof(ros_message.visn_img_disp_mod_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_assc_sys_disp
  {
    size_t item_size = sizeof(ros_message.drvr_assc_sys_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_aux_info_disp
  {
    size_t item_size = sizeof(ros_message.prkg_aux_info_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_back_disp
  {
    size_t item_size = sizeof(ros_message.prkg_back_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_btn_sts_disp_group_cancel
  {
    size_t item_size = sizeof(ros_message.prkg_btn_sts_disp_group_cancel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_btn_sts_disp_group_prkg_in
  {
    size_t item_size = sizeof(ros_message.prkg_btn_sts_disp_group_prkg_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_btn_sts_disp_group_prkg_out
  {
    size_t item_size = sizeof(ros_message.prkg_btn_sts_disp_group_prkg_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_fct_di_disp
  {
    size_t item_size = sizeof(ros_message.prkg_fct_di_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_fct_di_mod_resp
  {
    size_t item_size = sizeof(ros_message.prkg_fct_di_mod_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_progs_disp
  {
    size_t item_size = sizeof(ros_message.prkg_progs_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_stop_aud_warn_req
  {
    size_t item_size = sizeof(ros_message.prkg_stop_aud_warn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_push_apa_info_req
  {
    size_t item_size = sizeof(ros_message.back_push_apa_info_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voice_prompt_req
  {
    size_t item_size = sizeof(ros_message.voice_prompt_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_img_disp_req
  {
    size_t item_size = sizeof(ros_message.prkg_img_disp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: park_in_or_out
  {
    size_t item_size = sizeof(ros_message.park_in_or_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shakehand_rq
  {
    size_t item_size = sizeof(ros_message.shakehand_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: park_enter_req
  {
    size_t item_size = sizeof(ros_message.park_enter_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: park_exit_req
  {
    size_t item_size = sizeof(ros_message.park_exit_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: park_function
  {
    size_t item_size = sizeof(ros_message.park_function);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_fct_vmm_mod_req
  {
    size_t item_size = sizeof(ros_message.prkg_fct_vmm_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eng_runng_req_by_park_assi1
  {
    size_t item_size = sizeof(ros_message.eng_runng_req_by_park_assi1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apa_sts_flag
  {
    size_t item_size = sizeof(ros_message.apa_sts_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_actv_prkg_fct_swt_resp
  {
    size_t item_size = sizeof(ros_message.aut_actv_prkg_fct_swt_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_voice_swt_resp
  {
    size_t item_size = sizeof(ros_message.aut_prkg_voice_swt_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_voice_typ_resp
  {
    size_t item_size = sizeof(ros_message.aut_prkg_voice_typ_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: img_sn_sr_cal_sts
  {
    size_t item_size = sizeof(ros_message.img_sn_sr_cal_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_dock_dis_req
  {
    size_t item_size = sizeof(ros_message.prkg_dock_dis_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pdc_ctrl_rsn
  {
    size_t item_size = sizeof(ros_message.pdc_ctrl_rsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_fault
  {
    size_t item_size = sizeof(ros_message.system_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_lock_req
  {
    size_t item_size = sizeof(ros_message.prkg_lock_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirr_open_cls_req
  {
    size_t item_size = sizeof(ros_message.mirr_open_cls_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_resp
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_mod_incln
  {
    size_t item_size = sizeof(ros_message.prkg_mod_incln);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_assi_sys_rem_prkg_sts
  {
    size_t item_size = sizeof(ros_message.prkg_assi_sys_rem_prkg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_win_sun_roof_cls_req
  {
    size_t item_size = sizeof(ros_message.veh_win_sun_roof_cls_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_prkg_lock_theft_req
  {
    size_t item_size = sizeof(ros_message.veh_prkg_lock_theft_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rpa_version
  {
    size_t item_size = sizeof(ros_message.rpa_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_usg_drv_mod_tran_req
  {
    size_t item_size = sizeof(ros_message.prkg_usg_drv_mod_tran_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_sts_uint8
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_sts_uint8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_proc_dst_disp
  {
    size_t item_size = sizeof(ros_message.prkg_proc_dst_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    size_t item_size = sizeof(ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rem_straight_prkg_assi_seln_req_resp
  {
    size_t item_size = sizeof(ros_message.rem_straight_prkg_assi_seln_req_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rem_str_sts
  {
    size_t item_size = sizeof(ros_message.rem_str_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tsm_req_rpa_on
  {
    size_t item_size = sizeof(ros_message.tsm_req_rpa_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_parkg_type_con_rq
  {
    size_t item_size = sizeof(ros_message.last_parkg_type_con_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: forward_distance
  {
    size_t item_size = sizeof(ros_message.forward_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: backward_distance
  {
    size_t item_size = sizeof(ros_message.backward_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_distance
  {
    size_t item_size = sizeof(ros_message.total_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apa_self_park_or_out_version
  {
    size_t item_size = sizeof(ros_message.apa_self_park_or_out_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plan_first_sucs
  {
    size_t item_size = sizeof(ros_message.plan_first_sucs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disp_interface_chg_req
  {
    size_t item_size = sizeof(ros_message.disp_interface_chg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_fcts_swt_sts_disp
  {
    size_t item_size = sizeof(ros_message.prkg_fcts_swt_sts_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avm_drvr_assc_sys_disp
  {
    size_t item_size = sizeof(ros_message.avm_drvr_assc_sys_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avm_prkg_fct_di_disp
  {
    size_t item_size = sizeof(ros_message.avm_prkg_fct_di_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_btn_sts_dispset
  {
    size_t item_size = sizeof(ros_message.prkg_btn_sts_dispset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_assc_sys_disp_list
  {
    size_t item_size = sizeof(ros_message.drvr_assc_sys_disp_list);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    size_t item_size = sizeof(ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    size_t item_size = sizeof(ros_message.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_fct_test_pnd_req
  {
    size_t item_size = sizeof(ros_message.prkg_fct_test_pnd_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_hpa_version
  {
    size_t item_size = sizeof(ros_message.sm_hpa_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_hpa_state_ind
  {
    size_t item_size = sizeof(ros_message.sm_hpa_state_ind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_hpa_state
  {
    size_t item_size = sizeof(ros_message.sm_hpa_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_hpa_req_apa
  {
    size_t item_size = sizeof(ros_message.sm_hpa_req_apa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_hpa_proc_prompt_req
  {
    size_t item_size = sizeof(ros_message.sm_hpa_proc_prompt_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_hpa_quit_reason
  {
    size_t item_size = sizeof(ros_message.sm_hpa_quit_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valt_prkg_failr_notif
  {
    size_t item_size = sizeof(ros_message.valt_prkg_failr_notif);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: home_prkg_voice_prompt_req
  {
    size_t item_size = sizeof(ros_message.home_prkg_voice_prompt_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    size_t item_size = sizeof(ros_message.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    size_t item_size = sizeof(ros_message.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valt_prkg_reminder
  {
    size_t item_size = sizeof(ros_message.valt_prkg_reminder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_home_prkg_sys_sts
  {
    size_t item_size = sizeof(ros_message.veh_home_prkg_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_amb_li_req
  {
    size_t item_size = sizeof(ros_message.prkg_amb_li_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_prkg_to_horn
  {
    size_t item_size = sizeof(ros_message.veh_prkg_to_horn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_accr_ovrdn_ctrl_reqgrp
  {
    size_t item_size = sizeof(ros_message.prkg_accr_ovrdn_ctrl_reqgrp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hpa_st_code_to_sm
  {
    size_t item_size = sizeof(ros_message.hpa_st_code_to_sm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lo_spd_and_trk_bck_sys_sts
  {
    size_t item_size = sizeof(ros_message.lo_spd_and_trk_bck_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_rem_ctrl_veh_sts
  {
    size_t item_size = sizeof(ros_message.sm_rem_ctrl_veh_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_rem_str_sts
  {
    size_t item_size = sizeof(ros_message.sm_rem_str_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_rcv_mod_incln
  {
    size_t item_size = sizeof(ros_message.sm_rcv_mod_incln);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_mob_dev_rcv_req_resp
  {
    size_t item_size = sizeof(ros_message.sm_mob_dev_rcv_req_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_mob_dev_rcv_sts
  {
    size_t item_size = sizeof(ros_message.sm_mob_dev_rcv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_rcv_version
  {
    size_t item_size = sizeof(ros_message.sm_rcv_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lgt_control_request
  {
    size_t item_size = sizeof(ros_message.lgt_control_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_control_request
  {
    size_t item_size = sizeof(ros_message.lat_control_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mai_sts
  {
    size_t item_size = sizeof(ros_message.mai_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_emgy_brk_sys_sts
  {
    size_t item_size = sizeof(ros_message.prkg_emgy_brk_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_btn_sts_disp_float
  {
    size_t item_size = sizeof(ros_message.prkg_btn_sts_disp_float);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_active_push
  {
    size_t item_size = sizeof(ros_message.prkg_active_push);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_fct_di_mod
  {
    size_t item_size = sizeof(ros_message.prkg_fct_di_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: no_touching_for_avm_req
  {
    size_t item_size = sizeof(ros_message.no_touching_for_avm_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_prkg_in_btn_sts_from_rpa
  {
    size_t item_size = sizeof(ros_message.aut_prkg_in_btn_sts_from_rpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t item_size = sizeof(ros_message.asy_a_lgt_sts_asy_a_lgt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_stand_still_req_for_cmft
  {
    size_t item_size = sizeof(ros_message.asy_stand_still_req_for_cmft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drv_off_req_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message.drv_off_req_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message.stop_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message.strt_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avl_sts_for_long_aut_drv
  {
    size_t item_size = sizeof(ros_message.avl_sts_for_long_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hwa_lat_ctrl_sts
  {
    size_t item_size = sizeof(ros_message.hwa_lat_ctrl_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_ctrl_mode
  {
    size_t item_size = sizeof(ros_message.ad_ctrl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message.asy_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_noa_sts
  {
    size_t item_size = sizeof(ros_message.asy_noa_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message.aut_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_req_lane_chg
  {
    size_t item_size = sizeof(ros_message.asy_req_lane_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_state
  {
    size_t item_size = sizeof(ros_message.sm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: function_status
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.function_status[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hwa_odd_off
  {
    size_t item_size = sizeof(ros_message.hwa_odd_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: smfault_level
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.smfault_level[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prkg_camera_store_resp
  {
    size_t item_size = sizeof(ros_message.prkg_camera_store_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rev
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.rev[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dpa_mode_broadcast
  {
    size_t item_size = sizeof(ros_message.dpa_mode_broadcast);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dpa_btn_sts
  {
    size_t item_size = sizeof(ros_message.dpa_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_fct_err_code2_hmi
  {
    size_t item_size = sizeof(ros_message.sm_fct_err_code2_hmi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: view_layout_req
  {
    size_t item_size = sizeof(ros_message.view_layout_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cust_btn_sts
  {
    size_t item_size = sizeof(ros_message.cust_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exit_cust_btn_sts
  {
    size_t item_size = sizeof(ros_message.exit_cust_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frnt_and_re_prkg_in_btn_sts
  {
    size_t item_size = sizeof(ros_message.frnt_and_re_prkg_in_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mai_version
  {
    size_t item_size = sizeof(ros_message.mai_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: peb_version
  {
    size_t item_size = sizeof(ros_message.peb_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lo_spd_and_trk_bck_sub_sts
  {
    size_t item_size = sizeof(ros_message.lo_spd_and_trk_bck_sub_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fill_light_req
  {
    size_t item_size = sizeof(ros_message.fill_light_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_StateMachineData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: three_d_angle_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tsm_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: apa_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: avm_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hmi_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: drvr_assc_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: apa_sub_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: last_prk_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: monr_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obstcl_trig_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pla_mod_sts_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: swt_disp_on_and_off_sts_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: thr_d_touring_view_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_entry_ag_wide_vis_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_mdl_clr_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: visn_ag_extn_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: visn_img_disp_mod_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_assc_sys_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_aux_info_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_back_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_btn_sts_disp_group_cancel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_btn_sts_disp_group_prkg_in
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_btn_sts_disp_group_prkg_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_fct_di_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_fct_di_mod_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_progs_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_stop_aud_warn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: back_push_apa_info_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: voice_prompt_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_img_disp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: park_in_or_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shakehand_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: park_enter_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: park_exit_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: park_function
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_fct_vmm_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eng_runng_req_by_park_assi1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: apa_sts_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_actv_prkg_fct_swt_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_voice_swt_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_voice_typ_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: img_sn_sr_cal_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_dock_dis_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pdc_ctrl_rsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: prkg_lock_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mirr_open_cls_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_mod_incln
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_assi_sys_rem_prkg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_win_sun_roof_cls_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_prkg_lock_theft_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rpa_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: prkg_usg_drv_mod_tran_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_sts_uint8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_proc_dst_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rem_straight_prkg_assi_seln_req_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rem_str_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tsm_req_rpa_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: last_parkg_type_con_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: forward_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: backward_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: apa_self_park_or_out_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plan_first_sucs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disp_interface_chg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_fcts_swt_sts_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avm_drvr_assc_sys_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avm_prkg_fct_di_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_btn_sts_dispset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_assc_sys_disp_list
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_fct_test_pnd_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sm_hpa_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sm_hpa_state_ind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_hpa_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_hpa_req_apa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_hpa_proc_prompt_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_hpa_quit_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: valt_prkg_failr_notif
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: home_prkg_voice_prompt_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: valt_prkg_reminder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_home_prkg_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_amb_li_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_prkg_to_horn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_accr_ovrdn_ctrl_reqgrp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hpa_st_code_to_sm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lo_spd_and_trk_bck_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_rem_ctrl_veh_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_rem_str_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_rcv_mod_incln
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_mob_dev_rcv_req_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_mob_dev_rcv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_rcv_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lgt_control_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lat_control_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mai_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_emgy_brk_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_btn_sts_disp_float
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_active_push
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_fct_di_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: no_touching_for_avm_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_prkg_in_btn_sts_from_rpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_stand_still_req_for_cmft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drv_off_req_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avl_sts_for_long_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hwa_lat_ctrl_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_ctrl_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_noa_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_lane_chg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_req_lane_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: function_status
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hwa_odd_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: smfault_level
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prkg_camera_store_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rev
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dpa_mode_broadcast
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dpa_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_fct_err_code2_hmi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: view_layout_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cust_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: exit_cust_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: frnt_and_re_prkg_in_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mai_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: peb_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lo_spd_and_trk_bck_sub_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fill_light_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_function_msgs::msg::StateMachineData;
    is_plain =
      (
      offsetof(DataType, fill_light_req) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StateMachineData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::StateMachineData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StateMachineData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::StateMachineData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StateMachineData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::StateMachineData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StateMachineData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StateMachineData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StateMachineData__callbacks = {
  "deva_function_msgs::msg",
  "StateMachineData",
  _StateMachineData__cdr_serialize,
  _StateMachineData__cdr_deserialize,
  _StateMachineData__get_serialized_size,
  _StateMachineData__max_serialized_size
};

static rosidl_message_type_support_t _StateMachineData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StateMachineData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_function_msgs::msg::StateMachineData>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_StateMachineData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, StateMachineData)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_StateMachineData__handle;
}

#ifdef __cplusplus
}
#endif
