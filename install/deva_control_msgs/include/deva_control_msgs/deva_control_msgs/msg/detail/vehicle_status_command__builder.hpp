// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/vehicle_status_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatusCommand_park_action
{
public:
  explicit Init_VehicleStatusCommand_park_action(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::VehicleStatusCommand park_action(::deva_control_msgs::msg::VehicleStatusCommand::_park_action_type arg)
  {
    msg_.park_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_use_park_cmd
{
public:
  explicit Init_VehicleStatusCommand_use_park_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_park_action use_park_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_use_park_cmd_type arg)
  {
    msg_.use_park_cmd = std::move(arg);
    return Init_VehicleStatusCommand_park_action(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_longitudinal_en
{
public:
  explicit Init_VehicleStatusCommand_longitudinal_en(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_use_park_cmd longitudinal_en(::deva_control_msgs::msg::VehicleStatusCommand::_longitudinal_en_type arg)
  {
    msg_.longitudinal_en = std::move(arg);
    return Init_VehicleStatusCommand_use_park_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_lateral_en
{
public:
  explicit Init_VehicleStatusCommand_lateral_en(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_longitudinal_en lateral_en(::deva_control_msgs::msg::VehicleStatusCommand::_lateral_en_type arg)
  {
    msg_.lateral_en = std::move(arg);
    return Init_VehicleStatusCommand_longitudinal_en(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_use_bywire_enable_cmd
{
public:
  explicit Init_VehicleStatusCommand_use_bywire_enable_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_lateral_en use_bywire_enable_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_use_bywire_enable_cmd_type arg)
  {
    msg_.use_bywire_enable_cmd = std::move(arg);
    return Init_VehicleStatusCommand_lateral_en(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_wiper_cmd
{
public:
  explicit Init_VehicleStatusCommand_wiper_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_use_bywire_enable_cmd wiper_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_wiper_cmd_type arg)
  {
    msg_.wiper_cmd = std::move(arg);
    return Init_VehicleStatusCommand_use_bywire_enable_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_wiper_en
{
public:
  explicit Init_VehicleStatusCommand_wiper_en(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_wiper_cmd wiper_en(::deva_control_msgs::msg::VehicleStatusCommand::_wiper_en_type arg)
  {
    msg_.wiper_en = std::move(arg);
    return Init_VehicleStatusCommand_wiper_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_use_wiper_cmd
{
public:
  explicit Init_VehicleStatusCommand_use_wiper_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_wiper_en use_wiper_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_use_wiper_cmd_type arg)
  {
    msg_.use_wiper_cmd = std::move(arg);
    return Init_VehicleStatusCommand_wiper_en(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_turn_light_cmd
{
public:
  explicit Init_VehicleStatusCommand_turn_light_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_use_wiper_cmd turn_light_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_turn_light_cmd_type arg)
  {
    msg_.turn_light_cmd = std::move(arg);
    return Init_VehicleStatusCommand_use_wiper_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_turn_light_en
{
public:
  explicit Init_VehicleStatusCommand_turn_light_en(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_turn_light_cmd turn_light_en(::deva_control_msgs::msg::VehicleStatusCommand::_turn_light_en_type arg)
  {
    msg_.turn_light_en = std::move(arg);
    return Init_VehicleStatusCommand_turn_light_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_use_turn_light_cmd
{
public:
  explicit Init_VehicleStatusCommand_use_turn_light_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_turn_light_en use_turn_light_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_use_turn_light_cmd_type arg)
  {
    msg_.use_turn_light_cmd = std::move(arg);
    return Init_VehicleStatusCommand_turn_light_en(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_epb_cmd_val
{
public:
  explicit Init_VehicleStatusCommand_epb_cmd_val(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_use_turn_light_cmd epb_cmd_val(::deva_control_msgs::msg::VehicleStatusCommand::_epb_cmd_val_type arg)
  {
    msg_.epb_cmd_val = std::move(arg);
    return Init_VehicleStatusCommand_use_turn_light_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_epb_en
{
public:
  explicit Init_VehicleStatusCommand_epb_en(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_epb_cmd_val epb_en(::deva_control_msgs::msg::VehicleStatusCommand::_epb_en_type arg)
  {
    msg_.epb_en = std::move(arg);
    return Init_VehicleStatusCommand_epb_cmd_val(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_use_epb_cmd
{
public:
  explicit Init_VehicleStatusCommand_use_epb_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_epb_en use_epb_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_use_epb_cmd_type arg)
  {
    msg_.use_epb_cmd = std::move(arg);
    return Init_VehicleStatusCommand_epb_en(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_gear_cmd_val
{
public:
  explicit Init_VehicleStatusCommand_gear_cmd_val(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_use_epb_cmd gear_cmd_val(::deva_control_msgs::msg::VehicleStatusCommand::_gear_cmd_val_type arg)
  {
    msg_.gear_cmd_val = std::move(arg);
    return Init_VehicleStatusCommand_use_epb_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_gear_en
{
public:
  explicit Init_VehicleStatusCommand_gear_en(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_gear_cmd_val gear_en(::deva_control_msgs::msg::VehicleStatusCommand::_gear_en_type arg)
  {
    msg_.gear_en = std::move(arg);
    return Init_VehicleStatusCommand_gear_cmd_val(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_use_gear_cmd
{
public:
  explicit Init_VehicleStatusCommand_use_gear_cmd(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_gear_en use_gear_cmd(::deva_control_msgs::msg::VehicleStatusCommand::_use_gear_cmd_type arg)
  {
    msg_.use_gear_cmd = std::move(arg);
    return Init_VehicleStatusCommand_gear_en(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_node_name
{
public:
  explicit Init_VehicleStatusCommand_node_name(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_use_gear_cmd node_name(::deva_control_msgs::msg::VehicleStatusCommand::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_VehicleStatusCommand_use_gear_cmd(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_protocol_version
{
public:
  explicit Init_VehicleStatusCommand_protocol_version(::deva_control_msgs::msg::VehicleStatusCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusCommand_node_name protocol_version(::deva_control_msgs::msg::VehicleStatusCommand::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_VehicleStatusCommand_node_name(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

class Init_VehicleStatusCommand_header
{
public:
  Init_VehicleStatusCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatusCommand_protocol_version header(::deva_control_msgs::msg::VehicleStatusCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStatusCommand_protocol_version(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleStatusCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::VehicleStatusCommand>()
{
  return deva_control_msgs::msg::builder::Init_VehicleStatusCommand_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__BUILDER_HPP_
