// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersection.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_J6mIntersection_intersection_coordinates
{
public:
  explicit Init_J6mIntersection_intersection_coordinates(::deva_gaode_routing_msgs::msg::J6mIntersection & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::J6mIntersection intersection_coordinates(::deva_gaode_routing_msgs::msg::J6mIntersection::_intersection_coordinates_type arg)
  {
    msg_.intersection_coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersection msg_;
};

class Init_J6mIntersection_is_lane_num_change_areas
{
public:
  explicit Init_J6mIntersection_is_lane_num_change_areas(::deva_gaode_routing_msgs::msg::J6mIntersection & msg)
  : msg_(msg)
  {}
  Init_J6mIntersection_intersection_coordinates is_lane_num_change_areas(::deva_gaode_routing_msgs::msg::J6mIntersection::_is_lane_num_change_areas_type arg)
  {
    msg_.is_lane_num_change_areas = std::move(arg);
    return Init_J6mIntersection_intersection_coordinates(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersection msg_;
};

class Init_J6mIntersection_intersection_predecessor_id_s
{
public:
  explicit Init_J6mIntersection_intersection_predecessor_id_s(::deva_gaode_routing_msgs::msg::J6mIntersection & msg)
  : msg_(msg)
  {}
  Init_J6mIntersection_is_lane_num_change_areas intersection_predecessor_id_s(::deva_gaode_routing_msgs::msg::J6mIntersection::_intersection_predecessor_id_s_type arg)
  {
    msg_.intersection_predecessor_id_s = std::move(arg);
    return Init_J6mIntersection_is_lane_num_change_areas(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersection msg_;
};

class Init_J6mIntersection_intersection_successor_id_s
{
public:
  explicit Init_J6mIntersection_intersection_successor_id_s(::deva_gaode_routing_msgs::msg::J6mIntersection & msg)
  : msg_(msg)
  {}
  Init_J6mIntersection_intersection_predecessor_id_s intersection_successor_id_s(::deva_gaode_routing_msgs::msg::J6mIntersection::_intersection_successor_id_s_type arg)
  {
    msg_.intersection_successor_id_s = std::move(arg);
    return Init_J6mIntersection_intersection_predecessor_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersection msg_;
};

class Init_J6mIntersection_link_id_s
{
public:
  explicit Init_J6mIntersection_link_id_s(::deva_gaode_routing_msgs::msg::J6mIntersection & msg)
  : msg_(msg)
  {}
  Init_J6mIntersection_intersection_successor_id_s link_id_s(::deva_gaode_routing_msgs::msg::J6mIntersection::_link_id_s_type arg)
  {
    msg_.link_id_s = std::move(arg);
    return Init_J6mIntersection_intersection_successor_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersection msg_;
};

class Init_J6mIntersection_intersection_id
{
public:
  Init_J6mIntersection_intersection_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J6mIntersection_link_id_s intersection_id(::deva_gaode_routing_msgs::msg::J6mIntersection::_intersection_id_type arg)
  {
    msg_.intersection_id = std::move(arg);
    return Init_J6mIntersection_link_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::J6mIntersection>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_J6mIntersection_intersection_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__BUILDER_HPP_
