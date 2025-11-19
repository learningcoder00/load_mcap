// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RoutingNavPath.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RoutingNavPath_end_point
{
public:
  explicit Init_RoutingNavPath_end_point(::deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RoutingNavPath end_point(::deva_gaode_routing_msgs::msg::RoutingNavPath::_end_point_type arg)
  {
    msg_.end_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

class Init_RoutingNavPath_way_points
{
public:
  explicit Init_RoutingNavPath_way_points(::deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
  : msg_(msg)
  {}
  Init_RoutingNavPath_end_point way_points(::deva_gaode_routing_msgs::msg::RoutingNavPath::_way_points_type arg)
  {
    msg_.way_points = std::move(arg);
    return Init_RoutingNavPath_end_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

class Init_RoutingNavPath_start_point
{
public:
  explicit Init_RoutingNavPath_start_point(::deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
  : msg_(msg)
  {}
  Init_RoutingNavPath_way_points start_point(::deva_gaode_routing_msgs::msg::RoutingNavPath::_start_point_type arg)
  {
    msg_.start_point = std::move(arg);
    return Init_RoutingNavPath_way_points(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

class Init_RoutingNavPath_index
{
public:
  explicit Init_RoutingNavPath_index(::deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
  : msg_(msg)
  {}
  Init_RoutingNavPath_start_point index(::deva_gaode_routing_msgs::msg::RoutingNavPath::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_RoutingNavPath_start_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

class Init_RoutingNavPath_md5
{
public:
  explicit Init_RoutingNavPath_md5(::deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
  : msg_(msg)
  {}
  Init_RoutingNavPath_index md5(::deva_gaode_routing_msgs::msg::RoutingNavPath::_md5_type arg)
  {
    msg_.md5 = std::move(arg);
    return Init_RoutingNavPath_index(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

class Init_RoutingNavPath_status
{
public:
  explicit Init_RoutingNavPath_status(::deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
  : msg_(msg)
  {}
  Init_RoutingNavPath_md5 status(::deva_gaode_routing_msgs::msg::RoutingNavPath::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RoutingNavPath_md5(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

class Init_RoutingNavPath_version
{
public:
  explicit Init_RoutingNavPath_version(::deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
  : msg_(msg)
  {}
  Init_RoutingNavPath_status version(::deva_gaode_routing_msgs::msg::RoutingNavPath::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_RoutingNavPath_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

class Init_RoutingNavPath_header
{
public:
  Init_RoutingNavPath_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutingNavPath_version header(::deva_gaode_routing_msgs::msg::RoutingNavPath::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoutingNavPath_version(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RoutingNavPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RoutingNavPath>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RoutingNavPath_header();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__BUILDER_HPP_
