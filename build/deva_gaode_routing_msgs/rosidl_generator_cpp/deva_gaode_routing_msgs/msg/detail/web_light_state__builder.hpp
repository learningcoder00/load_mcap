// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLightState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_light_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebLightState_type
{
public:
  explicit Init_WebLightState_type(::deva_gaode_routing_msgs::msg::WebLightState & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebLightState type(::deva_gaode_routing_msgs::msg::WebLightState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLightState msg_;
};

class Init_WebLightState_stime
{
public:
  explicit Init_WebLightState_stime(::deva_gaode_routing_msgs::msg::WebLightState & msg)
  : msg_(msg)
  {}
  Init_WebLightState_type stime(::deva_gaode_routing_msgs::msg::WebLightState::_stime_type arg)
  {
    msg_.stime = std::move(arg);
    return Init_WebLightState_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLightState msg_;
};

class Init_WebLightState_etime
{
public:
  Init_WebLightState_etime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebLightState_stime etime(::deva_gaode_routing_msgs::msg::WebLightState::_etime_type arg)
  {
    msg_.etime = std::move(arg);
    return Init_WebLightState_stime(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLightState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebLightState>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebLightState_etime();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_STATE__BUILDER_HPP_
