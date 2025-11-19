// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/StateMachineData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/state_machine_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/state_machine_data__struct.h"
#include "deva_function_msgs/msg/detail/state_machine_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_common_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();


using _StateMachineData__ros_msg_type = deva_function_msgs__msg__StateMachineData;

static bool _StateMachineData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StateMachineData__ros_msg_type * ros_message = static_cast<const _StateMachineData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: three_d_angle_req
  {
    cdr << ros_message->three_d_angle_req;
  }

  // Field name: tsm_version
  {
    cdr << ros_message->tsm_version;
  }

  // Field name: apa_version
  {
    cdr << ros_message->apa_version;
  }

  // Field name: avm_version
  {
    cdr << ros_message->avm_version;
  }

  // Field name: hmi_version
  {
    cdr << ros_message->hmi_version;
  }

  // Field name: drvr_assc_sys_sts
  {
    cdr << ros_message->drvr_assc_sys_sts;
  }

  // Field name: apa_sub_sys_sts
  {
    cdr << ros_message->apa_sub_sys_sts;
  }

  // Field name: last_prk_type
  {
    cdr << ros_message->last_prk_type;
  }

  // Field name: monr_sys_sts
  {
    cdr << ros_message->monr_sys_sts;
  }

  // Field name: obstcl_trig_resp
  {
    cdr << ros_message->obstcl_trig_resp;
  }

  // Field name: pla_mod_sts_resp
  {
    cdr << ros_message->pla_mod_sts_resp;
  }

  // Field name: swt_disp_on_and_off_sts_resp
  {
    cdr << ros_message->swt_disp_on_and_off_sts_resp;
  }

  // Field name: thr_d_touring_view_resp
  {
    cdr << ros_message->thr_d_touring_view_resp;
  }

  // Field name: turn_entry_ag_wide_vis_resp
  {
    cdr << ros_message->turn_entry_ag_wide_vis_resp;
  }

  // Field name: veh_mdl_clr_resp
  {
    cdr << ros_message->veh_mdl_clr_resp;
  }

  // Field name: visn_ag_extn_resp
  {
    cdr << ros_message->visn_ag_extn_resp;
  }

  // Field name: visn_img_disp_mod_resp
  {
    cdr << ros_message->visn_img_disp_mod_resp;
  }

  // Field name: drvr_assc_sys_disp
  {
    cdr << ros_message->drvr_assc_sys_disp;
  }

  // Field name: prkg_aux_info_disp
  {
    cdr << ros_message->prkg_aux_info_disp;
  }

  // Field name: prkg_back_disp
  {
    cdr << ros_message->prkg_back_disp;
  }

  // Field name: prkg_btn_sts_disp_group_cancel
  {
    cdr << ros_message->prkg_btn_sts_disp_group_cancel;
  }

  // Field name: prkg_btn_sts_disp_group_prkg_in
  {
    cdr << ros_message->prkg_btn_sts_disp_group_prkg_in;
  }

  // Field name: prkg_btn_sts_disp_group_prkg_out
  {
    cdr << ros_message->prkg_btn_sts_disp_group_prkg_out;
  }

  // Field name: prkg_fct_di_disp
  {
    cdr << ros_message->prkg_fct_di_disp;
  }

  // Field name: prkg_fct_di_mod_resp
  {
    cdr << ros_message->prkg_fct_di_mod_resp;
  }

  // Field name: prkg_progs_disp
  {
    cdr << ros_message->prkg_progs_disp;
  }

  // Field name: prkg_stop_aud_warn_req
  {
    cdr << (ros_message->prkg_stop_aud_warn_req ? true : false);
  }

  // Field name: back_push_apa_info_req
  {
    cdr << ros_message->back_push_apa_info_req;
  }

  // Field name: voice_prompt_req
  {
    cdr << ros_message->voice_prompt_req;
  }

  // Field name: prkg_img_disp_req
  {
    cdr << ros_message->prkg_img_disp_req;
  }

  // Field name: park_in_or_out
  {
    cdr << ros_message->park_in_or_out;
  }

  // Field name: shakehand_rq
  {
    cdr << ros_message->shakehand_rq;
  }

  // Field name: park_enter_req
  {
    cdr << (ros_message->park_enter_req ? true : false);
  }

  // Field name: park_exit_req
  {
    cdr << (ros_message->park_exit_req ? true : false);
  }

  // Field name: park_function
  {
    cdr << ros_message->park_function;
  }

  // Field name: prkg_fct_vmm_mod_req
  {
    cdr << (ros_message->prkg_fct_vmm_mod_req ? true : false);
  }

  // Field name: eng_runng_req_by_park_assi1
  {
    cdr << ros_message->eng_runng_req_by_park_assi1;
  }

  // Field name: apa_sts_flag
  {
    cdr << ros_message->apa_sts_flag;
  }

  // Field name: aut_actv_prkg_fct_swt_resp
  {
    cdr << ros_message->aut_actv_prkg_fct_swt_resp;
  }

  // Field name: aut_prkg_voice_swt_resp
  {
    cdr << ros_message->aut_prkg_voice_swt_resp;
  }

  // Field name: aut_prkg_voice_typ_resp
  {
    cdr << ros_message->aut_prkg_voice_typ_resp;
  }

  // Field name: img_sn_sr_cal_sts
  {
    cdr << (ros_message->img_sn_sr_cal_sts ? true : false);
  }

  // Field name: prkg_dock_dis_req
  {
    cdr << ros_message->prkg_dock_dis_req;
  }

  // Field name: pdc_ctrl_rsn
  {
    cdr << ros_message->pdc_ctrl_rsn;
  }

  // Field name: system_fault
  {
    cdr << ros_message->system_fault;
  }

  // Field name: prkg_lock_req
  {
    cdr << ros_message->prkg_lock_req;
  }

  // Field name: mirr_open_cls_req
  {
    cdr << ros_message->mirr_open_cls_req;
  }

  // Field name: mob_dev_rpa_req_resp
  {
    cdr << ros_message->mob_dev_rpa_req_resp;
  }

  // Field name: prkg_mod_incln
  {
    cdr << ros_message->prkg_mod_incln;
  }

  // Field name: prkg_assi_sys_rem_prkg_sts
  {
    cdr << ros_message->prkg_assi_sys_rem_prkg_sts;
  }

  // Field name: veh_win_sun_roof_cls_req
  {
    cdr << ros_message->veh_win_sun_roof_cls_req;
  }

  // Field name: veh_prkg_lock_theft_req
  {
    cdr << ros_message->veh_prkg_lock_theft_req;
  }

  // Field name: rpa_version
  {
    cdr << ros_message->rpa_version;
  }

  // Field name: prkg_usg_drv_mod_tran_req
  {
    cdr << ros_message->prkg_usg_drv_mod_tran_req;
  }

  // Field name: mob_dev_rpa_sts_uint8
  {
    cdr << ros_message->mob_dev_rpa_sts_uint8;
  }

  // Field name: prkg_proc_dst_disp
  {
    cdr << ros_message->prkg_proc_dst_disp;
  }

  // Field name: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    cdr << ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1;
  }

  // Field name: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    cdr << ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts;
  }

  // Field name: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    cdr << ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts;
  }

  // Field name: rem_straight_prkg_assi_seln_req_resp
  {
    cdr << ros_message->rem_straight_prkg_assi_seln_req_resp;
  }

  // Field name: rem_str_sts
  {
    cdr << ros_message->rem_str_sts;
  }

  // Field name: tsm_req_rpa_on
  {
    cdr << ros_message->tsm_req_rpa_on;
  }

  // Field name: last_parkg_type_con_rq
  {
    cdr << ros_message->last_parkg_type_con_rq;
  }

  // Field name: forward_distance
  {
    cdr << ros_message->forward_distance;
  }

  // Field name: backward_distance
  {
    cdr << ros_message->backward_distance;
  }

  // Field name: total_distance
  {
    cdr << ros_message->total_distance;
  }

  // Field name: apa_self_park_or_out_version
  {
    cdr << ros_message->apa_self_park_or_out_version;
  }

  // Field name: plan_first_sucs
  {
    cdr << ros_message->plan_first_sucs;
  }

  // Field name: disp_interface_chg_req
  {
    cdr << ros_message->disp_interface_chg_req;
  }

  // Field name: prkg_fcts_swt_sts_disp
  {
    cdr << ros_message->prkg_fcts_swt_sts_disp;
  }

  // Field name: avm_drvr_assc_sys_disp
  {
    cdr << ros_message->avm_drvr_assc_sys_disp;
  }

  // Field name: avm_prkg_fct_di_disp
  {
    cdr << ros_message->avm_prkg_fct_di_disp;
  }

  // Field name: prkg_btn_sts_dispset
  {
    cdr << ros_message->prkg_btn_sts_dispset;
  }

  // Field name: drvr_assc_sys_disp_list
  {
    cdr << ros_message->drvr_assc_sys_disp_list;
  }

  // Field name: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    cdr << ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5;
  }

  // Field name: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    cdr << ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6;
  }

  // Field name: prkg_fct_test_pnd_req
  {
    cdr << ros_message->prkg_fct_test_pnd_req;
  }

  // Field name: sm_hpa_version
  {
    cdr << ros_message->sm_hpa_version;
  }

  // Field name: sm_hpa_state_ind
  {
    cdr << ros_message->sm_hpa_state_ind;
  }

  // Field name: sm_hpa_state
  {
    cdr << ros_message->sm_hpa_state;
  }

  // Field name: sm_hpa_req_apa
  {
    cdr << ros_message->sm_hpa_req_apa;
  }

  // Field name: sm_hpa_proc_prompt_req
  {
    cdr << ros_message->sm_hpa_proc_prompt_req;
  }

  // Field name: sm_hpa_quit_reason
  {
    cdr << ros_message->sm_hpa_quit_reason;
  }

  // Field name: valt_prkg_failr_notif
  {
    cdr << ros_message->valt_prkg_failr_notif;
  }

  // Field name: home_prkg_voice_prompt_req
  {
    cdr << ros_message->home_prkg_voice_prompt_req;
  }

  // Field name: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    cdr << ros_message->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req;
  }

  // Field name: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    cdr << ros_message->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1;
  }

  // Field name: valt_prkg_reminder
  {
    cdr << ros_message->valt_prkg_reminder;
  }

  // Field name: veh_home_prkg_sys_sts
  {
    cdr << ros_message->veh_home_prkg_sys_sts;
  }

  // Field name: prkg_amb_li_req
  {
    cdr << ros_message->prkg_amb_li_req;
  }

  // Field name: veh_prkg_to_horn
  {
    cdr << ros_message->veh_prkg_to_horn;
  }

  // Field name: prkg_accr_ovrdn_ctrl_reqgrp
  {
    cdr << ros_message->prkg_accr_ovrdn_ctrl_reqgrp;
  }

  // Field name: hpa_st_code_to_sm
  {
    cdr << ros_message->hpa_st_code_to_sm;
  }

  // Field name: lo_spd_and_trk_bck_sys_sts
  {
    cdr << ros_message->lo_spd_and_trk_bck_sys_sts;
  }

  // Field name: sm_rem_ctrl_veh_sts
  {
    cdr << ros_message->sm_rem_ctrl_veh_sts;
  }

  // Field name: sm_rem_str_sts
  {
    cdr << ros_message->sm_rem_str_sts;
  }

  // Field name: sm_rcv_mod_incln
  {
    cdr << ros_message->sm_rcv_mod_incln;
  }

  // Field name: sm_mob_dev_rcv_req_resp
  {
    cdr << ros_message->sm_mob_dev_rcv_req_resp;
  }

  // Field name: sm_mob_dev_rcv_sts
  {
    cdr << ros_message->sm_mob_dev_rcv_sts;
  }

  // Field name: sm_rcv_version
  {
    cdr << ros_message->sm_rcv_version;
  }

  // Field name: lgt_control_request
  {
    cdr << ros_message->lgt_control_request;
  }

  // Field name: lat_control_request
  {
    cdr << ros_message->lat_control_request;
  }

  // Field name: mai_sts
  {
    cdr << ros_message->mai_sts;
  }

  // Field name: prkg_emgy_brk_sys_sts
  {
    cdr << ros_message->prkg_emgy_brk_sys_sts;
  }

  // Field name: prkg_btn_sts_disp_float
  {
    cdr << ros_message->prkg_btn_sts_disp_float;
  }

  // Field name: prkg_active_push
  {
    cdr << ros_message->prkg_active_push;
  }

  // Field name: prkg_fct_di_mod
  {
    cdr << ros_message->prkg_fct_di_mod;
  }

  // Field name: no_touching_for_avm_req
  {
    cdr << ros_message->no_touching_for_avm_req;
  }

  // Field name: aut_prkg_in_btn_sts_from_rpa
  {
    cdr << ros_message->aut_prkg_in_btn_sts_from_rpa;
  }

  // Field name: asy_a_lgt_sts_asy_a_lgt_sts
  {
    cdr << ros_message->asy_a_lgt_sts_asy_a_lgt_sts;
  }

  // Field name: asy_stand_still_req_for_cmft
  {
    cdr << ros_message->asy_stand_still_req_for_cmft;
  }

  // Field name: drv_off_req_for_lgt_ctrl
  {
    cdr << ros_message->drv_off_req_for_lgt_ctrl;
  }

  // Field name: stop_req_of_lgt_ctrl_for_prpsn
  {
    cdr << ros_message->stop_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: strt_req_of_lgt_ctrl_for_prpsn
  {
    cdr << ros_message->strt_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: avl_sts_for_long_aut_drv
  {
    cdr << ros_message->avl_sts_for_long_aut_drv;
  }

  // Field name: hwa_lat_ctrl_sts
  {
    cdr << ros_message->hwa_lat_ctrl_sts;
  }

  // Field name: ad_ctrl_mode
  {
    cdr << ros_message->ad_ctrl_mode;
  }

  // Field name: asy_lane_chg_assist_sts
  {
    cdr << ros_message->asy_lane_chg_assist_sts;
  }

  // Field name: asy_noa_sts
  {
    cdr << ros_message->asy_noa_sts;
  }

  // Field name: aut_lane_chg_sts
  {
    cdr << ros_message->aut_lane_chg_sts;
  }

  // Field name: asy_req_lane_chg
  {
    cdr << ros_message->asy_req_lane_chg;
  }

  // Field name: sm_state
  {
    cdr << ros_message->sm_state;
  }

  // Field name: function_status
  {
    size_t size = 32;
    auto array_ptr = ros_message->function_status;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hwa_odd_off
  {
    cdr << ros_message->hwa_odd_off;
  }

  // Field name: smfault_level
  {
    size_t size = 32;
    auto array_ptr = ros_message->smfault_level;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: prkg_camera_store_resp
  {
    cdr << ros_message->prkg_camera_store_resp;
  }

  // Field name: rev
  {
    size_t size = 8;
    auto array_ptr = ros_message->rev;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dpa_mode_broadcast
  {
    cdr << ros_message->dpa_mode_broadcast;
  }

  // Field name: dpa_btn_sts
  {
    cdr << ros_message->dpa_btn_sts;
  }

  // Field name: sm_fct_err_code2_hmi
  {
    cdr << ros_message->sm_fct_err_code2_hmi;
  }

  // Field name: view_layout_req
  {
    cdr << ros_message->view_layout_req;
  }

  // Field name: cust_btn_sts
  {
    cdr << ros_message->cust_btn_sts;
  }

  // Field name: exit_cust_btn_sts
  {
    cdr << ros_message->exit_cust_btn_sts;
  }

  // Field name: frnt_and_re_prkg_in_btn_sts
  {
    cdr << ros_message->frnt_and_re_prkg_in_btn_sts;
  }

  // Field name: mai_version
  {
    cdr << ros_message->mai_version;
  }

  // Field name: peb_version
  {
    cdr << ros_message->peb_version;
  }

  // Field name: lo_spd_and_trk_bck_sub_sts
  {
    cdr << ros_message->lo_spd_and_trk_bck_sub_sts;
  }

  // Field name: fill_light_req
  {
    cdr << ros_message->fill_light_req;
  }

  return true;
}

static bool _StateMachineData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StateMachineData__ros_msg_type * ros_message = static_cast<_StateMachineData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: three_d_angle_req
  {
    cdr >> ros_message->three_d_angle_req;
  }

  // Field name: tsm_version
  {
    cdr >> ros_message->tsm_version;
  }

  // Field name: apa_version
  {
    cdr >> ros_message->apa_version;
  }

  // Field name: avm_version
  {
    cdr >> ros_message->avm_version;
  }

  // Field name: hmi_version
  {
    cdr >> ros_message->hmi_version;
  }

  // Field name: drvr_assc_sys_sts
  {
    cdr >> ros_message->drvr_assc_sys_sts;
  }

  // Field name: apa_sub_sys_sts
  {
    cdr >> ros_message->apa_sub_sys_sts;
  }

  // Field name: last_prk_type
  {
    cdr >> ros_message->last_prk_type;
  }

  // Field name: monr_sys_sts
  {
    cdr >> ros_message->monr_sys_sts;
  }

  // Field name: obstcl_trig_resp
  {
    cdr >> ros_message->obstcl_trig_resp;
  }

  // Field name: pla_mod_sts_resp
  {
    cdr >> ros_message->pla_mod_sts_resp;
  }

  // Field name: swt_disp_on_and_off_sts_resp
  {
    cdr >> ros_message->swt_disp_on_and_off_sts_resp;
  }

  // Field name: thr_d_touring_view_resp
  {
    cdr >> ros_message->thr_d_touring_view_resp;
  }

  // Field name: turn_entry_ag_wide_vis_resp
  {
    cdr >> ros_message->turn_entry_ag_wide_vis_resp;
  }

  // Field name: veh_mdl_clr_resp
  {
    cdr >> ros_message->veh_mdl_clr_resp;
  }

  // Field name: visn_ag_extn_resp
  {
    cdr >> ros_message->visn_ag_extn_resp;
  }

  // Field name: visn_img_disp_mod_resp
  {
    cdr >> ros_message->visn_img_disp_mod_resp;
  }

  // Field name: drvr_assc_sys_disp
  {
    cdr >> ros_message->drvr_assc_sys_disp;
  }

  // Field name: prkg_aux_info_disp
  {
    cdr >> ros_message->prkg_aux_info_disp;
  }

  // Field name: prkg_back_disp
  {
    cdr >> ros_message->prkg_back_disp;
  }

  // Field name: prkg_btn_sts_disp_group_cancel
  {
    cdr >> ros_message->prkg_btn_sts_disp_group_cancel;
  }

  // Field name: prkg_btn_sts_disp_group_prkg_in
  {
    cdr >> ros_message->prkg_btn_sts_disp_group_prkg_in;
  }

  // Field name: prkg_btn_sts_disp_group_prkg_out
  {
    cdr >> ros_message->prkg_btn_sts_disp_group_prkg_out;
  }

  // Field name: prkg_fct_di_disp
  {
    cdr >> ros_message->prkg_fct_di_disp;
  }

  // Field name: prkg_fct_di_mod_resp
  {
    cdr >> ros_message->prkg_fct_di_mod_resp;
  }

  // Field name: prkg_progs_disp
  {
    cdr >> ros_message->prkg_progs_disp;
  }

  // Field name: prkg_stop_aud_warn_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->prkg_stop_aud_warn_req = tmp ? true : false;
  }

  // Field name: back_push_apa_info_req
  {
    cdr >> ros_message->back_push_apa_info_req;
  }

  // Field name: voice_prompt_req
  {
    cdr >> ros_message->voice_prompt_req;
  }

  // Field name: prkg_img_disp_req
  {
    cdr >> ros_message->prkg_img_disp_req;
  }

  // Field name: park_in_or_out
  {
    cdr >> ros_message->park_in_or_out;
  }

  // Field name: shakehand_rq
  {
    cdr >> ros_message->shakehand_rq;
  }

  // Field name: park_enter_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->park_enter_req = tmp ? true : false;
  }

  // Field name: park_exit_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->park_exit_req = tmp ? true : false;
  }

  // Field name: park_function
  {
    cdr >> ros_message->park_function;
  }

  // Field name: prkg_fct_vmm_mod_req
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->prkg_fct_vmm_mod_req = tmp ? true : false;
  }

  // Field name: eng_runng_req_by_park_assi1
  {
    cdr >> ros_message->eng_runng_req_by_park_assi1;
  }

  // Field name: apa_sts_flag
  {
    cdr >> ros_message->apa_sts_flag;
  }

  // Field name: aut_actv_prkg_fct_swt_resp
  {
    cdr >> ros_message->aut_actv_prkg_fct_swt_resp;
  }

  // Field name: aut_prkg_voice_swt_resp
  {
    cdr >> ros_message->aut_prkg_voice_swt_resp;
  }

  // Field name: aut_prkg_voice_typ_resp
  {
    cdr >> ros_message->aut_prkg_voice_typ_resp;
  }

  // Field name: img_sn_sr_cal_sts
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->img_sn_sr_cal_sts = tmp ? true : false;
  }

  // Field name: prkg_dock_dis_req
  {
    cdr >> ros_message->prkg_dock_dis_req;
  }

  // Field name: pdc_ctrl_rsn
  {
    cdr >> ros_message->pdc_ctrl_rsn;
  }

  // Field name: system_fault
  {
    cdr >> ros_message->system_fault;
  }

  // Field name: prkg_lock_req
  {
    cdr >> ros_message->prkg_lock_req;
  }

  // Field name: mirr_open_cls_req
  {
    cdr >> ros_message->mirr_open_cls_req;
  }

  // Field name: mob_dev_rpa_req_resp
  {
    cdr >> ros_message->mob_dev_rpa_req_resp;
  }

  // Field name: prkg_mod_incln
  {
    cdr >> ros_message->prkg_mod_incln;
  }

  // Field name: prkg_assi_sys_rem_prkg_sts
  {
    cdr >> ros_message->prkg_assi_sys_rem_prkg_sts;
  }

  // Field name: veh_win_sun_roof_cls_req
  {
    cdr >> ros_message->veh_win_sun_roof_cls_req;
  }

  // Field name: veh_prkg_lock_theft_req
  {
    cdr >> ros_message->veh_prkg_lock_theft_req;
  }

  // Field name: rpa_version
  {
    cdr >> ros_message->rpa_version;
  }

  // Field name: prkg_usg_drv_mod_tran_req
  {
    cdr >> ros_message->prkg_usg_drv_mod_tran_req;
  }

  // Field name: mob_dev_rpa_sts_uint8
  {
    cdr >> ros_message->mob_dev_rpa_sts_uint8;
  }

  // Field name: prkg_proc_dst_disp
  {
    cdr >> ros_message->prkg_proc_dst_disp;
  }

  // Field name: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    cdr >> ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1;
  }

  // Field name: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    cdr >> ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts;
  }

  // Field name: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    cdr >> ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts;
  }

  // Field name: rem_straight_prkg_assi_seln_req_resp
  {
    cdr >> ros_message->rem_straight_prkg_assi_seln_req_resp;
  }

  // Field name: rem_str_sts
  {
    cdr >> ros_message->rem_str_sts;
  }

  // Field name: tsm_req_rpa_on
  {
    cdr >> ros_message->tsm_req_rpa_on;
  }

  // Field name: last_parkg_type_con_rq
  {
    cdr >> ros_message->last_parkg_type_con_rq;
  }

  // Field name: forward_distance
  {
    cdr >> ros_message->forward_distance;
  }

  // Field name: backward_distance
  {
    cdr >> ros_message->backward_distance;
  }

  // Field name: total_distance
  {
    cdr >> ros_message->total_distance;
  }

  // Field name: apa_self_park_or_out_version
  {
    cdr >> ros_message->apa_self_park_or_out_version;
  }

  // Field name: plan_first_sucs
  {
    cdr >> ros_message->plan_first_sucs;
  }

  // Field name: disp_interface_chg_req
  {
    cdr >> ros_message->disp_interface_chg_req;
  }

  // Field name: prkg_fcts_swt_sts_disp
  {
    cdr >> ros_message->prkg_fcts_swt_sts_disp;
  }

  // Field name: avm_drvr_assc_sys_disp
  {
    cdr >> ros_message->avm_drvr_assc_sys_disp;
  }

  // Field name: avm_prkg_fct_di_disp
  {
    cdr >> ros_message->avm_prkg_fct_di_disp;
  }

  // Field name: prkg_btn_sts_dispset
  {
    cdr >> ros_message->prkg_btn_sts_dispset;
  }

  // Field name: drvr_assc_sys_disp_list
  {
    cdr >> ros_message->drvr_assc_sys_disp_list;
  }

  // Field name: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    cdr >> ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5;
  }

  // Field name: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    cdr >> ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6;
  }

  // Field name: prkg_fct_test_pnd_req
  {
    cdr >> ros_message->prkg_fct_test_pnd_req;
  }

  // Field name: sm_hpa_version
  {
    cdr >> ros_message->sm_hpa_version;
  }

  // Field name: sm_hpa_state_ind
  {
    cdr >> ros_message->sm_hpa_state_ind;
  }

  // Field name: sm_hpa_state
  {
    cdr >> ros_message->sm_hpa_state;
  }

  // Field name: sm_hpa_req_apa
  {
    cdr >> ros_message->sm_hpa_req_apa;
  }

  // Field name: sm_hpa_proc_prompt_req
  {
    cdr >> ros_message->sm_hpa_proc_prompt_req;
  }

  // Field name: sm_hpa_quit_reason
  {
    cdr >> ros_message->sm_hpa_quit_reason;
  }

  // Field name: valt_prkg_failr_notif
  {
    cdr >> ros_message->valt_prkg_failr_notif;
  }

  // Field name: home_prkg_voice_prompt_req
  {
    cdr >> ros_message->home_prkg_voice_prompt_req;
  }

  // Field name: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    cdr >> ros_message->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req;
  }

  // Field name: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    cdr >> ros_message->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1;
  }

  // Field name: valt_prkg_reminder
  {
    cdr >> ros_message->valt_prkg_reminder;
  }

  // Field name: veh_home_prkg_sys_sts
  {
    cdr >> ros_message->veh_home_prkg_sys_sts;
  }

  // Field name: prkg_amb_li_req
  {
    cdr >> ros_message->prkg_amb_li_req;
  }

  // Field name: veh_prkg_to_horn
  {
    cdr >> ros_message->veh_prkg_to_horn;
  }

  // Field name: prkg_accr_ovrdn_ctrl_reqgrp
  {
    cdr >> ros_message->prkg_accr_ovrdn_ctrl_reqgrp;
  }

  // Field name: hpa_st_code_to_sm
  {
    cdr >> ros_message->hpa_st_code_to_sm;
  }

  // Field name: lo_spd_and_trk_bck_sys_sts
  {
    cdr >> ros_message->lo_spd_and_trk_bck_sys_sts;
  }

  // Field name: sm_rem_ctrl_veh_sts
  {
    cdr >> ros_message->sm_rem_ctrl_veh_sts;
  }

  // Field name: sm_rem_str_sts
  {
    cdr >> ros_message->sm_rem_str_sts;
  }

  // Field name: sm_rcv_mod_incln
  {
    cdr >> ros_message->sm_rcv_mod_incln;
  }

  // Field name: sm_mob_dev_rcv_req_resp
  {
    cdr >> ros_message->sm_mob_dev_rcv_req_resp;
  }

  // Field name: sm_mob_dev_rcv_sts
  {
    cdr >> ros_message->sm_mob_dev_rcv_sts;
  }

  // Field name: sm_rcv_version
  {
    cdr >> ros_message->sm_rcv_version;
  }

  // Field name: lgt_control_request
  {
    cdr >> ros_message->lgt_control_request;
  }

  // Field name: lat_control_request
  {
    cdr >> ros_message->lat_control_request;
  }

  // Field name: mai_sts
  {
    cdr >> ros_message->mai_sts;
  }

  // Field name: prkg_emgy_brk_sys_sts
  {
    cdr >> ros_message->prkg_emgy_brk_sys_sts;
  }

  // Field name: prkg_btn_sts_disp_float
  {
    cdr >> ros_message->prkg_btn_sts_disp_float;
  }

  // Field name: prkg_active_push
  {
    cdr >> ros_message->prkg_active_push;
  }

  // Field name: prkg_fct_di_mod
  {
    cdr >> ros_message->prkg_fct_di_mod;
  }

  // Field name: no_touching_for_avm_req
  {
    cdr >> ros_message->no_touching_for_avm_req;
  }

  // Field name: aut_prkg_in_btn_sts_from_rpa
  {
    cdr >> ros_message->aut_prkg_in_btn_sts_from_rpa;
  }

  // Field name: asy_a_lgt_sts_asy_a_lgt_sts
  {
    cdr >> ros_message->asy_a_lgt_sts_asy_a_lgt_sts;
  }

  // Field name: asy_stand_still_req_for_cmft
  {
    cdr >> ros_message->asy_stand_still_req_for_cmft;
  }

  // Field name: drv_off_req_for_lgt_ctrl
  {
    cdr >> ros_message->drv_off_req_for_lgt_ctrl;
  }

  // Field name: stop_req_of_lgt_ctrl_for_prpsn
  {
    cdr >> ros_message->stop_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: strt_req_of_lgt_ctrl_for_prpsn
  {
    cdr >> ros_message->strt_req_of_lgt_ctrl_for_prpsn;
  }

  // Field name: avl_sts_for_long_aut_drv
  {
    cdr >> ros_message->avl_sts_for_long_aut_drv;
  }

  // Field name: hwa_lat_ctrl_sts
  {
    cdr >> ros_message->hwa_lat_ctrl_sts;
  }

  // Field name: ad_ctrl_mode
  {
    cdr >> ros_message->ad_ctrl_mode;
  }

  // Field name: asy_lane_chg_assist_sts
  {
    cdr >> ros_message->asy_lane_chg_assist_sts;
  }

  // Field name: asy_noa_sts
  {
    cdr >> ros_message->asy_noa_sts;
  }

  // Field name: aut_lane_chg_sts
  {
    cdr >> ros_message->aut_lane_chg_sts;
  }

  // Field name: asy_req_lane_chg
  {
    cdr >> ros_message->asy_req_lane_chg;
  }

  // Field name: sm_state
  {
    cdr >> ros_message->sm_state;
  }

  // Field name: function_status
  {
    size_t size = 32;
    auto array_ptr = ros_message->function_status;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hwa_odd_off
  {
    cdr >> ros_message->hwa_odd_off;
  }

  // Field name: smfault_level
  {
    size_t size = 32;
    auto array_ptr = ros_message->smfault_level;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: prkg_camera_store_resp
  {
    cdr >> ros_message->prkg_camera_store_resp;
  }

  // Field name: rev
  {
    size_t size = 8;
    auto array_ptr = ros_message->rev;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dpa_mode_broadcast
  {
    cdr >> ros_message->dpa_mode_broadcast;
  }

  // Field name: dpa_btn_sts
  {
    cdr >> ros_message->dpa_btn_sts;
  }

  // Field name: sm_fct_err_code2_hmi
  {
    cdr >> ros_message->sm_fct_err_code2_hmi;
  }

  // Field name: view_layout_req
  {
    cdr >> ros_message->view_layout_req;
  }

  // Field name: cust_btn_sts
  {
    cdr >> ros_message->cust_btn_sts;
  }

  // Field name: exit_cust_btn_sts
  {
    cdr >> ros_message->exit_cust_btn_sts;
  }

  // Field name: frnt_and_re_prkg_in_btn_sts
  {
    cdr >> ros_message->frnt_and_re_prkg_in_btn_sts;
  }

  // Field name: mai_version
  {
    cdr >> ros_message->mai_version;
  }

  // Field name: peb_version
  {
    cdr >> ros_message->peb_version;
  }

  // Field name: lo_spd_and_trk_bck_sub_sts
  {
    cdr >> ros_message->lo_spd_and_trk_bck_sub_sts;
  }

  // Field name: fill_light_req
  {
    cdr >> ros_message->fill_light_req;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__StateMachineData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateMachineData__ros_msg_type * ros_message = static_cast<const _StateMachineData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name three_d_angle_req
  {
    size_t item_size = sizeof(ros_message->three_d_angle_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tsm_version
  {
    size_t item_size = sizeof(ros_message->tsm_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apa_version
  {
    size_t item_size = sizeof(ros_message->apa_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avm_version
  {
    size_t item_size = sizeof(ros_message->avm_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_version
  {
    size_t item_size = sizeof(ros_message->hmi_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_assc_sys_sts
  {
    size_t item_size = sizeof(ros_message->drvr_assc_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apa_sub_sys_sts
  {
    size_t item_size = sizeof(ros_message->apa_sub_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_prk_type
  {
    size_t item_size = sizeof(ros_message->last_prk_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name monr_sys_sts
  {
    size_t item_size = sizeof(ros_message->monr_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstcl_trig_resp
  {
    size_t item_size = sizeof(ros_message->obstcl_trig_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pla_mod_sts_resp
  {
    size_t item_size = sizeof(ros_message->pla_mod_sts_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name swt_disp_on_and_off_sts_resp
  {
    size_t item_size = sizeof(ros_message->swt_disp_on_and_off_sts_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thr_d_touring_view_resp
  {
    size_t item_size = sizeof(ros_message->thr_d_touring_view_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_entry_ag_wide_vis_resp
  {
    size_t item_size = sizeof(ros_message->turn_entry_ag_wide_vis_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_mdl_clr_resp
  {
    size_t item_size = sizeof(ros_message->veh_mdl_clr_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name visn_ag_extn_resp
  {
    size_t item_size = sizeof(ros_message->visn_ag_extn_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name visn_img_disp_mod_resp
  {
    size_t item_size = sizeof(ros_message->visn_img_disp_mod_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_assc_sys_disp
  {
    size_t item_size = sizeof(ros_message->drvr_assc_sys_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_aux_info_disp
  {
    size_t item_size = sizeof(ros_message->prkg_aux_info_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_back_disp
  {
    size_t item_size = sizeof(ros_message->prkg_back_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_btn_sts_disp_group_cancel
  {
    size_t item_size = sizeof(ros_message->prkg_btn_sts_disp_group_cancel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_btn_sts_disp_group_prkg_in
  {
    size_t item_size = sizeof(ros_message->prkg_btn_sts_disp_group_prkg_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_btn_sts_disp_group_prkg_out
  {
    size_t item_size = sizeof(ros_message->prkg_btn_sts_disp_group_prkg_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_fct_di_disp
  {
    size_t item_size = sizeof(ros_message->prkg_fct_di_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_fct_di_mod_resp
  {
    size_t item_size = sizeof(ros_message->prkg_fct_di_mod_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_progs_disp
  {
    size_t item_size = sizeof(ros_message->prkg_progs_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_stop_aud_warn_req
  {
    size_t item_size = sizeof(ros_message->prkg_stop_aud_warn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_push_apa_info_req
  {
    size_t item_size = sizeof(ros_message->back_push_apa_info_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voice_prompt_req
  {
    size_t item_size = sizeof(ros_message->voice_prompt_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_img_disp_req
  {
    size_t item_size = sizeof(ros_message->prkg_img_disp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name park_in_or_out
  {
    size_t item_size = sizeof(ros_message->park_in_or_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shakehand_rq
  {
    size_t item_size = sizeof(ros_message->shakehand_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name park_enter_req
  {
    size_t item_size = sizeof(ros_message->park_enter_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name park_exit_req
  {
    size_t item_size = sizeof(ros_message->park_exit_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name park_function
  {
    size_t item_size = sizeof(ros_message->park_function);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_fct_vmm_mod_req
  {
    size_t item_size = sizeof(ros_message->prkg_fct_vmm_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eng_runng_req_by_park_assi1
  {
    size_t item_size = sizeof(ros_message->eng_runng_req_by_park_assi1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apa_sts_flag
  {
    size_t item_size = sizeof(ros_message->apa_sts_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_actv_prkg_fct_swt_resp
  {
    size_t item_size = sizeof(ros_message->aut_actv_prkg_fct_swt_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_voice_swt_resp
  {
    size_t item_size = sizeof(ros_message->aut_prkg_voice_swt_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_voice_typ_resp
  {
    size_t item_size = sizeof(ros_message->aut_prkg_voice_typ_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name img_sn_sr_cal_sts
  {
    size_t item_size = sizeof(ros_message->img_sn_sr_cal_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_dock_dis_req
  {
    size_t item_size = sizeof(ros_message->prkg_dock_dis_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pdc_ctrl_rsn
  {
    size_t item_size = sizeof(ros_message->pdc_ctrl_rsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_fault
  {
    size_t item_size = sizeof(ros_message->system_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_lock_req
  {
    size_t item_size = sizeof(ros_message->prkg_lock_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirr_open_cls_req
  {
    size_t item_size = sizeof(ros_message->mirr_open_cls_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_resp
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_mod_incln
  {
    size_t item_size = sizeof(ros_message->prkg_mod_incln);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_assi_sys_rem_prkg_sts
  {
    size_t item_size = sizeof(ros_message->prkg_assi_sys_rem_prkg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_win_sun_roof_cls_req
  {
    size_t item_size = sizeof(ros_message->veh_win_sun_roof_cls_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_prkg_lock_theft_req
  {
    size_t item_size = sizeof(ros_message->veh_prkg_lock_theft_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpa_version
  {
    size_t item_size = sizeof(ros_message->rpa_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_usg_drv_mod_tran_req
  {
    size_t item_size = sizeof(ros_message->prkg_usg_drv_mod_tran_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_sts_uint8
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_sts_uint8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_proc_dst_disp
  {
    size_t item_size = sizeof(ros_message->prkg_proc_dst_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    size_t item_size = sizeof(ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rem_straight_prkg_assi_seln_req_resp
  {
    size_t item_size = sizeof(ros_message->rem_straight_prkg_assi_seln_req_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rem_str_sts
  {
    size_t item_size = sizeof(ros_message->rem_str_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tsm_req_rpa_on
  {
    size_t item_size = sizeof(ros_message->tsm_req_rpa_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_parkg_type_con_rq
  {
    size_t item_size = sizeof(ros_message->last_parkg_type_con_rq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forward_distance
  {
    size_t item_size = sizeof(ros_message->forward_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backward_distance
  {
    size_t item_size = sizeof(ros_message->backward_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_distance
  {
    size_t item_size = sizeof(ros_message->total_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apa_self_park_or_out_version
  {
    size_t item_size = sizeof(ros_message->apa_self_park_or_out_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plan_first_sucs
  {
    size_t item_size = sizeof(ros_message->plan_first_sucs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disp_interface_chg_req
  {
    size_t item_size = sizeof(ros_message->disp_interface_chg_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_fcts_swt_sts_disp
  {
    size_t item_size = sizeof(ros_message->prkg_fcts_swt_sts_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avm_drvr_assc_sys_disp
  {
    size_t item_size = sizeof(ros_message->avm_drvr_assc_sys_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avm_prkg_fct_di_disp
  {
    size_t item_size = sizeof(ros_message->avm_prkg_fct_di_disp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_btn_sts_dispset
  {
    size_t item_size = sizeof(ros_message->prkg_btn_sts_dispset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_assc_sys_disp_list
  {
    size_t item_size = sizeof(ros_message->drvr_assc_sys_disp_list);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    size_t item_size = sizeof(ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    size_t item_size = sizeof(ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_fct_test_pnd_req
  {
    size_t item_size = sizeof(ros_message->prkg_fct_test_pnd_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_hpa_version
  {
    size_t item_size = sizeof(ros_message->sm_hpa_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_hpa_state_ind
  {
    size_t item_size = sizeof(ros_message->sm_hpa_state_ind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_hpa_state
  {
    size_t item_size = sizeof(ros_message->sm_hpa_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_hpa_req_apa
  {
    size_t item_size = sizeof(ros_message->sm_hpa_req_apa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_hpa_proc_prompt_req
  {
    size_t item_size = sizeof(ros_message->sm_hpa_proc_prompt_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_hpa_quit_reason
  {
    size_t item_size = sizeof(ros_message->sm_hpa_quit_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valt_prkg_failr_notif
  {
    size_t item_size = sizeof(ros_message->valt_prkg_failr_notif);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name home_prkg_voice_prompt_req
  {
    size_t item_size = sizeof(ros_message->home_prkg_voice_prompt_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    size_t item_size = sizeof(ros_message->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    size_t item_size = sizeof(ros_message->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valt_prkg_reminder
  {
    size_t item_size = sizeof(ros_message->valt_prkg_reminder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_home_prkg_sys_sts
  {
    size_t item_size = sizeof(ros_message->veh_home_prkg_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_amb_li_req
  {
    size_t item_size = sizeof(ros_message->prkg_amb_li_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_prkg_to_horn
  {
    size_t item_size = sizeof(ros_message->veh_prkg_to_horn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_accr_ovrdn_ctrl_reqgrp
  {
    size_t item_size = sizeof(ros_message->prkg_accr_ovrdn_ctrl_reqgrp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hpa_st_code_to_sm
  {
    size_t item_size = sizeof(ros_message->hpa_st_code_to_sm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lo_spd_and_trk_bck_sys_sts
  {
    size_t item_size = sizeof(ros_message->lo_spd_and_trk_bck_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_rem_ctrl_veh_sts
  {
    size_t item_size = sizeof(ros_message->sm_rem_ctrl_veh_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_rem_str_sts
  {
    size_t item_size = sizeof(ros_message->sm_rem_str_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_rcv_mod_incln
  {
    size_t item_size = sizeof(ros_message->sm_rcv_mod_incln);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_mob_dev_rcv_req_resp
  {
    size_t item_size = sizeof(ros_message->sm_mob_dev_rcv_req_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_mob_dev_rcv_sts
  {
    size_t item_size = sizeof(ros_message->sm_mob_dev_rcv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_rcv_version
  {
    size_t item_size = sizeof(ros_message->sm_rcv_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lgt_control_request
  {
    size_t item_size = sizeof(ros_message->lgt_control_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_control_request
  {
    size_t item_size = sizeof(ros_message->lat_control_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mai_sts
  {
    size_t item_size = sizeof(ros_message->mai_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_emgy_brk_sys_sts
  {
    size_t item_size = sizeof(ros_message->prkg_emgy_brk_sys_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_btn_sts_disp_float
  {
    size_t item_size = sizeof(ros_message->prkg_btn_sts_disp_float);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_active_push
  {
    size_t item_size = sizeof(ros_message->prkg_active_push);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_fct_di_mod
  {
    size_t item_size = sizeof(ros_message->prkg_fct_di_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name no_touching_for_avm_req
  {
    size_t item_size = sizeof(ros_message->no_touching_for_avm_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_prkg_in_btn_sts_from_rpa
  {
    size_t item_size = sizeof(ros_message->aut_prkg_in_btn_sts_from_rpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t item_size = sizeof(ros_message->asy_a_lgt_sts_asy_a_lgt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_stand_still_req_for_cmft
  {
    size_t item_size = sizeof(ros_message->asy_stand_still_req_for_cmft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drv_off_req_for_lgt_ctrl
  {
    size_t item_size = sizeof(ros_message->drv_off_req_for_lgt_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message->stop_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t item_size = sizeof(ros_message->strt_req_of_lgt_ctrl_for_prpsn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avl_sts_for_long_aut_drv
  {
    size_t item_size = sizeof(ros_message->avl_sts_for_long_aut_drv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hwa_lat_ctrl_sts
  {
    size_t item_size = sizeof(ros_message->hwa_lat_ctrl_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_ctrl_mode
  {
    size_t item_size = sizeof(ros_message->ad_ctrl_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lane_chg_assist_sts
  {
    size_t item_size = sizeof(ros_message->asy_lane_chg_assist_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_noa_sts
  {
    size_t item_size = sizeof(ros_message->asy_noa_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aut_lane_chg_sts
  {
    size_t item_size = sizeof(ros_message->aut_lane_chg_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_req_lane_chg
  {
    size_t item_size = sizeof(ros_message->asy_req_lane_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_state
  {
    size_t item_size = sizeof(ros_message->sm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name function_status
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->function_status;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hwa_odd_off
  {
    size_t item_size = sizeof(ros_message->hwa_odd_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name smfault_level
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->smfault_level;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prkg_camera_store_resp
  {
    size_t item_size = sizeof(ros_message->prkg_camera_store_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rev
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->rev;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dpa_mode_broadcast
  {
    size_t item_size = sizeof(ros_message->dpa_mode_broadcast);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dpa_btn_sts
  {
    size_t item_size = sizeof(ros_message->dpa_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_fct_err_code2_hmi
  {
    size_t item_size = sizeof(ros_message->sm_fct_err_code2_hmi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name view_layout_req
  {
    size_t item_size = sizeof(ros_message->view_layout_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cust_btn_sts
  {
    size_t item_size = sizeof(ros_message->cust_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exit_cust_btn_sts
  {
    size_t item_size = sizeof(ros_message->exit_cust_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frnt_and_re_prkg_in_btn_sts
  {
    size_t item_size = sizeof(ros_message->frnt_and_re_prkg_in_btn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mai_version
  {
    size_t item_size = sizeof(ros_message->mai_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name peb_version
  {
    size_t item_size = sizeof(ros_message->peb_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lo_spd_and_trk_bck_sub_sts
  {
    size_t item_size = sizeof(ros_message->lo_spd_and_trk_bck_sub_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fill_light_req
  {
    size_t item_size = sizeof(ros_message->fill_light_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StateMachineData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__StateMachineData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__StateMachineData(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: three_d_angle_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tsm_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: apa_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: avm_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hmi_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drvr_assc_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: apa_sub_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: last_prk_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: monr_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstcl_trig_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pla_mod_sts_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: swt_disp_on_and_off_sts_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: thr_d_touring_view_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_entry_ag_wide_vis_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_mdl_clr_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: visn_ag_extn_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: visn_img_disp_mod_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_assc_sys_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_aux_info_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_back_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_btn_sts_disp_group_cancel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_btn_sts_disp_group_prkg_in
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_btn_sts_disp_group_prkg_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_fct_di_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_fct_di_mod_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_progs_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_stop_aud_warn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: back_push_apa_info_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: voice_prompt_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_img_disp_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: park_in_or_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: shakehand_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: park_enter_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: park_exit_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: park_function
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_fct_vmm_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eng_runng_req_by_park_assi1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: apa_sts_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_actv_prkg_fct_swt_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_voice_swt_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_voice_typ_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: img_sn_sr_cal_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_dock_dis_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pdc_ctrl_rsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: system_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prkg_lock_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mirr_open_cls_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_mod_incln
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_assi_sys_rem_prkg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_win_sun_roof_cls_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_prkg_lock_theft_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rpa_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prkg_usg_drv_mod_tran_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_sts_uint8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_proc_dst_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rem_straight_prkg_assi_seln_req_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rem_str_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tsm_req_rpa_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: last_parkg_type_con_rq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: forward_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: backward_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: apa_self_park_or_out_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plan_first_sucs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disp_interface_chg_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_fcts_swt_sts_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avm_drvr_assc_sys_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avm_prkg_fct_di_disp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_btn_sts_dispset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_assc_sys_disp_list
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_fct_test_pnd_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sm_hpa_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sm_hpa_state_ind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_hpa_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_hpa_req_apa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_hpa_proc_prompt_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_hpa_quit_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: valt_prkg_failr_notif
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: home_prkg_voice_prompt_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: valt_prkg_reminder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_home_prkg_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_amb_li_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_prkg_to_horn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_accr_ovrdn_ctrl_reqgrp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hpa_st_code_to_sm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lo_spd_and_trk_bck_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_rem_ctrl_veh_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_rem_str_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_rcv_mod_incln
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_mob_dev_rcv_req_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_mob_dev_rcv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_rcv_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lgt_control_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lat_control_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mai_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_emgy_brk_sys_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_btn_sts_disp_float
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_active_push
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_fct_di_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: no_touching_for_avm_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_prkg_in_btn_sts_from_rpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_stand_still_req_for_cmft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drv_off_req_for_lgt_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: strt_req_of_lgt_ctrl_for_prpsn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avl_sts_for_long_aut_drv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hwa_lat_ctrl_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_ctrl_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lane_chg_assist_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_noa_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aut_lane_chg_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_req_lane_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: function_status
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hwa_odd_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: smfault_level
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prkg_camera_store_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rev
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dpa_mode_broadcast
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dpa_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_fct_err_code2_hmi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: view_layout_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cust_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: exit_cust_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frnt_and_re_prkg_in_btn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mai_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: peb_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lo_spd_and_trk_bck_sub_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fill_light_req
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
    using DataType = deva_function_msgs__msg__StateMachineData;
    is_plain =
      (
      offsetof(DataType, fill_light_req) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StateMachineData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__StateMachineData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StateMachineData = {
  "deva_function_msgs::msg",
  "StateMachineData",
  _StateMachineData__cdr_serialize,
  _StateMachineData__cdr_deserialize,
  _StateMachineData__get_serialized_size,
  _StateMachineData__max_serialized_size
};

static rosidl_message_type_support_t _StateMachineData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StateMachineData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, StateMachineData)() {
  return &_StateMachineData__type_support;
}

#if defined(__cplusplus)
}
#endif
