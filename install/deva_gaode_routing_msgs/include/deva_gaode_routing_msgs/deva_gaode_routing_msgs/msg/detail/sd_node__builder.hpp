// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SDNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SDNode_solid_line
{
public:
  explicit Init_SDNode_solid_line(::deva_gaode_routing_msgs::msg::SDNode & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SDNode solid_line(::deva_gaode_routing_msgs::msg::SDNode::_solid_line_type arg)
  {
    msg_.solid_line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDNode msg_;
};

class Init_SDNode_sd_cross
{
public:
  explicit Init_SDNode_sd_cross(::deva_gaode_routing_msgs::msg::SDNode & msg)
  : msg_(msg)
  {}
  Init_SDNode_solid_line sd_cross(::deva_gaode_routing_msgs::msg::SDNode::_sd_cross_type arg)
  {
    msg_.sd_cross = std::move(arg);
    return Init_SDNode_solid_line(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDNode msg_;
};

class Init_SDNode_change_point
{
public:
  explicit Init_SDNode_change_point(::deva_gaode_routing_msgs::msg::SDNode & msg)
  : msg_(msg)
  {}
  Init_SDNode_sd_cross change_point(::deva_gaode_routing_msgs::msg::SDNode::_change_point_type arg)
  {
    msg_.change_point = std::move(arg);
    return Init_SDNode_sd_cross(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDNode msg_;
};

class Init_SDNode_out_linklist
{
public:
  explicit Init_SDNode_out_linklist(::deva_gaode_routing_msgs::msg::SDNode & msg)
  : msg_(msg)
  {}
  Init_SDNode_change_point out_linklist(::deva_gaode_routing_msgs::msg::SDNode::_out_linklist_type arg)
  {
    msg_.out_linklist = std::move(arg);
    return Init_SDNode_change_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDNode msg_;
};

class Init_SDNode_in_linklist
{
public:
  explicit Init_SDNode_in_linklist(::deva_gaode_routing_msgs::msg::SDNode & msg)
  : msg_(msg)
  {}
  Init_SDNode_out_linklist in_linklist(::deva_gaode_routing_msgs::msg::SDNode::_in_linklist_type arg)
  {
    msg_.in_linklist = std::move(arg);
    return Init_SDNode_out_linklist(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDNode msg_;
};

class Init_SDNode_geo
{
public:
  explicit Init_SDNode_geo(::deva_gaode_routing_msgs::msg::SDNode & msg)
  : msg_(msg)
  {}
  Init_SDNode_in_linklist geo(::deva_gaode_routing_msgs::msg::SDNode::_geo_type arg)
  {
    msg_.geo = std::move(arg);
    return Init_SDNode_in_linklist(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDNode msg_;
};

class Init_SDNode_id
{
public:
  Init_SDNode_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SDNode_geo id(::deva_gaode_routing_msgs::msg::SDNode::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SDNode_geo(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SDNode>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SDNode_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__BUILDER_HPP_
