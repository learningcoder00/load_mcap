// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/energy_consume_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_EnergyConsumeProto_vehiclechargeleft
{
public:
  explicit Init_EnergyConsumeProto_vehiclechargeleft(::deva_navi_msgs::msg::EnergyConsumeProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::EnergyConsumeProto vehiclechargeleft(::deva_navi_msgs::msg::EnergyConsumeProto::_vehiclechargeleft_type arg)
  {
    msg_.vehiclechargeleft = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::EnergyConsumeProto msg_;
};

class Init_EnergyConsumeProto_energy_end_point
{
public:
  explicit Init_EnergyConsumeProto_energy_end_point(::deva_navi_msgs::msg::EnergyConsumeProto & msg)
  : msg_(msg)
  {}
  Init_EnergyConsumeProto_vehiclechargeleft energy_end_point(::deva_navi_msgs::msg::EnergyConsumeProto::_energy_end_point_type arg)
  {
    msg_.energy_end_point = std::move(arg);
    return Init_EnergyConsumeProto_vehiclechargeleft(msg_);
  }

private:
  ::deva_navi_msgs::msg::EnergyConsumeProto msg_;
};

class Init_EnergyConsumeProto_energy_end_flag
{
public:
  Init_EnergyConsumeProto_energy_end_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnergyConsumeProto_energy_end_point energy_end_flag(::deva_navi_msgs::msg::EnergyConsumeProto::_energy_end_flag_type arg)
  {
    msg_.energy_end_flag = std::move(arg);
    return Init_EnergyConsumeProto_energy_end_point(msg_);
  }

private:
  ::deva_navi_msgs::msg::EnergyConsumeProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::EnergyConsumeProto>()
{
  return deva_navi_msgs::msg::builder::Init_EnergyConsumeProto_energy_end_flag();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__BUILDER_HPP_
