// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/ChargingArgumentsInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargingArgumentsInfoProto_amperage
{
public:
  explicit Init_ChargingArgumentsInfoProto_amperage(::deva_navi_msgs::msg::ChargingArgumentsInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::ChargingArgumentsInfoProto amperage(::deva_navi_msgs::msg::ChargingArgumentsInfoProto::_amperage_type arg)
  {
    msg_.amperage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargingArgumentsInfoProto msg_;
};

class Init_ChargingArgumentsInfoProto_voltage
{
public:
  explicit Init_ChargingArgumentsInfoProto_voltage(::deva_navi_msgs::msg::ChargingArgumentsInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargingArgumentsInfoProto_amperage voltage(::deva_navi_msgs::msg::ChargingArgumentsInfoProto::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_ChargingArgumentsInfoProto_amperage(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargingArgumentsInfoProto msg_;
};

class Init_ChargingArgumentsInfoProto_power
{
public:
  explicit Init_ChargingArgumentsInfoProto_power(::deva_navi_msgs::msg::ChargingArgumentsInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargingArgumentsInfoProto_voltage power(::deva_navi_msgs::msg::ChargingArgumentsInfoProto::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_ChargingArgumentsInfoProto_voltage(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargingArgumentsInfoProto msg_;
};

class Init_ChargingArgumentsInfoProto_min_arrival_percent
{
public:
  explicit Init_ChargingArgumentsInfoProto_min_arrival_percent(::deva_navi_msgs::msg::ChargingArgumentsInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargingArgumentsInfoProto_power min_arrival_percent(::deva_navi_msgs::msg::ChargingArgumentsInfoProto::_min_arrival_percent_type arg)
  {
    msg_.min_arrival_percent = std::move(arg);
    return Init_ChargingArgumentsInfoProto_power(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargingArgumentsInfoProto msg_;
};

class Init_ChargingArgumentsInfoProto_type
{
public:
  Init_ChargingArgumentsInfoProto_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargingArgumentsInfoProto_min_arrival_percent type(::deva_navi_msgs::msg::ChargingArgumentsInfoProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ChargingArgumentsInfoProto_min_arrival_percent(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargingArgumentsInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::ChargingArgumentsInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_ChargingArgumentsInfoProto_type();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__BUILDER_HPP_
