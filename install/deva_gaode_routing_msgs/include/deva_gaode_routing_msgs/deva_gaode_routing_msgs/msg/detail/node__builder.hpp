// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_Node_links_out_cross
{
public:
  explicit Init_Node_links_out_cross(::deva_gaode_routing_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::Node links_out_cross(::deva_gaode_routing_msgs::msg::Node::_links_out_cross_type arg)
  {
    msg_.links_out_cross = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

class Init_Node_links_out
{
public:
  explicit Init_Node_links_out(::deva_gaode_routing_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_links_out_cross links_out(::deva_gaode_routing_msgs::msg::Node::_links_out_type arg)
  {
    msg_.links_out = std::move(arg);
    return Init_Node_links_out_cross(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

class Init_Node_links_enter_cross
{
public:
  explicit Init_Node_links_enter_cross(::deva_gaode_routing_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_links_out links_enter_cross(::deva_gaode_routing_msgs::msg::Node::_links_enter_cross_type arg)
  {
    msg_.links_enter_cross = std::move(arg);
    return Init_Node_links_out(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

class Init_Node_links_enter
{
public:
  explicit Init_Node_links_enter(::deva_gaode_routing_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_links_enter_cross links_enter(::deva_gaode_routing_msgs::msg::Node::_links_enter_type arg)
  {
    msg_.links_enter = std::move(arg);
    return Init_Node_links_enter_cross(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

class Init_Node_position
{
public:
  explicit Init_Node_position(::deva_gaode_routing_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_links_enter position(::deva_gaode_routing_msgs::msg::Node::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Node_links_enter(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

class Init_Node_has_traffic_light
{
public:
  explicit Init_Node_has_traffic_light(::deva_gaode_routing_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_position has_traffic_light(::deva_gaode_routing_msgs::msg::Node::_has_traffic_light_type arg)
  {
    msg_.has_traffic_light = std::move(arg);
    return Init_Node_position(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

class Init_Node_cross_flag
{
public:
  explicit Init_Node_cross_flag(::deva_gaode_routing_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_has_traffic_light cross_flag(::deva_gaode_routing_msgs::msg::Node::_cross_flag_type arg)
  {
    msg_.cross_flag = std::move(arg);
    return Init_Node_has_traffic_light(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

class Init_Node_tpid
{
public:
  Init_Node_tpid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_cross_flag tpid(::deva_gaode_routing_msgs::msg::Node::_tpid_type arg)
  {
    msg_.tpid = std::move(arg);
    return Init_Node_cross_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::Node>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_Node_tpid();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
