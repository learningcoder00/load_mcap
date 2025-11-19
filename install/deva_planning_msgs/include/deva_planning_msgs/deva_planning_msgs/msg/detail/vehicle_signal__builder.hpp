// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/vehicle_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSignal_turn_light
{
public:
  explicit Init_VehicleSignal_turn_light(::deva_planning_msgs::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::VehicleSignal turn_light(::deva_planning_msgs::msg::VehicleSignal::_turn_light_type arg)
  {
    msg_.turn_light = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_emergency_light
{
public:
  explicit Init_VehicleSignal_emergency_light(::deva_planning_msgs::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  Init_VehicleSignal_turn_light emergency_light(::deva_planning_msgs::msg::VehicleSignal::_emergency_light_type arg)
  {
    msg_.emergency_light = std::move(arg);
    return Init_VehicleSignal_turn_light(msg_);
  }

private:
  ::deva_planning_msgs::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_horn
{
public:
  explicit Init_VehicleSignal_horn(::deva_planning_msgs::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  Init_VehicleSignal_emergency_light horn(::deva_planning_msgs::msg::VehicleSignal::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return Init_VehicleSignal_emergency_light(msg_);
  }

private:
  ::deva_planning_msgs::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_low_beam
{
public:
  explicit Init_VehicleSignal_low_beam(::deva_planning_msgs::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  Init_VehicleSignal_horn low_beam(::deva_planning_msgs::msg::VehicleSignal::_low_beam_type arg)
  {
    msg_.low_beam = std::move(arg);
    return Init_VehicleSignal_horn(msg_);
  }

private:
  ::deva_planning_msgs::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_high_beam
{
public:
  explicit Init_VehicleSignal_high_beam(::deva_planning_msgs::msg::VehicleSignal & msg)
  : msg_(msg)
  {}
  Init_VehicleSignal_low_beam high_beam(::deva_planning_msgs::msg::VehicleSignal::_high_beam_type arg)
  {
    msg_.high_beam = std::move(arg);
    return Init_VehicleSignal_low_beam(msg_);
  }

private:
  ::deva_planning_msgs::msg::VehicleSignal msg_;
};

class Init_VehicleSignal_header
{
public:
  Init_VehicleSignal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSignal_high_beam header(::deva_planning_msgs::msg::VehicleSignal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleSignal_high_beam(msg_);
  }

private:
  ::deva_planning_msgs::msg::VehicleSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::VehicleSignal>()
{
  return deva_planning_msgs::msg::builder::Init_VehicleSignal_header();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__BUILDER_HPP_
