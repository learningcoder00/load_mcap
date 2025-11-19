// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/bus_to_sm_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_BusToSmData_indcr_sts
{
public:
  explicit Init_BusToSmData_indcr_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::BusToSmData indcr_sts(::deva_function_msgs::msg::BusToSmData::_indcr_sts_type arg)
  {
    msg_.indcr_sts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_asy_cnoa_crs_sts
{
public:
  explicit Init_BusToSmData_asy_cnoa_crs_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_indcr_sts asy_cnoa_crs_sts(::deva_function_msgs::msg::BusToSmData::_asy_cnoa_crs_sts_type arg)
  {
    msg_.asy_cnoa_crs_sts = std::move(arg);
    return Init_BusToSmData_indcr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_asy_a_lat_indcr
{
public:
  explicit Init_BusToSmData_asy_a_lat_indcr(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_asy_cnoa_crs_sts asy_a_lat_indcr(::deva_function_msgs::msg::BusToSmData::_asy_a_lat_indcr_type arg)
  {
    msg_.asy_a_lat_indcr = std::move(arg);
    return Init_BusToSmData_asy_cnoa_crs_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_asy_a_lgt_sts_asy_a_lgt_sts
{
public:
  explicit Init_BusToSmData_asy_a_lgt_sts_asy_a_lgt_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_asy_a_lat_indcr asy_a_lgt_sts_asy_a_lgt_sts(::deva_function_msgs::msg::BusToSmData::_asy_a_lgt_sts_asy_a_lgt_sts_type arg)
  {
    msg_.asy_a_lgt_sts_asy_a_lgt_sts = std::move(arg);
    return Init_BusToSmData_asy_a_lat_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_rcwm_brk_req_rcwm_brk_req
{
public:
  explicit Init_BusToSmData_rcwm_brk_req_rcwm_brk_req(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_asy_a_lgt_sts_asy_a_lgt_sts rcwm_brk_req_rcwm_brk_req(::deva_function_msgs::msg::BusToSmData::_rcwm_brk_req_rcwm_brk_req_type arg)
  {
    msg_.rcwm_brk_req_rcwm_brk_req = std::move(arg);
    return Init_BusToSmData_asy_a_lgt_sts_asy_a_lgt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_asy_lane_keep_aid_sts
{
public:
  explicit Init_BusToSmData_asy_lane_keep_aid_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_rcwm_brk_req_rcwm_brk_req asy_lane_keep_aid_sts(::deva_function_msgs::msg::BusToSmData::_asy_lane_keep_aid_sts_type arg)
  {
    msg_.asy_lane_keep_aid_sts = std::move(arg);
    return Init_BusToSmData_rcwm_brk_req_rcwm_brk_req(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_asy_emgy_lane_keep_aid_sts
{
public:
  explicit Init_BusToSmData_asy_emgy_lane_keep_aid_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_asy_lane_keep_aid_sts asy_emgy_lane_keep_aid_sts(::deva_function_msgs::msg::BusToSmData::_asy_emgy_lane_keep_aid_sts_type arg)
  {
    msg_.asy_emgy_lane_keep_aid_sts = std::move(arg);
    return Init_BusToSmData_asy_lane_keep_aid_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_steer_tq_addl_for_ema_steer_tq_addl_for_ema
{
public:
  explicit Init_BusToSmData_steer_tq_addl_for_ema_steer_tq_addl_for_ema(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_asy_emgy_lane_keep_aid_sts steer_tq_addl_for_ema_steer_tq_addl_for_ema(::deva_function_msgs::msg::BusToSmData::_steer_tq_addl_for_ema_steer_tq_addl_for_ema_type arg)
  {
    msg_.steer_tq_addl_for_ema_steer_tq_addl_for_ema = std::move(arg);
    return Init_BusToSmData_asy_emgy_lane_keep_aid_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_sfty_decel_group_safe_asy_sfty_ena_decel
{
public:
  explicit Init_BusToSmData_sfty_decel_group_safe_asy_sfty_ena_decel(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_steer_tq_addl_for_ema_steer_tq_addl_for_ema sfty_decel_group_safe_asy_sfty_ena_decel(::deva_function_msgs::msg::BusToSmData::_sfty_decel_group_safe_asy_sfty_ena_decel_type arg)
  {
    msg_.sfty_decel_group_safe_asy_sfty_ena_decel = std::move(arg);
    return Init_BusToSmData_steer_tq_addl_for_ema_steer_tq_addl_for_ema(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_tank_turn_mod_sts_tank_turn_mod_sts
{
public:
  explicit Init_BusToSmData_tank_turn_mod_sts_tank_turn_mod_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_sfty_decel_group_safe_asy_sfty_ena_decel tank_turn_mod_sts_tank_turn_mod_sts(::deva_function_msgs::msg::BusToSmData::_tank_turn_mod_sts_tank_turn_mod_sts_type arg)
  {
    msg_.tank_turn_mod_sts_tank_turn_mod_sts = std::move(arg);
    return Init_BusToSmData_sfty_decel_group_safe_asy_sfty_ena_decel(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_brk_sys_sts_brk_sys_mod_cfmd
{
public:
  explicit Init_BusToSmData_brk_sys_sts_brk_sys_mod_cfmd(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_tank_turn_mod_sts_tank_turn_mod_sts brk_sys_sts_brk_sys_mod_cfmd(::deva_function_msgs::msg::BusToSmData::_brk_sys_sts_brk_sys_mod_cfmd_type arg)
  {
    msg_.brk_sys_sts_brk_sys_mod_cfmd = std::move(arg);
    return Init_BusToSmData_tank_turn_mod_sts_tank_turn_mod_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_brk_sys_sts_brk_degradation
{
public:
  explicit Init_BusToSmData_brk_sys_sts_brk_degradation(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_brk_sys_sts_brk_sys_mod_cfmd brk_sys_sts_brk_degradation(::deva_function_msgs::msg::BusToSmData::_brk_sys_sts_brk_degradation_type arg)
  {
    msg_.brk_sys_sts_brk_degradation = std::move(arg);
    return Init_BusToSmData_brk_sys_sts_brk_sys_mod_cfmd(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_brk_sys_sts_ad_l3_brk_fall_bck
{
public:
  explicit Init_BusToSmData_brk_sys_sts_ad_l3_brk_fall_bck(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_brk_sys_sts_brk_degradation brk_sys_sts_ad_l3_brk_fall_bck(::deva_function_msgs::msg::BusToSmData::_brk_sys_sts_ad_l3_brk_fall_bck_type arg)
  {
    msg_.brk_sys_sts_ad_l3_brk_fall_bck = std::move(arg);
    return Init_BusToSmData_brk_sys_sts_brk_degradation(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_win_posn_sts_at_re_ri
{
public:
  explicit Init_BusToSmData_win_posn_sts_at_re_ri(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_brk_sys_sts_ad_l3_brk_fall_bck win_posn_sts_at_re_ri(::deva_function_msgs::msg::BusToSmData::_win_posn_sts_at_re_ri_type arg)
  {
    msg_.win_posn_sts_at_re_ri = std::move(arg);
    return Init_BusToSmData_brk_sys_sts_ad_l3_brk_fall_bck(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_win_posn_sts_at_re_le
{
public:
  explicit Init_BusToSmData_win_posn_sts_at_re_le(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_win_posn_sts_at_re_ri win_posn_sts_at_re_le(::deva_function_msgs::msg::BusToSmData::_win_posn_sts_at_re_le_type arg)
  {
    msg_.win_posn_sts_at_re_le = std::move(arg);
    return Init_BusToSmData_win_posn_sts_at_re_ri(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_win_posn_sts_at_pass
{
public:
  explicit Init_BusToSmData_win_posn_sts_at_pass(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_win_posn_sts_at_re_le win_posn_sts_at_pass(::deva_function_msgs::msg::BusToSmData::_win_posn_sts_at_pass_type arg)
  {
    msg_.win_posn_sts_at_pass = std::move(arg);
    return Init_BusToSmData_win_posn_sts_at_re_le(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_win_posn_sts_at_drvr
{
public:
  explicit Init_BusToSmData_win_posn_sts_at_drvr(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_win_posn_sts_at_pass win_posn_sts_at_drvr(::deva_function_msgs::msg::BusToSmData::_win_posn_sts_at_drvr_type arg)
  {
    msg_.win_posn_sts_at_drvr = std::move(arg);
    return Init_BusToSmData_win_posn_sts_at_pass(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_twli_bri_raw_twli_bri_raw
{
public:
  explicit Init_BusToSmData_twli_bri_raw_twli_bri_raw(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_win_posn_sts_at_drvr twli_bri_raw_twli_bri_raw(::deva_function_msgs::msg::BusToSmData::_twli_bri_raw_twli_bri_raw_type arg)
  {
    msg_.twli_bri_raw_twli_bri_raw = std::move(arg);
    return Init_BusToSmData_win_posn_sts_at_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_twli_bri_raw_qf
{
public:
  explicit Init_BusToSmData_twli_bri_raw_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_twli_bri_raw_twli_bri_raw twli_bri_raw_qf(::deva_function_msgs::msg::BusToSmData::_twli_bri_raw_qf_type arg)
  {
    msg_.twli_bri_raw_qf = std::move(arg);
    return Init_BusToSmData_twli_bri_raw_twli_bri_raw(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
{
public:
  explicit Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_twli_bri_raw_qf susp_posn_vert_ri1_susp_posn_vert_ri_re_qf(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_ri1_susp_posn_vert_ri_re_qf_type arg)
  {
    msg_.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = std::move(arg);
    return Init_BusToSmData_twli_bri_raw_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re
{
public:
  explicit Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re_qf susp_posn_vert_ri1_susp_posn_vert_ri_re(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_ri1_susp_posn_vert_ri_re_type arg)
  {
    msg_.susp_posn_vert_ri1_susp_posn_vert_ri_re = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
{
public:
  explicit Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf_type arg)
  {
    msg_.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_re(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt
{
public:
  explicit Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf susp_posn_vert_ri1_susp_posn_vert_ri_frnt(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_ri1_susp_posn_vert_ri_frnt_type arg)
  {
    msg_.susp_posn_vert_ri1_susp_posn_vert_ri_frnt = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_le1_re_qf
{
public:
  explicit Init_BusToSmData_susp_posn_vert_le1_re_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt susp_posn_vert_le1_re_qf(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_le1_re_qf_type arg)
  {
    msg_.susp_posn_vert_le1_re_qf = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_ri1_susp_posn_vert_ri_frnt(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_le1_re
{
public:
  explicit Init_BusToSmData_susp_posn_vert_le1_re(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_le1_re_qf susp_posn_vert_le1_re(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_le1_re_type arg)
  {
    msg_.susp_posn_vert_le1_re = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_le1_re_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_le1_frnt_qf
{
public:
  explicit Init_BusToSmData_susp_posn_vert_le1_frnt_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_le1_re susp_posn_vert_le1_frnt_qf(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_le1_frnt_qf_type arg)
  {
    msg_.susp_posn_vert_le1_frnt_qf = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_le1_re(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_susp_posn_vert_le1_frnt
{
public:
  explicit Init_BusToSmData_susp_posn_vert_le1_frnt(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_le1_frnt_qf susp_posn_vert_le1_frnt(::deva_function_msgs::msg::BusToSmData::_susp_posn_vert_le1_frnt_type arg)
  {
    msg_.susp_posn_vert_le1_frnt = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_le1_frnt_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_sun_roof_posn_sts
{
public:
  explicit Init_BusToSmData_sun_roof_posn_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_susp_posn_vert_le1_frnt sun_roof_posn_sts(::deva_function_msgs::msg::BusToSmData::_sun_roof_posn_sts_type arg)
  {
    msg_.sun_roof_posn_sts = std::move(arg);
    return Init_BusToSmData_susp_posn_vert_le1_frnt(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_occupy_mon_sts_drvr_sts
{
public:
  explicit Init_BusToSmData_occupy_mon_sts_drvr_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_sun_roof_posn_sts occupy_mon_sts_drvr_sts(::deva_function_msgs::msg::BusToSmData::_occupy_mon_sts_drvr_sts_type arg)
  {
    msg_.occupy_mon_sts_drvr_sts = std::move(arg);
    return Init_BusToSmData_sun_roof_posn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_tire_fillg_assi_p_sts
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_occupy_mon_sts_drvr_sts ri_re_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_tire_fillg_assi_p_sts_type arg)
  {
    msg_.ri_re_tire_msg_tire_fillg_assi_p_sts = std::move(arg);
    return Init_BusToSmData_occupy_mon_sts_drvr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_t_warn_flg
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_tire_fillg_assi_p_sts ri_re_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_t_warn_flg_type arg)
  {
    msg_.ri_re_tire_msg_t_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_tire_fillg_assi_p_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_t
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_t(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_t_warn_flg ri_re_tire_msg_t(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_t_type arg)
  {
    msg_.ri_re_tire_msg_t = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_t_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_sys_warn_flg
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_t ri_re_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_sys_warn_flg_type arg)
  {
    msg_.ri_re_tire_msg_sys_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_t(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_p
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_p(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_sys_warn_flg ri_re_tire_msg_p(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_p_type arg)
  {
    msg_.ri_re_tire_msg_p = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_sys_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_msg_old_flg
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_p ri_re_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_msg_old_flg_type arg)
  {
    msg_.ri_re_tire_msg_msg_old_flg = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_p(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_fast_lose_warn_flg
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_msg_old_flg ri_re_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_fast_lose_warn_flg_type arg)
  {
    msg_.ri_re_tire_msg_fast_lose_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_msg_old_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_batt_lo_st
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_fast_lose_warn_flg ri_re_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_batt_lo_st_type arg)
  {
    msg_.ri_re_tire_msg_batt_lo_st = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_fast_lose_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_tire_fillg_assi_p_sts
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_batt_lo_st ri_frnt_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_tire_fillg_assi_p_sts_type arg)
  {
    msg_.ri_frnt_tire_msg_tire_fillg_assi_p_sts = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_batt_lo_st(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_t_warn_flg
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_tire_fillg_assi_p_sts ri_frnt_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_t_warn_flg_type arg)
  {
    msg_.ri_frnt_tire_msg_t_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_tire_fillg_assi_p_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_t
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_t(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_t_warn_flg ri_frnt_tire_msg_t(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_t_type arg)
  {
    msg_.ri_frnt_tire_msg_t = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_t_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_sys_warn_flg
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_t ri_frnt_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_sys_warn_flg_type arg)
  {
    msg_.ri_frnt_tire_msg_sys_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_t(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_p
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_p(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_sys_warn_flg ri_frnt_tire_msg_p(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_p_type arg)
  {
    msg_.ri_frnt_tire_msg_p = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_sys_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_msg_old_flg
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_p ri_frnt_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_msg_old_flg_type arg)
  {
    msg_.ri_frnt_tire_msg_msg_old_flg = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_p(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_fast_lose_warn_flg
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_msg_old_flg ri_frnt_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_fast_lose_warn_flg_type arg)
  {
    msg_.ri_frnt_tire_msg_fast_lose_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_msg_old_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_batt_lo_st
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_fast_lose_warn_flg ri_frnt_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_batt_lo_st_type arg)
  {
    msg_.ri_frnt_tire_msg_batt_lo_st = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_fast_lose_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_tire_fillg_assi_p_sts
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_batt_lo_st le_re_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_tire_fillg_assi_p_sts_type arg)
  {
    msg_.le_re_tire_msg_tire_fillg_assi_p_sts = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_batt_lo_st(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_t_warn_flg
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_tire_fillg_assi_p_sts le_re_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_t_warn_flg_type arg)
  {
    msg_.le_re_tire_msg_t_warn_flg = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_tire_fillg_assi_p_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_t
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_t(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_t_warn_flg le_re_tire_msg_t(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_t_type arg)
  {
    msg_.le_re_tire_msg_t = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_t_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_sys_warn_flg
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_t le_re_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_sys_warn_flg_type arg)
  {
    msg_.le_re_tire_msg_sys_warn_flg = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_t(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_p
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_p(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_sys_warn_flg le_re_tire_msg_p(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_p_type arg)
  {
    msg_.le_re_tire_msg_p = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_sys_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_msg_old_flg
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_p le_re_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_msg_old_flg_type arg)
  {
    msg_.le_re_tire_msg_msg_old_flg = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_p(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_fast_lose_warn_flg
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_msg_old_flg le_re_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_fast_lose_warn_flg_type arg)
  {
    msg_.le_re_tire_msg_fast_lose_warn_flg = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_msg_old_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_batt_lo_st
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_fast_lose_warn_flg le_re_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_batt_lo_st_type arg)
  {
    msg_.le_re_tire_msg_batt_lo_st = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_fast_lose_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_tire_fillg_assi_p_sts
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_batt_lo_st le_frnt_tire_msg_tire_fillg_assi_p_sts(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_tire_fillg_assi_p_sts_type arg)
  {
    msg_.le_frnt_tire_msg_tire_fillg_assi_p_sts = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_batt_lo_st(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_t_warn_flg
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_tire_fillg_assi_p_sts le_frnt_tire_msg_t_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_t_warn_flg_type arg)
  {
    msg_.le_frnt_tire_msg_t_warn_flg = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_tire_fillg_assi_p_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_t
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_t(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_t_warn_flg le_frnt_tire_msg_t(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_t_type arg)
  {
    msg_.le_frnt_tire_msg_t = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_t_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_sys_warn_flg
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_t le_frnt_tire_msg_sys_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_sys_warn_flg_type arg)
  {
    msg_.le_frnt_tire_msg_sys_warn_flg = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_t(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_p
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_p(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_sys_warn_flg le_frnt_tire_msg_p(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_p_type arg)
  {
    msg_.le_frnt_tire_msg_p = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_sys_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_msg_old_flg
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_p le_frnt_tire_msg_msg_old_flg(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_msg_old_flg_type arg)
  {
    msg_.le_frnt_tire_msg_msg_old_flg = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_p(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_fast_lose_warn_flg
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_msg_old_flg le_frnt_tire_msg_fast_lose_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_fast_lose_warn_flg_type arg)
  {
    msg_.le_frnt_tire_msg_fast_lose_warn_flg = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_msg_old_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_batt_lo_st
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_fast_lose_warn_flg le_frnt_tire_msg_batt_lo_st(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_batt_lo_st_type arg)
  {
    msg_.le_frnt_tire_msg_batt_lo_st = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_fast_lose_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_body_hei
{
public:
  explicit Init_BusToSmData_body_hei(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_batt_lo_st body_hei(::deva_function_msgs::msg::BusToSmData::_body_hei_type arg)
  {
    msg_.body_hei = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_batt_lo_st(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_amb_t_raw_amb_t_val
{
public:
  explicit Init_BusToSmData_amb_t_raw_amb_t_val(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_body_hei amb_t_raw_amb_t_val(::deva_function_msgs::msg::BusToSmData::_amb_t_raw_amb_t_val_type arg)
  {
    msg_.amb_t_raw_amb_t_val = std::move(arg);
    return Init_BusToSmData_body_hei(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_accr_pedl_sts_flt_sts
{
public:
  explicit Init_BusToSmData_accr_pedl_sts_flt_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_amb_t_raw_amb_t_val accr_pedl_sts_flt_sts(::deva_function_msgs::msg::BusToSmData::_accr_pedl_sts_flt_sts_type arg)
  {
    msg_.accr_pedl_sts_flt_sts = std::move(arg);
    return Init_BusToSmData_amb_t_raw_amb_t_val(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ad_l3_lgt_ctrl_sts_ad_mod
{
public:
  explicit Init_BusToSmData_ad_l3_lgt_ctrl_sts_ad_mod(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_accr_pedl_sts_flt_sts ad_l3_lgt_ctrl_sts_ad_mod(::deva_function_msgs::msg::BusToSmData::_ad_l3_lgt_ctrl_sts_ad_mod_type arg)
  {
    msg_.ad_l3_lgt_ctrl_sts_ad_mod = std::move(arg);
    return Init_BusToSmData_accr_pedl_sts_flt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ad_l3_lat_ctrl_sts_ad_mod
{
public:
  explicit Init_BusToSmData_ad_l3_lat_ctrl_sts_ad_mod(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ad_l3_lgt_ctrl_sts_ad_mod ad_l3_lat_ctrl_sts_ad_mod(::deva_function_msgs::msg::BusToSmData::_ad_l3_lat_ctrl_sts_ad_mod_type arg)
  {
    msg_.ad_l3_lat_ctrl_sts_ad_mod = std::move(arg);
    return Init_BusToSmData_ad_l3_lgt_ctrl_sts_ad_mod(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_drvr_seat_snsr_sts
{
public:
  explicit Init_BusToSmData_drvr_seat_snsr_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ad_l3_lat_ctrl_sts_ad_mod drvr_seat_snsr_sts(::deva_function_msgs::msg::BusToSmData::_drvr_seat_snsr_sts_type arg)
  {
    msg_.drvr_seat_snsr_sts = std::move(arg);
    return Init_BusToSmData_ad_l3_lat_ctrl_sts_ad_mod(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_drvr_seat_sts
{
public:
  explicit Init_BusToSmData_drvr_seat_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_drvr_seat_snsr_sts drvr_seat_sts(::deva_function_msgs::msg::BusToSmData::_drvr_seat_sts_type arg)
  {
    msg_.drvr_seat_sts = std::move(arg);
    return Init_BusToSmData_drvr_seat_snsr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_gear_park_not_allow
{
public:
  explicit Init_BusToSmData_gear_park_not_allow(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_drvr_seat_sts gear_park_not_allow(::deva_function_msgs::msg::BusToSmData::_gear_park_not_allow_type arg)
  {
    msg_.gear_park_not_allow = std::move(arg);
    return Init_BusToSmData_drvr_seat_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_crash_sts_safe_sts
{
public:
  explicit Init_BusToSmData_crash_sts_safe_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_gear_park_not_allow crash_sts_safe_sts(::deva_function_msgs::msg::BusToSmData::_crash_sts_safe_sts_type arg)
  {
    msg_.crash_sts_safe_sts = std::move(arg);
    return Init_BusToSmData_gear_park_not_allow(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_hmi_sup_end_mod
{
public:
  explicit Init_BusToSmData_hmi_sup_end_mod(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_crash_sts_safe_sts hmi_sup_end_mod(::deva_function_msgs::msg::BusToSmData::_hmi_sup_end_mod_type arg)
  {
    msg_.hmi_sup_end_mod = std::move(arg);
    return Init_BusToSmData_crash_sts_safe_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_asy_safe_stop_sts
{
public:
  explicit Init_BusToSmData_asy_safe_stop_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_hmi_sup_end_mod asy_safe_stop_sts(::deva_function_msgs::msg::BusToSmData::_asy_safe_stop_sts_type arg)
  {
    msg_.asy_safe_stop_sts = std::move(arg);
    return Init_BusToSmData_hmi_sup_end_mod(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_wipg_spd_info
{
public:
  explicit Init_BusToSmData_wipg_spd_info(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_asy_safe_stop_sts wipg_spd_info(::deva_function_msgs::msg::BusToSmData::_wipg_spd_info_type arg)
  {
    msg_.wipg_spd_info = std::move(arg);
    return Init_BusToSmData_asy_safe_stop_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_nop_cofm_of_lan_chag_onoff
{
public:
  explicit Init_BusToSmData_nop_cofm_of_lan_chag_onoff(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_wipg_spd_info nop_cofm_of_lan_chag_onoff(::deva_function_msgs::msg::BusToSmData::_nop_cofm_of_lan_chag_onoff_type arg)
  {
    msg_.nop_cofm_of_lan_chag_onoff = std::move(arg);
    return Init_BusToSmData_wipg_spd_info(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_auto_lane_chg_with_navi_sw_onoff
{
public:
  explicit Init_BusToSmData_auto_lane_chg_with_navi_sw_onoff(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_nop_cofm_of_lan_chag_onoff auto_lane_chg_with_navi_sw_onoff(::deva_function_msgs::msg::BusToSmData::_auto_lane_chg_with_navi_sw_onoff_type arg)
  {
    msg_.auto_lane_chg_with_navi_sw_onoff = std::move(arg);
    return Init_BusToSmData_nop_cofm_of_lan_chag_onoff(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_drvr_lane_chg_aut_actv_sts
{
public:
  explicit Init_BusToSmData_drvr_lane_chg_aut_actv_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_auto_lane_chg_with_navi_sw_onoff drvr_lane_chg_aut_actv_sts(::deva_function_msgs::msg::BusToSmData::_drvr_lane_chg_aut_actv_sts_type arg)
  {
    msg_.drvr_lane_chg_aut_actv_sts = std::move(arg);
    return Init_BusToSmData_auto_lane_chg_with_navi_sw_onoff(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_turn_indcr_monostable
{
public:
  explicit Init_BusToSmData_turn_indcr_monostable(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_drvr_lane_chg_aut_actv_sts turn_indcr_monostable(::deva_function_msgs::msg::BusToSmData::_turn_indcr_monostable_type arg)
  {
    msg_.turn_indcr_monostable = std::move(arg);
    return Init_BusToSmData_drvr_lane_chg_aut_actv_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_hmi_drvr_sod_req_chg
{
public:
  explicit Init_BusToSmData_hmi_drvr_sod_req_chg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_turn_indcr_monostable hmi_drvr_sod_req_chg(::deva_function_msgs::msg::BusToSmData::_hmi_drvr_sod_req_chg_type arg)
  {
    msg_.hmi_drvr_sod_req_chg = std::move(arg);
    return Init_BusToSmData_turn_indcr_monostable(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_hmi_sod_lan_chg_switch
{
public:
  explicit Init_BusToSmData_hmi_sod_lan_chg_switch(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_hmi_drvr_sod_req_chg hmi_sod_lan_chg_switch(::deva_function_msgs::msg::BusToSmData::_hmi_sod_lan_chg_switch_type arg)
  {
    msg_.hmi_sod_lan_chg_switch = std::move(arg);
    return Init_BusToSmData_hmi_drvr_sod_req_chg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_tptf_time_gap
{
public:
  explicit Init_BusToSmData_tptf_time_gap(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_hmi_sod_lan_chg_switch tptf_time_gap(::deva_function_msgs::msg::BusToSmData::_tptf_time_gap_type arg)
  {
    msg_.tptf_time_gap = std::move(arg);
    return Init_BusToSmData_hmi_sod_lan_chg_switch(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_tptf_status
{
public:
  explicit Init_BusToSmData_tptf_status(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_tptf_time_gap tptf_status(::deva_function_msgs::msg::BusToSmData::_tptf_status_type arg)
  {
    msg_.tptf_status = std::move(arg);
    return Init_BusToSmData_tptf_time_gap(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_tptf_status_error
{
public:
  explicit Init_BusToSmData_tptf_status_error(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_tptf_status tptf_status_error(::deva_function_msgs::msg::BusToSmData::_tptf_status_error_type arg)
  {
    msg_.tptf_status_error = std::move(arg);
    return Init_BusToSmData_tptf_status(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_pt_drvr_setg
{
public:
  explicit Init_BusToSmData_pt_drvr_setg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_tptf_status_error pt_drvr_setg(::deva_function_msgs::msg::BusToSmData::_pt_drvr_setg_type arg)
  {
    msg_.pt_drvr_setg = std::move(arg);
    return Init_BusToSmData_tptf_status_error(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_stand_still_mgr_sts_for_hld
{
public:
  explicit Init_BusToSmData_stand_still_mgr_sts_for_hld(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_pt_drvr_setg stand_still_mgr_sts_for_hld(::deva_function_msgs::msg::BusToSmData::_stand_still_mgr_sts_for_hld_type arg)
  {
    msg_.stand_still_mgr_sts_for_hld = std::move(arg);
    return Init_BusToSmData_pt_drvr_setg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_wipr_actv
{
public:
  explicit Init_BusToSmData_wipr_actv(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_stand_still_mgr_sts_for_hld wipr_actv(::deva_function_msgs::msg::BusToSmData::_wipr_actv_type arg)
  {
    msg_.wipr_actv = std::move(arg);
    return Init_BusToSmData_stand_still_mgr_sts_for_hld(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_drvr_prsnt_sts
{
public:
  explicit Init_BusToSmData_drvr_prsnt_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_wipr_actv drvr_prsnt_sts(::deva_function_msgs::msg::BusToSmData::_drvr_prsnt_sts_type arg)
  {
    msg_.drvr_prsnt_sts = std::move(arg);
    return Init_BusToSmData_wipr_actv(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_front_four_d_radar_sts_for_dim
{
public:
  explicit Init_BusToSmData_front_four_d_radar_sts_for_dim(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_drvr_prsnt_sts front_four_d_radar_sts_for_dim(::deva_function_msgs::msg::BusToSmData::_front_four_d_radar_sts_for_dim_type arg)
  {
    msg_.front_four_d_radar_sts_for_dim = std::move(arg);
    return Init_BusToSmData_drvr_prsnt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_pt_drvr_setg_drv_mod_req
{
public:
  explicit Init_BusToSmData_pt_drvr_setg_drv_mod_req(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_front_four_d_radar_sts_for_dim pt_drvr_setg_drv_mod_req(::deva_function_msgs::msg::BusToSmData::_pt_drvr_setg_drv_mod_req_type arg)
  {
    msg_.pt_drvr_setg_drv_mod_req = std::move(arg);
    return Init_BusToSmData_front_four_d_radar_sts_for_dim(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_esc_ctrl_indcn
{
public:
  explicit Init_BusToSmData_esc_ctrl_indcn(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_pt_drvr_setg_drv_mod_req esc_ctrl_indcn(::deva_function_msgs::msg::BusToSmData::_esc_ctrl_indcn_type arg)
  {
    msg_.esc_ctrl_indcn = std::move(arg);
    return Init_BusToSmData_pt_drvr_setg_drv_mod_req(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_lat_ctrl_mod_cfmd
{
public:
  explicit Init_BusToSmData_lat_ctrl_mod_cfmd(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_esc_ctrl_indcn lat_ctrl_mod_cfmd(::deva_function_msgs::msg::BusToSmData::_lat_ctrl_mod_cfmd_type arg)
  {
    msg_.lat_ctrl_mod_cfmd = std::move(arg);
    return Init_BusToSmData_esc_ctrl_indcn(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_drvr_sts_with_fac_qly_fac_qly
{
public:
  explicit Init_BusToSmData_door_drvr_sts_with_fac_qly_fac_qly(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_lat_ctrl_mod_cfmd door_drvr_sts_with_fac_qly_fac_qly(::deva_function_msgs::msg::BusToSmData::_door_drvr_sts_with_fac_qly_fac_qly_type arg)
  {
    msg_.door_drvr_sts_with_fac_qly_fac_qly = std::move(arg);
    return Init_BusToSmData_lat_ctrl_mod_cfmd(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_drvr_sts_with_fac_qly_door_sts
{
public:
  explicit Init_BusToSmData_door_drvr_sts_with_fac_qly_door_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_drvr_sts_with_fac_qly_fac_qly door_drvr_sts_with_fac_qly_door_sts(::deva_function_msgs::msg::BusToSmData::_door_drvr_sts_with_fac_qly_door_sts_type arg)
  {
    msg_.door_drvr_sts_with_fac_qly_door_sts = std::move(arg);
    return Init_BusToSmData_door_drvr_sts_with_fac_qly_fac_qly(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_drvr_steer_whl_hld_qly
{
public:
  explicit Init_BusToSmData_drvr_steer_whl_hld_qly(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_drvr_sts_with_fac_qly_door_sts drvr_steer_whl_hld_qly(::deva_function_msgs::msg::BusToSmData::_drvr_steer_whl_hld_qly_type arg)
  {
    msg_.drvr_steer_whl_hld_qly = std::move(arg);
    return Init_BusToSmData_door_drvr_sts_with_fac_qly_door_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
{
public:
  explicit Init_BusToSmData_veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_drvr_steer_whl_hld_qly veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai(::deva_function_msgs::msg::BusToSmData::_veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai_type arg)
  {
    msg_.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = std::move(arg);
    return Init_BusToSmData_drvr_steer_whl_hld_qly(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_crs_ctrl_ovrdn
{
public:
  explicit Init_BusToSmData_crs_ctrl_ovrdn(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai crs_ctrl_ovrdn(::deva_function_msgs::msg::BusToSmData::_crs_ctrl_ovrdn_type arg)
  {
    msg_.crs_ctrl_ovrdn = std::move(arg);
    return Init_BusToSmData_veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_eng_st1_wd_sts_eng_st1_wd_sts
{
public:
  explicit Init_BusToSmData_eng_st1_wd_sts_eng_st1_wd_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_crs_ctrl_ovrdn eng_st1_wd_sts_eng_st1_wd_sts(::deva_function_msgs::msg::BusToSmData::_eng_st1_wd_sts_eng_st1_wd_sts_type arg)
  {
    msg_.eng_st1_wd_sts_eng_st1_wd_sts = std::move(arg);
    return Init_BusToSmData_crs_ctrl_ovrdn(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_abs_ctrl_actv_ctrl_sts1
{
public:
  explicit Init_BusToSmData_abs_ctrl_actv_ctrl_sts1(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_eng_st1_wd_sts_eng_st1_wd_sts abs_ctrl_actv_ctrl_sts1(::deva_function_msgs::msg::BusToSmData::_abs_ctrl_actv_ctrl_sts1_type arg)
  {
    msg_.abs_ctrl_actv_ctrl_sts1 = std::move(arg);
    return Init_BusToSmData_eng_st1_wd_sts_eng_st1_wd_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_esc_warn_indcn_req_esc_warn_indcn_req
{
public:
  explicit Init_BusToSmData_esc_warn_indcn_req_esc_warn_indcn_req(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_abs_ctrl_actv_ctrl_sts1 esc_warn_indcn_req_esc_warn_indcn_req(::deva_function_msgs::msg::BusToSmData::_esc_warn_indcn_req_esc_warn_indcn_req_type arg)
  {
    msg_.esc_warn_indcn_req_esc_warn_indcn_req = std::move(arg);
    return Init_BusToSmData_abs_ctrl_actv_ctrl_sts1(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_msg_req_by_hill_dwn_ctrl
{
public:
  explicit Init_BusToSmData_msg_req_by_hill_dwn_ctrl(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_esc_warn_indcn_req_esc_warn_indcn_req msg_req_by_hill_dwn_ctrl(::deva_function_msgs::msg::BusToSmData::_msg_req_by_hill_dwn_ctrl_type arg)
  {
    msg_.msg_req_by_hill_dwn_ctrl = std::move(arg);
    return Init_BusToSmData_esc_warn_indcn_req_esc_warn_indcn_req(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
{
public:
  explicit Init_BusToSmData_ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_msg_req_by_hill_dwn_ctrl ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn(::deva_function_msgs::msg::BusToSmData::_ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn_type arg)
  {
    msg_.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = std::move(arg);
    return Init_BusToSmData_msg_req_by_hill_dwn_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_lamp_req_by_veh_hld
{
public:
  explicit Init_BusToSmData_lamp_req_by_veh_hld(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn lamp_req_by_veh_hld(::deva_function_msgs::msg::BusToSmData::_lamp_req_by_veh_hld_type arg)
  {
    msg_.lamp_req_by_veh_hld = std::move(arg);
    return Init_BusToSmData_ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_adcu_max_ev_mod
{
public:
  explicit Init_BusToSmData_adcu_max_ev_mod(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_lamp_req_by_veh_hld adcu_max_ev_mod(::deva_function_msgs::msg::BusToSmData::_adcu_max_ev_mod_type arg)
  {
    msg_.adcu_max_ev_mod = std::move(arg);
    return Init_BusToSmData_lamp_req_by_veh_hld(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_hmi_max_ev_mod
{
public:
  explicit Init_BusToSmData_hmi_max_ev_mod(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_adcu_max_ev_mod hmi_max_ev_mod(::deva_function_msgs::msg::BusToSmData::_hmi_max_ev_mod_type arg)
  {
    msg_.hmi_max_ev_mod = std::move(arg);
    return Init_BusToSmData_adcu_max_ev_mod(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_pass_seat_sts2
{
public:
  explicit Init_BusToSmData_pass_seat_sts2(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_hmi_max_ev_mod pass_seat_sts2(::deva_function_msgs::msg::BusToSmData::_pass_seat_sts2_type arg)
  {
    msg_.pass_seat_sts2 = std::move(arg);
    return Init_BusToSmData_hmi_max_ev_mod(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_tank_turn_mod_sts
{
public:
  explicit Init_BusToSmData_tank_turn_mod_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_pass_seat_sts2 tank_turn_mod_sts(::deva_function_msgs::msg::BusToSmData::_tank_turn_mod_sts_type arg)
  {
    msg_.tank_turn_mod_sts = std::move(arg);
    return Init_BusToSmData_pass_seat_sts2(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_crab_mov_mod_sts
{
public:
  explicit Init_BusToSmData_crab_mov_mod_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_tank_turn_mod_sts crab_mov_mod_sts(::deva_function_msgs::msg::BusToSmData::_crab_mov_mod_sts_type arg)
  {
    msg_.crab_mov_mod_sts = std::move(arg);
    return Init_BusToSmData_tank_turn_mod_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_mob_dev_rpa_req_mob_dev_sts
{
public:
  explicit Init_BusToSmData_mob_dev_rpa_req_mob_dev_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_crab_mov_mod_sts mob_dev_rpa_req_mob_dev_sts(::deva_function_msgs::msg::BusToSmData::_mob_dev_rpa_req_mob_dev_sts_type arg)
  {
    msg_.mob_dev_rpa_req_mob_dev_sts = std::move(arg);
    return Init_BusToSmData_crab_mov_mod_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_mob_dev_rpa_req_rpa_out_mode_sub_t
{
public:
  explicit Init_BusToSmData_mob_dev_rpa_req_rpa_out_mode_sub_t(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_mob_dev_rpa_req_mob_dev_sts mob_dev_rpa_req_rpa_out_mode_sub_t(::deva_function_msgs::msg::BusToSmData::_mob_dev_rpa_req_rpa_out_mode_sub_t_type arg)
  {
    msg_.mob_dev_rpa_req_rpa_out_mode_sub_t = std::move(arg);
    return Init_BusToSmData_mob_dev_rpa_req_mob_dev_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_mob_dev_rpa_req_rpa_req
{
public:
  explicit Init_BusToSmData_mob_dev_rpa_req_rpa_req(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_mob_dev_rpa_req_rpa_out_mode_sub_t mob_dev_rpa_req_rpa_req(::deva_function_msgs::msg::BusToSmData::_mob_dev_rpa_req_rpa_req_type arg)
  {
    msg_.mob_dev_rpa_req_rpa_req = std::move(arg);
    return Init_BusToSmData_mob_dev_rpa_req_rpa_out_mode_sub_t(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_mob_dev_rpa_req_rspa_ctrl
{
public:
  explicit Init_BusToSmData_mob_dev_rpa_req_rspa_ctrl(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_mob_dev_rpa_req_rpa_req mob_dev_rpa_req_rspa_ctrl(::deva_function_msgs::msg::BusToSmData::_mob_dev_rpa_req_rspa_ctrl_type arg)
  {
    msg_.mob_dev_rpa_req_rspa_ctrl = std::move(arg);
    return Init_BusToSmData_mob_dev_rpa_req_rpa_req(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_key_read_sts_to_asm
{
public:
  explicit Init_BusToSmData_key_read_sts_to_asm(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_mob_dev_rpa_req_rspa_ctrl key_read_sts_to_asm(::deva_function_msgs::msg::BusToSmData::_key_read_sts_to_asm_type arg)
  {
    msg_.key_read_sts_to_asm = std::move(arg);
    return Init_BusToSmData_mob_dev_rpa_req_rspa_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_vtsd_mode_sts
{
public:
  explicit Init_BusToSmData_vtsd_mode_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_key_read_sts_to_asm vtsd_mode_sts(::deva_function_msgs::msg::BusToSmData::_vtsd_mode_sts_type arg)
  {
    msg_.vtsd_mode_sts = std::move(arg);
    return Init_BusToSmData_key_read_sts_to_asm(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_full_elec_twbr_posn
{
public:
  explicit Init_BusToSmData_full_elec_twbr_posn(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_vtsd_mode_sts full_elec_twbr_posn(::deva_function_msgs::msg::BusToSmData::_full_elec_twbr_posn_type arg)
  {
    msg_.full_elec_twbr_posn = std::move(arg);
    return Init_BusToSmData_vtsd_mode_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_twbr_lockd_posn
{
public:
  explicit Init_BusToSmData_twbr_lockd_posn(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_full_elec_twbr_posn twbr_lockd_posn(::deva_function_msgs::msg::BusToSmData::_twbr_lockd_posn_type arg)
  {
    msg_.twbr_lockd_posn = std::move(arg);
    return Init_BusToSmData_full_elec_twbr_posn(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ble_con_sts
{
public:
  explicit Init_BusToSmData_ble_con_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_twbr_lockd_posn ble_con_sts(::deva_function_msgs::msg::BusToSmData::_ble_con_sts_type arg)
  {
    msg_.ble_con_sts = std::move(arg);
    return Init_BusToSmData_twbr_lockd_posn(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_steer_whl_snsr_ag
{
public:
  explicit Init_BusToSmData_steer_whl_snsr_ag(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ble_con_sts steer_whl_snsr_ag(::deva_function_msgs::msg::BusToSmData::_steer_whl_snsr_ag_type arg)
  {
    msg_.steer_whl_snsr_ag = std::move(arg);
    return Init_BusToSmData_ble_con_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_dc_dc_actvd
{
public:
  explicit Init_BusToSmData_dc_dc_actvd(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_steer_whl_snsr_ag dc_dc_actvd(::deva_function_msgs::msg::BusToSmData::_dc_dc_actvd_type arg)
  {
    msg_.dc_dc_actvd = std::move(arg);
    return Init_BusToSmData_steer_whl_snsr_ag(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_mob_dev_rcv_req1_mob_dev_sts
{
public:
  explicit Init_BusToSmData_mob_dev_rcv_req1_mob_dev_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_dc_dc_actvd mob_dev_rcv_req1_mob_dev_sts(::deva_function_msgs::msg::BusToSmData::_mob_dev_rcv_req1_mob_dev_sts_type arg)
  {
    msg_.mob_dev_rcv_req1_mob_dev_sts = std::move(arg);
    return Init_BusToSmData_dc_dc_actvd(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_rcv_steertrim_req
{
public:
  explicit Init_BusToSmData_rcv_steertrim_req(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_mob_dev_rcv_req1_mob_dev_sts rcv_steertrim_req(::deva_function_msgs::msg::BusToSmData::_rcv_steertrim_req_type arg)
  {
    msg_.rcv_steertrim_req = std::move(arg);
    return Init_BusToSmData_mob_dev_rcv_req1_mob_dev_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_rcv_ctrl_req
{
public:
  explicit Init_BusToSmData_rcv_ctrl_req(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_rcv_steertrim_req rcv_ctrl_req(::deva_function_msgs::msg::BusToSmData::_rcv_ctrl_req_type arg)
  {
    msg_.rcv_ctrl_req = std::move(arg);
    return Init_BusToSmData_rcv_steertrim_req(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_sm_lon_shake_hand_state
{
public:
  explicit Init_BusToSmData_sm_lon_shake_hand_state(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_rcv_ctrl_req sm_lon_shake_hand_state(::deva_function_msgs::msg::BusToSmData::_sm_lon_shake_hand_state_type arg)
  {
    msg_.sm_lon_shake_hand_state = std::move(arg);
    return Init_BusToSmData_rcv_ctrl_req(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_sm_lat_shake_hand_state
{
public:
  explicit Init_BusToSmData_sm_lat_shake_hand_state(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_sm_lon_shake_hand_state sm_lat_shake_hand_state(::deva_function_msgs::msg::BusToSmData::_sm_lat_shake_hand_state_type arg)
  {
    msg_.sm_lat_shake_hand_state = std::move(arg);
    return Init_BusToSmData_sm_lon_shake_hand_state(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_re_tire_msg_p_warn_flg
{
public:
  explicit Init_BusToSmData_ri_re_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_sm_lat_shake_hand_state ri_re_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_re_tire_msg_p_warn_flg_type arg)
  {
    msg_.ri_re_tire_msg_p_warn_flg = std::move(arg);
    return Init_BusToSmData_sm_lat_shake_hand_state(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_ri_frnt_tire_msg_p_warn_flg
{
public:
  explicit Init_BusToSmData_ri_frnt_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_re_tire_msg_p_warn_flg ri_frnt_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData::_ri_frnt_tire_msg_p_warn_flg_type arg)
  {
    msg_.ri_frnt_tire_msg_p_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_re_tire_msg_p_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_re_tire_msg_p_warn_flg
{
public:
  explicit Init_BusToSmData_le_re_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_ri_frnt_tire_msg_p_warn_flg le_re_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_re_tire_msg_p_warn_flg_type arg)
  {
    msg_.le_re_tire_msg_p_warn_flg = std::move(arg);
    return Init_BusToSmData_ri_frnt_tire_msg_p_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_le_frnt_tire_msg_p_warn_flg
{
public:
  explicit Init_BusToSmData_le_frnt_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_re_tire_msg_p_warn_flg le_frnt_tire_msg_p_warn_flg(::deva_function_msgs::msg::BusToSmData::_le_frnt_tire_msg_p_warn_flg_type arg)
  {
    msg_.le_frnt_tire_msg_p_warn_flg = std::move(arg);
    return Init_BusToSmData_le_re_tire_msg_p_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_egy_lvl_elec_mai
{
public:
  explicit Init_BusToSmData_egy_lvl_elec_mai(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_le_frnt_tire_msg_p_warn_flg egy_lvl_elec_mai(::deva_function_msgs::msg::BusToSmData::_egy_lvl_elec_mai_type arg)
  {
    msg_.egy_lvl_elec_mai = std::move(arg);
    return Init_BusToSmData_le_frnt_tire_msg_p_warn_flg(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_rainfall_amnt
{
public:
  explicit Init_BusToSmData_rainfall_amnt(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_egy_lvl_elec_mai rainfall_amnt(::deva_function_msgs::msg::BusToSmData::_rainfall_amnt_type arg)
  {
    msg_.rainfall_amnt = std::move(arg);
    return Init_BusToSmData_egy_lvl_elec_mai(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_indcr_typ_ext_req
{
public:
  explicit Init_BusToSmData_indcr_typ_ext_req(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_rainfall_amnt indcr_typ_ext_req(::deva_function_msgs::msg::BusToSmData::_indcr_typ_ext_req_type arg)
  {
    msg_.indcr_typ_ext_req = std::move(arg);
    return Init_BusToSmData_rainfall_amnt(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_steer_sts_to_park_assi
{
public:
  explicit Init_BusToSmData_steer_sts_to_park_assi(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_indcr_typ_ext_req steer_sts_to_park_assi(::deva_function_msgs::msg::BusToSmData::_steer_sts_to_park_assi_type arg)
  {
    msg_.steer_sts_to_park_assi = std::move(arg);
    return Init_BusToSmData_indcr_typ_ext_req(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_veh_mod_mngt_glb_safe1_usg_mod_sts
{
public:
  explicit Init_BusToSmData_veh_mod_mngt_glb_safe1_usg_mod_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_steer_sts_to_park_assi veh_mod_mngt_glb_safe1_usg_mod_sts(::deva_function_msgs::msg::BusToSmData::_veh_mod_mngt_glb_safe1_usg_mod_sts_type arg)
  {
    msg_.veh_mod_mngt_glb_safe1_usg_mod_sts = std::move(arg);
    return Init_BusToSmData_steer_sts_to_park_assi(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_veh_mod_mngt_glb_safe1_car_mod_sts1
{
public:
  explicit Init_BusToSmData_veh_mod_mngt_glb_safe1_car_mod_sts1(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_veh_mod_mngt_glb_safe1_usg_mod_sts veh_mod_mngt_glb_safe1_car_mod_sts1(::deva_function_msgs::msg::BusToSmData::_veh_mod_mngt_glb_safe1_car_mod_sts1_type arg)
  {
    msg_.veh_mod_mngt_glb_safe1_car_mod_sts1 = std::move(arg);
    return Init_BusToSmData_veh_mod_mngt_glb_safe1_usg_mod_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_trlr_prsnt
{
public:
  explicit Init_BusToSmData_trlr_prsnt(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_veh_mod_mngt_glb_safe1_car_mod_sts1 trlr_prsnt(::deva_function_msgs::msg::BusToSmData::_trlr_prsnt_type arg)
  {
    msg_.trlr_prsnt = std::move(arg);
    return Init_BusToSmData_veh_mod_mngt_glb_safe1_car_mod_sts1(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_tr_sts
{
public:
  explicit Init_BusToSmData_tr_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_trlr_prsnt tr_sts(::deva_function_msgs::msg::BusToSmData::_tr_sts_type arg)
  {
    msg_.tr_sts = std::move(arg);
    return Init_BusToSmData_trlr_prsnt(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_mirr_fold_sts_at_pass
{
public:
  explicit Init_BusToSmData_mirr_fold_sts_at_pass(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_tr_sts mirr_fold_sts_at_pass(::deva_function_msgs::msg::BusToSmData::_mirr_fold_sts_at_pass_type arg)
  {
    msg_.mirr_fold_sts_at_pass = std::move(arg);
    return Init_BusToSmData_tr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_mirr_fold_sts_at_drvr
{
public:
  explicit Init_BusToSmData_mirr_fold_sts_at_drvr(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_mirr_fold_sts_at_pass mirr_fold_sts_at_drvr(::deva_function_msgs::msg::BusToSmData::_mirr_fold_sts_at_drvr_type arg)
  {
    msg_.mirr_fold_sts_at_drvr = std::move(arg);
    return Init_BusToSmData_mirr_fold_sts_at_pass(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_hood_sts
{
public:
  explicit Init_BusToSmData_hood_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_mirr_fold_sts_at_drvr hood_sts(::deva_function_msgs::msg::BusToSmData::_hood_sts_type arg)
  {
    msg_.hood_sts = std::move(arg);
    return Init_BusToSmData_mirr_fold_sts_at_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_ri_re_sts
{
public:
  explicit Init_BusToSmData_door_ri_re_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_hood_sts door_ri_re_sts(::deva_function_msgs::msg::BusToSmData::_door_ri_re_sts_type arg)
  {
    msg_.door_ri_re_sts = std::move(arg);
    return Init_BusToSmData_hood_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_pass_sts
{
public:
  explicit Init_BusToSmData_door_pass_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_ri_re_sts door_pass_sts(::deva_function_msgs::msg::BusToSmData::_door_pass_sts_type arg)
  {
    msg_.door_pass_sts = std::move(arg);
    return Init_BusToSmData_door_ri_re_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_le_re_sts
{
public:
  explicit Init_BusToSmData_door_le_re_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_pass_sts door_le_re_sts(::deva_function_msgs::msg::BusToSmData::_door_le_re_sts_type arg)
  {
    msg_.door_le_re_sts = std::move(arg);
    return Init_BusToSmData_door_pass_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_drvr_sts
{
public:
  explicit Init_BusToSmData_door_drvr_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_le_re_sts door_drvr_sts(::deva_function_msgs::msg::BusToSmData::_door_drvr_sts_type arg)
  {
    msg_.door_drvr_sts = std::move(arg);
    return Init_BusToSmData_door_le_re_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_trsm_park_lockd
{
public:
  explicit Init_BusToSmData_trsm_park_lockd(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_drvr_sts trsm_park_lockd(::deva_function_msgs::msg::BusToSmData::_trsm_park_lockd_type arg)
  {
    msg_.trsm_park_lockd = std::move(arg);
    return Init_BusToSmData_door_drvr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_typ_ext_req_to_upd_qf
{
public:
  explicit Init_BusToSmData_typ_ext_req_to_upd_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_trsm_park_lockd typ_ext_req_to_upd_qf(::deva_function_msgs::msg::BusToSmData::_typ_ext_req_to_upd_qf_type arg)
  {
    msg_.typ_ext_req_to_upd_qf = std::move(arg);
    return Init_BusToSmData_trsm_park_lockd(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_accr_pedl_psd_sts
{
public:
  explicit Init_BusToSmData_accr_pedl_psd_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_typ_ext_req_to_upd_qf accr_pedl_psd_sts(::deva_function_msgs::msg::BusToSmData::_accr_pedl_psd_sts_type arg)
  {
    msg_.accr_pedl_psd_sts = std::move(arg);
    return Init_BusToSmData_typ_ext_req_to_upd_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_accr_pedl_psd_accr_pedl_psd
{
public:
  explicit Init_BusToSmData_accr_pedl_psd_accr_pedl_psd(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_accr_pedl_psd_sts accr_pedl_psd_accr_pedl_psd(::deva_function_msgs::msg::BusToSmData::_accr_pedl_psd_accr_pedl_psd_type arg)
  {
    msg_.accr_pedl_psd_accr_pedl_psd = std::move(arg);
    return Init_BusToSmData_accr_pedl_psd_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_gear_mov
{
public:
  explicit Init_BusToSmData_gear_mov(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_accr_pedl_psd_accr_pedl_psd gear_mov(::deva_function_msgs::msg::BusToSmData::_gear_mov_type arg)
  {
    msg_.gear_mov = std::move(arg);
    return Init_BusToSmData_accr_pedl_psd_accr_pedl_psd(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_whl_spd_circuml_re_ri_qf
{
public:
  explicit Init_BusToSmData_whl_spd_circuml_re_ri_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_gear_mov whl_spd_circuml_re_ri_qf(::deva_function_msgs::msg::BusToSmData::_whl_spd_circuml_re_ri_qf_type arg)
  {
    msg_.whl_spd_circuml_re_ri_qf = std::move(arg);
    return Init_BusToSmData_gear_mov(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_whl_spd_circuml_re_le_qf
{
public:
  explicit Init_BusToSmData_whl_spd_circuml_re_le_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_whl_spd_circuml_re_ri_qf whl_spd_circuml_re_le_qf(::deva_function_msgs::msg::BusToSmData::_whl_spd_circuml_re_le_qf_type arg)
  {
    msg_.whl_spd_circuml_re_le_qf = std::move(arg);
    return Init_BusToSmData_whl_spd_circuml_re_ri_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_whl_spd_circuml_frnt_ri_qf
{
public:
  explicit Init_BusToSmData_whl_spd_circuml_frnt_ri_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_whl_spd_circuml_re_le_qf whl_spd_circuml_frnt_ri_qf(::deva_function_msgs::msg::BusToSmData::_whl_spd_circuml_frnt_ri_qf_type arg)
  {
    msg_.whl_spd_circuml_frnt_ri_qf = std::move(arg);
    return Init_BusToSmData_whl_spd_circuml_re_le_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_whl_spd_circuml_frnt_le_qf
{
public:
  explicit Init_BusToSmData_whl_spd_circuml_frnt_le_qf(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_whl_spd_circuml_frnt_ri_qf whl_spd_circuml_frnt_le_qf(::deva_function_msgs::msg::BusToSmData::_whl_spd_circuml_frnt_le_qf_type arg)
  {
    msg_.whl_spd_circuml_frnt_le_qf = std::move(arg);
    return Init_BusToSmData_whl_spd_circuml_frnt_ri_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_veh_mtn_st
{
public:
  explicit Init_BusToSmData_veh_mtn_st(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_whl_spd_circuml_frnt_le_qf veh_mtn_st(::deva_function_msgs::msg::BusToSmData::_veh_mtn_st_type arg)
  {
    msg_.veh_mtn_st = std::move(arg);
    return Init_BusToSmData_whl_spd_circuml_frnt_le_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_road_incln_qly
{
public:
  explicit Init_BusToSmData_road_incln_qly(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_veh_mtn_st road_incln_qly(::deva_function_msgs::msg::BusToSmData::_road_incln_qly_type arg)
  {
    msg_.road_incln_qly = std::move(arg);
    return Init_BusToSmData_veh_mtn_st(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_prk_lat_lgt_failr
{
public:
  explicit Init_BusToSmData_prk_lat_lgt_failr(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_road_incln_qly prk_lat_lgt_failr(::deva_function_msgs::msg::BusToSmData::_prk_lat_lgt_failr_type arg)
  {
    msg_.prk_lat_lgt_failr = std::move(arg);
    return Init_BusToSmData_road_incln_qly(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_esc_st_esc_st
{
public:
  explicit Init_BusToSmData_esc_st_esc_st(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_prk_lat_lgt_failr esc_st_esc_st(::deva_function_msgs::msg::BusToSmData::_esc_st_esc_st_type arg)
  {
    msg_.esc_st_esc_st = std::move(arg);
    return Init_BusToSmData_prk_lat_lgt_failr(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_blt_lock_st_err_sts_at_drvr
{
public:
  explicit Init_BusToSmData_blt_lock_st_err_sts_at_drvr(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_esc_st_esc_st blt_lock_st_err_sts_at_drvr(::deva_function_msgs::msg::BusToSmData::_blt_lock_st_err_sts_at_drvr_type arg)
  {
    msg_.blt_lock_st_err_sts_at_drvr = std::move(arg);
    return Init_BusToSmData_esc_st_esc_st(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_blt_lock_st_at_drvr
{
public:
  explicit Init_BusToSmData_blt_lock_st_at_drvr(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_blt_lock_st_err_sts_at_drvr blt_lock_st_at_drvr(::deva_function_msgs::msg::BusToSmData::_blt_lock_st_at_drvr_type arg)
  {
    msg_.blt_lock_st_at_drvr = std::move(arg);
    return Init_BusToSmData_blt_lock_st_err_sts_at_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_calltype_and_sts_ecall_status
{
public:
  explicit Init_BusToSmData_calltype_and_sts_ecall_status(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_blt_lock_st_at_drvr calltype_and_sts_ecall_status(::deva_function_msgs::msg::BusToSmData::_calltype_and_sts_ecall_status_type arg)
  {
    msg_.calltype_and_sts_ecall_status = std::move(arg);
    return Init_BusToSmData_blt_lock_st_at_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_rev
{
public:
  explicit Init_BusToSmData_rev(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_calltype_and_sts_ecall_status rev(::deva_function_msgs::msg::BusToSmData::_rev_type arg)
  {
    msg_.rev = std::move(arg);
    return Init_BusToSmData_calltype_and_sts_ecall_status(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_brk_sys_sts_brk_sys_capability
{
public:
  explicit Init_BusToSmData_brk_sys_sts_brk_sys_capability(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_rev brk_sys_sts_brk_sys_capability(::deva_function_msgs::msg::BusToSmData::_brk_sys_sts_brk_sys_capability_type arg)
  {
    msg_.brk_sys_sts_brk_sys_capability = std::move(arg);
    return Init_BusToSmData_rev(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_ri_re_lock_sts
{
public:
  explicit Init_BusToSmData_door_ri_re_lock_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_brk_sys_sts_brk_sys_capability door_ri_re_lock_sts(::deva_function_msgs::msg::BusToSmData::_door_ri_re_lock_sts_type arg)
  {
    msg_.door_ri_re_lock_sts = std::move(arg);
    return Init_BusToSmData_brk_sys_sts_brk_sys_capability(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_le_re_lock_sts
{
public:
  explicit Init_BusToSmData_door_le_re_lock_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_ri_re_lock_sts door_le_re_lock_sts(::deva_function_msgs::msg::BusToSmData::_door_le_re_lock_sts_type arg)
  {
    msg_.door_le_re_lock_sts = std::move(arg);
    return Init_BusToSmData_door_ri_re_lock_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_pass_lock_sts
{
public:
  explicit Init_BusToSmData_door_pass_lock_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_le_re_lock_sts door_pass_lock_sts(::deva_function_msgs::msg::BusToSmData::_door_pass_lock_sts_type arg)
  {
    msg_.door_pass_lock_sts = std::move(arg);
    return Init_BusToSmData_door_le_re_lock_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_door_drvr_lock_sts
{
public:
  explicit Init_BusToSmData_door_drvr_lock_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_pass_lock_sts door_drvr_lock_sts(::deva_function_msgs::msg::BusToSmData::_door_drvr_lock_sts_type arg)
  {
    msg_.door_drvr_lock_sts = std::move(arg);
    return Init_BusToSmData_door_pass_lock_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_tr_lock_sts
{
public:
  explicit Init_BusToSmData_tr_lock_sts(::deva_function_msgs::msg::BusToSmData & msg)
  : msg_(msg)
  {}
  Init_BusToSmData_door_drvr_lock_sts tr_lock_sts(::deva_function_msgs::msg::BusToSmData::_tr_lock_sts_type arg)
  {
    msg_.tr_lock_sts = std::move(arg);
    return Init_BusToSmData_door_drvr_lock_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

class Init_BusToSmData_header
{
public:
  Init_BusToSmData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BusToSmData_tr_lock_sts header(::deva_function_msgs::msg::BusToSmData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BusToSmData_tr_lock_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::BusToSmData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::BusToSmData>()
{
  return deva_function_msgs::msg::builder::Init_BusToSmData_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__BUILDER_HPP_
