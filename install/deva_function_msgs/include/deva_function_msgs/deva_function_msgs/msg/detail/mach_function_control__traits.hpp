// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/mach_function_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachFunctionControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: asy_aut_drvg_avl
  {
    out << "asy_aut_drvg_avl: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drvg_avl, out);
    out << ", ";
  }

  // member: asy_lat_offst_sts
  {
    out << "asy_lat_offst_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_offst_sts, out);
    out << ", ";
  }

  // member: asy_noa_degrade_msg
  {
    out << "asy_noa_degrade_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_degrade_msg, out);
    out << ", ";
  }

  // member: lane_chg_aut_info_for_asy_hi_way
  {
    out << "lane_chg_aut_info_for_asy_hi_way: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_chg_aut_info_for_asy_hi_way, out);
    out << ", ";
  }

  // member: lane_chg_aut_sts_for_asy_hi_way
  {
    out << "lane_chg_aut_sts_for_asy_hi_way: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_chg_aut_sts_for_asy_hi_way, out);
    out << ", ";
  }

  // member: ti_gap_set_for_lgt_ctrl
  {
    out << "ti_gap_set_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.ti_gap_set_for_lgt_ctrl, out);
    out << ", ";
  }

  // member: asy_lgt_ctrl_take_over_req
  {
    out << "asy_lgt_ctrl_take_over_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lgt_ctrl_take_over_req, out);
    out << ", ";
  }

  // member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    out << "steer_tq_addl_for_ema_steer_tq_addl_for_ema: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_tq_addl_for_ema_steer_tq_addl_for_ema, out);
    out << ", ";
  }

  // member: strt_req_of_lgt_ctrl_for_prpsn
  {
    out << "strt_req_of_lgt_ctrl_for_prpsn: ";
    rosidl_generator_traits::value_to_yaml(msg.strt_req_of_lgt_ctrl_for_prpsn, out);
    out << ", ";
  }

  // member: asy_noa_deactvd_reasn_mesg
  {
    out << "asy_noa_deactvd_reasn_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_deactvd_reasn_mesg, out);
    out << ", ";
  }

  // member: asy_noa_remind_mesg
  {
    out << "asy_noa_remind_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_remind_mesg, out);
    out << ", ";
  }

  // member: asy_high_beam_flash_warn_rqrd
  {
    out << "asy_high_beam_flash_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_high_beam_flash_warn_rqrd, out);
    out << ", ";
  }

  // member: asy_noa_takeover_mesg
  {
    out << "asy_noa_takeover_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_takeover_mesg, out);
    out << ", ";
  }

  // member: asy_fast_lane_swt_sts
  {
    out << "asy_fast_lane_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_fast_lane_swt_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_auto_lane_chg_style
  {
    out << "asy_cnoa_auto_lane_chg_style: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_auto_lane_chg_style, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_actv_faild_msg
  {
    out << "asy_cnoa_crs_actv_faild_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_faild_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_cross_intsec_msg
  {
    out << "asy_cnoa_crs_cross_intsec_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_cross_intsec_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    out << "asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_finshd_msg
  {
    out << "asy_cnoa_crs_finshd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_finshd_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_ind_ti_gap_msg
  {
    out << "asy_cnoa_crs_ind_ti_gap_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_ind_ti_gap_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    out << "asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_actv_msg
  {
    out << "asy_cnoa_crs_actv_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_off_odddistan
  {
    out << "asy_cnoa_crs_off_odddistan: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_off_odddistan, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_sts
  {
    out << "asy_cnoa_crs_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_game_fail_type
  {
    out << "asy_cnoa_game_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_game_fail_type, out);
    out << ", ";
  }

  // member: asy_cnoa_game_reason
  {
    out << "asy_cnoa_game_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_game_reason, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_sts_csd_msg
  {
    out << "asy_cnoa_crs_sts_csd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_sts_csd_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_swt_on_off
  {
    out << "asy_cnoa_crs_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_swt_on_off, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_swt_sts
  {
    out << "asy_cnoa_crs_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_swt_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_data_download_faild_msg
  {
    out << "asy_cnoa_data_download_faild_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_data_download_faild_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_offs_msg
  {
    out << "asy_cnoa_crs_offs_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_offs_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_rmn_msg
  {
    out << "asy_cnoa_crs_rmn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_rmn_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_sod_lane_chg_swt
  {
    out << "asy_cnoa_sod_lane_chg_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_sod_lane_chg_swt, out);
    out << ", ";
  }

  // member: asy_cnoa_lrng_prmpt_msg
  {
    out << "asy_cnoa_lrng_prmpt_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_prmpt_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_lrng_swt_on_off
  {
    out << "asy_cnoa_lrng_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_swt_on_off, out);
    out << ", ";
  }

  // member: asy_cnoa_lrng_swt_sts
  {
    out << "asy_cnoa_lrng_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_swt_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_takeover_warn_msg
  {
    out << "asy_cnoa_takeover_warn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_takeover_warn_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_turn_fail_type
  {
    out << "asy_cnoa_turn_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_turn_fail_type, out);
    out << ", ";
  }

  // member: asy_cnoa_turn_sts
  {
    out << "asy_cnoa_turn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_turn_sts, out);
    out << ", ";
  }

  // member: asy_noa_tar_spd_offs
  {
    out << "asy_noa_tar_spd_offs: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_tar_spd_offs, out);
    out << ", ";
  }

  // member: asy_noa_avl_rmn
  {
    out << "asy_noa_avl_rmn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_avl_rmn, out);
    out << ", ";
  }

  // member: asy_aut_lane_chg_swt_sts
  {
    out << "asy_aut_lane_chg_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_lane_chg_swt_sts, out);
    out << ", ";
  }

  // member: stop_req_of_lgt_ctrl_for_prpsn
  {
    out << "stop_req_of_lgt_ctrl_for_prpsn: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_req_of_lgt_ctrl_for_prpsn, out);
    out << ", ";
  }

  // member: ad_theme_disp
  {
    out << "ad_theme_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_theme_disp, out);
    out << ", ";
  }

  // member: cncl_warn_for_aut_drv
  {
    out << "cncl_warn_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_for_aut_drv, out);
    out << ", ";
  }

  // member: disp_tsi_info_for_lgt_ctrl
  {
    out << "disp_tsi_info_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.disp_tsi_info_for_lgt_ctrl, out);
    out << ", ";
  }

  // member: disp_spd_set_for_lgt_ctrl
  {
    out << "disp_spd_set_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.disp_spd_set_for_lgt_ctrl, out);
    out << ", ";
  }

  // member: hmi_nop_cofm_of_lan_chag
  {
    out << "hmi_nop_cofm_of_lan_chag: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_nop_cofm_of_lan_chag, out);
    out << ", ";
  }

  // member: ad4_lane_chg_for_e2e
  {
    out << "ad4_lane_chg_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_lane_chg_for_e2e, out);
    out << ", ";
  }

  // member: hwa_leading_point_valid
  {
    out << "hwa_leading_point_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_leading_point_valid, out);
    out << ", ";
  }

  // member: hwa_leading_point_center_y
  {
    out << "hwa_leading_point_center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_leading_point_center_y, out);
    out << ", ";
  }

  // member: hwa_leading_point_center_x
  {
    out << "hwa_leading_point_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_leading_point_center_x, out);
    out << ", ";
  }

  // member: ad4_turn_indic_req_req
  {
    out << "ad4_turn_indic_req_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_turn_indic_req_req, out);
    out << ", ";
  }

  // member: ad4_unavl_sts_for_e2e
  {
    out << "ad4_unavl_sts_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_unavl_sts_for_e2e, out);
    out << ", ";
  }

  // member: ad4_warn_sts_for_e2e
  {
    out << "ad4_warn_sts_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_warn_sts_for_e2e, out);
    out << ", ";
  }

  // member: ad4_win_open_req
  {
    out << "ad4_win_open_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_win_open_req, out);
    out << ", ";
  }

  // member: ad_ctrl_mode_ad_ctrl_mode
  {
    out << "ad_ctrl_mode_ad_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_ctrl_mode_ad_ctrl_mode, out);
    out << ", ";
  }

  // member: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    out << "ad4_drv_off_req_for_lgt_ctrl_drv_off_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_drv_off_req_for_lgt_ctrl_drv_off_req, out);
    out << ", ";
  }

  // member: asy_dece_remind
  {
    out << "asy_dece_remind: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_dece_remind, out);
    out << ", ";
  }

  // member: asy_lat_offs_swt_sts
  {
    out << "asy_lat_offs_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_offs_swt_sts, out);
    out << ", ";
  }

  // member: asy_undertak_on_off_sts
  {
    out << "asy_undertak_on_off_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_undertak_on_off_sts, out);
    out << ", ";
  }

  // member: asy_undertak_rmind
  {
    out << "asy_undertak_rmind: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_undertak_rmind, out);
    out << ", ";
  }

  // member: asy_warn_mesg_for_aut_drv
  {
    out << "asy_warn_mesg_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_warn_mesg_for_aut_drv, out);
    out << ", ";
  }

  // member: lgt_fusn_trfc_sgn
  {
    out << "lgt_fusn_trfc_sgn: ";
    rosidl_generator_traits::value_to_yaml(msg.lgt_fusn_trfc_sgn, out);
    out << ", ";
  }

  // member: drvg_ast_on_sys_sts
  {
    out << "drvg_ast_on_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvg_ast_on_sys_sts, out);
    out << ", ";
  }

  // member: asy_d2d_avl_rmn
  {
    out << "asy_d2d_avl_rmn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_avl_rmn, out);
    out << ", ";
  }

  // member: asy_d2d_deactvd_reasn_mesg
  {
    out << "asy_d2d_deactvd_reasn_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_deactvd_reasn_mesg, out);
    out << ", ";
  }

  // member: asy_d2d_distan_msg
  {
    out << "asy_d2d_distan_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_distan_msg, out);
    out << ", ";
  }

  // member: asy_d2d_etc_distan_msg
  {
    out << "asy_d2d_etc_distan_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_etc_distan_msg, out);
    out << ", ";
  }

  // member: asy_d2d_remind_msg
  {
    out << "asy_d2d_remind_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_remind_msg, out);
    out << ", ";
  }

  // member: asy_etc_traffic_sw_sts
  {
    out << "asy_etc_traffic_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_etc_traffic_sw_sts, out);
    out << ", ";
  }

  // member: asy_d2d_strt_to_end
  {
    out << "asy_d2d_strt_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_strt_to_end, out);
    out << ", ";
  }

  // member: asy_safe_stop_sts
  {
    out << "asy_safe_stop_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_safe_stop_sts, out);
    out << ", ";
  }

  // member: asy_sod_lane_chg_switch
  {
    out << "asy_sod_lane_chg_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sod_lane_chg_switch, out);
    out << ", ";
  }

  // member: avl_sts_for_long_aut_drv_sound
  {
    out << "avl_sts_for_long_aut_drv_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.avl_sts_for_long_aut_drv_sound, out);
    out << ", ";
  }

  // member: asy_sod_pilot_cfirm
  {
    out << "asy_sod_pilot_cfirm: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sod_pilot_cfirm, out);
    out << ", ";
  }

  // member: cncl_warn_for_aut_drv_sound
  {
    out << "cncl_warn_for_aut_drv_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_for_aut_drv_sound, out);
    out << ", ";
  }

  // member: cncl_warn_lgt_for_aut_drv_sound
  {
    out << "cncl_warn_lgt_for_aut_drv_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_lgt_for_aut_drv_sound, out);
    out << ", ";
  }

  // member: hmi_auto_lane_chg_style
  {
    out << "hmi_auto_lane_chg_style: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_auto_lane_chg_style, out);
    out << ", ";
  }

  // member: hmi_lane_chg_info
  {
    out << "hmi_lane_chg_info: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_lane_chg_info, out);
    out << ", ";
  }

  // member: ovrd_wrn_for_fst_actv
  {
    out << "ovrd_wrn_for_fst_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.ovrd_wrn_for_fst_actv, out);
    out << ", ";
  }

  // member: ad4_frt_lamp_req
  {
    out << "ad4_frt_lamp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_frt_lamp_req, out);
    out << ", ";
  }

  // member: ad4_rear_fog_lamp_req
  {
    out << "ad4_rear_fog_lamp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_rear_fog_lamp_req, out);
    out << ", ";
  }

  // member: ad4_res_req_for_e2e
  {
    out << "ad4_res_req_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_res_req_for_e2e, out);
    out << ", ";
  }

  // member: ad4_trunk_ctrl_req
  {
    out << "ad4_trunk_ctrl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_trunk_ctrl_req, out);
    out << ", ";
  }

  // member: acc_fusn_trfc_sgn
  {
    out << "acc_fusn_trfc_sgn: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fusn_trfc_sgn, out);
    out << ", ";
  }

  // member: asy_sfty_fct_sts_to_edraccfct_sts
  {
    out << "asy_sfty_fct_sts_to_edraccfct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edraccfct_sts, out);
    out << ", ";
  }

  // member: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    out << "asy_sfty_fct_sts_to_edracsfb1_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfb1_fct_sts, out);
    out << ", ";
  }

  // member: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    out << "asy_sfty_fct_sts_to_edracsfb2_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfb2_fct_sts, out);
    out << ", ";
  }

  // member: asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    out << "asy_sfty_fct_sts_to_edracsfc_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfc_fct_sts, out);
    out << ", ";
  }

  // member: asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    out << "asy_sfty_fct_sts_to_edracsfd_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfd_fct_sts, out);
    out << ", ";
  }

  // member: asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    out << "asy_sfty_fct_sts_to_edracsfe_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfe_fct_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_csd_indcr
  {
    out << "asy_cnoa_crs_csd_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_csd_indcr, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_hud_indcr
  {
    out << "asy_cnoa_crs_hud_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_hud_indcr, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    out << "asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr, out);
    out << ", ";
  }

  // member: asy_emgy_manoeuvre_aid_sts
  {
    out << "asy_emgy_manoeuvre_aid_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_emgy_manoeuvre_aid_sts, out);
    out << ", ";
  }

  // member: asy_fctn_ihbt_by_trlr
  {
    out << "asy_fctn_ihbt_by_trlr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_fctn_ihbt_by_trlr, out);
    out << ", ";
  }

  // member: asy_icc_max_warn_msg
  {
    out << "asy_icc_max_warn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_icc_max_warn_msg, out);
    out << ", ";
  }

  // member: asy_sfty_hwl_req
  {
    out << "asy_sfty_hwl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_hwl_req, out);
    out << ", ";
  }

  // member: aut_lane_chg_sts
  {
    out << "aut_lane_chg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_lane_chg_sts, out);
    out << ", ";
  }

  // member: cllsn_aid_post_ema
  {
    out << "cllsn_aid_post_ema: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsn_aid_post_ema, out);
    out << ", ";
  }

  // member: lane_chg_aut_actv_sts
  {
    out << "lane_chg_aut_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_chg_aut_actv_sts, out);
    out << ", ";
  }

  // member: cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    out << "cam_sts_cam_cam_frnt_cal_not_cmpl: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_cam_frnt_cal_not_cmpl, out);
    out << ", ";
  }

  // member: asy_cnoa_lane_chg_assist_sts
  {
    out << "asy_cnoa_lane_chg_assist_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lane_chg_assist_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_lane_chg_fail_type
  {
    out << "asy_cnoa_lane_chg_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lane_chg_fail_type, out);
    out << ", ";
  }

  // member: aut_cnoa_lane_chg_sts
  {
    out << "aut_cnoa_lane_chg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_cnoa_lane_chg_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_req_lane_chg
  {
    out << "asy_cnoa_req_lane_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_req_lane_chg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachFunctionControl & msg,
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

  // member: asy_aut_drvg_avl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_aut_drvg_avl: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drvg_avl, out);
    out << "\n";
  }

  // member: asy_lat_offst_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lat_offst_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_offst_sts, out);
    out << "\n";
  }

  // member: asy_noa_degrade_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_degrade_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_degrade_msg, out);
    out << "\n";
  }

  // member: lane_chg_aut_info_for_asy_hi_way
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_chg_aut_info_for_asy_hi_way: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_chg_aut_info_for_asy_hi_way, out);
    out << "\n";
  }

  // member: lane_chg_aut_sts_for_asy_hi_way
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_chg_aut_sts_for_asy_hi_way: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_chg_aut_sts_for_asy_hi_way, out);
    out << "\n";
  }

  // member: ti_gap_set_for_lgt_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ti_gap_set_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.ti_gap_set_for_lgt_ctrl, out);
    out << "\n";
  }

  // member: asy_lgt_ctrl_take_over_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lgt_ctrl_take_over_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lgt_ctrl_take_over_req, out);
    out << "\n";
  }

  // member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_tq_addl_for_ema_steer_tq_addl_for_ema: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_tq_addl_for_ema_steer_tq_addl_for_ema, out);
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

  // member: asy_noa_deactvd_reasn_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_deactvd_reasn_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_deactvd_reasn_mesg, out);
    out << "\n";
  }

  // member: asy_noa_remind_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_remind_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_remind_mesg, out);
    out << "\n";
  }

  // member: asy_high_beam_flash_warn_rqrd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_high_beam_flash_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_high_beam_flash_warn_rqrd, out);
    out << "\n";
  }

  // member: asy_noa_takeover_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_takeover_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_takeover_mesg, out);
    out << "\n";
  }

  // member: asy_fast_lane_swt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_fast_lane_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_fast_lane_swt_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_auto_lane_chg_style
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_auto_lane_chg_style: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_auto_lane_chg_style, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_actv_faild_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_actv_faild_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_faild_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_cross_intsec_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_cross_intsec_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_cross_intsec_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_finshd_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_finshd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_finshd_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_ind_ti_gap_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_ind_ti_gap_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_ind_ti_gap_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_actv_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_actv_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_off_odddistan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_off_odddistan: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_off_odddistan, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_game_fail_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_game_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_game_fail_type, out);
    out << "\n";
  }

  // member: asy_cnoa_game_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_game_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_game_reason, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_sts_csd_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_sts_csd_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_sts_csd_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_swt_on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_swt_on_off, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_swt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_swt_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_data_download_faild_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_data_download_faild_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_data_download_faild_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_offs_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_offs_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_offs_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_rmn_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_rmn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_rmn_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_sod_lane_chg_swt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_sod_lane_chg_swt: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_sod_lane_chg_swt, out);
    out << "\n";
  }

  // member: asy_cnoa_lrng_prmpt_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_lrng_prmpt_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_prmpt_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_lrng_swt_on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_lrng_swt_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_swt_on_off, out);
    out << "\n";
  }

  // member: asy_cnoa_lrng_swt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_lrng_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_swt_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_takeover_warn_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_takeover_warn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_takeover_warn_msg, out);
    out << "\n";
  }

  // member: asy_cnoa_turn_fail_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_turn_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_turn_fail_type, out);
    out << "\n";
  }

  // member: asy_cnoa_turn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_turn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_turn_sts, out);
    out << "\n";
  }

  // member: asy_noa_tar_spd_offs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_tar_spd_offs: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_tar_spd_offs, out);
    out << "\n";
  }

  // member: asy_noa_avl_rmn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_avl_rmn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_avl_rmn, out);
    out << "\n";
  }

  // member: asy_aut_lane_chg_swt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_aut_lane_chg_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_lane_chg_swt_sts, out);
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

  // member: ad_theme_disp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_theme_disp: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_theme_disp, out);
    out << "\n";
  }

  // member: cncl_warn_for_aut_drv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cncl_warn_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_for_aut_drv, out);
    out << "\n";
  }

  // member: disp_tsi_info_for_lgt_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disp_tsi_info_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.disp_tsi_info_for_lgt_ctrl, out);
    out << "\n";
  }

  // member: disp_spd_set_for_lgt_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disp_spd_set_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.disp_spd_set_for_lgt_ctrl, out);
    out << "\n";
  }

  // member: hmi_nop_cofm_of_lan_chag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_nop_cofm_of_lan_chag: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_nop_cofm_of_lan_chag, out);
    out << "\n";
  }

  // member: ad4_lane_chg_for_e2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_lane_chg_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_lane_chg_for_e2e, out);
    out << "\n";
  }

  // member: hwa_leading_point_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hwa_leading_point_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_leading_point_valid, out);
    out << "\n";
  }

  // member: hwa_leading_point_center_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hwa_leading_point_center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_leading_point_center_y, out);
    out << "\n";
  }

  // member: hwa_leading_point_center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hwa_leading_point_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hwa_leading_point_center_x, out);
    out << "\n";
  }

  // member: ad4_turn_indic_req_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_turn_indic_req_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_turn_indic_req_req, out);
    out << "\n";
  }

  // member: ad4_unavl_sts_for_e2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_unavl_sts_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_unavl_sts_for_e2e, out);
    out << "\n";
  }

  // member: ad4_warn_sts_for_e2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_warn_sts_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_warn_sts_for_e2e, out);
    out << "\n";
  }

  // member: ad4_win_open_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_win_open_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_win_open_req, out);
    out << "\n";
  }

  // member: ad_ctrl_mode_ad_ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_ctrl_mode_ad_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_ctrl_mode_ad_ctrl_mode, out);
    out << "\n";
  }

  // member: ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_drv_off_req_for_lgt_ctrl_drv_off_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_drv_off_req_for_lgt_ctrl_drv_off_req, out);
    out << "\n";
  }

  // member: asy_dece_remind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_dece_remind: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_dece_remind, out);
    out << "\n";
  }

  // member: asy_lat_offs_swt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lat_offs_swt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_offs_swt_sts, out);
    out << "\n";
  }

  // member: asy_undertak_on_off_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_undertak_on_off_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_undertak_on_off_sts, out);
    out << "\n";
  }

  // member: asy_undertak_rmind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_undertak_rmind: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_undertak_rmind, out);
    out << "\n";
  }

  // member: asy_warn_mesg_for_aut_drv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_warn_mesg_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_warn_mesg_for_aut_drv, out);
    out << "\n";
  }

  // member: lgt_fusn_trfc_sgn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lgt_fusn_trfc_sgn: ";
    rosidl_generator_traits::value_to_yaml(msg.lgt_fusn_trfc_sgn, out);
    out << "\n";
  }

  // member: drvg_ast_on_sys_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvg_ast_on_sys_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvg_ast_on_sys_sts, out);
    out << "\n";
  }

  // member: asy_d2d_avl_rmn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_avl_rmn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_avl_rmn, out);
    out << "\n";
  }

  // member: asy_d2d_deactvd_reasn_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_deactvd_reasn_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_deactvd_reasn_mesg, out);
    out << "\n";
  }

  // member: asy_d2d_distan_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_distan_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_distan_msg, out);
    out << "\n";
  }

  // member: asy_d2d_etc_distan_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_etc_distan_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_etc_distan_msg, out);
    out << "\n";
  }

  // member: asy_d2d_remind_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_remind_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_remind_msg, out);
    out << "\n";
  }

  // member: asy_etc_traffic_sw_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_etc_traffic_sw_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_etc_traffic_sw_sts, out);
    out << "\n";
  }

  // member: asy_d2d_strt_to_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_strt_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_strt_to_end, out);
    out << "\n";
  }

  // member: asy_safe_stop_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_safe_stop_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_safe_stop_sts, out);
    out << "\n";
  }

  // member: asy_sod_lane_chg_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sod_lane_chg_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sod_lane_chg_switch, out);
    out << "\n";
  }

  // member: avl_sts_for_long_aut_drv_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avl_sts_for_long_aut_drv_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.avl_sts_for_long_aut_drv_sound, out);
    out << "\n";
  }

  // member: asy_sod_pilot_cfirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sod_pilot_cfirm: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sod_pilot_cfirm, out);
    out << "\n";
  }

  // member: cncl_warn_for_aut_drv_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cncl_warn_for_aut_drv_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_for_aut_drv_sound, out);
    out << "\n";
  }

  // member: cncl_warn_lgt_for_aut_drv_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cncl_warn_lgt_for_aut_drv_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_lgt_for_aut_drv_sound, out);
    out << "\n";
  }

  // member: hmi_auto_lane_chg_style
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_auto_lane_chg_style: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_auto_lane_chg_style, out);
    out << "\n";
  }

  // member: hmi_lane_chg_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_lane_chg_info: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_lane_chg_info, out);
    out << "\n";
  }

  // member: ovrd_wrn_for_fst_actv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ovrd_wrn_for_fst_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.ovrd_wrn_for_fst_actv, out);
    out << "\n";
  }

  // member: ad4_frt_lamp_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_frt_lamp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_frt_lamp_req, out);
    out << "\n";
  }

  // member: ad4_rear_fog_lamp_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_rear_fog_lamp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_rear_fog_lamp_req, out);
    out << "\n";
  }

  // member: ad4_res_req_for_e2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_res_req_for_e2e: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_res_req_for_e2e, out);
    out << "\n";
  }

  // member: ad4_trunk_ctrl_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_trunk_ctrl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_trunk_ctrl_req, out);
    out << "\n";
  }

  // member: acc_fusn_trfc_sgn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_fusn_trfc_sgn: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_fusn_trfc_sgn, out);
    out << "\n";
  }

  // member: asy_sfty_fct_sts_to_edraccfct_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sfty_fct_sts_to_edraccfct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edraccfct_sts, out);
    out << "\n";
  }

  // member: asy_sfty_fct_sts_to_edracsfb1_fct_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sfty_fct_sts_to_edracsfb1_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfb1_fct_sts, out);
    out << "\n";
  }

  // member: asy_sfty_fct_sts_to_edracsfb2_fct_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sfty_fct_sts_to_edracsfb2_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfb2_fct_sts, out);
    out << "\n";
  }

  // member: asy_sfty_fct_sts_to_edracsfc_fct_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sfty_fct_sts_to_edracsfc_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfc_fct_sts, out);
    out << "\n";
  }

  // member: asy_sfty_fct_sts_to_edracsfd_fct_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sfty_fct_sts_to_edracsfd_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfd_fct_sts, out);
    out << "\n";
  }

  // member: asy_sfty_fct_sts_to_edracsfe_fct_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sfty_fct_sts_to_edracsfe_fct_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_fct_sts_to_edracsfe_fct_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_csd_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_csd_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_csd_indcr, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_hud_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_hud_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_hud_indcr, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr, out);
    out << "\n";
  }

  // member: asy_emgy_manoeuvre_aid_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_emgy_manoeuvre_aid_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_emgy_manoeuvre_aid_sts, out);
    out << "\n";
  }

  // member: asy_fctn_ihbt_by_trlr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_fctn_ihbt_by_trlr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_fctn_ihbt_by_trlr, out);
    out << "\n";
  }

  // member: asy_icc_max_warn_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_icc_max_warn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_icc_max_warn_msg, out);
    out << "\n";
  }

  // member: asy_sfty_hwl_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_sfty_hwl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_sfty_hwl_req, out);
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

  // member: cllsn_aid_post_ema
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cllsn_aid_post_ema: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsn_aid_post_ema, out);
    out << "\n";
  }

  // member: lane_chg_aut_actv_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_chg_aut_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_chg_aut_actv_sts, out);
    out << "\n";
  }

  // member: cam_sts_cam_cam_frnt_cal_not_cmpl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_cam_frnt_cal_not_cmpl: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_cam_frnt_cal_not_cmpl, out);
    out << "\n";
  }

  // member: asy_cnoa_lane_chg_assist_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_lane_chg_assist_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lane_chg_assist_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_lane_chg_fail_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_lane_chg_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lane_chg_fail_type, out);
    out << "\n";
  }

  // member: aut_cnoa_lane_chg_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_cnoa_lane_chg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_cnoa_lane_chg_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_req_lane_chg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_req_lane_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_req_lane_chg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachFunctionControl & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::MachFunctionControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::MachFunctionControl & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::MachFunctionControl>()
{
  return "deva_function_msgs::msg::MachFunctionControl";
}

template<>
inline const char * name<deva_function_msgs::msg::MachFunctionControl>()
{
  return "deva_function_msgs/msg/MachFunctionControl";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::MachFunctionControl>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::MachFunctionControl>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::MachFunctionControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__TRAITS_HPP_
