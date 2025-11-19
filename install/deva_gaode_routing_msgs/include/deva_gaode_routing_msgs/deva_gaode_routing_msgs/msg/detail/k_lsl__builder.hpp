// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/KLsl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/k_lsl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_KLsl_lsl_lanes
{
public:
  explicit Init_KLsl_lsl_lanes(::deva_gaode_routing_msgs::msg::KLsl & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::KLsl lsl_lanes(::deva_gaode_routing_msgs::msg::KLsl::_lsl_lanes_type arg)
  {
    msg_.lsl_lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLsl msg_;
};

class Init_KLsl_lane_nums
{
public:
  explicit Init_KLsl_lane_nums(::deva_gaode_routing_msgs::msg::KLsl & msg)
  : msg_(msg)
  {}
  Init_KLsl_lsl_lanes lane_nums(::deva_gaode_routing_msgs::msg::KLsl::_lane_nums_type arg)
  {
    msg_.lane_nums = std::move(arg);
    return Init_KLsl_lsl_lanes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLsl msg_;
};

class Init_KLsl_lsl_type
{
public:
  explicit Init_KLsl_lsl_type(::deva_gaode_routing_msgs::msg::KLsl & msg)
  : msg_(msg)
  {}
  Init_KLsl_lane_nums lsl_type(::deva_gaode_routing_msgs::msg::KLsl::_lsl_type_type arg)
  {
    msg_.lsl_type = std::move(arg);
    return Init_KLsl_lane_nums(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLsl msg_;
};

class Init_KLsl_seqnum
{
public:
  explicit Init_KLsl_seqnum(::deva_gaode_routing_msgs::msg::KLsl & msg)
  : msg_(msg)
  {}
  Init_KLsl_lsl_type seqnum(::deva_gaode_routing_msgs::msg::KLsl::_seqnum_type arg)
  {
    msg_.seqnum = std::move(arg);
    return Init_KLsl_lsl_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLsl msg_;
};

class Init_KLsl_pass_link_id_s
{
public:
  explicit Init_KLsl_pass_link_id_s(::deva_gaode_routing_msgs::msg::KLsl & msg)
  : msg_(msg)
  {}
  Init_KLsl_seqnum pass_link_id_s(::deva_gaode_routing_msgs::msg::KLsl::_pass_link_id_s_type arg)
  {
    msg_.pass_link_id_s = std::move(arg);
    return Init_KLsl_seqnum(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLsl msg_;
};

class Init_KLsl_node_id
{
public:
  explicit Init_KLsl_node_id(::deva_gaode_routing_msgs::msg::KLsl & msg)
  : msg_(msg)
  {}
  Init_KLsl_pass_link_id_s node_id(::deva_gaode_routing_msgs::msg::KLsl::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_KLsl_pass_link_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLsl msg_;
};

class Init_KLsl_in_link_id
{
public:
  Init_KLsl_in_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KLsl_node_id in_link_id(::deva_gaode_routing_msgs::msg::KLsl::_in_link_id_type arg)
  {
    msg_.in_link_id = std::move(arg);
    return Init_KLsl_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLsl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::KLsl>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_KLsl_in_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__BUILDER_HPP_
