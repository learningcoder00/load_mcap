// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/NavRoute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/nav_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_NavRoute_remain_distance
{
public:
  explicit Init_NavRoute_remain_distance(::deva_gaode_routing_msgs::msg::NavRoute & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::NavRoute remain_distance(::deva_gaode_routing_msgs::msg::NavRoute::_remain_distance_type arg)
  {
    msg_.remain_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::NavRoute msg_;
};

class Init_NavRoute_match_status
{
public:
  explicit Init_NavRoute_match_status(::deva_gaode_routing_msgs::msg::NavRoute & msg)
  : msg_(msg)
  {}
  Init_NavRoute_remain_distance match_status(::deva_gaode_routing_msgs::msg::NavRoute::_match_status_type arg)
  {
    msg_.match_status = std::move(arg);
    return Init_NavRoute_remain_distance(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::NavRoute msg_;
};

class Init_NavRoute_navi_status
{
public:
  explicit Init_NavRoute_navi_status(::deva_gaode_routing_msgs::msg::NavRoute & msg)
  : msg_(msg)
  {}
  Init_NavRoute_match_status navi_status(::deva_gaode_routing_msgs::msg::NavRoute::_navi_status_type arg)
  {
    msg_.navi_status = std::move(arg);
    return Init_NavRoute_match_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::NavRoute msg_;
};

class Init_NavRoute_route_list
{
public:
  Init_NavRoute_route_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavRoute_navi_status route_list(::deva_gaode_routing_msgs::msg::NavRoute::_route_list_type arg)
  {
    msg_.route_list = std::move(arg);
    return Init_NavRoute_navi_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::NavRoute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::NavRoute>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_NavRoute_route_list();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__BUILDER_HPP_
