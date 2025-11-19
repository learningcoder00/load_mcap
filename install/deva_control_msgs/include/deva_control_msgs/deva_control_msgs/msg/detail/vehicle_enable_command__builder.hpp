// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/VehicleEnableCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/vehicle_enable_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleEnableCommand_enable_bywire
{
public:
  explicit Init_VehicleEnableCommand_enable_bywire(::deva_control_msgs::msg::VehicleEnableCommand & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::VehicleEnableCommand enable_bywire(::deva_control_msgs::msg::VehicleEnableCommand::_enable_bywire_type arg)
  {
    msg_.enable_bywire = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleEnableCommand msg_;
};

class Init_VehicleEnableCommand_protocol_version
{
public:
  explicit Init_VehicleEnableCommand_protocol_version(::deva_control_msgs::msg::VehicleEnableCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleEnableCommand_enable_bywire protocol_version(::deva_control_msgs::msg::VehicleEnableCommand::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_VehicleEnableCommand_enable_bywire(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleEnableCommand msg_;
};

class Init_VehicleEnableCommand_header
{
public:
  Init_VehicleEnableCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleEnableCommand_protocol_version header(::deva_control_msgs::msg::VehicleEnableCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleEnableCommand_protocol_version(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleEnableCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::VehicleEnableCommand>()
{
  return deva_control_msgs::msg::builder::Init_VehicleEnableCommand_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__BUILDER_HPP_
