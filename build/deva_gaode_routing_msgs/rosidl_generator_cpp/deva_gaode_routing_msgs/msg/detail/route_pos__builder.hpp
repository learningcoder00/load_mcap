// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RoutePos.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RoutePos_link_offset
{
public:
  explicit Init_RoutePos_link_offset(::deva_gaode_routing_msgs::msg::RoutePos & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RoutePos link_offset(::deva_gaode_routing_msgs::msg::RoutePos::_link_offset_type arg)
  {
    msg_.link_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutePos msg_;
};

class Init_RoutePos_offset_length
{
public:
  explicit Init_RoutePos_offset_length(::deva_gaode_routing_msgs::msg::RoutePos & msg)
  : msg_(msg)
  {}
  Init_RoutePos_link_offset offset_length(::deva_gaode_routing_msgs::msg::RoutePos::_offset_length_type arg)
  {
    msg_.offset_length = std::move(arg);
    return Init_RoutePos_link_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutePos msg_;
};

class Init_RoutePos_coor_start
{
public:
  explicit Init_RoutePos_coor_start(::deva_gaode_routing_msgs::msg::RoutePos & msg)
  : msg_(msg)
  {}
  Init_RoutePos_offset_length coor_start(::deva_gaode_routing_msgs::msg::RoutePos::_coor_start_type arg)
  {
    msg_.coor_start = std::move(arg);
    return Init_RoutePos_offset_length(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutePos msg_;
};

class Init_RoutePos_pos
{
public:
  Init_RoutePos_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutePos_coor_start pos(::deva_gaode_routing_msgs::msg::RoutePos::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_RoutePos_coor_start(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutePos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RoutePos>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RoutePos_pos();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__BUILDER_HPP_
