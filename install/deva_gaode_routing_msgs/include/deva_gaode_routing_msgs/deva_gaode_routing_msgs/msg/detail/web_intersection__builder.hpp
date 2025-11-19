// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebIntersection.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_INTERSECTION__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_INTERSECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_intersection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebIntersection_second_road_id
{
public:
  explicit Init_WebIntersection_second_road_id(::deva_gaode_routing_msgs::msg::WebIntersection & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebIntersection second_road_id(::deva_gaode_routing_msgs::msg::WebIntersection::_second_road_id_type arg)
  {
    msg_.second_road_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebIntersection msg_;
};

class Init_WebIntersection_first_road_id
{
public:
  explicit Init_WebIntersection_first_road_id(::deva_gaode_routing_msgs::msg::WebIntersection & msg)
  : msg_(msg)
  {}
  Init_WebIntersection_second_road_id first_road_id(::deva_gaode_routing_msgs::msg::WebIntersection::_first_road_id_type arg)
  {
    msg_.first_road_id = std::move(arg);
    return Init_WebIntersection_second_road_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebIntersection msg_;
};

class Init_WebIntersection_distance
{
public:
  Init_WebIntersection_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebIntersection_first_road_id distance(::deva_gaode_routing_msgs::msg::WebIntersection::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_WebIntersection_first_road_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebIntersection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebIntersection>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebIntersection_distance();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_INTERSECTION__BUILDER_HPP_
