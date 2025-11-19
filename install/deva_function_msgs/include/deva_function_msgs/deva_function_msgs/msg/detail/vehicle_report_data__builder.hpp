// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/vehicle_report_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleReportData_sapa_veh_mtn_st_veh_mtn_st
{
public:
  explicit Init_VehicleReportData_sapa_veh_mtn_st_veh_mtn_st(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::VehicleReportData sapa_veh_mtn_st_veh_mtn_st(::deva_function_msgs::msg::VehicleReportData::_sapa_veh_mtn_st_veh_mtn_st_type arg)
  {
    msg_.sapa_veh_mtn_st_veh_mtn_st = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_tq_ass_addl
{
public:
  explicit Init_VehicleReportData_tq_ass_addl(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_sapa_veh_mtn_st_veh_mtn_st tq_ass_addl(::deva_function_msgs::msg::VehicleReportData::_tq_ass_addl_type arg)
  {
    msg_.tq_ass_addl = std::move(arg);
    return Init_VehicleReportData_sapa_veh_mtn_st_veh_mtn_st(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
{
public:
  explicit Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_tq_ass_addl pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act(::deva_function_msgs::msg::VehicleReportData::_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act_type arg)
  {
    msg_.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = std::move(arg);
    return Init_VehicleReportData_tq_ass_addl(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
{
public:
  explicit Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act(::deva_function_msgs::msg::VehicleReportData::_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act_type arg)
  {
    msg_.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = std::move(arg);
    return Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
{
public:
  explicit Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act(::deva_function_msgs::msg::VehicleReportData::_pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act_type arg)
  {
    msg_.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = std::move(arg);
    return Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
{
public:
  explicit Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act(::deva_function_msgs::msg::VehicleReportData::_pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act_type arg)
  {
    msg_.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = std::move(arg);
    return Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_drvg_dir_des
{
public:
  explicit Init_VehicleReportData_drvg_dir_des(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act drvg_dir_des(::deva_function_msgs::msg::VehicleReportData::_drvg_dir_des_type arg)
  {
    msg_.drvg_dir_des = std::move(arg);
    return Init_VehicleReportData_pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_act_re_group_steer_act_re_sts
{
public:
  explicit Init_VehicleReportData_steer_act_re_group_steer_act_re_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_drvg_dir_des steer_act_re_group_steer_act_re_sts(::deva_function_msgs::msg::VehicleReportData::_steer_act_re_group_steer_act_re_sts_type arg)
  {
    msg_.steer_act_re_group_steer_act_re_sts = std::move(arg);
    return Init_VehicleReportData_drvg_dir_des(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
{
public:
  explicit Init_VehicleReportData_pt_tg_at_whl_re_act_pt_tq_at_axle_re_act(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_act_re_group_steer_act_re_sts pt_tg_at_whl_re_act_pt_tq_at_axle_re_act(::deva_function_msgs::msg::VehicleReportData::_pt_tg_at_whl_re_act_pt_tq_at_axle_re_act_type arg)
  {
    msg_.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = std::move(arg);
    return Init_VehicleReportData_steer_act_re_group_steer_act_re_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
{
public:
  explicit Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pt_tg_at_whl_re_act_pt_tq_at_axle_re_act pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act(::deva_function_msgs::msg::VehicleReportData::_pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act_type arg)
  {
    msg_.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = std::move(arg);
    return Init_VehicleReportData_pt_tg_at_whl_re_act_pt_tq_at_axle_re_act(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_ext_fct_sts_lat_ctrl_req_not_in_range
{
public:
  explicit Init_VehicleReportData_steer_ext_fct_sts_lat_ctrl_req_not_in_range(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act steer_ext_fct_sts_lat_ctrl_req_not_in_range(::deva_function_msgs::msg::VehicleReportData::_steer_ext_fct_sts_lat_ctrl_req_not_in_range_type arg)
  {
    msg_.steer_ext_fct_sts_lat_ctrl_req_not_in_range = std::move(arg);
    return Init_VehicleReportData_pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_ext_fct_sts_lat_ag_req_not_in_range
{
public:
  explicit Init_VehicleReportData_steer_ext_fct_sts_lat_ag_req_not_in_range(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_ext_fct_sts_lat_ctrl_req_not_in_range steer_ext_fct_sts_lat_ag_req_not_in_range(::deva_function_msgs::msg::VehicleReportData::_steer_ext_fct_sts_lat_ag_req_not_in_range_type arg)
  {
    msg_.steer_ext_fct_sts_lat_ag_req_not_in_range = std::move(arg);
    return Init_VehicleReportData_steer_ext_fct_sts_lat_ctrl_req_not_in_range(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_ext_fct_sts_ext_safe_lim_active
{
public:
  explicit Init_VehicleReportData_steer_ext_fct_sts_ext_safe_lim_active(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_ext_fct_sts_lat_ag_req_not_in_range steer_ext_fct_sts_ext_safe_lim_active(::deva_function_msgs::msg::VehicleReportData::_steer_ext_fct_sts_ext_safe_lim_active_type arg)
  {
    msg_.steer_ext_fct_sts_ext_safe_lim_active = std::move(arg);
    return Init_VehicleReportData_steer_ext_fct_sts_lat_ag_req_not_in_range(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_ext_fct_sts_ext_fct_rate_lim_active
{
public:
  explicit Init_VehicleReportData_steer_ext_fct_sts_ext_fct_rate_lim_active(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_ext_fct_sts_ext_safe_lim_active steer_ext_fct_sts_ext_fct_rate_lim_active(::deva_function_msgs::msg::VehicleReportData::_steer_ext_fct_sts_ext_fct_rate_lim_active_type arg)
  {
    msg_.steer_ext_fct_sts_ext_fct_rate_lim_active = std::move(arg);
    return Init_VehicleReportData_steer_ext_fct_sts_ext_safe_lim_active(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_ext_fct_sts_drvr_steer_ovrd
{
public:
  explicit Init_VehicleReportData_steer_ext_fct_sts_drvr_steer_ovrd(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_ext_fct_sts_ext_fct_rate_lim_active steer_ext_fct_sts_drvr_steer_ovrd(::deva_function_msgs::msg::VehicleReportData::_steer_ext_fct_sts_drvr_steer_ovrd_type arg)
  {
    msg_.steer_ext_fct_sts_drvr_steer_ovrd = std::move(arg);
    return Init_VehicleReportData_steer_ext_fct_sts_ext_fct_rate_lim_active(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_ext_fct_sts_ext_fct_upper_lim_active
{
public:
  explicit Init_VehicleReportData_steer_ext_fct_sts_ext_fct_upper_lim_active(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_ext_fct_sts_drvr_steer_ovrd steer_ext_fct_sts_ext_fct_upper_lim_active(::deva_function_msgs::msg::VehicleReportData::_steer_ext_fct_sts_ext_fct_upper_lim_active_type arg)
  {
    msg_.steer_ext_fct_sts_ext_fct_upper_lim_active = std::move(arg);
    return Init_VehicleReportData_steer_ext_fct_sts_drvr_steer_ovrd(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_ext_fct_sts_ext_fct_lower_lim_active
{
public:
  explicit Init_VehicleReportData_steer_ext_fct_sts_ext_fct_lower_lim_active(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_ext_fct_sts_ext_fct_upper_lim_active steer_ext_fct_sts_ext_fct_lower_lim_active(::deva_function_msgs::msg::VehicleReportData::_steer_ext_fct_sts_ext_fct_lower_lim_active_type arg)
  {
    msg_.steer_ext_fct_sts_ext_fct_lower_lim_active = std::move(arg);
    return Init_VehicleReportData_steer_ext_fct_sts_ext_fct_upper_lim_active(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_tvc_not_avail_for_dpa
{
public:
  explicit Init_VehicleReportData_tvc_not_avail_for_dpa(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_ext_fct_sts_ext_fct_lower_lim_active tvc_not_avail_for_dpa(::deva_function_msgs::msg::VehicleReportData::_tvc_not_avail_for_dpa_type arg)
  {
    msg_.tvc_not_avail_for_dpa = std::move(arg);
    return Init_VehicleReportData_steer_ext_fct_sts_ext_fct_lower_lim_active(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_whl_lock_status
{
public:
  explicit Init_VehicleReportData_whl_lock_status(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_tvc_not_avail_for_dpa whl_lock_status(::deva_function_msgs::msg::VehicleReportData::_whl_lock_status_type arg)
  {
    msg_.whl_lock_status = std::move(arg);
    return Init_VehicleReportData_tvc_not_avail_for_dpa(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pass_seat_sts2
{
public:
  explicit Init_VehicleReportData_pass_seat_sts2(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_whl_lock_status pass_seat_sts2(::deva_function_msgs::msg::VehicleReportData::_pass_seat_sts2_type arg)
  {
    msg_.pass_seat_sts2 = std::move(arg);
    return Init_VehicleReportData_whl_lock_status(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_rear_wheel_steer_angle
{
public:
  explicit Init_VehicleReportData_rear_wheel_steer_angle(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pass_seat_sts2 rear_wheel_steer_angle(::deva_function_msgs::msg::VehicleReportData::_rear_wheel_steer_angle_type arg)
  {
    msg_.rear_wheel_steer_angle = std::move(arg);
    return Init_VehicleReportData_pass_seat_sts2(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_crs_ctrl_ovr_dn
{
public:
  explicit Init_VehicleReportData_crs_ctrl_ovr_dn(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_rear_wheel_steer_angle crs_ctrl_ovr_dn(::deva_function_msgs::msg::VehicleReportData::_crs_ctrl_ovr_dn_type arg)
  {
    msg_.crs_ctrl_ovr_dn = std::move(arg);
    return Init_VehicleReportData_rear_wheel_steer_angle(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_tank_turn_mod_sts
{
public:
  explicit Init_VehicleReportData_tank_turn_mod_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_crs_ctrl_ovr_dn tank_turn_mod_sts(::deva_function_msgs::msg::VehicleReportData::_tank_turn_mod_sts_type arg)
  {
    msg_.tank_turn_mod_sts = std::move(arg);
    return Init_VehicleReportData_crs_ctrl_ovr_dn(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_trlr_prsnt
{
public:
  explicit Init_VehicleReportData_trlr_prsnt(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_tank_turn_mod_sts trlr_prsnt(::deva_function_msgs::msg::VehicleReportData::_trlr_prsnt_type arg)
  {
    msg_.trlr_prsnt = std::move(arg);
    return Init_VehicleReportData_tank_turn_mod_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_extr_ltg_sts_reverse_li
{
public:
  explicit Init_VehicleReportData_extr_ltg_sts_reverse_li(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_trlr_prsnt extr_ltg_sts_reverse_li(::deva_function_msgs::msg::VehicleReportData::_extr_ltg_sts_reverse_li_type arg)
  {
    msg_.extr_ltg_sts_reverse_li = std::move(arg);
    return Init_VehicleReportData_trlr_prsnt(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_pt_tq_set_safe_req
{
public:
  explicit Init_VehicleReportData_pt_tq_set_safe_req(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_extr_ltg_sts_reverse_li pt_tq_set_safe_req(::deva_function_msgs::msg::VehicleReportData::_pt_tq_set_safe_req_type arg)
  {
    msg_.pt_tq_set_safe_req = std::move(arg);
    return Init_VehicleReportData_extr_ltg_sts_reverse_li(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_power_level
{
public:
  explicit Init_VehicleReportData_power_level(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_pt_tq_set_safe_req power_level(::deva_function_msgs::msg::VehicleReportData::_power_level_type arg)
  {
    msg_.power_level = std::move(arg);
    return Init_VehicleReportData_pt_tq_set_safe_req(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_trip
{
public:
  explicit Init_VehicleReportData_trip(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_power_level trip(::deva_function_msgs::msg::VehicleReportData::_trip_type arg)
  {
    msg_.trip = std::move(arg);
    return Init_VehicleReportData_power_level(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_veh_batt_u_sys_u
{
public:
  explicit Init_VehicleReportData_veh_batt_u_sys_u(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_trip veh_batt_u_sys_u(::deva_function_msgs::msg::VehicleReportData::_veh_batt_u_sys_u_type arg)
  {
    msg_.veh_batt_u_sys_u = std::move(arg);
    return Init_VehicleReportData_trip(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_temprature
{
public:
  explicit Init_VehicleReportData_temprature(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_veh_batt_u_sys_u temprature(::deva_function_msgs::msg::VehicleReportData::_temprature_type arg)
  {
    msg_.temprature = std::move(arg);
    return Init_VehicleReportData_veh_batt_u_sys_u(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_usg_mode
{
public:
  explicit Init_VehicleReportData_usg_mode(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_temprature usg_mode(::deva_function_msgs::msg::VehicleReportData::_usg_mode_type arg)
  {
    msg_.usg_mode = std::move(arg);
    return Init_VehicleReportData_temprature(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_car_mode
{
public:
  explicit Init_VehicleReportData_car_mode(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_usg_mode car_mode(::deva_function_msgs::msg::VehicleReportData::_car_mode_type arg)
  {
    msg_.car_mode = std::move(arg);
    return Init_VehicleReportData_usg_mode(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_illumination
{
public:
  explicit Init_VehicleReportData_illumination(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_car_mode illumination(::deva_function_msgs::msg::VehicleReportData::_illumination_type arg)
  {
    msg_.illumination = std::move(arg);
    return Init_VehicleReportData_car_mode(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_veh_spd_indcd
{
public:
  explicit Init_VehicleReportData_veh_spd_indcd(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_illumination veh_spd_indcd(::deva_function_msgs::msg::VehicleReportData::_veh_spd_indcd_type arg)
  {
    msg_.veh_spd_indcd = std::move(arg);
    return Init_VehicleReportData_illumination(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_asy_a_lgt_actv_aft_lim
{
public:
  explicit Init_VehicleReportData_asy_a_lgt_actv_aft_lim(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_veh_spd_indcd asy_a_lgt_actv_aft_lim(::deva_function_msgs::msg::VehicleReportData::_asy_a_lgt_actv_aft_lim_type arg)
  {
    msg_.asy_a_lgt_actv_aft_lim = std::move(arg);
    return Init_VehicleReportData_veh_spd_indcd(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_asy_actr_actv_for_lgt_ctrl
{
public:
  explicit Init_VehicleReportData_asy_actr_actv_for_lgt_ctrl(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_asy_a_lgt_actv_aft_lim asy_actr_actv_for_lgt_ctrl(::deva_function_msgs::msg::VehicleReportData::_asy_actr_actv_for_lgt_ctrl_type arg)
  {
    msg_.asy_actr_actv_for_lgt_ctrl = std::move(arg);
    return Init_VehicleReportData_asy_a_lgt_actv_aft_lim(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_wheel_angle_max
{
public:
  explicit Init_VehicleReportData_steer_wheel_angle_max(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_asy_actr_actv_for_lgt_ctrl steer_wheel_angle_max(::deva_function_msgs::msg::VehicleReportData::_steer_wheel_angle_max_type arg)
  {
    msg_.steer_wheel_angle_max = std::move(arg);
    return Init_VehicleReportData_asy_actr_actv_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_mirr_fold_sts_at_pass
{
public:
  explicit Init_VehicleReportData_mirr_fold_sts_at_pass(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_wheel_angle_max mirr_fold_sts_at_pass(::deva_function_msgs::msg::VehicleReportData::_mirr_fold_sts_at_pass_type arg)
  {
    msg_.mirr_fold_sts_at_pass = std::move(arg);
    return Init_VehicleReportData_steer_wheel_angle_max(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_mirr_fold_sts_at_drvr
{
public:
  explicit Init_VehicleReportData_mirr_fold_sts_at_drvr(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_mirr_fold_sts_at_pass mirr_fold_sts_at_drvr(::deva_function_msgs::msg::VehicleReportData::_mirr_fold_sts_at_drvr_type arg)
  {
    msg_.mirr_fold_sts_at_drvr = std::move(arg);
    return Init_VehicleReportData_mirr_fold_sts_at_pass(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_door_ri_re_sts
{
public:
  explicit Init_VehicleReportData_door_ri_re_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_mirr_fold_sts_at_drvr door_ri_re_sts(::deva_function_msgs::msg::VehicleReportData::_door_ri_re_sts_type arg)
  {
    msg_.door_ri_re_sts = std::move(arg);
    return Init_VehicleReportData_mirr_fold_sts_at_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_door_pass_sts
{
public:
  explicit Init_VehicleReportData_door_pass_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_door_ri_re_sts door_pass_sts(::deva_function_msgs::msg::VehicleReportData::_door_pass_sts_type arg)
  {
    msg_.door_pass_sts = std::move(arg);
    return Init_VehicleReportData_door_ri_re_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_door_le_re_sts
{
public:
  explicit Init_VehicleReportData_door_le_re_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_door_pass_sts door_le_re_sts(::deva_function_msgs::msg::VehicleReportData::_door_le_re_sts_type arg)
  {
    msg_.door_le_re_sts = std::move(arg);
    return Init_VehicleReportData_door_pass_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_door_drvr_sts
{
public:
  explicit Init_VehicleReportData_door_drvr_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_door_le_re_sts door_drvr_sts(::deva_function_msgs::msg::VehicleReportData::_door_drvr_sts_type arg)
  {
    msg_.door_drvr_sts = std::move(arg);
    return Init_VehicleReportData_door_le_re_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_driver_steer_torque
{
public:
  explicit Init_VehicleReportData_driver_steer_torque(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_door_drvr_sts driver_steer_torque(::deva_function_msgs::msg::VehicleReportData::_driver_steer_torque_type arg)
  {
    msg_.driver_steer_torque = std::move(arg);
    return Init_VehicleReportData_door_drvr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_whl_tq_addl
{
public:
  explicit Init_VehicleReportData_steer_whl_tq_addl(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_driver_steer_torque steer_whl_tq_addl(::deva_function_msgs::msg::VehicleReportData::_steer_whl_tq_addl_type arg)
  {
    msg_.steer_whl_tq_addl = std::move(arg);
    return Init_VehicleReportData_driver_steer_torque(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_rain_level
{
public:
  explicit Init_VehicleReportData_rain_level(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_whl_tq_addl rain_level(::deva_function_msgs::msg::VehicleReportData::_rain_level_type arg)
  {
    msg_.rain_level = std::move(arg);
    return Init_VehicleReportData_steer_whl_tq_addl(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_stand_still_mgr_sts_for_hld1
{
public:
  explicit Init_VehicleReportData_stand_still_mgr_sts_for_hld1(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_rain_level stand_still_mgr_sts_for_hld1(::deva_function_msgs::msg::VehicleReportData::_stand_still_mgr_sts_for_hld1_type arg)
  {
    msg_.stand_still_mgr_sts_for_hld1 = std::move(arg);
    return Init_VehicleReportData_rain_level(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_road_incln
{
public:
  explicit Init_VehicleReportData_road_incln(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_stand_still_mgr_sts_for_hld1 road_incln(::deva_function_msgs::msg::VehicleReportData::_road_incln_type arg)
  {
    msg_.road_incln = std::move(arg);
    return Init_VehicleReportData_stand_still_mgr_sts_for_hld1(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd_qf
{
public:
  explicit Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd_qf(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_road_incln brk_pedl_psd_brk_pedl_psd_qf(::deva_function_msgs::msg::VehicleReportData::_brk_pedl_psd_brk_pedl_psd_qf_type arg)
  {
    msg_.brk_pedl_psd_brk_pedl_psd_qf = std::move(arg);
    return Init_VehicleReportData_road_incln(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd
{
public:
  explicit Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd_qf brk_pedl_psd_brk_pedl_psd(::deva_function_msgs::msg::VehicleReportData::_brk_pedl_psd_brk_pedl_psd_type arg)
  {
    msg_.brk_pedl_psd_brk_pedl_psd = std::move(arg);
    return Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_extr_ltg_sts_turn_indcr_ri
{
public:
  explicit Init_VehicleReportData_extr_ltg_sts_turn_indcr_ri(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd extr_ltg_sts_turn_indcr_ri(::deva_function_msgs::msg::VehicleReportData::_extr_ltg_sts_turn_indcr_ri_type arg)
  {
    msg_.extr_ltg_sts_turn_indcr_ri = std::move(arg);
    return Init_VehicleReportData_brk_pedl_psd_brk_pedl_psd(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_extr_ltg_sts_turn_indcr_le
{
public:
  explicit Init_VehicleReportData_extr_ltg_sts_turn_indcr_le(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_extr_ltg_sts_turn_indcr_ri extr_ltg_sts_turn_indcr_le(::deva_function_msgs::msg::VehicleReportData::_extr_ltg_sts_turn_indcr_le_type arg)
  {
    msg_.extr_ltg_sts_turn_indcr_le = std::move(arg);
    return Init_VehicleReportData_extr_ltg_sts_turn_indcr_ri(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_ag_data_raw_safe_yaw_rate_qf
{
public:
  explicit Init_VehicleReportData_ag_data_raw_safe_yaw_rate_qf(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_extr_ltg_sts_turn_indcr_le ag_data_raw_safe_yaw_rate_qf(::deva_function_msgs::msg::VehicleReportData::_ag_data_raw_safe_yaw_rate_qf_type arg)
  {
    msg_.ag_data_raw_safe_yaw_rate_qf = std::move(arg);
    return Init_VehicleReportData_extr_ltg_sts_turn_indcr_le(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_a_data_raw_safe_a_lgt_qf
{
public:
  explicit Init_VehicleReportData_a_data_raw_safe_a_lgt_qf(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_ag_data_raw_safe_yaw_rate_qf a_data_raw_safe_a_lgt_qf(::deva_function_msgs::msg::VehicleReportData::_a_data_raw_safe_a_lgt_qf_type arg)
  {
    msg_.a_data_raw_safe_a_lgt_qf = std::move(arg);
    return Init_VehicleReportData_ag_data_raw_safe_yaw_rate_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_a_data_raw_safe_a_lat_qf
{
public:
  explicit Init_VehicleReportData_a_data_raw_safe_a_lat_qf(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_a_data_raw_safe_a_lgt_qf a_data_raw_safe_a_lat_qf(::deva_function_msgs::msg::VehicleReportData::_a_data_raw_safe_a_lat_qf_type arg)
  {
    msg_.a_data_raw_safe_a_lat_qf = std::move(arg);
    return Init_VehicleReportData_a_data_raw_safe_a_lgt_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_acc_lon
{
public:
  explicit Init_VehicleReportData_acc_lon(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_a_data_raw_safe_a_lat_qf acc_lon(::deva_function_msgs::msg::VehicleReportData::_acc_lon_type arg)
  {
    msg_.acc_lon = std::move(arg);
    return Init_VehicleReportData_a_data_raw_safe_a_lat_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_acc_lat
{
public:
  explicit Init_VehicleReportData_acc_lat(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_acc_lon acc_lat(::deva_function_msgs::msg::VehicleReportData::_acc_lat_type arg)
  {
    msg_.acc_lat = std::move(arg);
    return Init_VehicleReportData_acc_lon(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_gear
{
public:
  explicit Init_VehicleReportData_gear(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_acc_lat gear(::deva_function_msgs::msg::VehicleReportData::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleReportData_acc_lat(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_epb_status
{
public:
  explicit Init_VehicleReportData_epb_status(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_gear epb_status(::deva_function_msgs::msg::VehicleReportData::_epb_status_type arg)
  {
    msg_.epb_status = std::move(arg);
    return Init_VehicleReportData_gear(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_error_code
{
public:
  explicit Init_VehicleReportData_error_code(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_epb_status error_code(::deva_function_msgs::msg::VehicleReportData::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_VehicleReportData_epb_status(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_yaw_rate
{
public:
  explicit Init_VehicleReportData_yaw_rate(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_error_code yaw_rate(::deva_function_msgs::msg::VehicleReportData::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_VehicleReportData_error_code(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_indcr_disp
{
public:
  explicit Init_VehicleReportData_indcr_disp(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_yaw_rate indcr_disp(::deva_function_msgs::msg::VehicleReportData::_indcr_disp_type arg)
  {
    msg_.indcr_disp = std::move(arg);
    return Init_VehicleReportData_yaw_rate(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_indcr_sts
{
public:
  explicit Init_VehicleReportData_indcr_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_indcr_disp indcr_sts(::deva_function_msgs::msg::VehicleReportData::_indcr_sts_type arg)
  {
    msg_.indcr_sts = std::move(arg);
    return Init_VehicleReportData_indcr_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_extr_ltg_sts_lo_beam
{
public:
  explicit Init_VehicleReportData_extr_ltg_sts_lo_beam(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_indcr_sts extr_ltg_sts_lo_beam(::deva_function_msgs::msg::VehicleReportData::_extr_ltg_sts_lo_beam_type arg)
  {
    msg_.extr_ltg_sts_lo_beam = std::move(arg);
    return Init_VehicleReportData_indcr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_extr_ltg_sts_hi_beam
{
public:
  explicit Init_VehicleReportData_extr_ltg_sts_hi_beam(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_extr_ltg_sts_lo_beam extr_ltg_sts_hi_beam(::deva_function_msgs::msg::VehicleReportData::_extr_ltg_sts_hi_beam_type arg)
  {
    msg_.extr_ltg_sts_hi_beam = std::move(arg);
    return Init_VehicleReportData_extr_ltg_sts_lo_beam(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_seat_back_angle_row_first_drvr
{
public:
  explicit Init_VehicleReportData_seat_back_angle_row_first_drvr(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_extr_ltg_sts_hi_beam seat_back_angle_row_first_drvr(::deva_function_msgs::msg::VehicleReportData::_seat_back_angle_row_first_drvr_type arg)
  {
    msg_.seat_back_angle_row_first_drvr = std::move(arg);
    return Init_VehicleReportData_extr_ltg_sts_hi_beam(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_stop_li
{
public:
  explicit Init_VehicleReportData_stop_li(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_seat_back_angle_row_first_drvr stop_li(::deva_function_msgs::msg::VehicleReportData::_stop_li_type arg)
  {
    msg_.stop_li = std::move(arg);
    return Init_VehicleReportData_seat_back_angle_row_first_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_win_posn_sts_at_re_ri
{
public:
  explicit Init_VehicleReportData_win_posn_sts_at_re_ri(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_stop_li win_posn_sts_at_re_ri(::deva_function_msgs::msg::VehicleReportData::_win_posn_sts_at_re_ri_type arg)
  {
    msg_.win_posn_sts_at_re_ri = std::move(arg);
    return Init_VehicleReportData_stop_li(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_win_posn_sts_at_re_le
{
public:
  explicit Init_VehicleReportData_win_posn_sts_at_re_le(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_win_posn_sts_at_re_ri win_posn_sts_at_re_le(::deva_function_msgs::msg::VehicleReportData::_win_posn_sts_at_re_le_type arg)
  {
    msg_.win_posn_sts_at_re_le = std::move(arg);
    return Init_VehicleReportData_win_posn_sts_at_re_ri(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_win_posn_sts_at_pass
{
public:
  explicit Init_VehicleReportData_win_posn_sts_at_pass(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_win_posn_sts_at_re_le win_posn_sts_at_pass(::deva_function_msgs::msg::VehicleReportData::_win_posn_sts_at_pass_type arg)
  {
    msg_.win_posn_sts_at_pass = std::move(arg);
    return Init_VehicleReportData_win_posn_sts_at_re_le(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_win_posn_sts_at_drvr
{
public:
  explicit Init_VehicleReportData_win_posn_sts_at_drvr(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_win_posn_sts_at_pass win_posn_sts_at_drvr(::deva_function_msgs::msg::VehicleReportData::_win_posn_sts_at_drvr_type arg)
  {
    msg_.win_posn_sts_at_drvr = std::move(arg);
    return Init_VehicleReportData_win_posn_sts_at_pass(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_son_roof_posn_sts
{
public:
  explicit Init_VehicleReportData_son_roof_posn_sts(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_win_posn_sts_at_drvr son_roof_posn_sts(::deva_function_msgs::msg::VehicleReportData::_son_roof_posn_sts_type arg)
  {
    msg_.son_roof_posn_sts = std::move(arg);
    return Init_VehicleReportData_win_posn_sts_at_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_wheel_velocity_valid
{
public:
  explicit Init_VehicleReportData_steer_wheel_velocity_valid(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_son_roof_posn_sts steer_wheel_velocity_valid(::deva_function_msgs::msg::VehicleReportData::_steer_wheel_velocity_valid_type arg)
  {
    msg_.steer_wheel_velocity_valid = std::move(arg);
    return Init_VehicleReportData_son_roof_posn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_wheel_velocity
{
public:
  explicit Init_VehicleReportData_steer_wheel_velocity(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_wheel_velocity_valid steer_wheel_velocity(::deva_function_msgs::msg::VehicleReportData::_steer_wheel_velocity_type arg)
  {
    msg_.steer_wheel_velocity = std::move(arg);
    return Init_VehicleReportData_steer_wheel_velocity_valid(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_wheel_angle_valid
{
public:
  explicit Init_VehicleReportData_steer_wheel_angle_valid(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_wheel_velocity steer_wheel_angle_valid(::deva_function_msgs::msg::VehicleReportData::_steer_wheel_angle_valid_type arg)
  {
    msg_.steer_wheel_angle_valid = std::move(arg);
    return Init_VehicleReportData_steer_wheel_velocity(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_steer_wheel_angle
{
public:
  explicit Init_VehicleReportData_steer_wheel_angle(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_wheel_angle_valid steer_wheel_angle(::deva_function_msgs::msg::VehicleReportData::_steer_wheel_angle_type arg)
  {
    msg_.steer_wheel_angle = std::move(arg);
    return Init_VehicleReportData_steer_wheel_angle_valid(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_brake
{
public:
  explicit Init_VehicleReportData_brake(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_steer_wheel_angle brake(::deva_function_msgs::msg::VehicleReportData::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_VehicleReportData_steer_wheel_angle(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_wheel_speed
{
public:
  explicit Init_VehicleReportData_wheel_speed(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_brake wheel_speed(::deva_function_msgs::msg::VehicleReportData::_wheel_speed_type arg)
  {
    msg_.wheel_speed = std::move(arg);
    return Init_VehicleReportData_brake(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_vehicle_speed_safe
{
public:
  explicit Init_VehicleReportData_vehicle_speed_safe(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_wheel_speed vehicle_speed_safe(::deva_function_msgs::msg::VehicleReportData::_vehicle_speed_safe_type arg)
  {
    msg_.vehicle_speed_safe = std::move(arg);
    return Init_VehicleReportData_wheel_speed(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_vehicle_speed_valid
{
public:
  explicit Init_VehicleReportData_vehicle_speed_valid(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_vehicle_speed_safe vehicle_speed_valid(::deva_function_msgs::msg::VehicleReportData::_vehicle_speed_valid_type arg)
  {
    msg_.vehicle_speed_valid = std::move(arg);
    return Init_VehicleReportData_vehicle_speed_safe(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_vehicle_speed
{
public:
  explicit Init_VehicleReportData_vehicle_speed(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_vehicle_speed_valid vehicle_speed(::deva_function_msgs::msg::VehicleReportData::_vehicle_speed_type arg)
  {
    msg_.vehicle_speed = std::move(arg);
    return Init_VehicleReportData_vehicle_speed_valid(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_engine_rpm
{
public:
  explicit Init_VehicleReportData_engine_rpm(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_vehicle_speed engine_rpm(::deva_function_msgs::msg::VehicleReportData::_engine_rpm_type arg)
  {
    msg_.engine_rpm = std::move(arg);
    return Init_VehicleReportData_vehicle_speed(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_throttle
{
public:
  explicit Init_VehicleReportData_throttle(::deva_function_msgs::msg::VehicleReportData & msg)
  : msg_(msg)
  {}
  Init_VehicleReportData_engine_rpm throttle(::deva_function_msgs::msg::VehicleReportData::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_VehicleReportData_engine_rpm(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

class Init_VehicleReportData_header
{
public:
  Init_VehicleReportData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleReportData_throttle header(::deva_function_msgs::msg::VehicleReportData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleReportData_throttle(msg_);
  }

private:
  ::deva_function_msgs::msg::VehicleReportData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::VehicleReportData>()
{
  return deva_function_msgs::msg::builder::Init_VehicleReportData_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__VEHICLE_REPORT_DATA__BUILDER_HPP_
