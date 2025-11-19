// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/vehicle_report_common__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleReportCommon_sustain_action_steer
{
public:
  explicit Init_VehicleReportCommon_sustain_action_steer(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::VehicleReportCommon sustain_action_steer(::deva_control_msgs::msg::VehicleReportCommon::_sustain_action_steer_type arg)
  {
    msg_.sustain_action_steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_sustain_action_throttle
{
public:
  explicit Init_VehicleReportCommon_sustain_action_throttle(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_sustain_action_steer sustain_action_throttle(::deva_control_msgs::msg::VehicleReportCommon::_sustain_action_throttle_type arg)
  {
    msg_.sustain_action_throttle = std::move(arg);
    return Init_VehicleReportCommon_sustain_action_steer(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_heavy_action_steer
{
public:
  explicit Init_VehicleReportCommon_heavy_action_steer(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_sustain_action_throttle heavy_action_steer(::deva_control_msgs::msg::VehicleReportCommon::_heavy_action_steer_type arg)
  {
    msg_.heavy_action_steer = std::move(arg);
    return Init_VehicleReportCommon_sustain_action_throttle(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_action_steer
{
public:
  explicit Init_VehicleReportCommon_action_steer(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_heavy_action_steer action_steer(::deva_control_msgs::msg::VehicleReportCommon::_action_steer_type arg)
  {
    msg_.action_steer = std::move(arg);
    return Init_VehicleReportCommon_heavy_action_steer(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_action_throttle
{
public:
  explicit Init_VehicleReportCommon_action_throttle(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_action_steer action_throttle(::deva_control_msgs::msg::VehicleReportCommon::_action_throttle_type arg)
  {
    msg_.action_throttle = std::move(arg);
    return Init_VehicleReportCommon_action_steer(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_action_brake
{
public:
  explicit Init_VehicleReportCommon_action_brake(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_action_throttle action_brake(::deva_control_msgs::msg::VehicleReportCommon::_action_brake_type arg)
  {
    msg_.action_brake = std::move(arg);
    return Init_VehicleReportCommon_action_throttle(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_request_cancel
{
public:
  explicit Init_VehicleReportCommon_request_cancel(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_action_brake request_cancel(::deva_control_msgs::msg::VehicleReportCommon::_request_cancel_type arg)
  {
    msg_.request_cancel = std::move(arg);
    return Init_VehicleReportCommon_action_brake(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_bywire_exit_reason
{
public:
  explicit Init_VehicleReportCommon_bywire_exit_reason(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_request_cancel bywire_exit_reason(::deva_control_msgs::msg::VehicleReportCommon::_bywire_exit_reason_type arg)
  {
    msg_.bywire_exit_reason = std::move(arg);
    return Init_VehicleReportCommon_request_cancel(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_belt
{
public:
  explicit Init_VehicleReportCommon_belt(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_bywire_exit_reason belt(::deva_control_msgs::msg::VehicleReportCommon::_belt_type arg)
  {
    msg_.belt = std::move(arg);
    return Init_VehicleReportCommon_bywire_exit_reason(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_belt_valid
{
public:
  explicit Init_VehicleReportCommon_belt_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_belt belt_valid(::deva_control_msgs::msg::VehicleReportCommon::_belt_valid_type arg)
  {
    msg_.belt_valid = std::move(arg);
    return Init_VehicleReportCommon_belt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_wheelspeed_rc
{
public:
  explicit Init_VehicleReportCommon_wheelspeed_rc(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_belt_valid wheelspeed_rc(::deva_control_msgs::msg::VehicleReportCommon::_wheelspeed_rc_type arg)
  {
    msg_.wheelspeed_rc = std::move(arg);
    return Init_VehicleReportCommon_belt_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_wheelspeed_rc_valid
{
public:
  explicit Init_VehicleReportCommon_wheelspeed_rc_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_wheelspeed_rc wheelspeed_rc_valid(::deva_control_msgs::msg::VehicleReportCommon::_wheelspeed_rc_valid_type arg)
  {
    msg_.wheelspeed_rc_valid = std::move(arg);
    return Init_VehicleReportCommon_wheelspeed_rc(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_pedal
{
public:
  explicit Init_VehicleReportCommon_pedal(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_wheelspeed_rc_valid pedal(::deva_control_msgs::msg::VehicleReportCommon::_pedal_type arg)
  {
    msg_.pedal = std::move(arg);
    return Init_VehicleReportCommon_wheelspeed_rc_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_pedal_valid
{
public:
  explicit Init_VehicleReportCommon_pedal_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_pedal pedal_valid(::deva_control_msgs::msg::VehicleReportCommon::_pedal_valid_type arg)
  {
    msg_.pedal_valid = std::move(arg);
    return Init_VehicleReportCommon_pedal(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_standstill
{
public:
  explicit Init_VehicleReportCommon_standstill(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_pedal_valid standstill(::deva_control_msgs::msg::VehicleReportCommon::_standstill_type arg)
  {
    msg_.standstill = std::move(arg);
    return Init_VehicleReportCommon_pedal_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_slope
{
public:
  explicit Init_VehicleReportCommon_slope(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_standstill slope(::deva_control_msgs::msg::VehicleReportCommon::_slope_type arg)
  {
    msg_.slope = std::move(arg);
    return Init_VehicleReportCommon_standstill(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_yaw_rate
{
public:
  explicit Init_VehicleReportCommon_yaw_rate(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_slope yaw_rate(::deva_control_msgs::msg::VehicleReportCommon::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_VehicleReportCommon_slope(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_late_acc
{
public:
  explicit Init_VehicleReportCommon_late_acc(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_yaw_rate late_acc(::deva_control_msgs::msg::VehicleReportCommon::_late_acc_type arg)
  {
    msg_.late_acc = std::move(arg);
    return Init_VehicleReportCommon_yaw_rate(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_door_open_state
{
public:
  explicit Init_VehicleReportCommon_door_open_state(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_late_acc door_open_state(::deva_control_msgs::msg::VehicleReportCommon::_door_open_state_type arg)
  {
    msg_.door_open_state = std::move(arg);
    return Init_VehicleReportCommon_late_acc(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_wiper_front
{
public:
  explicit Init_VehicleReportCommon_wiper_front(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_door_open_state wiper_front(::deva_control_msgs::msg::VehicleReportCommon::_wiper_front_type arg)
  {
    msg_.wiper_front = std::move(arg);
    return Init_VehicleReportCommon_door_open_state(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_hazard_lamp
{
public:
  explicit Init_VehicleReportCommon_hazard_lamp(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_wiper_front hazard_lamp(::deva_control_msgs::msg::VehicleReportCommon::_hazard_lamp_type arg)
  {
    msg_.hazard_lamp = std::move(arg);
    return Init_VehicleReportCommon_wiper_front(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_turn_lamp_right
{
public:
  explicit Init_VehicleReportCommon_turn_lamp_right(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_hazard_lamp turn_lamp_right(::deva_control_msgs::msg::VehicleReportCommon::_turn_lamp_right_type arg)
  {
    msg_.turn_lamp_right = std::move(arg);
    return Init_VehicleReportCommon_hazard_lamp(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_turn_lamp_left
{
public:
  explicit Init_VehicleReportCommon_turn_lamp_left(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_turn_lamp_right turn_lamp_left(::deva_control_msgs::msg::VehicleReportCommon::_turn_lamp_left_type arg)
  {
    msg_.turn_lamp_left = std::move(arg);
    return Init_VehicleReportCommon_turn_lamp_right(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_turn_lamp_lever_state
{
public:
  explicit Init_VehicleReportCommon_turn_lamp_lever_state(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_turn_lamp_left turn_lamp_lever_state(::deva_control_msgs::msg::VehicleReportCommon::_turn_lamp_lever_state_type arg)
  {
    msg_.turn_lamp_lever_state = std::move(arg);
    return Init_VehicleReportCommon_turn_lamp_left(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_longit_flt
{
public:
  explicit Init_VehicleReportCommon_longit_flt(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_turn_lamp_lever_state longit_flt(::deva_control_msgs::msg::VehicleReportCommon::_longit_flt_type arg)
  {
    msg_.longit_flt = std::move(arg);
    return Init_VehicleReportCommon_turn_lamp_lever_state(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_longit_acc
{
public:
  explicit Init_VehicleReportCommon_longit_acc(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_longit_flt longit_acc(::deva_control_msgs::msg::VehicleReportCommon::_longit_acc_type arg)
  {
    msg_.longit_acc = std::move(arg);
    return Init_VehicleReportCommon_longit_flt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_longit_acc_valid
{
public:
  explicit Init_VehicleReportCommon_longit_acc_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_longit_acc longit_acc_valid(::deva_control_msgs::msg::VehicleReportCommon::_longit_acc_valid_type arg)
  {
    msg_.longit_acc_valid = std::move(arg);
    return Init_VehicleReportCommon_longit_acc(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_longit_torque
{
public:
  explicit Init_VehicleReportCommon_longit_torque(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_longit_acc_valid longit_torque(::deva_control_msgs::msg::VehicleReportCommon::_longit_torque_type arg)
  {
    msg_.longit_torque = std::move(arg);
    return Init_VehicleReportCommon_longit_acc_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_longit_torque_valid
{
public:
  explicit Init_VehicleReportCommon_longit_torque_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_longit_torque longit_torque_valid(::deva_control_msgs::msg::VehicleReportCommon::_longit_torque_valid_type arg)
  {
    msg_.longit_torque_valid = std::move(arg);
    return Init_VehicleReportCommon_longit_torque(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_longit_driveover
{
public:
  explicit Init_VehicleReportCommon_longit_driveover(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_longit_torque_valid longit_driveover(::deva_control_msgs::msg::VehicleReportCommon::_longit_driveover_type arg)
  {
    msg_.longit_driveover = std::move(arg);
    return Init_VehicleReportCommon_longit_torque_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_longit_enable
{
public:
  explicit Init_VehicleReportCommon_longit_enable(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_longit_driveover longit_enable(::deva_control_msgs::msg::VehicleReportCommon::_longit_enable_type arg)
  {
    msg_.longit_enable = std::move(arg);
    return Init_VehicleReportCommon_longit_driveover(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_late_flt
{
public:
  explicit Init_VehicleReportCommon_late_flt(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_longit_enable late_flt(::deva_control_msgs::msg::VehicleReportCommon::_late_flt_type arg)
  {
    msg_.late_flt = std::move(arg);
    return Init_VehicleReportCommon_longit_enable(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_steer_rotate_torque_speed
{
public:
  explicit Init_VehicleReportCommon_steer_rotate_torque_speed(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_late_flt steer_rotate_torque_speed(::deva_control_msgs::msg::VehicleReportCommon::_steer_rotate_torque_speed_type arg)
  {
    msg_.steer_rotate_torque_speed = std::move(arg);
    return Init_VehicleReportCommon_late_flt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_steer_torque
{
public:
  explicit Init_VehicleReportCommon_steer_torque(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_steer_rotate_torque_speed steer_torque(::deva_control_msgs::msg::VehicleReportCommon::_steer_torque_type arg)
  {
    msg_.steer_torque = std::move(arg);
    return Init_VehicleReportCommon_steer_rotate_torque_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_steer_torque_valid
{
public:
  explicit Init_VehicleReportCommon_steer_torque_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_steer_torque steer_torque_valid(::deva_control_msgs::msg::VehicleReportCommon::_steer_torque_valid_type arg)
  {
    msg_.steer_torque_valid = std::move(arg);
    return Init_VehicleReportCommon_steer_torque(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_steer_rotate_angle_speed
{
public:
  explicit Init_VehicleReportCommon_steer_rotate_angle_speed(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_steer_torque_valid steer_rotate_angle_speed(::deva_control_msgs::msg::VehicleReportCommon::_steer_rotate_angle_speed_type arg)
  {
    msg_.steer_rotate_angle_speed = std::move(arg);
    return Init_VehicleReportCommon_steer_torque_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_steer_angle
{
public:
  explicit Init_VehicleReportCommon_steer_angle(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_steer_rotate_angle_speed steer_angle(::deva_control_msgs::msg::VehicleReportCommon::_steer_angle_type arg)
  {
    msg_.steer_angle = std::move(arg);
    return Init_VehicleReportCommon_steer_rotate_angle_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_steer_angle_valid
{
public:
  explicit Init_VehicleReportCommon_steer_angle_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_steer_angle steer_angle_valid(::deva_control_msgs::msg::VehicleReportCommon::_steer_angle_valid_type arg)
  {
    msg_.steer_angle_valid = std::move(arg);
    return Init_VehicleReportCommon_steer_angle(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_late_driveover
{
public:
  explicit Init_VehicleReportCommon_late_driveover(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_steer_angle_valid late_driveover(::deva_control_msgs::msg::VehicleReportCommon::_late_driveover_type arg)
  {
    msg_.late_driveover = std::move(arg);
    return Init_VehicleReportCommon_steer_angle_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_late_enable
{
public:
  explicit Init_VehicleReportCommon_late_enable(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_late_driveover late_enable(::deva_control_msgs::msg::VehicleReportCommon::_late_enable_type arg)
  {
    msg_.late_enable = std::move(arg);
    return Init_VehicleReportCommon_late_driveover(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_epb_flt
{
public:
  explicit Init_VehicleReportCommon_epb_flt(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_late_enable epb_flt(::deva_control_msgs::msg::VehicleReportCommon::_epb_flt_type arg)
  {
    msg_.epb_flt = std::move(arg);
    return Init_VehicleReportCommon_late_enable(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_epb_state
{
public:
  explicit Init_VehicleReportCommon_epb_state(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_epb_flt epb_state(::deva_control_msgs::msg::VehicleReportCommon::_epb_state_type arg)
  {
    msg_.epb_state = std::move(arg);
    return Init_VehicleReportCommon_epb_flt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_gear
{
public:
  explicit Init_VehicleReportCommon_gear(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_epb_state gear(::deva_control_msgs::msg::VehicleReportCommon::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_VehicleReportCommon_epb_state(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_gear_enable
{
public:
  explicit Init_VehicleReportCommon_gear_enable(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_gear gear_enable(::deva_control_msgs::msg::VehicleReportCommon::_gear_enable_type arg)
  {
    msg_.gear_enable = std::move(arg);
    return Init_VehicleReportCommon_gear(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_wheelspeed
{
public:
  explicit Init_VehicleReportCommon_wheelspeed(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_gear_enable wheelspeed(::deva_control_msgs::msg::VehicleReportCommon::_wheelspeed_type arg)
  {
    msg_.wheelspeed = std::move(arg);
    return Init_VehicleReportCommon_gear_enable(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_wheelspeed_dir
{
public:
  explicit Init_VehicleReportCommon_wheelspeed_dir(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_wheelspeed wheelspeed_dir(::deva_control_msgs::msg::VehicleReportCommon::_wheelspeed_dir_type arg)
  {
    msg_.wheelspeed_dir = std::move(arg);
    return Init_VehicleReportCommon_wheelspeed(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_wheelspeed_valid
{
public:
  explicit Init_VehicleReportCommon_wheelspeed_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_wheelspeed_dir wheelspeed_valid(::deva_control_msgs::msg::VehicleReportCommon::_wheelspeed_valid_type arg)
  {
    msg_.wheelspeed_valid = std::move(arg);
    return Init_VehicleReportCommon_wheelspeed_dir(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_wheelspeed_directivity
{
public:
  explicit Init_VehicleReportCommon_wheelspeed_directivity(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_wheelspeed_valid wheelspeed_directivity(::deva_control_msgs::msg::VehicleReportCommon::_wheelspeed_directivity_type arg)
  {
    msg_.wheelspeed_directivity = std::move(arg);
    return Init_VehicleReportCommon_wheelspeed_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_speed_directivity
{
public:
  explicit Init_VehicleReportCommon_speed_directivity(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_wheelspeed_directivity speed_directivity(::deva_control_msgs::msg::VehicleReportCommon::_speed_directivity_type arg)
  {
    msg_.speed_directivity = std::move(arg);
    return Init_VehicleReportCommon_wheelspeed_directivity(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_speed_valid
{
public:
  explicit Init_VehicleReportCommon_speed_valid(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_speed_directivity speed_valid(::deva_control_msgs::msg::VehicleReportCommon::_speed_valid_type arg)
  {
    msg_.speed_valid = std::move(arg);
    return Init_VehicleReportCommon_speed_directivity(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_speed
{
public:
  explicit Init_VehicleReportCommon_speed(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_speed_valid speed(::deva_control_msgs::msg::VehicleReportCommon::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_VehicleReportCommon_speed_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_unix_ts
{
public:
  explicit Init_VehicleReportCommon_unix_ts(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_speed unix_ts(::deva_control_msgs::msg::VehicleReportCommon::_unix_ts_type arg)
  {
    msg_.unix_ts = std::move(arg);
    return Init_VehicleReportCommon_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_protocol_version
{
public:
  explicit Init_VehicleReportCommon_protocol_version(::deva_control_msgs::msg::VehicleReportCommon & msg)
  : msg_(msg)
  {}
  Init_VehicleReportCommon_unix_ts protocol_version(::deva_control_msgs::msg::VehicleReportCommon::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_VehicleReportCommon_unix_ts(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

class Init_VehicleReportCommon_header
{
public:
  Init_VehicleReportCommon_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleReportCommon_protocol_version header(::deva_control_msgs::msg::VehicleReportCommon::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleReportCommon_protocol_version(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportCommon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::VehicleReportCommon>()
{
  return deva_control_msgs::msg::builder::Init_VehicleReportCommon_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__BUILDER_HPP_
