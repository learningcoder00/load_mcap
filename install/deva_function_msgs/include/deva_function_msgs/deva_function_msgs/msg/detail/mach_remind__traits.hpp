// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/mach_remind__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachRemind & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_actv_faild_voice
  {
    out << "asy_cnoa_crs_actv_faild_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_faild_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_cross_intsec_voice
  {
    out << "asy_cnoa_crs_cross_intsec_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_cross_intsec_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_actv_voice
  {
    out << "asy_cnoa_crs_actv_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_deactvd_voice
  {
    out << "asy_cnoa_crs_deactvd_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_deactvd_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_finshd_voice
  {
    out << "asy_cnoa_crs_finshd_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_finshd_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_offs_voice
  {
    out << "asy_cnoa_crs_offs_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_offs_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_rmn_voice
  {
    out << "asy_cnoa_crs_rmn_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_rmn_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_hands_off_voice
  {
    out << "asy_cnoa_hands_off_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_hands_off_voice, out);
    out << ", ";
  }

  // member: asy_cnoa_lrng_abort_voice
  {
    out << "asy_cnoa_lrng_abort_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_abort_voice, out);
    out << ", ";
  }

  // member: asy_noa_avl_rmn_sound
  {
    out << "asy_noa_avl_rmn_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_avl_rmn_sound, out);
    out << ", ";
  }

  // member: asy_cnoa_takeover_warn_voice
  {
    out << "asy_cnoa_takeover_warn_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_takeover_warn_voice, out);
    out << ", ";
  }

  // member: asy_dece_remind_sound
  {
    out << "asy_dece_remind_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_dece_remind_sound, out);
    out << ", ";
  }

  // member: asy_drvr_sod_cfirm_cnoa_main_page
  {
    out << "asy_drvr_sod_cfirm_cnoa_main_page: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_drvr_sod_cfirm_cnoa_main_page, out);
    out << ", ";
  }

  // member: asy_undertak_rmind_sound
  {
    out << "asy_undertak_rmind_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_undertak_rmind_sound, out);
    out << ", ";
  }

  // member: asy_warn_sod_for_aut_drv
  {
    out << "asy_warn_sod_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_warn_sod_for_aut_drv, out);
    out << ", ";
  }

  // member: avl_sts_for_long_aut_drv
  {
    out << "avl_sts_for_long_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.avl_sts_for_long_aut_drv, out);
    out << ", ";
  }

  // member: too_many_cars
  {
    out << "too_many_cars: ";
    rosidl_generator_traits::value_to_yaml(msg.too_many_cars, out);
    out << ", ";
  }

  // member: drv_off_warn
  {
    out << "drv_off_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_warn, out);
    out << ", ";
  }

  // member: ad4_horn_warn
  {
    out << "ad4_horn_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_horn_warn, out);
    out << ", ";
  }

  // member: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    out << "hmi_auto_lane_chg_sts_for_asy_ai_asist_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio, out);
    out << ", ";
  }

  // member: drv_off_mod
  {
    out << "drv_off_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_mod, out);
    out << ", ";
  }

  // member: asy_horn_warn_rqrd
  {
    out << "asy_horn_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_horn_warn_rqrd, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_avl_prompt
  {
    out << "asy_cnoa_crs_avl_prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_avl_prompt, out);
    out << ", ";
  }

  // member: asy_crs_sts_swil_indcr
  {
    out << "asy_crs_sts_swil_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_crs_sts_swil_indcr, out);
    out << ", ";
  }

  // member: asy_d2d_avl_rmn_sod
  {
    out << "asy_d2d_avl_rmn_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_avl_rmn_sod, out);
    out << ", ";
  }

  // member: asy_d2d_deactvd_reasn_sod
  {
    out << "asy_d2d_deactvd_reasn_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_deactvd_reasn_sod, out);
    out << ", ";
  }

  // member: asy_d2d_etc_distan_sod
  {
    out << "asy_d2d_etc_distan_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_etc_distan_sod, out);
    out << ", ";
  }

  // member: asy_d2d_distan_sod
  {
    out << "asy_d2d_distan_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_distan_sod, out);
    out << ", ";
  }

  // member: asy_d2d_strt_to_end_sod
  {
    out << "asy_d2d_strt_to_end_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_strt_to_end_sod, out);
    out << ", ";
  }

  // member: asy_d2d_remind_sod
  {
    out << "asy_d2d_remind_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_remind_sod, out);
    out << ", ";
  }

  // member: asy_lane_chg_fail_type
  {
    out << "asy_lane_chg_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_chg_fail_type, out);
    out << ", ";
  }

  // member: asy_req_lane_chg
  {
    out << "asy_req_lane_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_req_lane_chg, out);
    out << ", ";
  }

  // member: asy_noa_deactvd_reasn_sod
  {
    out << "asy_noa_deactvd_reasn_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_deactvd_reasn_sod, out);
    out << ", ";
  }

  // member: asy_noa_remind_sod
  {
    out << "asy_noa_remind_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_remind_sod, out);
    out << ", ";
  }

  // member: ad4_drvr_belt_warn
  {
    out << "ad4_drvr_belt_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_drvr_belt_warn, out);
    out << ", ";
  }

  // member: asy_noa_takeover_sod
  {
    out << "asy_noa_takeover_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_takeover_sod, out);
    out << ", ";
  }

  // member: ad4_drvr_belt_warn_for_bkp
  {
    out << "ad4_drvr_belt_warn_for_bkp: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_drvr_belt_warn_for_bkp, out);
    out << ", ";
  }

  // member: asy_lan_chg_sod_sec
  {
    out << "asy_lan_chg_sod_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_sod_sec, out);
    out << ", ";
  }

  // member: ad4_camera_heating_req
  {
    out << "ad4_camera_heating_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_camera_heating_req, out);
    out << ", ";
  }

  // member: ad_takeover_req_group_ad_takeover_msg
  {
    out << "ad_takeover_req_group_ad_takeover_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_takeover_req_group_ad_takeover_msg, out);
    out << ", ";
  }

  // member: ad_takeover_req_group_ad_takeover_audio
  {
    out << "ad_takeover_req_group_ad_takeover_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_takeover_req_group_ad_takeover_audio, out);
    out << ", ";
  }

  // member: ad_wipr_ctrl_req
  {
    out << "ad_wipr_ctrl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_wipr_ctrl_req, out);
    out << ", ";
  }

  // member: asy_noa_blt_fastn
  {
    out << "asy_noa_blt_fastn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_blt_fastn, out);
    out << ", ";
  }

  // member: turn_indic_req_by_alca
  {
    out << "turn_indic_req_by_alca: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_indic_req_by_alca, out);
    out << ", ";
  }

  // member: asy_lane_chg_assist_sts
  {
    out << "asy_lane_chg_assist_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_chg_assist_sts, out);
    out << ", ";
  }

  // member: ad4_camera_heating_req_zcu
  {
    out << "ad4_camera_heating_req_zcu: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_camera_heating_req_zcu, out);
    out << ", ";
  }

  // member: asy_fct_lrng_mesg
  {
    out << "asy_fct_lrng_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_fct_lrng_mesg, out);
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
  const MachRemind & msg,
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

  // member: asy_cnoa_crs_actv_faild_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_actv_faild_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_faild_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_cross_intsec_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_cross_intsec_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_cross_intsec_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_actv_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_actv_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_actv_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_deactvd_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_deactvd_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_deactvd_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_finshd_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_finshd_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_finshd_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_offs_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_offs_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_offs_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_rmn_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_rmn_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_rmn_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_hands_off_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_hands_off_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_hands_off_voice, out);
    out << "\n";
  }

  // member: asy_cnoa_lrng_abort_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_lrng_abort_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_lrng_abort_voice, out);
    out << "\n";
  }

  // member: asy_noa_avl_rmn_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_avl_rmn_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_avl_rmn_sound, out);
    out << "\n";
  }

  // member: asy_cnoa_takeover_warn_voice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_takeover_warn_voice: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_takeover_warn_voice, out);
    out << "\n";
  }

  // member: asy_dece_remind_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_dece_remind_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_dece_remind_sound, out);
    out << "\n";
  }

  // member: asy_drvr_sod_cfirm_cnoa_main_page
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_drvr_sod_cfirm_cnoa_main_page: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_drvr_sod_cfirm_cnoa_main_page, out);
    out << "\n";
  }

  // member: asy_undertak_rmind_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_undertak_rmind_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_undertak_rmind_sound, out);
    out << "\n";
  }

  // member: asy_warn_sod_for_aut_drv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_warn_sod_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_warn_sod_for_aut_drv, out);
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

  // member: too_many_cars
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "too_many_cars: ";
    rosidl_generator_traits::value_to_yaml(msg.too_many_cars, out);
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

  // member: ad4_horn_warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_horn_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_horn_warn, out);
    out << "\n";
  }

  // member: hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_auto_lane_chg_sts_for_asy_ai_asist_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio, out);
    out << "\n";
  }

  // member: drv_off_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drv_off_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_mod, out);
    out << "\n";
  }

  // member: asy_horn_warn_rqrd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_horn_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_horn_warn_rqrd, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_avl_prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_avl_prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_avl_prompt, out);
    out << "\n";
  }

  // member: asy_crs_sts_swil_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_crs_sts_swil_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_crs_sts_swil_indcr, out);
    out << "\n";
  }

  // member: asy_d2d_avl_rmn_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_avl_rmn_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_avl_rmn_sod, out);
    out << "\n";
  }

  // member: asy_d2d_deactvd_reasn_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_deactvd_reasn_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_deactvd_reasn_sod, out);
    out << "\n";
  }

  // member: asy_d2d_etc_distan_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_etc_distan_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_etc_distan_sod, out);
    out << "\n";
  }

  // member: asy_d2d_distan_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_distan_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_distan_sod, out);
    out << "\n";
  }

  // member: asy_d2d_strt_to_end_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_strt_to_end_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_strt_to_end_sod, out);
    out << "\n";
  }

  // member: asy_d2d_remind_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_d2d_remind_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_d2d_remind_sod, out);
    out << "\n";
  }

  // member: asy_lane_chg_fail_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lane_chg_fail_type: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_chg_fail_type, out);
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

  // member: asy_noa_deactvd_reasn_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_deactvd_reasn_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_deactvd_reasn_sod, out);
    out << "\n";
  }

  // member: asy_noa_remind_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_remind_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_remind_sod, out);
    out << "\n";
  }

  // member: ad4_drvr_belt_warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_drvr_belt_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_drvr_belt_warn, out);
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

  // member: ad4_drvr_belt_warn_for_bkp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_drvr_belt_warn_for_bkp: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_drvr_belt_warn_for_bkp, out);
    out << "\n";
  }

  // member: asy_lan_chg_sod_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lan_chg_sod_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_sod_sec, out);
    out << "\n";
  }

  // member: ad4_camera_heating_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_camera_heating_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_camera_heating_req, out);
    out << "\n";
  }

  // member: ad_takeover_req_group_ad_takeover_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_takeover_req_group_ad_takeover_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_takeover_req_group_ad_takeover_msg, out);
    out << "\n";
  }

  // member: ad_takeover_req_group_ad_takeover_audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_takeover_req_group_ad_takeover_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_takeover_req_group_ad_takeover_audio, out);
    out << "\n";
  }

  // member: ad_wipr_ctrl_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_wipr_ctrl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_wipr_ctrl_req, out);
    out << "\n";
  }

  // member: asy_noa_blt_fastn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_blt_fastn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_blt_fastn, out);
    out << "\n";
  }

  // member: turn_indic_req_by_alca
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_indic_req_by_alca: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_indic_req_by_alca, out);
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

  // member: ad4_camera_heating_req_zcu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad4_camera_heating_req_zcu: ";
    rosidl_generator_traits::value_to_yaml(msg.ad4_camera_heating_req_zcu, out);
    out << "\n";
  }

  // member: asy_fct_lrng_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_fct_lrng_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_fct_lrng_mesg, out);
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

inline std::string to_yaml(const MachRemind & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::MachRemind & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::MachRemind & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::MachRemind>()
{
  return "deva_function_msgs::msg::MachRemind";
}

template<>
inline const char * name<deva_function_msgs::msg::MachRemind>()
{
  return "deva_function_msgs/msg/MachRemind";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::MachRemind>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::MachRemind>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::MachRemind>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__TRAITS_HPP_
