// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/StateMachineData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/state_machine_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_StateMachineData_fill_light_req
{
public:
  explicit Init_StateMachineData_fill_light_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::StateMachineData fill_light_req(::deva_function_msgs::msg::StateMachineData::_fill_light_req_type arg)
  {
    msg_.fill_light_req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_lo_spd_and_trk_bck_sub_sts
{
public:
  explicit Init_StateMachineData_lo_spd_and_trk_bck_sub_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_fill_light_req lo_spd_and_trk_bck_sub_sts(::deva_function_msgs::msg::StateMachineData::_lo_spd_and_trk_bck_sub_sts_type arg)
  {
    msg_.lo_spd_and_trk_bck_sub_sts = std::move(arg);
    return Init_StateMachineData_fill_light_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_peb_version
{
public:
  explicit Init_StateMachineData_peb_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_lo_spd_and_trk_bck_sub_sts peb_version(::deva_function_msgs::msg::StateMachineData::_peb_version_type arg)
  {
    msg_.peb_version = std::move(arg);
    return Init_StateMachineData_lo_spd_and_trk_bck_sub_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_mai_version
{
public:
  explicit Init_StateMachineData_mai_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_peb_version mai_version(::deva_function_msgs::msg::StateMachineData::_mai_version_type arg)
  {
    msg_.mai_version = std::move(arg);
    return Init_StateMachineData_peb_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_frnt_and_re_prkg_in_btn_sts
{
public:
  explicit Init_StateMachineData_frnt_and_re_prkg_in_btn_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_mai_version frnt_and_re_prkg_in_btn_sts(::deva_function_msgs::msg::StateMachineData::_frnt_and_re_prkg_in_btn_sts_type arg)
  {
    msg_.frnt_and_re_prkg_in_btn_sts = std::move(arg);
    return Init_StateMachineData_mai_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_exit_cust_btn_sts
{
public:
  explicit Init_StateMachineData_exit_cust_btn_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_frnt_and_re_prkg_in_btn_sts exit_cust_btn_sts(::deva_function_msgs::msg::StateMachineData::_exit_cust_btn_sts_type arg)
  {
    msg_.exit_cust_btn_sts = std::move(arg);
    return Init_StateMachineData_frnt_and_re_prkg_in_btn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_cust_btn_sts
{
public:
  explicit Init_StateMachineData_cust_btn_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_exit_cust_btn_sts cust_btn_sts(::deva_function_msgs::msg::StateMachineData::_cust_btn_sts_type arg)
  {
    msg_.cust_btn_sts = std::move(arg);
    return Init_StateMachineData_exit_cust_btn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_view_layout_req
{
public:
  explicit Init_StateMachineData_view_layout_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_cust_btn_sts view_layout_req(::deva_function_msgs::msg::StateMachineData::_view_layout_req_type arg)
  {
    msg_.view_layout_req = std::move(arg);
    return Init_StateMachineData_cust_btn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_fct_err_code2_hmi
{
public:
  explicit Init_StateMachineData_sm_fct_err_code2_hmi(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_view_layout_req sm_fct_err_code2_hmi(::deva_function_msgs::msg::StateMachineData::_sm_fct_err_code2_hmi_type arg)
  {
    msg_.sm_fct_err_code2_hmi = std::move(arg);
    return Init_StateMachineData_view_layout_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_dpa_btn_sts
{
public:
  explicit Init_StateMachineData_dpa_btn_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_fct_err_code2_hmi dpa_btn_sts(::deva_function_msgs::msg::StateMachineData::_dpa_btn_sts_type arg)
  {
    msg_.dpa_btn_sts = std::move(arg);
    return Init_StateMachineData_sm_fct_err_code2_hmi(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_dpa_mode_broadcast
{
public:
  explicit Init_StateMachineData_dpa_mode_broadcast(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_dpa_btn_sts dpa_mode_broadcast(::deva_function_msgs::msg::StateMachineData::_dpa_mode_broadcast_type arg)
  {
    msg_.dpa_mode_broadcast = std::move(arg);
    return Init_StateMachineData_dpa_btn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_rev
{
public:
  explicit Init_StateMachineData_rev(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_dpa_mode_broadcast rev(::deva_function_msgs::msg::StateMachineData::_rev_type arg)
  {
    msg_.rev = std::move(arg);
    return Init_StateMachineData_dpa_mode_broadcast(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_camera_store_resp
{
public:
  explicit Init_StateMachineData_prkg_camera_store_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_rev prkg_camera_store_resp(::deva_function_msgs::msg::StateMachineData::_prkg_camera_store_resp_type arg)
  {
    msg_.prkg_camera_store_resp = std::move(arg);
    return Init_StateMachineData_rev(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_smfault_level
{
public:
  explicit Init_StateMachineData_smfault_level(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_camera_store_resp smfault_level(::deva_function_msgs::msg::StateMachineData::_smfault_level_type arg)
  {
    msg_.smfault_level = std::move(arg);
    return Init_StateMachineData_prkg_camera_store_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_hwa_odd_off
{
public:
  explicit Init_StateMachineData_hwa_odd_off(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_smfault_level hwa_odd_off(::deva_function_msgs::msg::StateMachineData::_hwa_odd_off_type arg)
  {
    msg_.hwa_odd_off = std::move(arg);
    return Init_StateMachineData_smfault_level(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_function_status
{
public:
  explicit Init_StateMachineData_function_status(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_hwa_odd_off function_status(::deva_function_msgs::msg::StateMachineData::_function_status_type arg)
  {
    msg_.function_status = std::move(arg);
    return Init_StateMachineData_hwa_odd_off(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_state
{
public:
  explicit Init_StateMachineData_sm_state(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_function_status sm_state(::deva_function_msgs::msg::StateMachineData::_sm_state_type arg)
  {
    msg_.sm_state = std::move(arg);
    return Init_StateMachineData_function_status(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_asy_req_lane_chg
{
public:
  explicit Init_StateMachineData_asy_req_lane_chg(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_state asy_req_lane_chg(::deva_function_msgs::msg::StateMachineData::_asy_req_lane_chg_type arg)
  {
    msg_.asy_req_lane_chg = std::move(arg);
    return Init_StateMachineData_sm_state(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_aut_lane_chg_sts
{
public:
  explicit Init_StateMachineData_aut_lane_chg_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_asy_req_lane_chg aut_lane_chg_sts(::deva_function_msgs::msg::StateMachineData::_aut_lane_chg_sts_type arg)
  {
    msg_.aut_lane_chg_sts = std::move(arg);
    return Init_StateMachineData_asy_req_lane_chg(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_asy_noa_sts
{
public:
  explicit Init_StateMachineData_asy_noa_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_aut_lane_chg_sts asy_noa_sts(::deva_function_msgs::msg::StateMachineData::_asy_noa_sts_type arg)
  {
    msg_.asy_noa_sts = std::move(arg);
    return Init_StateMachineData_aut_lane_chg_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_asy_lane_chg_assist_sts
{
public:
  explicit Init_StateMachineData_asy_lane_chg_assist_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_asy_noa_sts asy_lane_chg_assist_sts(::deva_function_msgs::msg::StateMachineData::_asy_lane_chg_assist_sts_type arg)
  {
    msg_.asy_lane_chg_assist_sts = std::move(arg);
    return Init_StateMachineData_asy_noa_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_ad_ctrl_mode
{
public:
  explicit Init_StateMachineData_ad_ctrl_mode(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_asy_lane_chg_assist_sts ad_ctrl_mode(::deva_function_msgs::msg::StateMachineData::_ad_ctrl_mode_type arg)
  {
    msg_.ad_ctrl_mode = std::move(arg);
    return Init_StateMachineData_asy_lane_chg_assist_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_hwa_lat_ctrl_sts
{
public:
  explicit Init_StateMachineData_hwa_lat_ctrl_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_ad_ctrl_mode hwa_lat_ctrl_sts(::deva_function_msgs::msg::StateMachineData::_hwa_lat_ctrl_sts_type arg)
  {
    msg_.hwa_lat_ctrl_sts = std::move(arg);
    return Init_StateMachineData_ad_ctrl_mode(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_avl_sts_for_long_aut_drv
{
public:
  explicit Init_StateMachineData_avl_sts_for_long_aut_drv(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_hwa_lat_ctrl_sts avl_sts_for_long_aut_drv(::deva_function_msgs::msg::StateMachineData::_avl_sts_for_long_aut_drv_type arg)
  {
    msg_.avl_sts_for_long_aut_drv = std::move(arg);
    return Init_StateMachineData_hwa_lat_ctrl_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_strt_req_of_lgt_ctrl_for_prpsn
{
public:
  explicit Init_StateMachineData_strt_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_avl_sts_for_long_aut_drv strt_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::StateMachineData::_strt_req_of_lgt_ctrl_for_prpsn_type arg)
  {
    msg_.strt_req_of_lgt_ctrl_for_prpsn = std::move(arg);
    return Init_StateMachineData_avl_sts_for_long_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_stop_req_of_lgt_ctrl_for_prpsn
{
public:
  explicit Init_StateMachineData_stop_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_strt_req_of_lgt_ctrl_for_prpsn stop_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::StateMachineData::_stop_req_of_lgt_ctrl_for_prpsn_type arg)
  {
    msg_.stop_req_of_lgt_ctrl_for_prpsn = std::move(arg);
    return Init_StateMachineData_strt_req_of_lgt_ctrl_for_prpsn(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_drv_off_req_for_lgt_ctrl
{
public:
  explicit Init_StateMachineData_drv_off_req_for_lgt_ctrl(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_stop_req_of_lgt_ctrl_for_prpsn drv_off_req_for_lgt_ctrl(::deva_function_msgs::msg::StateMachineData::_drv_off_req_for_lgt_ctrl_type arg)
  {
    msg_.drv_off_req_for_lgt_ctrl = std::move(arg);
    return Init_StateMachineData_stop_req_of_lgt_ctrl_for_prpsn(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_asy_stand_still_req_for_cmft
{
public:
  explicit Init_StateMachineData_asy_stand_still_req_for_cmft(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_drv_off_req_for_lgt_ctrl asy_stand_still_req_for_cmft(::deva_function_msgs::msg::StateMachineData::_asy_stand_still_req_for_cmft_type arg)
  {
    msg_.asy_stand_still_req_for_cmft = std::move(arg);
    return Init_StateMachineData_drv_off_req_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_asy_a_lgt_sts_asy_a_lgt_sts
{
public:
  explicit Init_StateMachineData_asy_a_lgt_sts_asy_a_lgt_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_asy_stand_still_req_for_cmft asy_a_lgt_sts_asy_a_lgt_sts(::deva_function_msgs::msg::StateMachineData::_asy_a_lgt_sts_asy_a_lgt_sts_type arg)
  {
    msg_.asy_a_lgt_sts_asy_a_lgt_sts = std::move(arg);
    return Init_StateMachineData_asy_stand_still_req_for_cmft(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_aut_prkg_in_btn_sts_from_rpa
{
public:
  explicit Init_StateMachineData_aut_prkg_in_btn_sts_from_rpa(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_asy_a_lgt_sts_asy_a_lgt_sts aut_prkg_in_btn_sts_from_rpa(::deva_function_msgs::msg::StateMachineData::_aut_prkg_in_btn_sts_from_rpa_type arg)
  {
    msg_.aut_prkg_in_btn_sts_from_rpa = std::move(arg);
    return Init_StateMachineData_asy_a_lgt_sts_asy_a_lgt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_no_touching_for_avm_req
{
public:
  explicit Init_StateMachineData_no_touching_for_avm_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_aut_prkg_in_btn_sts_from_rpa no_touching_for_avm_req(::deva_function_msgs::msg::StateMachineData::_no_touching_for_avm_req_type arg)
  {
    msg_.no_touching_for_avm_req = std::move(arg);
    return Init_StateMachineData_aut_prkg_in_btn_sts_from_rpa(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_fct_di_mod
{
public:
  explicit Init_StateMachineData_prkg_fct_di_mod(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_no_touching_for_avm_req prkg_fct_di_mod(::deva_function_msgs::msg::StateMachineData::_prkg_fct_di_mod_type arg)
  {
    msg_.prkg_fct_di_mod = std::move(arg);
    return Init_StateMachineData_no_touching_for_avm_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_active_push
{
public:
  explicit Init_StateMachineData_prkg_active_push(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_fct_di_mod prkg_active_push(::deva_function_msgs::msg::StateMachineData::_prkg_active_push_type arg)
  {
    msg_.prkg_active_push = std::move(arg);
    return Init_StateMachineData_prkg_fct_di_mod(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_btn_sts_disp_float
{
public:
  explicit Init_StateMachineData_prkg_btn_sts_disp_float(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_active_push prkg_btn_sts_disp_float(::deva_function_msgs::msg::StateMachineData::_prkg_btn_sts_disp_float_type arg)
  {
    msg_.prkg_btn_sts_disp_float = std::move(arg);
    return Init_StateMachineData_prkg_active_push(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_emgy_brk_sys_sts
{
public:
  explicit Init_StateMachineData_prkg_emgy_brk_sys_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_btn_sts_disp_float prkg_emgy_brk_sys_sts(::deva_function_msgs::msg::StateMachineData::_prkg_emgy_brk_sys_sts_type arg)
  {
    msg_.prkg_emgy_brk_sys_sts = std::move(arg);
    return Init_StateMachineData_prkg_btn_sts_disp_float(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_mai_sts
{
public:
  explicit Init_StateMachineData_mai_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_emgy_brk_sys_sts mai_sts(::deva_function_msgs::msg::StateMachineData::_mai_sts_type arg)
  {
    msg_.mai_sts = std::move(arg);
    return Init_StateMachineData_prkg_emgy_brk_sys_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_lat_control_request
{
public:
  explicit Init_StateMachineData_lat_control_request(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_mai_sts lat_control_request(::deva_function_msgs::msg::StateMachineData::_lat_control_request_type arg)
  {
    msg_.lat_control_request = std::move(arg);
    return Init_StateMachineData_mai_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_lgt_control_request
{
public:
  explicit Init_StateMachineData_lgt_control_request(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_lat_control_request lgt_control_request(::deva_function_msgs::msg::StateMachineData::_lgt_control_request_type arg)
  {
    msg_.lgt_control_request = std::move(arg);
    return Init_StateMachineData_lat_control_request(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_rcv_version
{
public:
  explicit Init_StateMachineData_sm_rcv_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_lgt_control_request sm_rcv_version(::deva_function_msgs::msg::StateMachineData::_sm_rcv_version_type arg)
  {
    msg_.sm_rcv_version = std::move(arg);
    return Init_StateMachineData_lgt_control_request(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_mob_dev_rcv_sts
{
public:
  explicit Init_StateMachineData_sm_mob_dev_rcv_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_rcv_version sm_mob_dev_rcv_sts(::deva_function_msgs::msg::StateMachineData::_sm_mob_dev_rcv_sts_type arg)
  {
    msg_.sm_mob_dev_rcv_sts = std::move(arg);
    return Init_StateMachineData_sm_rcv_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_mob_dev_rcv_req_resp
{
public:
  explicit Init_StateMachineData_sm_mob_dev_rcv_req_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_mob_dev_rcv_sts sm_mob_dev_rcv_req_resp(::deva_function_msgs::msg::StateMachineData::_sm_mob_dev_rcv_req_resp_type arg)
  {
    msg_.sm_mob_dev_rcv_req_resp = std::move(arg);
    return Init_StateMachineData_sm_mob_dev_rcv_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_rcv_mod_incln
{
public:
  explicit Init_StateMachineData_sm_rcv_mod_incln(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_mob_dev_rcv_req_resp sm_rcv_mod_incln(::deva_function_msgs::msg::StateMachineData::_sm_rcv_mod_incln_type arg)
  {
    msg_.sm_rcv_mod_incln = std::move(arg);
    return Init_StateMachineData_sm_mob_dev_rcv_req_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_rem_str_sts
{
public:
  explicit Init_StateMachineData_sm_rem_str_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_rcv_mod_incln sm_rem_str_sts(::deva_function_msgs::msg::StateMachineData::_sm_rem_str_sts_type arg)
  {
    msg_.sm_rem_str_sts = std::move(arg);
    return Init_StateMachineData_sm_rcv_mod_incln(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_rem_ctrl_veh_sts
{
public:
  explicit Init_StateMachineData_sm_rem_ctrl_veh_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_rem_str_sts sm_rem_ctrl_veh_sts(::deva_function_msgs::msg::StateMachineData::_sm_rem_ctrl_veh_sts_type arg)
  {
    msg_.sm_rem_ctrl_veh_sts = std::move(arg);
    return Init_StateMachineData_sm_rem_str_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_lo_spd_and_trk_bck_sys_sts
{
public:
  explicit Init_StateMachineData_lo_spd_and_trk_bck_sys_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_rem_ctrl_veh_sts lo_spd_and_trk_bck_sys_sts(::deva_function_msgs::msg::StateMachineData::_lo_spd_and_trk_bck_sys_sts_type arg)
  {
    msg_.lo_spd_and_trk_bck_sys_sts = std::move(arg);
    return Init_StateMachineData_sm_rem_ctrl_veh_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_hpa_st_code_to_sm
{
public:
  explicit Init_StateMachineData_hpa_st_code_to_sm(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_lo_spd_and_trk_bck_sys_sts hpa_st_code_to_sm(::deva_function_msgs::msg::StateMachineData::_hpa_st_code_to_sm_type arg)
  {
    msg_.hpa_st_code_to_sm = std::move(arg);
    return Init_StateMachineData_lo_spd_and_trk_bck_sys_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_accr_ovrdn_ctrl_reqgrp
{
public:
  explicit Init_StateMachineData_prkg_accr_ovrdn_ctrl_reqgrp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_hpa_st_code_to_sm prkg_accr_ovrdn_ctrl_reqgrp(::deva_function_msgs::msg::StateMachineData::_prkg_accr_ovrdn_ctrl_reqgrp_type arg)
  {
    msg_.prkg_accr_ovrdn_ctrl_reqgrp = std::move(arg);
    return Init_StateMachineData_hpa_st_code_to_sm(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_veh_prkg_to_horn
{
public:
  explicit Init_StateMachineData_veh_prkg_to_horn(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_accr_ovrdn_ctrl_reqgrp veh_prkg_to_horn(::deva_function_msgs::msg::StateMachineData::_veh_prkg_to_horn_type arg)
  {
    msg_.veh_prkg_to_horn = std::move(arg);
    return Init_StateMachineData_prkg_accr_ovrdn_ctrl_reqgrp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_amb_li_req
{
public:
  explicit Init_StateMachineData_prkg_amb_li_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_veh_prkg_to_horn prkg_amb_li_req(::deva_function_msgs::msg::StateMachineData::_prkg_amb_li_req_type arg)
  {
    msg_.prkg_amb_li_req = std::move(arg);
    return Init_StateMachineData_veh_prkg_to_horn(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_veh_home_prkg_sys_sts
{
public:
  explicit Init_StateMachineData_veh_home_prkg_sys_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_amb_li_req veh_home_prkg_sys_sts(::deva_function_msgs::msg::StateMachineData::_veh_home_prkg_sys_sts_type arg)
  {
    msg_.veh_home_prkg_sys_sts = std::move(arg);
    return Init_StateMachineData_prkg_amb_li_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_valt_prkg_reminder
{
public:
  explicit Init_StateMachineData_valt_prkg_reminder(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_veh_home_prkg_sys_sts valt_prkg_reminder(::deva_function_msgs::msg::StateMachineData::_valt_prkg_reminder_type arg)
  {
    msg_.valt_prkg_reminder = std::move(arg);
    return Init_StateMachineData_veh_home_prkg_sys_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
{
public:
  explicit Init_StateMachineData_sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_valt_prkg_reminder sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1(::deva_function_msgs::msg::StateMachineData::_sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1_type arg)
  {
    msg_.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = std::move(arg);
    return Init_StateMachineData_valt_prkg_reminder(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
{
public:
  explicit Init_StateMachineData_sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req(::deva_function_msgs::msg::StateMachineData::_sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req_type arg)
  {
    msg_.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = std::move(arg);
    return Init_StateMachineData_sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_home_prkg_voice_prompt_req
{
public:
  explicit Init_StateMachineData_home_prkg_voice_prompt_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req home_prkg_voice_prompt_req(::deva_function_msgs::msg::StateMachineData::_home_prkg_voice_prompt_req_type arg)
  {
    msg_.home_prkg_voice_prompt_req = std::move(arg);
    return Init_StateMachineData_sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_valt_prkg_failr_notif
{
public:
  explicit Init_StateMachineData_valt_prkg_failr_notif(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_home_prkg_voice_prompt_req valt_prkg_failr_notif(::deva_function_msgs::msg::StateMachineData::_valt_prkg_failr_notif_type arg)
  {
    msg_.valt_prkg_failr_notif = std::move(arg);
    return Init_StateMachineData_home_prkg_voice_prompt_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_hpa_quit_reason
{
public:
  explicit Init_StateMachineData_sm_hpa_quit_reason(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_valt_prkg_failr_notif sm_hpa_quit_reason(::deva_function_msgs::msg::StateMachineData::_sm_hpa_quit_reason_type arg)
  {
    msg_.sm_hpa_quit_reason = std::move(arg);
    return Init_StateMachineData_valt_prkg_failr_notif(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_hpa_proc_prompt_req
{
public:
  explicit Init_StateMachineData_sm_hpa_proc_prompt_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_hpa_quit_reason sm_hpa_proc_prompt_req(::deva_function_msgs::msg::StateMachineData::_sm_hpa_proc_prompt_req_type arg)
  {
    msg_.sm_hpa_proc_prompt_req = std::move(arg);
    return Init_StateMachineData_sm_hpa_quit_reason(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_hpa_req_apa
{
public:
  explicit Init_StateMachineData_sm_hpa_req_apa(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_hpa_proc_prompt_req sm_hpa_req_apa(::deva_function_msgs::msg::StateMachineData::_sm_hpa_req_apa_type arg)
  {
    msg_.sm_hpa_req_apa = std::move(arg);
    return Init_StateMachineData_sm_hpa_proc_prompt_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_hpa_state
{
public:
  explicit Init_StateMachineData_sm_hpa_state(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_hpa_req_apa sm_hpa_state(::deva_function_msgs::msg::StateMachineData::_sm_hpa_state_type arg)
  {
    msg_.sm_hpa_state = std::move(arg);
    return Init_StateMachineData_sm_hpa_req_apa(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_hpa_state_ind
{
public:
  explicit Init_StateMachineData_sm_hpa_state_ind(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_hpa_state sm_hpa_state_ind(::deva_function_msgs::msg::StateMachineData::_sm_hpa_state_ind_type arg)
  {
    msg_.sm_hpa_state_ind = std::move(arg);
    return Init_StateMachineData_sm_hpa_state(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_sm_hpa_version
{
public:
  explicit Init_StateMachineData_sm_hpa_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_hpa_state_ind sm_hpa_version(::deva_function_msgs::msg::StateMachineData::_sm_hpa_version_type arg)
  {
    msg_.sm_hpa_version = std::move(arg);
    return Init_StateMachineData_sm_hpa_state_ind(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_fct_test_pnd_req
{
public:
  explicit Init_StateMachineData_prkg_fct_test_pnd_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_sm_hpa_version prkg_fct_test_pnd_req(::deva_function_msgs::msg::StateMachineData::_prkg_fct_test_pnd_req_type arg)
  {
    msg_.prkg_fct_test_pnd_req = std::move(arg);
    return Init_StateMachineData_sm_hpa_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
{
public:
  explicit Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_fct_test_pnd_req prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6(::deva_function_msgs::msg::StateMachineData::_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6_type arg)
  {
    msg_.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = std::move(arg);
    return Init_StateMachineData_prkg_fct_test_pnd_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
{
public:
  explicit Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5(::deva_function_msgs::msg::StateMachineData::_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5_type arg)
  {
    msg_.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = std::move(arg);
    return Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_drvr_assc_sys_disp_list
{
public:
  explicit Init_StateMachineData_drvr_assc_sys_disp_list(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 drvr_assc_sys_disp_list(::deva_function_msgs::msg::StateMachineData::_drvr_assc_sys_disp_list_type arg)
  {
    msg_.drvr_assc_sys_disp_list = std::move(arg);
    return Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_btn_sts_dispset
{
public:
  explicit Init_StateMachineData_prkg_btn_sts_dispset(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_drvr_assc_sys_disp_list prkg_btn_sts_dispset(::deva_function_msgs::msg::StateMachineData::_prkg_btn_sts_dispset_type arg)
  {
    msg_.prkg_btn_sts_dispset = std::move(arg);
    return Init_StateMachineData_drvr_assc_sys_disp_list(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_avm_prkg_fct_di_disp
{
public:
  explicit Init_StateMachineData_avm_prkg_fct_di_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_btn_sts_dispset avm_prkg_fct_di_disp(::deva_function_msgs::msg::StateMachineData::_avm_prkg_fct_di_disp_type arg)
  {
    msg_.avm_prkg_fct_di_disp = std::move(arg);
    return Init_StateMachineData_prkg_btn_sts_dispset(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_avm_drvr_assc_sys_disp
{
public:
  explicit Init_StateMachineData_avm_drvr_assc_sys_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_avm_prkg_fct_di_disp avm_drvr_assc_sys_disp(::deva_function_msgs::msg::StateMachineData::_avm_drvr_assc_sys_disp_type arg)
  {
    msg_.avm_drvr_assc_sys_disp = std::move(arg);
    return Init_StateMachineData_avm_prkg_fct_di_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_fcts_swt_sts_disp
{
public:
  explicit Init_StateMachineData_prkg_fcts_swt_sts_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_avm_drvr_assc_sys_disp prkg_fcts_swt_sts_disp(::deva_function_msgs::msg::StateMachineData::_prkg_fcts_swt_sts_disp_type arg)
  {
    msg_.prkg_fcts_swt_sts_disp = std::move(arg);
    return Init_StateMachineData_avm_drvr_assc_sys_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_disp_interface_chg_req
{
public:
  explicit Init_StateMachineData_disp_interface_chg_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_fcts_swt_sts_disp disp_interface_chg_req(::deva_function_msgs::msg::StateMachineData::_disp_interface_chg_req_type arg)
  {
    msg_.disp_interface_chg_req = std::move(arg);
    return Init_StateMachineData_prkg_fcts_swt_sts_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_plan_first_sucs
{
public:
  explicit Init_StateMachineData_plan_first_sucs(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_disp_interface_chg_req plan_first_sucs(::deva_function_msgs::msg::StateMachineData::_plan_first_sucs_type arg)
  {
    msg_.plan_first_sucs = std::move(arg);
    return Init_StateMachineData_disp_interface_chg_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_apa_self_park_or_out_version
{
public:
  explicit Init_StateMachineData_apa_self_park_or_out_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_plan_first_sucs apa_self_park_or_out_version(::deva_function_msgs::msg::StateMachineData::_apa_self_park_or_out_version_type arg)
  {
    msg_.apa_self_park_or_out_version = std::move(arg);
    return Init_StateMachineData_plan_first_sucs(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_total_distance
{
public:
  explicit Init_StateMachineData_total_distance(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_apa_self_park_or_out_version total_distance(::deva_function_msgs::msg::StateMachineData::_total_distance_type arg)
  {
    msg_.total_distance = std::move(arg);
    return Init_StateMachineData_apa_self_park_or_out_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_backward_distance
{
public:
  explicit Init_StateMachineData_backward_distance(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_total_distance backward_distance(::deva_function_msgs::msg::StateMachineData::_backward_distance_type arg)
  {
    msg_.backward_distance = std::move(arg);
    return Init_StateMachineData_total_distance(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_forward_distance
{
public:
  explicit Init_StateMachineData_forward_distance(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_backward_distance forward_distance(::deva_function_msgs::msg::StateMachineData::_forward_distance_type arg)
  {
    msg_.forward_distance = std::move(arg);
    return Init_StateMachineData_backward_distance(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_last_parkg_type_con_rq
{
public:
  explicit Init_StateMachineData_last_parkg_type_con_rq(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_forward_distance last_parkg_type_con_rq(::deva_function_msgs::msg::StateMachineData::_last_parkg_type_con_rq_type arg)
  {
    msg_.last_parkg_type_con_rq = std::move(arg);
    return Init_StateMachineData_forward_distance(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_tsm_req_rpa_on
{
public:
  explicit Init_StateMachineData_tsm_req_rpa_on(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_last_parkg_type_con_rq tsm_req_rpa_on(::deva_function_msgs::msg::StateMachineData::_tsm_req_rpa_on_type arg)
  {
    msg_.tsm_req_rpa_on = std::move(arg);
    return Init_StateMachineData_last_parkg_type_con_rq(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_rem_str_sts
{
public:
  explicit Init_StateMachineData_rem_str_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_tsm_req_rpa_on rem_str_sts(::deva_function_msgs::msg::StateMachineData::_rem_str_sts_type arg)
  {
    msg_.rem_str_sts = std::move(arg);
    return Init_StateMachineData_tsm_req_rpa_on(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_rem_straight_prkg_assi_seln_req_resp
{
public:
  explicit Init_StateMachineData_rem_straight_prkg_assi_seln_req_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_rem_str_sts rem_straight_prkg_assi_seln_req_resp(::deva_function_msgs::msg::StateMachineData::_rem_straight_prkg_assi_seln_req_resp_type arg)
  {
    msg_.rem_straight_prkg_assi_seln_req_resp = std::move(arg);
    return Init_StateMachineData_rem_str_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
{
public:
  explicit Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_rem_straight_prkg_assi_seln_req_resp mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts(::deva_function_msgs::msg::StateMachineData::_mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts_type arg)
  {
    msg_.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = std::move(arg);
    return Init_StateMachineData_rem_straight_prkg_assi_seln_req_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
{
public:
  explicit Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts(::deva_function_msgs::msg::StateMachineData::_mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts_type arg)
  {
    msg_.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = std::move(arg);
    return Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
{
public:
  explicit Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1(::deva_function_msgs::msg::StateMachineData::_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1_type arg)
  {
    msg_.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = std::move(arg);
    return Init_StateMachineData_mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_proc_dst_disp
{
public:
  explicit Init_StateMachineData_prkg_proc_dst_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 prkg_proc_dst_disp(::deva_function_msgs::msg::StateMachineData::_prkg_proc_dst_disp_type arg)
  {
    msg_.prkg_proc_dst_disp = std::move(arg);
    return Init_StateMachineData_prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_mob_dev_rpa_sts_uint8
{
public:
  explicit Init_StateMachineData_mob_dev_rpa_sts_uint8(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_proc_dst_disp mob_dev_rpa_sts_uint8(::deva_function_msgs::msg::StateMachineData::_mob_dev_rpa_sts_uint8_type arg)
  {
    msg_.mob_dev_rpa_sts_uint8 = std::move(arg);
    return Init_StateMachineData_prkg_proc_dst_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_usg_drv_mod_tran_req
{
public:
  explicit Init_StateMachineData_prkg_usg_drv_mod_tran_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_mob_dev_rpa_sts_uint8 prkg_usg_drv_mod_tran_req(::deva_function_msgs::msg::StateMachineData::_prkg_usg_drv_mod_tran_req_type arg)
  {
    msg_.prkg_usg_drv_mod_tran_req = std::move(arg);
    return Init_StateMachineData_mob_dev_rpa_sts_uint8(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_rpa_version
{
public:
  explicit Init_StateMachineData_rpa_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_usg_drv_mod_tran_req rpa_version(::deva_function_msgs::msg::StateMachineData::_rpa_version_type arg)
  {
    msg_.rpa_version = std::move(arg);
    return Init_StateMachineData_prkg_usg_drv_mod_tran_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_veh_prkg_lock_theft_req
{
public:
  explicit Init_StateMachineData_veh_prkg_lock_theft_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_rpa_version veh_prkg_lock_theft_req(::deva_function_msgs::msg::StateMachineData::_veh_prkg_lock_theft_req_type arg)
  {
    msg_.veh_prkg_lock_theft_req = std::move(arg);
    return Init_StateMachineData_rpa_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_veh_win_sun_roof_cls_req
{
public:
  explicit Init_StateMachineData_veh_win_sun_roof_cls_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_veh_prkg_lock_theft_req veh_win_sun_roof_cls_req(::deva_function_msgs::msg::StateMachineData::_veh_win_sun_roof_cls_req_type arg)
  {
    msg_.veh_win_sun_roof_cls_req = std::move(arg);
    return Init_StateMachineData_veh_prkg_lock_theft_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_assi_sys_rem_prkg_sts
{
public:
  explicit Init_StateMachineData_prkg_assi_sys_rem_prkg_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_veh_win_sun_roof_cls_req prkg_assi_sys_rem_prkg_sts(::deva_function_msgs::msg::StateMachineData::_prkg_assi_sys_rem_prkg_sts_type arg)
  {
    msg_.prkg_assi_sys_rem_prkg_sts = std::move(arg);
    return Init_StateMachineData_veh_win_sun_roof_cls_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_mod_incln
{
public:
  explicit Init_StateMachineData_prkg_mod_incln(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_assi_sys_rem_prkg_sts prkg_mod_incln(::deva_function_msgs::msg::StateMachineData::_prkg_mod_incln_type arg)
  {
    msg_.prkg_mod_incln = std::move(arg);
    return Init_StateMachineData_prkg_assi_sys_rem_prkg_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_mob_dev_rpa_req_resp
{
public:
  explicit Init_StateMachineData_mob_dev_rpa_req_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_mod_incln mob_dev_rpa_req_resp(::deva_function_msgs::msg::StateMachineData::_mob_dev_rpa_req_resp_type arg)
  {
    msg_.mob_dev_rpa_req_resp = std::move(arg);
    return Init_StateMachineData_prkg_mod_incln(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_mirr_open_cls_req
{
public:
  explicit Init_StateMachineData_mirr_open_cls_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_mob_dev_rpa_req_resp mirr_open_cls_req(::deva_function_msgs::msg::StateMachineData::_mirr_open_cls_req_type arg)
  {
    msg_.mirr_open_cls_req = std::move(arg);
    return Init_StateMachineData_mob_dev_rpa_req_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_lock_req
{
public:
  explicit Init_StateMachineData_prkg_lock_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_mirr_open_cls_req prkg_lock_req(::deva_function_msgs::msg::StateMachineData::_prkg_lock_req_type arg)
  {
    msg_.prkg_lock_req = std::move(arg);
    return Init_StateMachineData_mirr_open_cls_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_system_fault
{
public:
  explicit Init_StateMachineData_system_fault(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_lock_req system_fault(::deva_function_msgs::msg::StateMachineData::_system_fault_type arg)
  {
    msg_.system_fault = std::move(arg);
    return Init_StateMachineData_prkg_lock_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_pdc_ctrl_rsn
{
public:
  explicit Init_StateMachineData_pdc_ctrl_rsn(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_system_fault pdc_ctrl_rsn(::deva_function_msgs::msg::StateMachineData::_pdc_ctrl_rsn_type arg)
  {
    msg_.pdc_ctrl_rsn = std::move(arg);
    return Init_StateMachineData_system_fault(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_dock_dis_req
{
public:
  explicit Init_StateMachineData_prkg_dock_dis_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_pdc_ctrl_rsn prkg_dock_dis_req(::deva_function_msgs::msg::StateMachineData::_prkg_dock_dis_req_type arg)
  {
    msg_.prkg_dock_dis_req = std::move(arg);
    return Init_StateMachineData_pdc_ctrl_rsn(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_img_sn_sr_cal_sts
{
public:
  explicit Init_StateMachineData_img_sn_sr_cal_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_dock_dis_req img_sn_sr_cal_sts(::deva_function_msgs::msg::StateMachineData::_img_sn_sr_cal_sts_type arg)
  {
    msg_.img_sn_sr_cal_sts = std::move(arg);
    return Init_StateMachineData_prkg_dock_dis_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_aut_prkg_voice_typ_resp
{
public:
  explicit Init_StateMachineData_aut_prkg_voice_typ_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_img_sn_sr_cal_sts aut_prkg_voice_typ_resp(::deva_function_msgs::msg::StateMachineData::_aut_prkg_voice_typ_resp_type arg)
  {
    msg_.aut_prkg_voice_typ_resp = std::move(arg);
    return Init_StateMachineData_img_sn_sr_cal_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_aut_prkg_voice_swt_resp
{
public:
  explicit Init_StateMachineData_aut_prkg_voice_swt_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_aut_prkg_voice_typ_resp aut_prkg_voice_swt_resp(::deva_function_msgs::msg::StateMachineData::_aut_prkg_voice_swt_resp_type arg)
  {
    msg_.aut_prkg_voice_swt_resp = std::move(arg);
    return Init_StateMachineData_aut_prkg_voice_typ_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_aut_actv_prkg_fct_swt_resp
{
public:
  explicit Init_StateMachineData_aut_actv_prkg_fct_swt_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_aut_prkg_voice_swt_resp aut_actv_prkg_fct_swt_resp(::deva_function_msgs::msg::StateMachineData::_aut_actv_prkg_fct_swt_resp_type arg)
  {
    msg_.aut_actv_prkg_fct_swt_resp = std::move(arg);
    return Init_StateMachineData_aut_prkg_voice_swt_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_apa_sts_flag
{
public:
  explicit Init_StateMachineData_apa_sts_flag(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_aut_actv_prkg_fct_swt_resp apa_sts_flag(::deva_function_msgs::msg::StateMachineData::_apa_sts_flag_type arg)
  {
    msg_.apa_sts_flag = std::move(arg);
    return Init_StateMachineData_aut_actv_prkg_fct_swt_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_eng_runng_req_by_park_assi1
{
public:
  explicit Init_StateMachineData_eng_runng_req_by_park_assi1(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_apa_sts_flag eng_runng_req_by_park_assi1(::deva_function_msgs::msg::StateMachineData::_eng_runng_req_by_park_assi1_type arg)
  {
    msg_.eng_runng_req_by_park_assi1 = std::move(arg);
    return Init_StateMachineData_apa_sts_flag(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_fct_vmm_mod_req
{
public:
  explicit Init_StateMachineData_prkg_fct_vmm_mod_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_eng_runng_req_by_park_assi1 prkg_fct_vmm_mod_req(::deva_function_msgs::msg::StateMachineData::_prkg_fct_vmm_mod_req_type arg)
  {
    msg_.prkg_fct_vmm_mod_req = std::move(arg);
    return Init_StateMachineData_eng_runng_req_by_park_assi1(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_park_function
{
public:
  explicit Init_StateMachineData_park_function(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_fct_vmm_mod_req park_function(::deva_function_msgs::msg::StateMachineData::_park_function_type arg)
  {
    msg_.park_function = std::move(arg);
    return Init_StateMachineData_prkg_fct_vmm_mod_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_park_exit_req
{
public:
  explicit Init_StateMachineData_park_exit_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_park_function park_exit_req(::deva_function_msgs::msg::StateMachineData::_park_exit_req_type arg)
  {
    msg_.park_exit_req = std::move(arg);
    return Init_StateMachineData_park_function(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_park_enter_req
{
public:
  explicit Init_StateMachineData_park_enter_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_park_exit_req park_enter_req(::deva_function_msgs::msg::StateMachineData::_park_enter_req_type arg)
  {
    msg_.park_enter_req = std::move(arg);
    return Init_StateMachineData_park_exit_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_shakehand_rq
{
public:
  explicit Init_StateMachineData_shakehand_rq(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_park_enter_req shakehand_rq(::deva_function_msgs::msg::StateMachineData::_shakehand_rq_type arg)
  {
    msg_.shakehand_rq = std::move(arg);
    return Init_StateMachineData_park_enter_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_park_in_or_out
{
public:
  explicit Init_StateMachineData_park_in_or_out(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_shakehand_rq park_in_or_out(::deva_function_msgs::msg::StateMachineData::_park_in_or_out_type arg)
  {
    msg_.park_in_or_out = std::move(arg);
    return Init_StateMachineData_shakehand_rq(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_img_disp_req
{
public:
  explicit Init_StateMachineData_prkg_img_disp_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_park_in_or_out prkg_img_disp_req(::deva_function_msgs::msg::StateMachineData::_prkg_img_disp_req_type arg)
  {
    msg_.prkg_img_disp_req = std::move(arg);
    return Init_StateMachineData_park_in_or_out(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_voice_prompt_req
{
public:
  explicit Init_StateMachineData_voice_prompt_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_img_disp_req voice_prompt_req(::deva_function_msgs::msg::StateMachineData::_voice_prompt_req_type arg)
  {
    msg_.voice_prompt_req = std::move(arg);
    return Init_StateMachineData_prkg_img_disp_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_back_push_apa_info_req
{
public:
  explicit Init_StateMachineData_back_push_apa_info_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_voice_prompt_req back_push_apa_info_req(::deva_function_msgs::msg::StateMachineData::_back_push_apa_info_req_type arg)
  {
    msg_.back_push_apa_info_req = std::move(arg);
    return Init_StateMachineData_voice_prompt_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_stop_aud_warn_req
{
public:
  explicit Init_StateMachineData_prkg_stop_aud_warn_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_back_push_apa_info_req prkg_stop_aud_warn_req(::deva_function_msgs::msg::StateMachineData::_prkg_stop_aud_warn_req_type arg)
  {
    msg_.prkg_stop_aud_warn_req = std::move(arg);
    return Init_StateMachineData_back_push_apa_info_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_progs_disp
{
public:
  explicit Init_StateMachineData_prkg_progs_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_stop_aud_warn_req prkg_progs_disp(::deva_function_msgs::msg::StateMachineData::_prkg_progs_disp_type arg)
  {
    msg_.prkg_progs_disp = std::move(arg);
    return Init_StateMachineData_prkg_stop_aud_warn_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_fct_di_mod_resp
{
public:
  explicit Init_StateMachineData_prkg_fct_di_mod_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_progs_disp prkg_fct_di_mod_resp(::deva_function_msgs::msg::StateMachineData::_prkg_fct_di_mod_resp_type arg)
  {
    msg_.prkg_fct_di_mod_resp = std::move(arg);
    return Init_StateMachineData_prkg_progs_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_fct_di_disp
{
public:
  explicit Init_StateMachineData_prkg_fct_di_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_fct_di_mod_resp prkg_fct_di_disp(::deva_function_msgs::msg::StateMachineData::_prkg_fct_di_disp_type arg)
  {
    msg_.prkg_fct_di_disp = std::move(arg);
    return Init_StateMachineData_prkg_fct_di_mod_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_btn_sts_disp_group_prkg_out
{
public:
  explicit Init_StateMachineData_prkg_btn_sts_disp_group_prkg_out(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_fct_di_disp prkg_btn_sts_disp_group_prkg_out(::deva_function_msgs::msg::StateMachineData::_prkg_btn_sts_disp_group_prkg_out_type arg)
  {
    msg_.prkg_btn_sts_disp_group_prkg_out = std::move(arg);
    return Init_StateMachineData_prkg_fct_di_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_btn_sts_disp_group_prkg_in
{
public:
  explicit Init_StateMachineData_prkg_btn_sts_disp_group_prkg_in(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_btn_sts_disp_group_prkg_out prkg_btn_sts_disp_group_prkg_in(::deva_function_msgs::msg::StateMachineData::_prkg_btn_sts_disp_group_prkg_in_type arg)
  {
    msg_.prkg_btn_sts_disp_group_prkg_in = std::move(arg);
    return Init_StateMachineData_prkg_btn_sts_disp_group_prkg_out(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_btn_sts_disp_group_cancel
{
public:
  explicit Init_StateMachineData_prkg_btn_sts_disp_group_cancel(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_btn_sts_disp_group_prkg_in prkg_btn_sts_disp_group_cancel(::deva_function_msgs::msg::StateMachineData::_prkg_btn_sts_disp_group_cancel_type arg)
  {
    msg_.prkg_btn_sts_disp_group_cancel = std::move(arg);
    return Init_StateMachineData_prkg_btn_sts_disp_group_prkg_in(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_back_disp
{
public:
  explicit Init_StateMachineData_prkg_back_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_btn_sts_disp_group_cancel prkg_back_disp(::deva_function_msgs::msg::StateMachineData::_prkg_back_disp_type arg)
  {
    msg_.prkg_back_disp = std::move(arg);
    return Init_StateMachineData_prkg_btn_sts_disp_group_cancel(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_prkg_aux_info_disp
{
public:
  explicit Init_StateMachineData_prkg_aux_info_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_back_disp prkg_aux_info_disp(::deva_function_msgs::msg::StateMachineData::_prkg_aux_info_disp_type arg)
  {
    msg_.prkg_aux_info_disp = std::move(arg);
    return Init_StateMachineData_prkg_back_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_drvr_assc_sys_disp
{
public:
  explicit Init_StateMachineData_drvr_assc_sys_disp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_prkg_aux_info_disp drvr_assc_sys_disp(::deva_function_msgs::msg::StateMachineData::_drvr_assc_sys_disp_type arg)
  {
    msg_.drvr_assc_sys_disp = std::move(arg);
    return Init_StateMachineData_prkg_aux_info_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_visn_img_disp_mod_resp
{
public:
  explicit Init_StateMachineData_visn_img_disp_mod_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_drvr_assc_sys_disp visn_img_disp_mod_resp(::deva_function_msgs::msg::StateMachineData::_visn_img_disp_mod_resp_type arg)
  {
    msg_.visn_img_disp_mod_resp = std::move(arg);
    return Init_StateMachineData_drvr_assc_sys_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_visn_ag_extn_resp
{
public:
  explicit Init_StateMachineData_visn_ag_extn_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_visn_img_disp_mod_resp visn_ag_extn_resp(::deva_function_msgs::msg::StateMachineData::_visn_ag_extn_resp_type arg)
  {
    msg_.visn_ag_extn_resp = std::move(arg);
    return Init_StateMachineData_visn_img_disp_mod_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_veh_mdl_clr_resp
{
public:
  explicit Init_StateMachineData_veh_mdl_clr_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_visn_ag_extn_resp veh_mdl_clr_resp(::deva_function_msgs::msg::StateMachineData::_veh_mdl_clr_resp_type arg)
  {
    msg_.veh_mdl_clr_resp = std::move(arg);
    return Init_StateMachineData_visn_ag_extn_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_turn_entry_ag_wide_vis_resp
{
public:
  explicit Init_StateMachineData_turn_entry_ag_wide_vis_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_veh_mdl_clr_resp turn_entry_ag_wide_vis_resp(::deva_function_msgs::msg::StateMachineData::_turn_entry_ag_wide_vis_resp_type arg)
  {
    msg_.turn_entry_ag_wide_vis_resp = std::move(arg);
    return Init_StateMachineData_veh_mdl_clr_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_thr_d_touring_view_resp
{
public:
  explicit Init_StateMachineData_thr_d_touring_view_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_turn_entry_ag_wide_vis_resp thr_d_touring_view_resp(::deva_function_msgs::msg::StateMachineData::_thr_d_touring_view_resp_type arg)
  {
    msg_.thr_d_touring_view_resp = std::move(arg);
    return Init_StateMachineData_turn_entry_ag_wide_vis_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_swt_disp_on_and_off_sts_resp
{
public:
  explicit Init_StateMachineData_swt_disp_on_and_off_sts_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_thr_d_touring_view_resp swt_disp_on_and_off_sts_resp(::deva_function_msgs::msg::StateMachineData::_swt_disp_on_and_off_sts_resp_type arg)
  {
    msg_.swt_disp_on_and_off_sts_resp = std::move(arg);
    return Init_StateMachineData_thr_d_touring_view_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_pla_mod_sts_resp
{
public:
  explicit Init_StateMachineData_pla_mod_sts_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_swt_disp_on_and_off_sts_resp pla_mod_sts_resp(::deva_function_msgs::msg::StateMachineData::_pla_mod_sts_resp_type arg)
  {
    msg_.pla_mod_sts_resp = std::move(arg);
    return Init_StateMachineData_swt_disp_on_and_off_sts_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_obstcl_trig_resp
{
public:
  explicit Init_StateMachineData_obstcl_trig_resp(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_pla_mod_sts_resp obstcl_trig_resp(::deva_function_msgs::msg::StateMachineData::_obstcl_trig_resp_type arg)
  {
    msg_.obstcl_trig_resp = std::move(arg);
    return Init_StateMachineData_pla_mod_sts_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_monr_sys_sts
{
public:
  explicit Init_StateMachineData_monr_sys_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_obstcl_trig_resp monr_sys_sts(::deva_function_msgs::msg::StateMachineData::_monr_sys_sts_type arg)
  {
    msg_.monr_sys_sts = std::move(arg);
    return Init_StateMachineData_obstcl_trig_resp(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_last_prk_type
{
public:
  explicit Init_StateMachineData_last_prk_type(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_monr_sys_sts last_prk_type(::deva_function_msgs::msg::StateMachineData::_last_prk_type_type arg)
  {
    msg_.last_prk_type = std::move(arg);
    return Init_StateMachineData_monr_sys_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_apa_sub_sys_sts
{
public:
  explicit Init_StateMachineData_apa_sub_sys_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_last_prk_type apa_sub_sys_sts(::deva_function_msgs::msg::StateMachineData::_apa_sub_sys_sts_type arg)
  {
    msg_.apa_sub_sys_sts = std::move(arg);
    return Init_StateMachineData_last_prk_type(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_drvr_assc_sys_sts
{
public:
  explicit Init_StateMachineData_drvr_assc_sys_sts(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_apa_sub_sys_sts drvr_assc_sys_sts(::deva_function_msgs::msg::StateMachineData::_drvr_assc_sys_sts_type arg)
  {
    msg_.drvr_assc_sys_sts = std::move(arg);
    return Init_StateMachineData_apa_sub_sys_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_hmi_version
{
public:
  explicit Init_StateMachineData_hmi_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_drvr_assc_sys_sts hmi_version(::deva_function_msgs::msg::StateMachineData::_hmi_version_type arg)
  {
    msg_.hmi_version = std::move(arg);
    return Init_StateMachineData_drvr_assc_sys_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_avm_version
{
public:
  explicit Init_StateMachineData_avm_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_hmi_version avm_version(::deva_function_msgs::msg::StateMachineData::_avm_version_type arg)
  {
    msg_.avm_version = std::move(arg);
    return Init_StateMachineData_hmi_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_apa_version
{
public:
  explicit Init_StateMachineData_apa_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_avm_version apa_version(::deva_function_msgs::msg::StateMachineData::_apa_version_type arg)
  {
    msg_.apa_version = std::move(arg);
    return Init_StateMachineData_avm_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_tsm_version
{
public:
  explicit Init_StateMachineData_tsm_version(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_apa_version tsm_version(::deva_function_msgs::msg::StateMachineData::_tsm_version_type arg)
  {
    msg_.tsm_version = std::move(arg);
    return Init_StateMachineData_apa_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_three_d_angle_req
{
public:
  explicit Init_StateMachineData_three_d_angle_req(::deva_function_msgs::msg::StateMachineData & msg)
  : msg_(msg)
  {}
  Init_StateMachineData_tsm_version three_d_angle_req(::deva_function_msgs::msg::StateMachineData::_three_d_angle_req_type arg)
  {
    msg_.three_d_angle_req = std::move(arg);
    return Init_StateMachineData_tsm_version(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

class Init_StateMachineData_header
{
public:
  Init_StateMachineData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMachineData_three_d_angle_req header(::deva_function_msgs::msg::StateMachineData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateMachineData_three_d_angle_req(msg_);
  }

private:
  ::deva_function_msgs::msg::StateMachineData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::StateMachineData>()
{
  return deva_function_msgs::msg::builder::Init_StateMachineData_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__BUILDER_HPP_
