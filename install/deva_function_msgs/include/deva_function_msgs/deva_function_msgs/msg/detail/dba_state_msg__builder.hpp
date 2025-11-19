// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/dba_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_DbaStateMsg_run_mode
{
public:
  explicit Init_DbaStateMsg_run_mode(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::DbaStateMsg run_mode(::deva_function_msgs::msg::DbaStateMsg::_run_mode_type arg)
  {
    msg_.run_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_park_out_direction
{
public:
  explicit Init_DbaStateMsg_park_out_direction(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_run_mode park_out_direction(::deva_function_msgs::msg::DbaStateMsg::_park_out_direction_type arg)
  {
    msg_.park_out_direction = std::move(arg);
    return Init_DbaStateMsg_run_mode(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_slot_id
{
public:
  explicit Init_DbaStateMsg_slot_id(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_park_out_direction slot_id(::deva_function_msgs::msg::DbaStateMsg::_slot_id_type arg)
  {
    msg_.slot_id = std::move(arg);
    return Init_DbaStateMsg_park_out_direction(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_save_map
{
public:
  explicit Init_DbaStateMsg_save_map(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_slot_id save_map(::deva_function_msgs::msg::DbaStateMsg::_save_map_type arg)
  {
    msg_.save_map = std::move(arg);
    return Init_DbaStateMsg_slot_id(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_command
{
public:
  explicit Init_DbaStateMsg_command(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_save_map command(::deva_function_msgs::msg::DbaStateMsg::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_DbaStateMsg_save_map(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_belt
{
public:
  explicit Init_DbaStateMsg_belt(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_command belt(::deva_function_msgs::msg::DbaStateMsg::_belt_type arg)
  {
    msg_.belt = std::move(arg);
    return Init_DbaStateMsg_command(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_gear
{
public:
  explicit Init_DbaStateMsg_gear(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_belt gear(::deva_function_msgs::msg::DbaStateMsg::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_DbaStateMsg_belt(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_longit_driveover
{
public:
  explicit Init_DbaStateMsg_longit_driveover(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_gear longit_driveover(::deva_function_msgs::msg::DbaStateMsg::_longit_driveover_type arg)
  {
    msg_.longit_driveover = std::move(arg);
    return Init_DbaStateMsg_gear(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_longit_enable
{
public:
  explicit Init_DbaStateMsg_longit_enable(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_longit_driveover longit_enable(::deva_function_msgs::msg::DbaStateMsg::_longit_enable_type arg)
  {
    msg_.longit_enable = std::move(arg);
    return Init_DbaStateMsg_longit_driveover(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_late_driveover
{
public:
  explicit Init_DbaStateMsg_late_driveover(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_longit_enable late_driveover(::deva_function_msgs::msg::DbaStateMsg::_late_driveover_type arg)
  {
    msg_.late_driveover = std::move(arg);
    return Init_DbaStateMsg_longit_enable(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_late_enable
{
public:
  explicit Init_DbaStateMsg_late_enable(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_late_driveover late_enable(::deva_function_msgs::msg::DbaStateMsg::_late_enable_type arg)
  {
    msg_.late_enable = std::move(arg);
    return Init_DbaStateMsg_late_driveover(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_turn_lamp_lever_state
{
public:
  explicit Init_DbaStateMsg_turn_lamp_lever_state(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_late_enable turn_lamp_lever_state(::deva_function_msgs::msg::DbaStateMsg::_turn_lamp_lever_state_type arg)
  {
    msg_.turn_lamp_lever_state = std::move(arg);
    return Init_DbaStateMsg_late_enable(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_door_open_state
{
public:
  explicit Init_DbaStateMsg_door_open_state(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_turn_lamp_lever_state door_open_state(::deva_function_msgs::msg::DbaStateMsg::_door_open_state_type arg)
  {
    msg_.door_open_state = std::move(arg);
    return Init_DbaStateMsg_turn_lamp_lever_state(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_brake_enable
{
public:
  explicit Init_DbaStateMsg_brake_enable(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_door_open_state brake_enable(::deva_function_msgs::msg::DbaStateMsg::_brake_enable_type arg)
  {
    msg_.brake_enable = std::move(arg);
    return Init_DbaStateMsg_door_open_state(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_acc_enable
{
public:
  explicit Init_DbaStateMsg_acc_enable(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_brake_enable acc_enable(::deva_function_msgs::msg::DbaStateMsg::_acc_enable_type arg)
  {
    msg_.acc_enable = std::move(arg);
    return Init_DbaStateMsg_brake_enable(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_speed
{
public:
  explicit Init_DbaStateMsg_speed(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_acc_enable speed(::deva_function_msgs::msg::DbaStateMsg::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DbaStateMsg_acc_enable(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_epb_state
{
public:
  explicit Init_DbaStateMsg_epb_state(::deva_function_msgs::msg::DbaStateMsg & msg)
  : msg_(msg)
  {}
  Init_DbaStateMsg_speed epb_state(::deva_function_msgs::msg::DbaStateMsg::_epb_state_type arg)
  {
    msg_.epb_state = std::move(arg);
    return Init_DbaStateMsg_speed(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

class Init_DbaStateMsg_publish_timestamp
{
public:
  Init_DbaStateMsg_publish_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DbaStateMsg_epb_state publish_timestamp(::deva_function_msgs::msg::DbaStateMsg::_publish_timestamp_type arg)
  {
    msg_.publish_timestamp = std::move(arg);
    return Init_DbaStateMsg_epb_state(msg_);
  }

private:
  ::deva_function_msgs::msg::DbaStateMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::DbaStateMsg>()
{
  return deva_function_msgs::msg::builder::Init_DbaStateMsg_publish_timestamp();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__BUILDER_HPP_
