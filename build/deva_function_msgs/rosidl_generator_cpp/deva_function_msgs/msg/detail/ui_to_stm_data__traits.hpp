// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/UIToSTMData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/ui_to_stm_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'app_map_info_to_stm'
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__traits.hpp"
// Member 'app_to_stm_data'
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UIToSTMData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drvr_assc_sys_btn_push
  {
    out << "drvr_assc_sys_btn_push: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_btn_push, out);
    out << ", ";
  }

  // member: swt_disp_on_and_off_req
  {
    out << "swt_disp_on_and_off_req: ";
    rosidl_generator_traits::value_to_yaml(msg.swt_disp_on_and_off_req, out);
    out << ", ";
  }

  // member: nav_frnt_actv_sts
  {
    out << "nav_frnt_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_frnt_actv_sts, out);
    out << ", ";
  }

  // member: ihu_fail
  {
    out << "ihu_fail: ";
    rosidl_generator_traits::value_to_yaml(msg.ihu_fail, out);
    out << ", ";
  }

  // member: scene_mod_seld
  {
    out << "scene_mod_seld: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_mod_seld, out);
    out << ", ";
  }

  // member: other_ar_psd_req
  {
    out << "other_ar_psd_req: ";
    rosidl_generator_traits::value_to_yaml(msg.other_ar_psd_req, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_rspa_ctrl
  {
    out << "mob_dev_rpa_req_rspa_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rspa_ctrl, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_rpa_req
  {
    out << "mob_dev_rpa_req_rpa_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_req, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    out << "mob_dev_rpa_req_rpa_out_mode_sub_t: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_out_mode_sub_t, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_mob_dev_sts
  {
    out << "mob_dev_rpa_req_mob_dev_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_mob_dev_sts, out);
    out << ", ";
  }

  // member: rem_straight_prkg_assi_seln_req
  {
    out << "rem_straight_prkg_assi_seln_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rem_straight_prkg_assi_seln_req, out);
    out << ", ";
  }

  // member: prkg_touch_coorn_req_touch_eve_typ
  {
    out << "prkg_touch_coorn_req_touch_eve_typ: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_touch_coorn_req_touch_eve_typ, out);
    out << ", ";
  }

  // member: veh_spd_indcd_veh_spd_indcd
  {
    out << "veh_spd_indcd_veh_spd_indcd: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_indcd_veh_spd_indcd, out);
    out << ", ";
  }

  // member: sm_aut_prkg_slot_nr_req
  {
    out << "sm_aut_prkg_slot_nr_req: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_aut_prkg_slot_nr_req, out);
    out << ", ";
  }

  // member: sm_prkg_in_or_out_and_cncl
  {
    out << "sm_prkg_in_or_out_and_cncl: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_prkg_in_or_out_and_cncl, out);
    out << ", ";
  }

  // member: sm_prkg_intrpt_reld_btn
  {
    out << "sm_prkg_intrpt_reld_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_prkg_intrpt_reld_btn, out);
    out << ", ";
  }

  // member: sm_prkg_fct_swt
  {
    out << "sm_prkg_fct_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_prkg_fct_swt, out);
    out << ", ";
  }

  // member: sm_aut_actv_prkg_fct_swt
  {
    out << "sm_aut_actv_prkg_fct_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_aut_actv_prkg_fct_swt, out);
    out << ", ";
  }

  // member: full_screen_btn_push
  {
    out << "full_screen_btn_push: ";
    rosidl_generator_traits::value_to_yaml(msg.full_screen_btn_push, out);
    out << ", ";
  }

  // member: sm_sel_push_apa_info
  {
    out << "sm_sel_push_apa_info: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_sel_push_apa_info, out);
    out << ", ";
  }

  // member: sm_hpa_soft_butn_enter_rq
  {
    out << "sm_hpa_soft_butn_enter_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_soft_butn_enter_rq, out);
    out << ", ";
  }

  // member: sm_map_build_rq
  {
    out << "sm_map_build_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_map_build_rq, out);
    out << ", ";
  }

  // member: sm_map_save_rq
  {
    out << "sm_map_save_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_map_save_rq, out);
    out << ", ";
  }

  // member: sm_map_select_id
  {
    out << "sm_map_select_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_map_select_id, out);
    out << ", ";
  }

  // member: sm_drvr_assc_sys_park_mod
  {
    out << "sm_drvr_assc_sys_park_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_drvr_assc_sys_park_mod, out);
    out << ", ";
  }

  // member: map_build_sts
  {
    out << "map_build_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.map_build_sts, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_src_req
  {
    out << "aut_valt_prkg_map_src_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_src_req, out);
    out << ", ";
  }

  // member: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    out << "aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req, out);
    out << ", ";
  }

  // member: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    out << "aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req, out);
    out << ", ";
  }

  // member: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    out << "aut_valt_prkg_l2_btn_req_setting_voice_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_btn_req_setting_voice_btn_req, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_oper_req_map_type
  {
    out << "aut_valt_prkg_map_oper_req_map_type: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req_map_type, out);
    out << ", ";
  }

  // member: aut_valt_prkg_l1_btn_req
  {
    out << "aut_valt_prkg_l1_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l1_btn_req, out);
    out << ", ";
  }

  // member: aut_valt_prkg_experience_resp
  {
    out << "aut_valt_prkg_experience_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_experience_resp, out);
    out << ", ";
  }

  // member: lo_spd_drvg_assi_sho_push_resp
  {
    out << "lo_spd_drvg_assi_sho_push_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_drvg_assi_sho_push_resp, out);
    out << ", ";
  }

  // member: aut_valt_prkg_sho_dst_push_swt
  {
    out << "aut_valt_prkg_sho_dst_push_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_sho_dst_push_swt, out);
    out << ", ";
  }

  // member: aut_valt_prkg_picture_upload_swt
  {
    out << "aut_valt_prkg_picture_upload_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_picture_upload_swt, out);
    out << ", ";
  }

  // member: aut_valt_prkg_ins_btn_req
  {
    out << "aut_valt_prkg_ins_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_ins_btn_req, out);
    out << ", ";
  }

  // member: aut_valt_prkg_swt
  {
    out << "aut_valt_prkg_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_swt, out);
    out << ", ";
  }

  // member: prof_pen_sts1
  {
    out << "prof_pen_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_pen_sts1, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_oper_req2_map_type2
  {
    out << "aut_valt_prkg_map_oper_req2_map_type2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_type2, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list1
  {
    out << "aut_valt_prkg_map_oper_req2_map_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list1, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list2
  {
    out << "aut_valt_prkg_map_oper_req2_map_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list2, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list3
  {
    out << "aut_valt_prkg_map_oper_req2_map_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list3, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list4
  {
    out << "aut_valt_prkg_map_oper_req2_map_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list4, out);
    out << ", ";
  }

  // member: aut_valt_prkg_l2_pop_btn_req
  {
    out << "aut_valt_prkg_l2_pop_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_pop_btn_req, out);
    out << ", ";
  }

  // member: voice_active_adcu
  {
    out << "voice_active_adcu: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_active_adcu, out);
    out << ", ";
  }

  // member: btn_tr_sts1
  {
    out << "btn_tr_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_tr_sts1, out);
    out << ", ";
  }

  // member: btn_unlck_sts1
  {
    out << "btn_unlck_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_unlck_sts1, out);
    out << ", ";
  }

  // member: btn_lock_sts1
  {
    out << "btn_lock_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_lock_sts1, out);
    out << ", ";
  }

  // member: btn_tr_sts1_key_id
  {
    out << "btn_tr_sts1_key_id: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_tr_sts1_key_id, out);
    out << ", ";
  }

  // member: btn_unlck_sts1_key_id
  {
    out << "btn_unlck_sts1_key_id: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_unlck_sts1_key_id, out);
    out << ", ";
  }

  // member: btn_lock_sts1_key_id
  {
    out << "btn_lock_sts1_key_id: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_lock_sts1_key_id, out);
    out << ", ";
  }

  // member: voice_ctrl_brk
  {
    out << "voice_ctrl_brk: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_ctrl_brk, out);
    out << ", ";
  }

  // member: lo_spd_drvg_assi_swt
  {
    out << "lo_spd_drvg_assi_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_drvg_assi_swt, out);
    out << ", ";
  }

  // member: prkg_frnt_or_re_select
  {
    out << "prkg_frnt_or_re_select: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_frnt_or_re_select, out);
    out << ", ";
  }

  // member: tracking_back_assi_swt
  {
    out << "tracking_back_assi_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_back_assi_swt, out);
    out << ", ";
  }

  // member: prkg_emg_brk_sys_swt
  {
    out << "prkg_emg_brk_sys_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_emg_brk_sys_swt, out);
    out << ", ";
  }

  // member: aut_prkg_voice_swt
  {
    out << "aut_prkg_voice_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_swt, out);
    out << ", ";
  }

  // member: lsda_notif_push_req
  {
    out << "lsda_notif_push_req: ";
    rosidl_generator_traits::value_to_yaml(msg.lsda_notif_push_req, out);
    out << ", ";
  }

  // member: monr_sys_sts
  {
    out << "monr_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.monr_sys_sts, out);
    out << ", ";
  }

  // member: drvr_assc_wisdom_btn
  {
    out << "drvr_assc_wisdom_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_wisdom_btn, out);
    out << ", ";
  }

  // member: scenario_mod
  {
    out << "scenario_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_mod, out);
    out << ", ";
  }

  // member: aut_prkg_voice_typ
  {
    out << "aut_prkg_voice_typ: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_typ, out);
    out << ", ";
  }

  // member: mai_setting
  {
    out << "mai_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.mai_setting, out);
    out << ", ";
  }

  // member: aut_prkg_hand_slot_nr_req
  {
    out << "aut_prkg_hand_slot_nr_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_hand_slot_nr_req, out);
    out << ", ";
  }

  // member: asy_aut_drv_ctrl_typ_dim_req
  {
    out << "asy_aut_drv_ctrl_typ_dim_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drv_ctrl_typ_dim_req, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_pilot
  {
    out << "hmi_drvr_sod_req_pilot: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_pilot, out);
    out << ", ";
  }

  // member: drvr_crs_ctrl_fct_actv_req
  {
    out << "drvr_crs_ctrl_fct_actv_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_crs_ctrl_fct_actv_req, out);
    out << ", ";
  }

  // member: drvr_acc_fct_deactvn_req
  {
    out << "drvr_acc_fct_deactvn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_acc_fct_deactvn_req, out);
    out << ", ";
  }

  // member: drvr_acc_rs_set_spd_req
  {
    out << "drvr_acc_rs_set_spd_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_acc_rs_set_spd_req, out);
    out << ", ";
  }

  // member: set_spd_for_crs_ctrl_fct_active
  {
    out << "set_spd_for_crs_ctrl_fct_active: ";
    rosidl_generator_traits::value_to_yaml(msg.set_spd_for_crs_ctrl_fct_active, out);
    out << ", ";
  }

  // member: acc_fusn_trfc_req
  {
    out << "acc_fusn_trfc_req: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fusn_trfc_req, out);
    out << ", ";
  }

  // member: crs_ctrl_ti_gap_adj_req
  {
    out << "crs_ctrl_ti_gap_adj_req: ";
    rosidl_generator_traits::value_to_yaml(msg.crs_ctrl_ti_gap_adj_req, out);
    out << ", ";
  }

  // member: ve_spd_indcd_unit
  {
    out << "ve_spd_indcd_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_spd_indcd_unit, out);
    out << ", ";
  }

  // member: veh_spd_indcd
  {
    out << "veh_spd_indcd: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_indcd, out);
    out << ", ";
  }

  // member: drv_mod_req
  {
    out << "drv_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_mod_req, out);
    out << ", ";
  }

  // member: cam_flts_sts_from_dhu
  {
    out << "cam_flts_sts_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_flts_sts_from_dhu, out);
    out << ", ";
  }

  // member: drvr_dec_sts_from_dhu
  {
    out << "drvr_dec_sts_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_dec_sts_from_dhu, out);
    out << ", ";
  }

  // member: eye_gaze_zone
  {
    out << "eye_gaze_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_gaze_zone, out);
    out << ", ";
  }

  // member: eye_gaze_zone_time
  {
    out << "eye_gaze_zone_time: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_gaze_zone_time, out);
    out << ", ";
  }

  // member: eye_on_road_from_dhu
  {
    out << "eye_on_road_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_on_road_from_dhu, out);
    out << ", ";
  }

  // member: eye_open_from_dhu_eye_open_deg_le
  {
    out << "eye_open_from_dhu_eye_open_deg_le: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_deg_le, out);
    out << ", ";
  }

  // member: eye_open_from_dhu_eye_open_deg_ri
  {
    out << "eye_open_from_dhu_eye_open_deg_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_deg_ri, out);
    out << ", ";
  }

  // member: eye_open_from_dhu_eye_open_le
  {
    out << "eye_open_from_dhu_eye_open_le: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_le, out);
    out << ", ";
  }

  // member: eye_open_from_dhu_eye_open_ri
  {
    out << "eye_open_from_dhu_eye_open_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_ri, out);
    out << ", ";
  }

  // member: eye_open_from_dhu_eye_visible_le
  {
    out << "eye_open_from_dhu_eye_visible_le: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_visible_le, out);
    out << ", ";
  }

  // member: eye_open_from_dhu_eye_visible_ri
  {
    out << "eye_open_from_dhu_eye_visible_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_visible_ri, out);
    out << ", ";
  }

  // member: eye_open_from_dhu_face_visible
  {
    out << "eye_open_from_dhu_face_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_face_visible, out);
    out << ", ";
  }

  // member: snsr_drvr_pfmnc_sts_from_dhu
  {
    out << "snsr_drvr_pfmnc_sts_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.snsr_drvr_pfmnc_sts_from_dhu, out);
    out << ", ";
  }

  // member: voice_brst_mod
  {
    out << "voice_brst_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_brst_mod, out);
    out << ", ";
  }

  // member: auto_lane_chg_style_sw_sts
  {
    out << "auto_lane_chg_style_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_lane_chg_style_sw_sts, out);
    out << ", ";
  }

  // member: nop_cofm_of_lan_chag_onoff
  {
    out << "nop_cofm_of_lan_chag_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.nop_cofm_of_lan_chag_onoff, out);
    out << ", ";
  }

  // member: hmi_sod_lan_chg_switch
  {
    out << "hmi_sod_lan_chg_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_sod_lan_chg_switch, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_chg
  {
    out << "hmi_drvr_sod_req_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_chg, out);
    out << ", ";
  }

  // member: asy_noa_upgrade_switch
  {
    out << "asy_noa_upgrade_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_upgrade_switch, out);
    out << ", ";
  }

  // member: sfty_hmi_ena
  {
    out << "sfty_hmi_ena: ";
    rosidl_generator_traits::value_to_yaml(msg.sfty_hmi_ena, out);
    out << ", ";
  }

  // member: nop_remind_typ_of_chg_lane_req
  {
    out << "nop_remind_typ_of_chg_lane_req: ";
    rosidl_generator_traits::value_to_yaml(msg.nop_remind_typ_of_chg_lane_req, out);
    out << ", ";
  }

  // member: drvr_lane_chg_aut_actv_sts
  {
    out << "drvr_lane_chg_aut_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_lane_chg_aut_actv_sts, out);
    out << ", ";
  }

  // member: auto_lane_chg_with_navi_sw_onoff
  {
    out << "auto_lane_chg_with_navi_sw_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_lane_chg_with_navi_sw_onoff, out);
    out << ", ";
  }

  // member: nav_noa_status_change_req
  {
    out << "nav_noa_status_change_req: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_noa_status_change_req, out);
    out << ", ";
  }

  // member: prkg_camera_store_req
  {
    out << "prkg_camera_store_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_camera_store_req, out);
    out << ", ";
  }

  // member: voice_ctrl_prk
  {
    out << "voice_ctrl_prk: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_ctrl_prk, out);
    out << ", ";
  }

  // member: drift_prkg_req
  {
    out << "drift_prkg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drift_prkg_req, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_cnoa_main_page
  {
    out << "hmi_drvr_sod_req_cnoa_main_page: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_cnoa_main_page, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_cnoa_lrng
  {
    out << "hmi_drvr_sod_req_cnoa_lrng: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_cnoa_lrng, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_finish_lrng
  {
    out << "hmi_drvr_sod_req_finish_lrng: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_finish_lrng, out);
    out << ", ";
  }

  // member: hmi_cnoa_crs_swt_on_off
  {
    out << "hmi_cnoa_crs_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_crs_swt_on_off, out);
    out << ", ";
  }

  // member: hmi_cnoa_sod_lan_chg_swt
  {
    out << "hmi_cnoa_sod_lan_chg_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_sod_lan_chg_swt, out);
    out << ", ";
  }

  // member: hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    out << "hmi_cnoa_auto_lane_chg_style_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_auto_lane_chg_style_sw_sts, out);
    out << ", ";
  }

  // member: hmi_cnoa_lrng_swt_on_off
  {
    out << "hmi_cnoa_lrng_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_lrng_swt_on_off, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_contns_lrng
  {
    out << "hmi_drvr_sod_req_contns_lrng: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_contns_lrng, out);
    out << ", ";
  }

  // member: apa_custom_prkg_req
  {
    out << "apa_custom_prkg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_custom_prkg_req, out);
    out << ", ";
  }

  // member: exit_custom_prkg_req
  {
    out << "exit_custom_prkg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_custom_prkg_req, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_angle_disp
  {
    out << "cust_prk_slot_posn_angle_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_angle_disp, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_end_x1
  {
    out << "cust_prk_slot_posn_end_x1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_x1, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_end_x2
  {
    out << "cust_prk_slot_posn_end_x2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_x2, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_end_y1
  {
    out << "cust_prk_slot_posn_end_y1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_y1, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_end_y2
  {
    out << "cust_prk_slot_posn_end_y2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_y2, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_start_x1
  {
    out << "cust_prk_slot_posn_start_x1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_x1, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_start_x2
  {
    out << "cust_prk_slot_posn_start_x2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_x2, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_start_y1
  {
    out << "cust_prk_slot_posn_start_y1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_y1, out);
    out << ", ";
  }

  // member: cust_prk_slot_posn_start_y2
  {
    out << "cust_prk_slot_posn_start_y2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_y2, out);
    out << ", ";
  }

  // member: screem_oper
  {
    out << "screem_oper: ";
    rosidl_generator_traits::value_to_yaml(msg.screem_oper, out);
    out << ", ";
  }

  // member: hpa_max_swt
  {
    out << "hpa_max_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.hpa_max_swt, out);
    out << ", ";
  }

  // member: rpa_select_par_in
  {
    out << "rpa_select_par_in: ";
    rosidl_generator_traits::value_to_yaml(msg.rpa_select_par_in, out);
    out << ", ";
  }

  // member: frnt_and_re_prkg_in_swt
  {
    out << "frnt_and_re_prkg_in_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_and_re_prkg_in_swt, out);
    out << ", ";
  }

  // member: app_map_info_to_stm
  {
    out << "app_map_info_to_stm: ";
    to_flow_style_yaml(msg.app_map_info_to_stm, out);
    out << ", ";
  }

  // member: app_to_stm_data
  {
    out << "app_to_stm_data: ";
    to_flow_style_yaml(msg.app_to_stm_data, out);
    out << ", ";
  }

  // member: aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    out << "aut_prkg_hand_slot_nr_req_topo_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_hand_slot_nr_req_topo_slot_id, out);
    out << ", ";
  }

  // member: aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    out << "aut_prkg_hand_slot_nr_req_topo_slot_status: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_hand_slot_nr_req_topo_slot_status, out);
    out << ", ";
  }

  // member: aut_prkg_select_entrance
  {
    out << "aut_prkg_select_entrance: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_select_entrance, out);
    out << ", ";
  }

  // member: aut_valt_prkg_cls_pop
  {
    out << "aut_valt_prkg_cls_pop: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_cls_pop, out);
    out << ", ";
  }

  // member: aut_valt_prkg_cover_results
  {
    out << "aut_valt_prkg_cover_results: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_cover_results, out);
    out << ", ";
  }

  // member: aut_valt_prkg_select_d2d
  {
    out << "aut_valt_prkg_select_d2d: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_select_d2d, out);
    out << ", ";
  }

  // member: aut_valt_prkg_topo_flr
  {
    out << "aut_valt_prkg_topo_flr: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_topo_flr, out);
    out << ", ";
  }

  // member: d2d_p_icon_clicked
  {
    out << "d2d_p_icon_clicked: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_p_icon_clicked, out);
    out << ", ";
  }

  // member: d2d_route_push_button_resp
  {
    out << "d2d_route_push_button_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_route_push_button_resp, out);
    out << ", ";
  }

  // member: hmi_etc_traffic_sw_sts
  {
    out << "hmi_etc_traffic_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_etc_traffic_sw_sts, out);
    out << ", ";
  }

  // member: prkg_lrng_sts_hpa_lrng_sts
  {
    out << "prkg_lrng_sts_hpa_lrng_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_lrng_sts_hpa_lrng_sts, out);
    out << ", ";
  }

  // member: prkg_slot_typ_select
  {
    out << "prkg_slot_typ_select: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_slot_typ_select, out);
    out << ", ";
  }

  // member: asy_aut_drvg_li_swt
  {
    out << "asy_aut_drvg_li_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drvg_li_swt, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_resp_map_id_list1
  {
    out << "aut_valt_prkg_map_resp_map_id_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list1, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_resp_map_id_list2
  {
    out << "aut_valt_prkg_map_resp_map_id_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list2, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_resp_map_id_list3
  {
    out << "aut_valt_prkg_map_resp_map_id_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list3, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_resp_map_id_list4
  {
    out << "aut_valt_prkg_map_resp_map_id_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list4, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_resp_map_id_result
  {
    out << "aut_valt_prkg_map_resp_map_id_result: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_result, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list1
  {
    out << "aut_valt_prkg_map_syncn_map_id_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list1, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list2
  {
    out << "aut_valt_prkg_map_syncn_map_id_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list2, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list3
  {
    out << "aut_valt_prkg_map_syncn_map_id_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list3, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list4
  {
    out << "aut_valt_prkg_map_syncn_map_id_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list4, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_syncn_map_syncn
  {
    out << "aut_valt_prkg_map_syncn_map_syncn: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_syncn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UIToSTMData & msg,
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

  // member: drvr_assc_sys_btn_push
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_assc_sys_btn_push: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_sys_btn_push, out);
    out << "\n";
  }

  // member: swt_disp_on_and_off_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swt_disp_on_and_off_req: ";
    rosidl_generator_traits::value_to_yaml(msg.swt_disp_on_and_off_req, out);
    out << "\n";
  }

  // member: nav_frnt_actv_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_frnt_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_frnt_actv_sts, out);
    out << "\n";
  }

  // member: ihu_fail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ihu_fail: ";
    rosidl_generator_traits::value_to_yaml(msg.ihu_fail, out);
    out << "\n";
  }

  // member: scene_mod_seld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_mod_seld: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_mod_seld, out);
    out << "\n";
  }

  // member: other_ar_psd_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "other_ar_psd_req: ";
    rosidl_generator_traits::value_to_yaml(msg.other_ar_psd_req, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_rspa_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_rspa_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rspa_ctrl, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_rpa_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_rpa_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_req, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_rpa_out_mode_sub_t: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_out_mode_sub_t, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_mob_dev_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_mob_dev_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_mob_dev_sts, out);
    out << "\n";
  }

  // member: rem_straight_prkg_assi_seln_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rem_straight_prkg_assi_seln_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rem_straight_prkg_assi_seln_req, out);
    out << "\n";
  }

  // member: prkg_touch_coorn_req_touch_eve_typ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_touch_coorn_req_touch_eve_typ: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_touch_coorn_req_touch_eve_typ, out);
    out << "\n";
  }

  // member: veh_spd_indcd_veh_spd_indcd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_spd_indcd_veh_spd_indcd: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_indcd_veh_spd_indcd, out);
    out << "\n";
  }

  // member: sm_aut_prkg_slot_nr_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_aut_prkg_slot_nr_req: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_aut_prkg_slot_nr_req, out);
    out << "\n";
  }

  // member: sm_prkg_in_or_out_and_cncl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_prkg_in_or_out_and_cncl: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_prkg_in_or_out_and_cncl, out);
    out << "\n";
  }

  // member: sm_prkg_intrpt_reld_btn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_prkg_intrpt_reld_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_prkg_intrpt_reld_btn, out);
    out << "\n";
  }

  // member: sm_prkg_fct_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_prkg_fct_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_prkg_fct_swt, out);
    out << "\n";
  }

  // member: sm_aut_actv_prkg_fct_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_aut_actv_prkg_fct_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_aut_actv_prkg_fct_swt, out);
    out << "\n";
  }

  // member: full_screen_btn_push
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_screen_btn_push: ";
    rosidl_generator_traits::value_to_yaml(msg.full_screen_btn_push, out);
    out << "\n";
  }

  // member: sm_sel_push_apa_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_sel_push_apa_info: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_sel_push_apa_info, out);
    out << "\n";
  }

  // member: sm_hpa_soft_butn_enter_rq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_hpa_soft_butn_enter_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_hpa_soft_butn_enter_rq, out);
    out << "\n";
  }

  // member: sm_map_build_rq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_map_build_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_map_build_rq, out);
    out << "\n";
  }

  // member: sm_map_save_rq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_map_save_rq: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_map_save_rq, out);
    out << "\n";
  }

  // member: sm_map_select_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_map_select_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_map_select_id, out);
    out << "\n";
  }

  // member: sm_drvr_assc_sys_park_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_drvr_assc_sys_park_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_drvr_assc_sys_park_mod, out);
    out << "\n";
  }

  // member: map_build_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_build_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.map_build_sts, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_src_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_src_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_src_req, out);
    out << "\n";
  }

  // member: aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req, out);
    out << "\n";
  }

  // member: aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req, out);
    out << "\n";
  }

  // member: aut_valt_prkg_l2_btn_req_setting_voice_btn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_l2_btn_req_setting_voice_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_btn_req_setting_voice_btn_req, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_oper_req_map_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_oper_req_map_type: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req_map_type, out);
    out << "\n";
  }

  // member: aut_valt_prkg_l1_btn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_l1_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l1_btn_req, out);
    out << "\n";
  }

  // member: aut_valt_prkg_experience_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_experience_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_experience_resp, out);
    out << "\n";
  }

  // member: lo_spd_drvg_assi_sho_push_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lo_spd_drvg_assi_sho_push_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_drvg_assi_sho_push_resp, out);
    out << "\n";
  }

  // member: aut_valt_prkg_sho_dst_push_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_sho_dst_push_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_sho_dst_push_swt, out);
    out << "\n";
  }

  // member: aut_valt_prkg_picture_upload_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_picture_upload_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_picture_upload_swt, out);
    out << "\n";
  }

  // member: aut_valt_prkg_ins_btn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_ins_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_ins_btn_req, out);
    out << "\n";
  }

  // member: aut_valt_prkg_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_swt, out);
    out << "\n";
  }

  // member: prof_pen_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_pen_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_pen_sts1, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_oper_req2_map_type2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_oper_req2_map_type2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_type2, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_oper_req2_map_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list1, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_oper_req2_map_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list2, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_oper_req2_map_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list3, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_oper_req2_map_list4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_oper_req2_map_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_oper_req2_map_list4, out);
    out << "\n";
  }

  // member: aut_valt_prkg_l2_pop_btn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_l2_pop_btn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_l2_pop_btn_req, out);
    out << "\n";
  }

  // member: voice_active_adcu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_active_adcu: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_active_adcu, out);
    out << "\n";
  }

  // member: btn_tr_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_tr_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_tr_sts1, out);
    out << "\n";
  }

  // member: btn_unlck_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_unlck_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_unlck_sts1, out);
    out << "\n";
  }

  // member: btn_lock_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_lock_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_lock_sts1, out);
    out << "\n";
  }

  // member: btn_tr_sts1_key_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_tr_sts1_key_id: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_tr_sts1_key_id, out);
    out << "\n";
  }

  // member: btn_unlck_sts1_key_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_unlck_sts1_key_id: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_unlck_sts1_key_id, out);
    out << "\n";
  }

  // member: btn_lock_sts1_key_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btn_lock_sts1_key_id: ";
    rosidl_generator_traits::value_to_yaml(msg.btn_lock_sts1_key_id, out);
    out << "\n";
  }

  // member: voice_ctrl_brk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_ctrl_brk: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_ctrl_brk, out);
    out << "\n";
  }

  // member: lo_spd_drvg_assi_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lo_spd_drvg_assi_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.lo_spd_drvg_assi_swt, out);
    out << "\n";
  }

  // member: prkg_frnt_or_re_select
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_frnt_or_re_select: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_frnt_or_re_select, out);
    out << "\n";
  }

  // member: tracking_back_assi_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_back_assi_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_back_assi_swt, out);
    out << "\n";
  }

  // member: prkg_emg_brk_sys_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_emg_brk_sys_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_emg_brk_sys_swt, out);
    out << "\n";
  }

  // member: aut_prkg_voice_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_voice_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_swt, out);
    out << "\n";
  }

  // member: lsda_notif_push_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lsda_notif_push_req: ";
    rosidl_generator_traits::value_to_yaml(msg.lsda_notif_push_req, out);
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

  // member: drvr_assc_wisdom_btn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_assc_wisdom_btn: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_assc_wisdom_btn, out);
    out << "\n";
  }

  // member: scenario_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scenario_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario_mod, out);
    out << "\n";
  }

  // member: aut_prkg_voice_typ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_voice_typ: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_voice_typ, out);
    out << "\n";
  }

  // member: mai_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mai_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.mai_setting, out);
    out << "\n";
  }

  // member: aut_prkg_hand_slot_nr_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_hand_slot_nr_req: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_hand_slot_nr_req, out);
    out << "\n";
  }

  // member: asy_aut_drv_ctrl_typ_dim_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_aut_drv_ctrl_typ_dim_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drv_ctrl_typ_dim_req, out);
    out << "\n";
  }

  // member: hmi_drvr_sod_req_pilot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_drvr_sod_req_pilot: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_pilot, out);
    out << "\n";
  }

  // member: drvr_crs_ctrl_fct_actv_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_crs_ctrl_fct_actv_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_crs_ctrl_fct_actv_req, out);
    out << "\n";
  }

  // member: drvr_acc_fct_deactvn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_acc_fct_deactvn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_acc_fct_deactvn_req, out);
    out << "\n";
  }

  // member: drvr_acc_rs_set_spd_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_acc_rs_set_spd_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_acc_rs_set_spd_req, out);
    out << "\n";
  }

  // member: set_spd_for_crs_ctrl_fct_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_spd_for_crs_ctrl_fct_active: ";
    rosidl_generator_traits::value_to_yaml(msg.set_spd_for_crs_ctrl_fct_active, out);
    out << "\n";
  }

  // member: acc_fusn_trfc_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_fusn_trfc_req: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fusn_trfc_req, out);
    out << "\n";
  }

  // member: crs_ctrl_ti_gap_adj_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crs_ctrl_ti_gap_adj_req: ";
    rosidl_generator_traits::value_to_yaml(msg.crs_ctrl_ti_gap_adj_req, out);
    out << "\n";
  }

  // member: ve_spd_indcd_unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ve_spd_indcd_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_spd_indcd_unit, out);
    out << "\n";
  }

  // member: veh_spd_indcd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_spd_indcd: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_indcd, out);
    out << "\n";
  }

  // member: drv_mod_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drv_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_mod_req, out);
    out << "\n";
  }

  // member: cam_flts_sts_from_dhu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_flts_sts_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_flts_sts_from_dhu, out);
    out << "\n";
  }

  // member: drvr_dec_sts_from_dhu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_dec_sts_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_dec_sts_from_dhu, out);
    out << "\n";
  }

  // member: eye_gaze_zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_gaze_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_gaze_zone, out);
    out << "\n";
  }

  // member: eye_gaze_zone_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_gaze_zone_time: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_gaze_zone_time, out);
    out << "\n";
  }

  // member: eye_on_road_from_dhu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_on_road_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_on_road_from_dhu, out);
    out << "\n";
  }

  // member: eye_open_from_dhu_eye_open_deg_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_open_from_dhu_eye_open_deg_le: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_deg_le, out);
    out << "\n";
  }

  // member: eye_open_from_dhu_eye_open_deg_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_open_from_dhu_eye_open_deg_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_deg_ri, out);
    out << "\n";
  }

  // member: eye_open_from_dhu_eye_open_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_open_from_dhu_eye_open_le: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_le, out);
    out << "\n";
  }

  // member: eye_open_from_dhu_eye_open_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_open_from_dhu_eye_open_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_open_ri, out);
    out << "\n";
  }

  // member: eye_open_from_dhu_eye_visible_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_open_from_dhu_eye_visible_le: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_visible_le, out);
    out << "\n";
  }

  // member: eye_open_from_dhu_eye_visible_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_open_from_dhu_eye_visible_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_eye_visible_ri, out);
    out << "\n";
  }

  // member: eye_open_from_dhu_face_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eye_open_from_dhu_face_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.eye_open_from_dhu_face_visible, out);
    out << "\n";
  }

  // member: snsr_drvr_pfmnc_sts_from_dhu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snsr_drvr_pfmnc_sts_from_dhu: ";
    rosidl_generator_traits::value_to_yaml(msg.snsr_drvr_pfmnc_sts_from_dhu, out);
    out << "\n";
  }

  // member: voice_brst_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_brst_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_brst_mod, out);
    out << "\n";
  }

  // member: auto_lane_chg_style_sw_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_lane_chg_style_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_lane_chg_style_sw_sts, out);
    out << "\n";
  }

  // member: nop_cofm_of_lan_chag_onoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nop_cofm_of_lan_chag_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.nop_cofm_of_lan_chag_onoff, out);
    out << "\n";
  }

  // member: hmi_sod_lan_chg_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_sod_lan_chg_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_sod_lan_chg_switch, out);
    out << "\n";
  }

  // member: hmi_drvr_sod_req_chg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_drvr_sod_req_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_chg, out);
    out << "\n";
  }

  // member: asy_noa_upgrade_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_upgrade_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_upgrade_switch, out);
    out << "\n";
  }

  // member: sfty_hmi_ena
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sfty_hmi_ena: ";
    rosidl_generator_traits::value_to_yaml(msg.sfty_hmi_ena, out);
    out << "\n";
  }

  // member: nop_remind_typ_of_chg_lane_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nop_remind_typ_of_chg_lane_req: ";
    rosidl_generator_traits::value_to_yaml(msg.nop_remind_typ_of_chg_lane_req, out);
    out << "\n";
  }

  // member: drvr_lane_chg_aut_actv_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_lane_chg_aut_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_lane_chg_aut_actv_sts, out);
    out << "\n";
  }

  // member: auto_lane_chg_with_navi_sw_onoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_lane_chg_with_navi_sw_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_lane_chg_with_navi_sw_onoff, out);
    out << "\n";
  }

  // member: nav_noa_status_change_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_noa_status_change_req: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_noa_status_change_req, out);
    out << "\n";
  }

  // member: prkg_camera_store_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_camera_store_req: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_camera_store_req, out);
    out << "\n";
  }

  // member: voice_ctrl_prk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_ctrl_prk: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_ctrl_prk, out);
    out << "\n";
  }

  // member: drift_prkg_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drift_prkg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drift_prkg_req, out);
    out << "\n";
  }

  // member: hmi_drvr_sod_req_cnoa_main_page
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_drvr_sod_req_cnoa_main_page: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_cnoa_main_page, out);
    out << "\n";
  }

  // member: hmi_drvr_sod_req_cnoa_lrng
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_drvr_sod_req_cnoa_lrng: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_cnoa_lrng, out);
    out << "\n";
  }

  // member: hmi_drvr_sod_req_finish_lrng
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_drvr_sod_req_finish_lrng: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_finish_lrng, out);
    out << "\n";
  }

  // member: hmi_cnoa_crs_swt_on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_cnoa_crs_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_crs_swt_on_off, out);
    out << "\n";
  }

  // member: hmi_cnoa_sod_lan_chg_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_cnoa_sod_lan_chg_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_sod_lan_chg_swt, out);
    out << "\n";
  }

  // member: hmi_cnoa_auto_lane_chg_style_sw_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_cnoa_auto_lane_chg_style_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_auto_lane_chg_style_sw_sts, out);
    out << "\n";
  }

  // member: hmi_cnoa_lrng_swt_on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_cnoa_lrng_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_cnoa_lrng_swt_on_off, out);
    out << "\n";
  }

  // member: hmi_drvr_sod_req_contns_lrng
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_drvr_sod_req_contns_lrng: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_contns_lrng, out);
    out << "\n";
  }

  // member: apa_custom_prkg_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apa_custom_prkg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_custom_prkg_req, out);
    out << "\n";
  }

  // member: exit_custom_prkg_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_custom_prkg_req: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_custom_prkg_req, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_angle_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_angle_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_angle_disp, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_end_x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_end_x1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_x1, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_end_x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_end_x2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_x2, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_end_y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_end_y1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_y1, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_end_y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_end_y2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_end_y2, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_start_x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_start_x1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_x1, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_start_x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_start_x2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_x2, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_start_y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_start_y1: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_y1, out);
    out << "\n";
  }

  // member: cust_prk_slot_posn_start_y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cust_prk_slot_posn_start_y2: ";
    rosidl_generator_traits::value_to_yaml(msg.cust_prk_slot_posn_start_y2, out);
    out << "\n";
  }

  // member: screem_oper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "screem_oper: ";
    rosidl_generator_traits::value_to_yaml(msg.screem_oper, out);
    out << "\n";
  }

  // member: hpa_max_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpa_max_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.hpa_max_swt, out);
    out << "\n";
  }

  // member: rpa_select_par_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpa_select_par_in: ";
    rosidl_generator_traits::value_to_yaml(msg.rpa_select_par_in, out);
    out << "\n";
  }

  // member: frnt_and_re_prkg_in_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frnt_and_re_prkg_in_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_and_re_prkg_in_swt, out);
    out << "\n";
  }

  // member: app_map_info_to_stm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_map_info_to_stm:\n";
    to_block_style_yaml(msg.app_map_info_to_stm, out, indentation + 2);
  }

  // member: app_to_stm_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_to_stm_data:\n";
    to_block_style_yaml(msg.app_to_stm_data, out, indentation + 2);
  }

  // member: aut_prkg_hand_slot_nr_req_topo_slot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_hand_slot_nr_req_topo_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_hand_slot_nr_req_topo_slot_id, out);
    out << "\n";
  }

  // member: aut_prkg_hand_slot_nr_req_topo_slot_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_hand_slot_nr_req_topo_slot_status: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_hand_slot_nr_req_topo_slot_status, out);
    out << "\n";
  }

  // member: aut_prkg_select_entrance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_prkg_select_entrance: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_prkg_select_entrance, out);
    out << "\n";
  }

  // member: aut_valt_prkg_cls_pop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_cls_pop: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_cls_pop, out);
    out << "\n";
  }

  // member: aut_valt_prkg_cover_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_cover_results: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_cover_results, out);
    out << "\n";
  }

  // member: aut_valt_prkg_select_d2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_select_d2d: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_select_d2d, out);
    out << "\n";
  }

  // member: aut_valt_prkg_topo_flr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_topo_flr: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_topo_flr, out);
    out << "\n";
  }

  // member: d2d_p_icon_clicked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d2d_p_icon_clicked: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_p_icon_clicked, out);
    out << "\n";
  }

  // member: d2d_route_push_button_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d2d_route_push_button_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_route_push_button_resp, out);
    out << "\n";
  }

  // member: hmi_etc_traffic_sw_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_etc_traffic_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_etc_traffic_sw_sts, out);
    out << "\n";
  }

  // member: prkg_lrng_sts_hpa_lrng_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_lrng_sts_hpa_lrng_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_lrng_sts_hpa_lrng_sts, out);
    out << "\n";
  }

  // member: prkg_slot_typ_select
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prkg_slot_typ_select: ";
    rosidl_generator_traits::value_to_yaml(msg.prkg_slot_typ_select, out);
    out << "\n";
  }

  // member: asy_aut_drvg_li_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_aut_drvg_li_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drvg_li_swt, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_resp_map_id_list1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_resp_map_id_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list1, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_resp_map_id_list2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_resp_map_id_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list2, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_resp_map_id_list3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_resp_map_id_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list3, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_resp_map_id_list4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_resp_map_id_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_list4, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_resp_map_id_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_resp_map_id_result: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_resp_map_id_result, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_syncn_map_id_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list1, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_syncn_map_id_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list2, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_syncn_map_id_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list3, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_syncn_map_id_list4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_syncn_map_id_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_id_list4, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_syncn_map_syncn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_syncn_map_syncn: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_syncn_map_syncn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UIToSTMData & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::UIToSTMData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::UIToSTMData & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::UIToSTMData>()
{
  return "deva_function_msgs::msg::UIToSTMData";
}

template<>
inline const char * name<deva_function_msgs::msg::UIToSTMData>()
{
  return "deva_function_msgs/msg/UIToSTMData";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::UIToSTMData>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value && has_fixed_size<deva_function_msgs::msg::APPToStmDataStruct>::value && has_fixed_size<deva_function_msgs::msg::AppMapInfoToStmStruct>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::UIToSTMData>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value && has_bounded_size<deva_function_msgs::msg::APPToStmDataStruct>::value && has_bounded_size<deva_function_msgs::msg::AppMapInfoToStmStruct>::value> {};

template<>
struct is_message<deva_function_msgs::msg::UIToSTMData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__UI_TO_STM_DATA__TRAITS_HPP_
