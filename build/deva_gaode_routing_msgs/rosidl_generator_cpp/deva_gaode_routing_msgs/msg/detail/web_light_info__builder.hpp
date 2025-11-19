// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLightInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_light_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebLightInfo_desc
{
public:
  explicit Init_WebLightInfo_desc(::deva_gaode_routing_msgs::msg::WebLightInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebLightInfo desc(::deva_gaode_routing_msgs::msg::WebLightInfo::_desc_type arg)
  {
    msg_.desc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLightInfo msg_;
};

class Init_WebLightInfo_light_states
{
public:
  explicit Init_WebLightInfo_light_states(::deva_gaode_routing_msgs::msg::WebLightInfo & msg)
  : msg_(msg)
  {}
  Init_WebLightInfo_desc light_states(::deva_gaode_routing_msgs::msg::WebLightInfo::_light_states_type arg)
  {
    msg_.light_states = std::move(arg);
    return Init_WebLightInfo_desc(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLightInfo msg_;
};

class Init_WebLightInfo_wait_num
{
public:
  explicit Init_WebLightInfo_wait_num(::deva_gaode_routing_msgs::msg::WebLightInfo & msg)
  : msg_(msg)
  {}
  Init_WebLightInfo_light_states wait_num(::deva_gaode_routing_msgs::msg::WebLightInfo::_wait_num_type arg)
  {
    msg_.wait_num = std::move(arg);
    return Init_WebLightInfo_light_states(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLightInfo msg_;
};

class Init_WebLightInfo_dir
{
public:
  Init_WebLightInfo_dir()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebLightInfo_wait_num dir(::deva_gaode_routing_msgs::msg::WebLightInfo::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_WebLightInfo_wait_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLightInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebLightInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebLightInfo_dir();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__BUILDER_HPP_
