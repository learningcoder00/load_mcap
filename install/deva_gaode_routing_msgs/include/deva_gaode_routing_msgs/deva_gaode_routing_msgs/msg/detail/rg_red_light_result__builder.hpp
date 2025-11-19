// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGRedLightResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RGRedLightResult_pos
{
public:
  explicit Init_RGRedLightResult_pos(::deva_gaode_routing_msgs::msg::RGRedLightResult & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RGRedLightResult pos(::deva_gaode_routing_msgs::msg::RGRedLightResult::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGRedLightResult msg_;
};

class Init_RGRedLightResult_raw_link_id
{
public:
  Init_RGRedLightResult_raw_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGRedLightResult_pos raw_link_id(::deva_gaode_routing_msgs::msg::RGRedLightResult::_raw_link_id_type arg)
  {
    msg_.raw_link_id = std::move(arg);
    return Init_RGRedLightResult_pos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGRedLightResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RGRedLightResult>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RGRedLightResult_raw_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__BUILDER_HPP_
