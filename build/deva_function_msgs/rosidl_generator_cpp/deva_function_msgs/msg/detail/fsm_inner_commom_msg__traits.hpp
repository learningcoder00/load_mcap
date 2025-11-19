// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FsmInnerCommomMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_lan_chg_msg
  {
    out << "asy_cnoa_crs_lan_chg_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_lan_chg_msg, out);
    out << ", ";
  }

  // member: set_spd_for_crs_ctrl_fct_active
  {
    out << "set_spd_for_crs_ctrl_fct_active: ";
    rosidl_generator_traits::value_to_yaml(msg.set_spd_for_crs_ctrl_fct_active, out);
    out << ", ";
  }

  // member: asy_lane_chg_assist_sts
  {
    out << "asy_lane_chg_assist_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_chg_assist_sts, out);
    out << ", ";
  }

  // member: indcr_sts
  {
    out << "indcr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_sts, out);
    out << ", ";
  }

  // member: asy_noa_takeover_sod
  {
    out << "asy_noa_takeover_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_takeover_sod, out);
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

  // member: asy_algt_indcr
  {
    out << "asy_algt_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_algt_indcr, out);
    out << ", ";
  }

  // member: ti_gap_set_for_lgt_ctrl
  {
    out << "ti_gap_set_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.ti_gap_set_for_lgt_ctrl, out);
    out << ", ";
  }

  // member: drv_mod_req
  {
    out << "drv_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_mod_req, out);
    out << ", ";
  }

  // member: drv_off_warn
  {
    out << "drv_off_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_warn, out);
    out << ", ";
  }

  // member: asy_alat_indcr
  {
    out << "asy_alat_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_alat_indcr, out);
    out << ", ";
  }

  // member: asy_lgt_ctrl_take_over_req
  {
    out << "asy_lgt_ctrl_take_over_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lgt_ctrl_take_over_req, out);
    out << ", ";
  }

  // member: ovrd_wrn_for_fst_actv
  {
    out << "ovrd_wrn_for_fst_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.ovrd_wrn_for_fst_actv, out);
    out << ", ";
  }

  // member: asy_inform_for_drvr
  {
    out << "asy_inform_for_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_inform_for_drvr, out);
    out << ", ";
  }

  // member: cncl_warn_lgt_for_aut_drv
  {
    out << "cncl_warn_lgt_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_lgt_for_aut_drv, out);
    out << ", ";
  }

  // member: avl_sts_for_long_aut_drv
  {
    out << "avl_sts_for_long_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.avl_sts_for_long_aut_drv, out);
    out << ", ";
  }

  // member: asy_steer_apply_rqrd
  {
    out << "asy_steer_apply_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_steer_apply_rqrd, out);
    out << ", ";
  }

  // member: asy_lan_chg_mesg
  {
    out << "asy_lan_chg_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_mesg, out);
    out << ", ";
  }

  // member: asy_safe_stop_sts
  {
    out << "asy_safe_stop_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_safe_stop_sts, out);
    out << ", ";
  }

  // member: asy_eyes_off_warn_rqrd
  {
    out << "asy_eyes_off_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_eyes_off_warn_rqrd, out);
    out << ", ";
  }

  // member: asy_noa_remind_mesg
  {
    out << "asy_noa_remind_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_remind_mesg, out);
    out << ", ";
  }

  // member: asy_noa_takeover_mesg
  {
    out << "asy_noa_takeover_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_takeover_mesg, out);
    out << ", ";
  }

  // member: asy_aut_drvg_avl
  {
    out << "asy_aut_drvg_avl: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drvg_avl, out);
    out << ", ";
  }

  // member: asy_noa_actv_suggest
  {
    out << "asy_noa_actv_suggest: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_actv_suggest, out);
    out << ", ";
  }

  // member: cncl_warn_for_aut_drv
  {
    out << "cncl_warn_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_for_aut_drv, out);
    out << ", ";
  }

  // member: asy_lat_deg_sts
  {
    out << "asy_lat_deg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_deg_sts, out);
    out << ", ";
  }

  // member: asy_icc_max_warn_msg
  {
    out << "asy_icc_max_warn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_icc_max_warn_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_takeover_warn_msg
  {
    out << "asy_cnoa_takeover_warn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_takeover_warn_msg, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_cross_intsec_msg
  {
    out << "asy_cnoa_crs_cross_intsec_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_cross_intsec_msg, out);
    out << ", ";
  }

  // member: asy_d2d_avl_rmn
  {
    out << "asy_d2d_avl_rmn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_avl_rmn, out);
    out << ", ";
  }

  // member: asy_d2d_distan_msg
  {
    out << "asy_d2d_distan_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_distan_msg, out);
    out << ", ";
  }

  // member: asy_d2d_strt_to_end
  {
    out << "asy_d2d_strt_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_strt_to_end, out);
    out << ", ";
  }

  // member: asy_d2d_deactvd_reasn_mesg
  {
    out << "asy_d2d_deactvd_reasn_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_deactvd_reasn_mesg, out);
    out << ", ";
  }

  // member: asy_aut_emgy_steer_actv
  {
    out << "asy_aut_emgy_steer_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_emgy_steer_actv, out);
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

  // member: ad_dim_light
  {
    out << "ad_dim_light: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_dim_light, out);
    out << ", ";
  }

  // member: asy_d2d_crs_dim_indcr
  {
    out << "asy_d2d_crs_dim_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_crs_dim_indcr, out);
    out << ", ";
  }

  // member: asy_aut_drv_ctrl_typ_dim_req
  {
    out << "asy_aut_drv_ctrl_typ_dim_req: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drv_ctrl_typ_dim_req, out);
    out << ", ";
  }

  // member: ihu_set_disp_ad
  {
    out << "ihu_set_disp_ad: ";
    rosidl_generator_traits::value_to_yaml(msg.ihu_set_disp_ad, out);
    out << ", ";
  }

  // member: aut_lane_chg_sts
  {
    out << "aut_lane_chg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_lane_chg_sts, out);
    out << ", ";
  }

  // member: ad_ctrl_mode
  {
    out << "ad_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_ctrl_mode, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_chg
  {
    out << "hmi_drvr_sod_req_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_chg, out);
    out << ", ";
  }

  // member: cam_status0
  {
    out << "cam_status0: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_status0, out);
    out << ", ";
  }

  // member: frnt_side_cam_le_sts0
  {
    out << "frnt_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_le_sts0, out);
    out << ", ";
  }

  // member: frnt_side_cam_ri_sts0
  {
    out << "frnt_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_ri_sts0, out);
    out << ", ";
  }

  // member: re_side_cam_le_sts0
  {
    out << "re_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_le_sts0, out);
    out << ", ";
  }

  // member: re_side_cam_ri_sts0
  {
    out << "re_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_ri_sts0, out);
    out << ", ";
  }

  // member: hmi_re_cam_sts0
  {
    out << "hmi_re_cam_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_re_cam_sts0, out);
    out << ", ";
  }

  // member: asy_algt_sts
  {
    out << "asy_algt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_algt_sts, out);
    out << ", ";
  }

  // member: hmi_auto_lane_chg_style
  {
    out << "hmi_auto_lane_chg_style: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_auto_lane_chg_style, out);
    out << ", ";
  }

  // member: trfc_jam_warn
  {
    out << "trfc_jam_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.trfc_jam_warn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FsmInnerCommomMsg & msg,
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

  // member: asy_cnoa_crs_lan_chg_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_lan_chg_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_lan_chg_msg, out);
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

  // member: asy_lane_chg_assist_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lane_chg_assist_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_chg_assist_sts, out);
    out << "\n";
  }

  // member: indcr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indcr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_sts, out);
    out << "\n";
  }

  // member: asy_noa_takeover_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_takeover_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_takeover_sod, out);
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

  // member: asy_algt_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_algt_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_algt_indcr, out);
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

  // member: drv_mod_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drv_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_mod_req, out);
    out << "\n";
  }

  // member: drv_off_warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drv_off_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_warn, out);
    out << "\n";
  }

  // member: asy_alat_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_alat_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_alat_indcr, out);
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

  // member: ovrd_wrn_for_fst_actv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ovrd_wrn_for_fst_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.ovrd_wrn_for_fst_actv, out);
    out << "\n";
  }

  // member: asy_inform_for_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_inform_for_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_inform_for_drvr, out);
    out << "\n";
  }

  // member: cncl_warn_lgt_for_aut_drv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cncl_warn_lgt_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.cncl_warn_lgt_for_aut_drv, out);
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

  // member: asy_steer_apply_rqrd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_steer_apply_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_steer_apply_rqrd, out);
    out << "\n";
  }

  // member: asy_lan_chg_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lan_chg_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_mesg, out);
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

  // member: asy_eyes_off_warn_rqrd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_eyes_off_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_eyes_off_warn_rqrd, out);
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

  // member: asy_noa_takeover_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_takeover_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_takeover_mesg, out);
    out << "\n";
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

  // member: asy_noa_actv_suggest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_actv_suggest: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_actv_suggest, out);
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

  // member: asy_lat_deg_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lat_deg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_deg_sts, out);
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

  // member: asy_cnoa_takeover_warn_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_takeover_warn_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_takeover_warn_msg, out);
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

  // member: asy_d2d_avl_rmn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_avl_rmn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_avl_rmn, out);
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

  // member: asy_d2d_strt_to_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_strt_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_strt_to_end, out);
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

  // member: asy_aut_emgy_steer_actv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_aut_emgy_steer_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_emgy_steer_actv, out);
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

  // member: ad_dim_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_dim_light: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_dim_light, out);
    out << "\n";
  }

  // member: asy_d2d_crs_dim_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_crs_dim_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_crs_dim_indcr, out);
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

  // member: ihu_set_disp_ad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ihu_set_disp_ad: ";
    rosidl_generator_traits::value_to_yaml(msg.ihu_set_disp_ad, out);
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

  // member: ad_ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_ctrl_mode, out);
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

  // member: cam_status0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_status0: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_status0, out);
    out << "\n";
  }

  // member: frnt_side_cam_le_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frnt_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_le_sts0, out);
    out << "\n";
  }

  // member: frnt_side_cam_ri_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frnt_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_ri_sts0, out);
    out << "\n";
  }

  // member: re_side_cam_le_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "re_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_le_sts0, out);
    out << "\n";
  }

  // member: re_side_cam_ri_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "re_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_ri_sts0, out);
    out << "\n";
  }

  // member: hmi_re_cam_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_re_cam_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_re_cam_sts0, out);
    out << "\n";
  }

  // member: asy_algt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_algt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_algt_sts, out);
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

  // member: trfc_jam_warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trfc_jam_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.trfc_jam_warn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FsmInnerCommomMsg & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::FsmInnerCommomMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::FsmInnerCommomMsg & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::FsmInnerCommomMsg>()
{
  return "deva_function_msgs::msg::FsmInnerCommomMsg";
}

template<>
inline const char * name<deva_function_msgs::msg::FsmInnerCommomMsg>()
{
  return "deva_function_msgs/msg/FsmInnerCommomMsg";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::FsmInnerCommomMsg>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::FsmInnerCommomMsg>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::FsmInnerCommomMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__TRAITS_HPP_
