// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/StopLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/stop_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_StopLine_related_intersection_road_ids
{
public:
  explicit Init_StopLine_related_intersection_road_ids(::deva_gaode_routing_msgs::msg::StopLine & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::StopLine related_intersection_road_ids(::deva_gaode_routing_msgs::msg::StopLine::_related_intersection_road_ids_type arg)
  {
    msg_.related_intersection_road_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::StopLine msg_;
};

class Init_StopLine_related_lane_ids
{
public:
  explicit Init_StopLine_related_lane_ids(::deva_gaode_routing_msgs::msg::StopLine & msg)
  : msg_(msg)
  {}
  Init_StopLine_related_intersection_road_ids related_lane_ids(::deva_gaode_routing_msgs::msg::StopLine::_related_lane_ids_type arg)
  {
    msg_.related_lane_ids = std::move(arg);
    return Init_StopLine_related_intersection_road_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::StopLine msg_;
};

class Init_StopLine_related_node_id
{
public:
  explicit Init_StopLine_related_node_id(::deva_gaode_routing_msgs::msg::StopLine & msg)
  : msg_(msg)
  {}
  Init_StopLine_related_lane_ids related_node_id(::deva_gaode_routing_msgs::msg::StopLine::_related_node_id_type arg)
  {
    msg_.related_node_id = std::move(arg);
    return Init_StopLine_related_lane_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::StopLine msg_;
};

class Init_StopLine_location
{
public:
  explicit Init_StopLine_location(::deva_gaode_routing_msgs::msg::StopLine & msg)
  : msg_(msg)
  {}
  Init_StopLine_related_node_id location(::deva_gaode_routing_msgs::msg::StopLine::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_StopLine_related_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::StopLine msg_;
};

class Init_StopLine_type
{
public:
  explicit Init_StopLine_type(::deva_gaode_routing_msgs::msg::StopLine & msg)
  : msg_(msg)
  {}
  Init_StopLine_location type(::deva_gaode_routing_msgs::msg::StopLine::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_StopLine_location(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::StopLine msg_;
};

class Init_StopLine_id
{
public:
  Init_StopLine_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopLine_type id(::deva_gaode_routing_msgs::msg::StopLine::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_StopLine_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::StopLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::StopLine>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_StopLine_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__BUILDER_HPP_
