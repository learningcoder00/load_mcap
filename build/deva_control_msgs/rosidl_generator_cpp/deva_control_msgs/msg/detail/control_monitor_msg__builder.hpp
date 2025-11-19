// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/control_monitor_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlMonitorMsg_openloop_trajectory
{
public:
  explicit Init_ControlMonitorMsg_openloop_trajectory(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::ControlMonitorMsg openloop_trajectory(::deva_control_msgs::msg::ControlMonitorMsg::_openloop_trajectory_type arg)
  {
    msg_.openloop_trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_planning_header_time
{
public:
  explicit Init_ControlMonitorMsg_planning_header_time(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_openloop_trajectory planning_header_time(::deva_control_msgs::msg::ControlMonitorMsg::_planning_header_time_type arg)
  {
    msg_.planning_header_time = std::move(arg);
    return Init_ControlMonitorMsg_openloop_trajectory(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_chas_header_time
{
public:
  explicit Init_ControlMonitorMsg_chas_header_time(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_planning_header_time chas_header_time(::deva_control_msgs::msg::ControlMonitorMsg::_chas_header_time_type arg)
  {
    msg_.chas_header_time = std::move(arg);
    return Init_ControlMonitorMsg_planning_header_time(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_header_time
{
public:
  explicit Init_ControlMonitorMsg_loc_header_time(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_chas_header_time loc_header_time(::deva_control_msgs::msg::ControlMonitorMsg::_loc_header_time_type arg)
  {
    msg_.loc_header_time = std::move(arg);
    return Init_ControlMonitorMsg_chas_header_time(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_control_computation_time
{
public:
  explicit Init_ControlMonitorMsg_control_computation_time(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_header_time control_computation_time(::deva_control_msgs::msg::ControlMonitorMsg::_control_computation_time_type arg)
  {
    msg_.control_computation_time = std::move(arg);
    return Init_ControlMonitorMsg_loc_header_time(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_cmd_acc
{
public:
  explicit Init_ControlMonitorMsg_cmd_acc(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_control_computation_time cmd_acc(::deva_control_msgs::msg::ControlMonitorMsg::_cmd_acc_type arg)
  {
    msg_.cmd_acc = std::move(arg);
    return Init_ControlMonitorMsg_control_computation_time(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_cmd_steer
{
public:
  explicit Init_ControlMonitorMsg_cmd_steer(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_cmd_acc cmd_steer(::deva_control_msgs::msg::ControlMonitorMsg::_cmd_steer_type arg)
  {
    msg_.cmd_steer = std::move(arg);
    return Init_ControlMonitorMsg_cmd_acc(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_pre_lat_theta
{
public:
  explicit Init_ControlMonitorMsg_pre_lat_theta(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_cmd_steer pre_lat_theta(::deva_control_msgs::msg::ControlMonitorMsg::_pre_lat_theta_type arg)
  {
    msg_.pre_lat_theta = std::move(arg);
    return Init_ControlMonitorMsg_cmd_steer(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_pre_lat_d
{
public:
  explicit Init_ControlMonitorMsg_pre_lat_d(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_pre_lat_theta pre_lat_d(::deva_control_msgs::msg::ControlMonitorMsg::_pre_lat_d_type arg)
  {
    msg_.pre_lat_d = std::move(arg);
    return Init_ControlMonitorMsg_pre_lat_theta(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_heading_d
{
public:
  explicit Init_ControlMonitorMsg_heading_d(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_pre_lat_d heading_d(::deva_control_msgs::msg::ControlMonitorMsg::_heading_d_type arg)
  {
    msg_.heading_d = std::move(arg);
    return Init_ControlMonitorMsg_pre_lat_d(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_heading_d_rate
{
public:
  explicit Init_ControlMonitorMsg_heading_d_rate(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_heading_d heading_d_rate(::deva_control_msgs::msg::ControlMonitorMsg::_heading_d_rate_type arg)
  {
    msg_.heading_d_rate = std::move(arg);
    return Init_ControlMonitorMsg_heading_d(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_lat_d_rate
{
public:
  explicit Init_ControlMonitorMsg_lat_d_rate(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_heading_d_rate lat_d_rate(::deva_control_msgs::msg::ControlMonitorMsg::_lat_d_rate_type arg)
  {
    msg_.lat_d_rate = std::move(arg);
    return Init_ControlMonitorMsg_heading_d_rate(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_lat_d
{
public:
  explicit Init_ControlMonitorMsg_lat_d(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_lat_d_rate lat_d(::deva_control_msgs::msg::ControlMonitorMsg::_lat_d_type arg)
  {
    msg_.lat_d = std::move(arg);
    return Init_ControlMonitorMsg_lat_d_rate(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_actual_acc
{
public:
  explicit Init_ControlMonitorMsg_actual_acc(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_lat_d actual_acc(::deva_control_msgs::msg::ControlMonitorMsg::_actual_acc_type arg)
  {
    msg_.actual_acc = std::move(arg);
    return Init_ControlMonitorMsg_lat_d(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_preview_acc_ref
{
public:
  explicit Init_ControlMonitorMsg_preview_acc_ref(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_actual_acc preview_acc_ref(::deva_control_msgs::msg::ControlMonitorMsg::_preview_acc_ref_type arg)
  {
    msg_.preview_acc_ref = std::move(arg);
    return Init_ControlMonitorMsg_actual_acc(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_acc_ref
{
public:
  explicit Init_ControlMonitorMsg_acc_ref(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_preview_acc_ref acc_ref(::deva_control_msgs::msg::ControlMonitorMsg::_acc_ref_type arg)
  {
    msg_.acc_ref = std::move(arg);
    return Init_ControlMonitorMsg_preview_acc_ref(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_speed_error
{
public:
  explicit Init_ControlMonitorMsg_speed_error(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_acc_ref speed_error(::deva_control_msgs::msg::ControlMonitorMsg::_speed_error_type arg)
  {
    msg_.speed_error = std::move(arg);
    return Init_ControlMonitorMsg_acc_ref(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_preview_speed_ref
{
public:
  explicit Init_ControlMonitorMsg_preview_speed_ref(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_speed_error preview_speed_ref(::deva_control_msgs::msg::ControlMonitorMsg::_preview_speed_ref_type arg)
  {
    msg_.preview_speed_ref = std::move(arg);
    return Init_ControlMonitorMsg_speed_error(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_speed_ref
{
public:
  explicit Init_ControlMonitorMsg_speed_ref(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_preview_speed_ref speed_ref(::deva_control_msgs::msg::ControlMonitorMsg::_speed_ref_type arg)
  {
    msg_.speed_ref = std::move(arg);
    return Init_ControlMonitorMsg_preview_speed_ref(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_current_speed
{
public:
  explicit Init_ControlMonitorMsg_current_speed(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_speed_ref current_speed(::deva_control_msgs::msg::ControlMonitorMsg::_current_speed_type arg)
  {
    msg_.current_speed = std::move(arg);
    return Init_ControlMonitorMsg_speed_ref(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_station_error
{
public:
  explicit Init_ControlMonitorMsg_station_error(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_current_speed station_error(::deva_control_msgs::msg::ControlMonitorMsg::_station_error_type arg)
  {
    msg_.station_error = std::move(arg);
    return Init_ControlMonitorMsg_current_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_station_ref
{
public:
  explicit Init_ControlMonitorMsg_station_ref(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_station_error station_ref(::deva_control_msgs::msg::ControlMonitorMsg::_station_ref_type arg)
  {
    msg_.station_ref = std::move(arg);
    return Init_ControlMonitorMsg_station_error(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_current_station
{
public:
  explicit Init_ControlMonitorMsg_current_station(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_station_ref current_station(::deva_control_msgs::msg::ControlMonitorMsg::_current_station_type arg)
  {
    msg_.current_station = std::move(arg);
    return Init_ControlMonitorMsg_station_ref(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_matched_path_a
{
public:
  explicit Init_ControlMonitorMsg_matched_path_a(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_current_station matched_path_a(::deva_control_msgs::msg::ControlMonitorMsg::_matched_path_a_type arg)
  {
    msg_.matched_path_a = std::move(arg);
    return Init_ControlMonitorMsg_current_station(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_matched_path_v
{
public:
  explicit Init_ControlMonitorMsg_matched_path_v(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_matched_path_a matched_path_v(::deva_control_msgs::msg::ControlMonitorMsg::_matched_path_v_type arg)
  {
    msg_.matched_path_v = std::move(arg);
    return Init_ControlMonitorMsg_matched_path_a(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_matched_path_s
{
public:
  explicit Init_ControlMonitorMsg_matched_path_s(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_matched_path_v matched_path_s(::deva_control_msgs::msg::ControlMonitorMsg::_matched_path_s_type arg)
  {
    msg_.matched_path_s = std::move(arg);
    return Init_ControlMonitorMsg_matched_path_v(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_matched_path_kappa
{
public:
  explicit Init_ControlMonitorMsg_matched_path_kappa(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_matched_path_s matched_path_kappa(::deva_control_msgs::msg::ControlMonitorMsg::_matched_path_kappa_type arg)
  {
    msg_.matched_path_kappa = std::move(arg);
    return Init_ControlMonitorMsg_matched_path_s(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_matched_path_theta
{
public:
  explicit Init_ControlMonitorMsg_matched_path_theta(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_matched_path_kappa matched_path_theta(::deva_control_msgs::msg::ControlMonitorMsg::_matched_path_theta_type arg)
  {
    msg_.matched_path_theta = std::move(arg);
    return Init_ControlMonitorMsg_matched_path_kappa(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_matched_path_y
{
public:
  explicit Init_ControlMonitorMsg_matched_path_y(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_matched_path_theta matched_path_y(::deva_control_msgs::msg::ControlMonitorMsg::_matched_path_y_type arg)
  {
    msg_.matched_path_y = std::move(arg);
    return Init_ControlMonitorMsg_matched_path_theta(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_matched_path_x
{
public:
  explicit Init_ControlMonitorMsg_matched_path_x(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_matched_path_y matched_path_x(::deva_control_msgs::msg::ControlMonitorMsg::_matched_path_x_type arg)
  {
    msg_.matched_path_x = std::move(arg);
    return Init_ControlMonitorMsg_matched_path_y(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_preview_path_theta
{
public:
  explicit Init_ControlMonitorMsg_preview_path_theta(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_matched_path_x preview_path_theta(::deva_control_msgs::msg::ControlMonitorMsg::_preview_path_theta_type arg)
  {
    msg_.preview_path_theta = std::move(arg);
    return Init_ControlMonitorMsg_matched_path_x(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_preview_path_y
{
public:
  explicit Init_ControlMonitorMsg_preview_path_y(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_preview_path_theta preview_path_y(::deva_control_msgs::msg::ControlMonitorMsg::_preview_path_y_type arg)
  {
    msg_.preview_path_y = std::move(arg);
    return Init_ControlMonitorMsg_preview_path_theta(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_preview_path_x
{
public:
  explicit Init_ControlMonitorMsg_preview_path_x(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_preview_path_y preview_path_x(::deva_control_msgs::msg::ControlMonitorMsg::_preview_path_x_type arg)
  {
    msg_.preview_path_x = std::move(arg);
    return Init_ControlMonitorMsg_preview_path_y(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_pitch
{
public:
  explicit Init_ControlMonitorMsg_loc_pitch(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_preview_path_x loc_pitch(::deva_control_msgs::msg::ControlMonitorMsg::_loc_pitch_type arg)
  {
    msg_.loc_pitch = std::move(arg);
    return Init_ControlMonitorMsg_preview_path_x(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_heading
{
public:
  explicit Init_ControlMonitorMsg_loc_heading(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_pitch loc_heading(::deva_control_msgs::msg::ControlMonitorMsg::_loc_heading_type arg)
  {
    msg_.loc_heading = std::move(arg);
    return Init_ControlMonitorMsg_loc_pitch(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_acc
{
public:
  explicit Init_ControlMonitorMsg_loc_acc(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_heading loc_acc(::deva_control_msgs::msg::ControlMonitorMsg::_loc_acc_type arg)
  {
    msg_.loc_acc = std::move(arg);
    return Init_ControlMonitorMsg_loc_heading(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_speed
{
public:
  explicit Init_ControlMonitorMsg_loc_speed(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_acc loc_speed(::deva_control_msgs::msg::ControlMonitorMsg::_loc_speed_type arg)
  {
    msg_.loc_speed = std::move(arg);
    return Init_ControlMonitorMsg_loc_acc(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_z
{
public:
  explicit Init_ControlMonitorMsg_loc_z(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_speed loc_z(::deva_control_msgs::msg::ControlMonitorMsg::_loc_z_type arg)
  {
    msg_.loc_z = std::move(arg);
    return Init_ControlMonitorMsg_loc_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_y
{
public:
  explicit Init_ControlMonitorMsg_loc_y(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_z loc_y(::deva_control_msgs::msg::ControlMonitorMsg::_loc_y_type arg)
  {
    msg_.loc_y = std::move(arg);
    return Init_ControlMonitorMsg_loc_z(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_loc_x
{
public:
  explicit Init_ControlMonitorMsg_loc_x(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_y loc_x(::deva_control_msgs::msg::ControlMonitorMsg::_loc_x_type arg)
  {
    msg_.loc_x = std::move(arg);
    return Init_ControlMonitorMsg_loc_y(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_chs_gear
{
public:
  explicit Init_ControlMonitorMsg_chs_gear(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_loc_x chs_gear(::deva_control_msgs::msg::ControlMonitorMsg::_chs_gear_type arg)
  {
    msg_.chs_gear = std::move(arg);
    return Init_ControlMonitorMsg_loc_x(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_chs_longit_torque
{
public:
  explicit Init_ControlMonitorMsg_chs_longit_torque(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_chs_gear chs_longit_torque(::deva_control_msgs::msg::ControlMonitorMsg::_chs_longit_torque_type arg)
  {
    msg_.chs_longit_torque = std::move(arg);
    return Init_ControlMonitorMsg_chs_gear(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_chs_longit_acc
{
public:
  explicit Init_ControlMonitorMsg_chs_longit_acc(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_chs_longit_torque chs_longit_acc(::deva_control_msgs::msg::ControlMonitorMsg::_chs_longit_acc_type arg)
  {
    msg_.chs_longit_acc = std::move(arg);
    return Init_ControlMonitorMsg_chs_longit_torque(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_chs_steer
{
public:
  explicit Init_ControlMonitorMsg_chs_steer(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_chs_longit_acc chs_steer(::deva_control_msgs::msg::ControlMonitorMsg::_chs_steer_type arg)
  {
    msg_.chs_steer = std::move(arg);
    return Init_ControlMonitorMsg_chs_longit_acc(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_chs_speed
{
public:
  explicit Init_ControlMonitorMsg_chs_speed(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_chs_steer chs_speed(::deva_control_msgs::msg::ControlMonitorMsg::_chs_speed_type arg)
  {
    msg_.chs_speed = std::move(arg);
    return Init_ControlMonitorMsg_chs_steer(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_chs_yaw_rate
{
public:
  explicit Init_ControlMonitorMsg_chs_yaw_rate(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_chs_speed chs_yaw_rate(::deva_control_msgs::msg::ControlMonitorMsg::_chs_yaw_rate_type arg)
  {
    msg_.chs_yaw_rate = std::move(arg);
    return Init_ControlMonitorMsg_chs_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_in_auto_drive
{
public:
  explicit Init_ControlMonitorMsg_in_auto_drive(::deva_control_msgs::msg::ControlMonitorMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMonitorMsg_chs_yaw_rate in_auto_drive(::deva_control_msgs::msg::ControlMonitorMsg::_in_auto_drive_type arg)
  {
    msg_.in_auto_drive = std::move(arg);
    return Init_ControlMonitorMsg_chs_yaw_rate(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

class Init_ControlMonitorMsg_header
{
public:
  Init_ControlMonitorMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlMonitorMsg_in_auto_drive header(::deva_control_msgs::msg::ControlMonitorMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlMonitorMsg_in_auto_drive(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlMonitorMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::ControlMonitorMsg>()
{
  return deva_control_msgs::msg::builder::Init_ControlMonitorMsg_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__BUILDER_HPP_
