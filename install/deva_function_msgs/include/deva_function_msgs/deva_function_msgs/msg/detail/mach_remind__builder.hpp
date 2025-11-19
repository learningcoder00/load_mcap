// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/MachRemind.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/mach_remind__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_MachRemind_trfc_jam_warn
{
public:
  explicit Init_MachRemind_trfc_jam_warn(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::MachRemind trfc_jam_warn(::deva_function_msgs::msg::MachRemind::_trfc_jam_warn_type arg)
  {
    msg_.trfc_jam_warn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_fct_lrng_mesg
{
public:
  explicit Init_MachRemind_asy_fct_lrng_mesg(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_trfc_jam_warn asy_fct_lrng_mesg(::deva_function_msgs::msg::MachRemind::_asy_fct_lrng_mesg_type arg)
  {
    msg_.asy_fct_lrng_mesg = std::move(arg);
    return Init_MachRemind_trfc_jam_warn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad4_camera_heating_req_zcu
{
public:
  explicit Init_MachRemind_ad4_camera_heating_req_zcu(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_fct_lrng_mesg ad4_camera_heating_req_zcu(::deva_function_msgs::msg::MachRemind::_ad4_camera_heating_req_zcu_type arg)
  {
    msg_.ad4_camera_heating_req_zcu = std::move(arg);
    return Init_MachRemind_asy_fct_lrng_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_lane_chg_assist_sts
{
public:
  explicit Init_MachRemind_asy_lane_chg_assist_sts(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad4_camera_heating_req_zcu asy_lane_chg_assist_sts(::deva_function_msgs::msg::MachRemind::_asy_lane_chg_assist_sts_type arg)
  {
    msg_.asy_lane_chg_assist_sts = std::move(arg);
    return Init_MachRemind_ad4_camera_heating_req_zcu(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_turn_indic_req_by_alca
{
public:
  explicit Init_MachRemind_turn_indic_req_by_alca(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_lane_chg_assist_sts turn_indic_req_by_alca(::deva_function_msgs::msg::MachRemind::_turn_indic_req_by_alca_type arg)
  {
    msg_.turn_indic_req_by_alca = std::move(arg);
    return Init_MachRemind_asy_lane_chg_assist_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_noa_blt_fastn
{
public:
  explicit Init_MachRemind_asy_noa_blt_fastn(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_turn_indic_req_by_alca asy_noa_blt_fastn(::deva_function_msgs::msg::MachRemind::_asy_noa_blt_fastn_type arg)
  {
    msg_.asy_noa_blt_fastn = std::move(arg);
    return Init_MachRemind_turn_indic_req_by_alca(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad_wipr_ctrl_req
{
public:
  explicit Init_MachRemind_ad_wipr_ctrl_req(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_noa_blt_fastn ad_wipr_ctrl_req(::deva_function_msgs::msg::MachRemind::_ad_wipr_ctrl_req_type arg)
  {
    msg_.ad_wipr_ctrl_req = std::move(arg);
    return Init_MachRemind_asy_noa_blt_fastn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad_takeover_req_group_ad_takeover_audio
{
public:
  explicit Init_MachRemind_ad_takeover_req_group_ad_takeover_audio(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad_wipr_ctrl_req ad_takeover_req_group_ad_takeover_audio(::deva_function_msgs::msg::MachRemind::_ad_takeover_req_group_ad_takeover_audio_type arg)
  {
    msg_.ad_takeover_req_group_ad_takeover_audio = std::move(arg);
    return Init_MachRemind_ad_wipr_ctrl_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad_takeover_req_group_ad_takeover_msg
{
public:
  explicit Init_MachRemind_ad_takeover_req_group_ad_takeover_msg(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad_takeover_req_group_ad_takeover_audio ad_takeover_req_group_ad_takeover_msg(::deva_function_msgs::msg::MachRemind::_ad_takeover_req_group_ad_takeover_msg_type arg)
  {
    msg_.ad_takeover_req_group_ad_takeover_msg = std::move(arg);
    return Init_MachRemind_ad_takeover_req_group_ad_takeover_audio(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad4_camera_heating_req
{
public:
  explicit Init_MachRemind_ad4_camera_heating_req(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad_takeover_req_group_ad_takeover_msg ad4_camera_heating_req(::deva_function_msgs::msg::MachRemind::_ad4_camera_heating_req_type arg)
  {
    msg_.ad4_camera_heating_req = std::move(arg);
    return Init_MachRemind_ad_takeover_req_group_ad_takeover_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_lan_chg_sod_sec
{
public:
  explicit Init_MachRemind_asy_lan_chg_sod_sec(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad4_camera_heating_req asy_lan_chg_sod_sec(::deva_function_msgs::msg::MachRemind::_asy_lan_chg_sod_sec_type arg)
  {
    msg_.asy_lan_chg_sod_sec = std::move(arg);
    return Init_MachRemind_ad4_camera_heating_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad4_drvr_belt_warn_for_bkp
{
public:
  explicit Init_MachRemind_ad4_drvr_belt_warn_for_bkp(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_lan_chg_sod_sec ad4_drvr_belt_warn_for_bkp(::deva_function_msgs::msg::MachRemind::_ad4_drvr_belt_warn_for_bkp_type arg)
  {
    msg_.ad4_drvr_belt_warn_for_bkp = std::move(arg);
    return Init_MachRemind_asy_lan_chg_sod_sec(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_noa_takeover_sod
{
public:
  explicit Init_MachRemind_asy_noa_takeover_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad4_drvr_belt_warn_for_bkp asy_noa_takeover_sod(::deva_function_msgs::msg::MachRemind::_asy_noa_takeover_sod_type arg)
  {
    msg_.asy_noa_takeover_sod = std::move(arg);
    return Init_MachRemind_ad4_drvr_belt_warn_for_bkp(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad4_drvr_belt_warn
{
public:
  explicit Init_MachRemind_ad4_drvr_belt_warn(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_noa_takeover_sod ad4_drvr_belt_warn(::deva_function_msgs::msg::MachRemind::_ad4_drvr_belt_warn_type arg)
  {
    msg_.ad4_drvr_belt_warn = std::move(arg);
    return Init_MachRemind_asy_noa_takeover_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_noa_remind_sod
{
public:
  explicit Init_MachRemind_asy_noa_remind_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad4_drvr_belt_warn asy_noa_remind_sod(::deva_function_msgs::msg::MachRemind::_asy_noa_remind_sod_type arg)
  {
    msg_.asy_noa_remind_sod = std::move(arg);
    return Init_MachRemind_ad4_drvr_belt_warn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_noa_deactvd_reasn_sod
{
public:
  explicit Init_MachRemind_asy_noa_deactvd_reasn_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_noa_remind_sod asy_noa_deactvd_reasn_sod(::deva_function_msgs::msg::MachRemind::_asy_noa_deactvd_reasn_sod_type arg)
  {
    msg_.asy_noa_deactvd_reasn_sod = std::move(arg);
    return Init_MachRemind_asy_noa_remind_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_req_lane_chg
{
public:
  explicit Init_MachRemind_asy_req_lane_chg(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_noa_deactvd_reasn_sod asy_req_lane_chg(::deva_function_msgs::msg::MachRemind::_asy_req_lane_chg_type arg)
  {
    msg_.asy_req_lane_chg = std::move(arg);
    return Init_MachRemind_asy_noa_deactvd_reasn_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_lane_chg_fail_type
{
public:
  explicit Init_MachRemind_asy_lane_chg_fail_type(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_req_lane_chg asy_lane_chg_fail_type(::deva_function_msgs::msg::MachRemind::_asy_lane_chg_fail_type_type arg)
  {
    msg_.asy_lane_chg_fail_type = std::move(arg);
    return Init_MachRemind_asy_req_lane_chg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_d2d_remind_sod
{
public:
  explicit Init_MachRemind_asy_d2d_remind_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_lane_chg_fail_type asy_d2d_remind_sod(::deva_function_msgs::msg::MachRemind::_asy_d2d_remind_sod_type arg)
  {
    msg_.asy_d2d_remind_sod = std::move(arg);
    return Init_MachRemind_asy_lane_chg_fail_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_d2d_strt_to_end_sod
{
public:
  explicit Init_MachRemind_asy_d2d_strt_to_end_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_d2d_remind_sod asy_d2d_strt_to_end_sod(::deva_function_msgs::msg::MachRemind::_asy_d2d_strt_to_end_sod_type arg)
  {
    msg_.asy_d2d_strt_to_end_sod = std::move(arg);
    return Init_MachRemind_asy_d2d_remind_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_d2d_distan_sod
{
public:
  explicit Init_MachRemind_asy_d2d_distan_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_d2d_strt_to_end_sod asy_d2d_distan_sod(::deva_function_msgs::msg::MachRemind::_asy_d2d_distan_sod_type arg)
  {
    msg_.asy_d2d_distan_sod = std::move(arg);
    return Init_MachRemind_asy_d2d_strt_to_end_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_d2d_etc_distan_sod
{
public:
  explicit Init_MachRemind_asy_d2d_etc_distan_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_d2d_distan_sod asy_d2d_etc_distan_sod(::deva_function_msgs::msg::MachRemind::_asy_d2d_etc_distan_sod_type arg)
  {
    msg_.asy_d2d_etc_distan_sod = std::move(arg);
    return Init_MachRemind_asy_d2d_distan_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_d2d_deactvd_reasn_sod
{
public:
  explicit Init_MachRemind_asy_d2d_deactvd_reasn_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_d2d_etc_distan_sod asy_d2d_deactvd_reasn_sod(::deva_function_msgs::msg::MachRemind::_asy_d2d_deactvd_reasn_sod_type arg)
  {
    msg_.asy_d2d_deactvd_reasn_sod = std::move(arg);
    return Init_MachRemind_asy_d2d_etc_distan_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_d2d_avl_rmn_sod
{
public:
  explicit Init_MachRemind_asy_d2d_avl_rmn_sod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_d2d_deactvd_reasn_sod asy_d2d_avl_rmn_sod(::deva_function_msgs::msg::MachRemind::_asy_d2d_avl_rmn_sod_type arg)
  {
    msg_.asy_d2d_avl_rmn_sod = std::move(arg);
    return Init_MachRemind_asy_d2d_deactvd_reasn_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_crs_sts_swil_indcr
{
public:
  explicit Init_MachRemind_asy_crs_sts_swil_indcr(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_d2d_avl_rmn_sod asy_crs_sts_swil_indcr(::deva_function_msgs::msg::MachRemind::_asy_crs_sts_swil_indcr_type arg)
  {
    msg_.asy_crs_sts_swil_indcr = std::move(arg);
    return Init_MachRemind_asy_d2d_avl_rmn_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_avl_prompt
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_avl_prompt(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_crs_sts_swil_indcr asy_cnoa_crs_avl_prompt(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_avl_prompt_type arg)
  {
    msg_.asy_cnoa_crs_avl_prompt = std::move(arg);
    return Init_MachRemind_asy_crs_sts_swil_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_horn_warn_rqrd
{
public:
  explicit Init_MachRemind_asy_horn_warn_rqrd(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_crs_avl_prompt asy_horn_warn_rqrd(::deva_function_msgs::msg::MachRemind::_asy_horn_warn_rqrd_type arg)
  {
    msg_.asy_horn_warn_rqrd = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_avl_prompt(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_drv_off_mod
{
public:
  explicit Init_MachRemind_drv_off_mod(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_horn_warn_rqrd drv_off_mod(::deva_function_msgs::msg::MachRemind::_drv_off_mod_type arg)
  {
    msg_.drv_off_mod = std::move(arg);
    return Init_MachRemind_asy_horn_warn_rqrd(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
{
public:
  explicit Init_MachRemind_hmi_auto_lane_chg_sts_for_asy_ai_asist_audio(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_drv_off_mod hmi_auto_lane_chg_sts_for_asy_ai_asist_audio(::deva_function_msgs::msg::MachRemind::_hmi_auto_lane_chg_sts_for_asy_ai_asist_audio_type arg)
  {
    msg_.hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = std::move(arg);
    return Init_MachRemind_drv_off_mod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_ad4_horn_warn
{
public:
  explicit Init_MachRemind_ad4_horn_warn(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_hmi_auto_lane_chg_sts_for_asy_ai_asist_audio ad4_horn_warn(::deva_function_msgs::msg::MachRemind::_ad4_horn_warn_type arg)
  {
    msg_.ad4_horn_warn = std::move(arg);
    return Init_MachRemind_hmi_auto_lane_chg_sts_for_asy_ai_asist_audio(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_drv_off_warn
{
public:
  explicit Init_MachRemind_drv_off_warn(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_ad4_horn_warn drv_off_warn(::deva_function_msgs::msg::MachRemind::_drv_off_warn_type arg)
  {
    msg_.drv_off_warn = std::move(arg);
    return Init_MachRemind_ad4_horn_warn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_too_many_cars
{
public:
  explicit Init_MachRemind_too_many_cars(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_drv_off_warn too_many_cars(::deva_function_msgs::msg::MachRemind::_too_many_cars_type arg)
  {
    msg_.too_many_cars = std::move(arg);
    return Init_MachRemind_drv_off_warn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_avl_sts_for_long_aut_drv
{
public:
  explicit Init_MachRemind_avl_sts_for_long_aut_drv(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_too_many_cars avl_sts_for_long_aut_drv(::deva_function_msgs::msg::MachRemind::_avl_sts_for_long_aut_drv_type arg)
  {
    msg_.avl_sts_for_long_aut_drv = std::move(arg);
    return Init_MachRemind_too_many_cars(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_warn_sod_for_aut_drv
{
public:
  explicit Init_MachRemind_asy_warn_sod_for_aut_drv(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_avl_sts_for_long_aut_drv asy_warn_sod_for_aut_drv(::deva_function_msgs::msg::MachRemind::_asy_warn_sod_for_aut_drv_type arg)
  {
    msg_.asy_warn_sod_for_aut_drv = std::move(arg);
    return Init_MachRemind_avl_sts_for_long_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_undertak_rmind_sound
{
public:
  explicit Init_MachRemind_asy_undertak_rmind_sound(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_warn_sod_for_aut_drv asy_undertak_rmind_sound(::deva_function_msgs::msg::MachRemind::_asy_undertak_rmind_sound_type arg)
  {
    msg_.asy_undertak_rmind_sound = std::move(arg);
    return Init_MachRemind_asy_warn_sod_for_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_drvr_sod_cfirm_cnoa_main_page
{
public:
  explicit Init_MachRemind_asy_drvr_sod_cfirm_cnoa_main_page(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_undertak_rmind_sound asy_drvr_sod_cfirm_cnoa_main_page(::deva_function_msgs::msg::MachRemind::_asy_drvr_sod_cfirm_cnoa_main_page_type arg)
  {
    msg_.asy_drvr_sod_cfirm_cnoa_main_page = std::move(arg);
    return Init_MachRemind_asy_undertak_rmind_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_dece_remind_sound
{
public:
  explicit Init_MachRemind_asy_dece_remind_sound(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_drvr_sod_cfirm_cnoa_main_page asy_dece_remind_sound(::deva_function_msgs::msg::MachRemind::_asy_dece_remind_sound_type arg)
  {
    msg_.asy_dece_remind_sound = std::move(arg);
    return Init_MachRemind_asy_drvr_sod_cfirm_cnoa_main_page(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_takeover_warn_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_takeover_warn_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_dece_remind_sound asy_cnoa_takeover_warn_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_takeover_warn_voice_type arg)
  {
    msg_.asy_cnoa_takeover_warn_voice = std::move(arg);
    return Init_MachRemind_asy_dece_remind_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_noa_avl_rmn_sound
{
public:
  explicit Init_MachRemind_asy_noa_avl_rmn_sound(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_takeover_warn_voice asy_noa_avl_rmn_sound(::deva_function_msgs::msg::MachRemind::_asy_noa_avl_rmn_sound_type arg)
  {
    msg_.asy_noa_avl_rmn_sound = std::move(arg);
    return Init_MachRemind_asy_cnoa_takeover_warn_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_lrng_abort_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_lrng_abort_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_noa_avl_rmn_sound asy_cnoa_lrng_abort_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_lrng_abort_voice_type arg)
  {
    msg_.asy_cnoa_lrng_abort_voice = std::move(arg);
    return Init_MachRemind_asy_noa_avl_rmn_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_hands_off_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_hands_off_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_lrng_abort_voice asy_cnoa_hands_off_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_hands_off_voice_type arg)
  {
    msg_.asy_cnoa_hands_off_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_lrng_abort_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_rmn_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_rmn_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_hands_off_voice asy_cnoa_crs_rmn_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_rmn_voice_type arg)
  {
    msg_.asy_cnoa_crs_rmn_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_hands_off_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_offs_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_offs_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_crs_rmn_voice asy_cnoa_crs_offs_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_offs_voice_type arg)
  {
    msg_.asy_cnoa_crs_offs_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_rmn_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_finshd_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_finshd_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_crs_offs_voice asy_cnoa_crs_finshd_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_finshd_voice_type arg)
  {
    msg_.asy_cnoa_crs_finshd_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_offs_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_deactvd_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_deactvd_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_crs_finshd_voice asy_cnoa_crs_deactvd_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_deactvd_voice_type arg)
  {
    msg_.asy_cnoa_crs_deactvd_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_finshd_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_actv_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_actv_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_crs_deactvd_voice asy_cnoa_crs_actv_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_actv_voice_type arg)
  {
    msg_.asy_cnoa_crs_actv_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_deactvd_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_cross_intsec_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_cross_intsec_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_crs_actv_voice asy_cnoa_crs_cross_intsec_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_cross_intsec_voice_type arg)
  {
    msg_.asy_cnoa_crs_cross_intsec_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_actv_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_asy_cnoa_crs_actv_faild_voice
{
public:
  explicit Init_MachRemind_asy_cnoa_crs_actv_faild_voice(::deva_function_msgs::msg::MachRemind & msg)
  : msg_(msg)
  {}
  Init_MachRemind_asy_cnoa_crs_cross_intsec_voice asy_cnoa_crs_actv_faild_voice(::deva_function_msgs::msg::MachRemind::_asy_cnoa_crs_actv_faild_voice_type arg)
  {
    msg_.asy_cnoa_crs_actv_faild_voice = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_cross_intsec_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

class Init_MachRemind_header
{
public:
  Init_MachRemind_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachRemind_asy_cnoa_crs_actv_faild_voice header(::deva_function_msgs::msg::MachRemind::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachRemind_asy_cnoa_crs_actv_faild_voice(msg_);
  }

private:
  ::deva_function_msgs::msg::MachRemind msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::MachRemind>()
{
  return deva_function_msgs::msg::builder::Init_MachRemind_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_REMIND__BUILDER_HPP_
