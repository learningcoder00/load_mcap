// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/Guidance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_Guidance_k_lsl
{
public:
  explicit Init_Guidance_k_lsl(::deva_gaode_routing_msgs::msg::Guidance & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::Guidance k_lsl(::deva_gaode_routing_msgs::msg::Guidance::_k_lsl_type arg)
  {
    msg_.k_lsl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Guidance msg_;
};

class Init_Guidance_k_lane_meta_info
{
public:
  explicit Init_Guidance_k_lane_meta_info(::deva_gaode_routing_msgs::msg::Guidance & msg)
  : msg_(msg)
  {}
  Init_Guidance_k_lsl k_lane_meta_info(::deva_gaode_routing_msgs::msg::Guidance::_k_lane_meta_info_type arg)
  {
    msg_.k_lane_meta_info = std::move(arg);
    return Init_Guidance_k_lsl(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Guidance msg_;
};

class Init_Guidance_k_warning_sign
{
public:
  explicit Init_Guidance_k_warning_sign(::deva_gaode_routing_msgs::msg::Guidance & msg)
  : msg_(msg)
  {}
  Init_Guidance_k_lane_meta_info k_warning_sign(::deva_gaode_routing_msgs::msg::Guidance::_k_warning_sign_type arg)
  {
    msg_.k_warning_sign = std::move(arg);
    return Init_Guidance_k_lane_meta_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Guidance msg_;
};

class Init_Guidance_pass_link_id_s
{
public:
  explicit Init_Guidance_pass_link_id_s(::deva_gaode_routing_msgs::msg::Guidance & msg)
  : msg_(msg)
  {}
  Init_Guidance_k_warning_sign pass_link_id_s(::deva_gaode_routing_msgs::msg::Guidance::_pass_link_id_s_type arg)
  {
    msg_.pass_link_id_s = std::move(arg);
    return Init_Guidance_k_warning_sign(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Guidance msg_;
};

class Init_Guidance_node_id
{
public:
  explicit Init_Guidance_node_id(::deva_gaode_routing_msgs::msg::Guidance & msg)
  : msg_(msg)
  {}
  Init_Guidance_pass_link_id_s node_id(::deva_gaode_routing_msgs::msg::Guidance::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_Guidance_pass_link_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Guidance msg_;
};

class Init_Guidance_in_link_id
{
public:
  Init_Guidance_in_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Guidance_node_id in_link_id(::deva_gaode_routing_msgs::msg::Guidance::_in_link_id_type arg)
  {
    msg_.in_link_id = std::move(arg);
    return Init_Guidance_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Guidance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::Guidance>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_Guidance_in_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__BUILDER_HPP_
