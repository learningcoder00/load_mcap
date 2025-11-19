// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/FeaturePointById.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_FeaturePointById_next_id_s
{
public:
  explicit Init_FeaturePointById_next_id_s(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::FeaturePointById next_id_s(::deva_gaode_routing_msgs::msg::FeaturePointById::_next_id_s_type arg)
  {
    msg_.next_id_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_previous_id_s
{
public:
  explicit Init_FeaturePointById_previous_id_s(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  Init_FeaturePointById_next_id_s previous_id_s(::deva_gaode_routing_msgs::msg::FeaturePointById::_previous_id_s_type arg)
  {
    msg_.previous_id_s = std::move(arg);
    return Init_FeaturePointById_next_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_lane_id_s
{
public:
  explicit Init_FeaturePointById_lane_id_s(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  Init_FeaturePointById_previous_id_s lane_id_s(::deva_gaode_routing_msgs::msg::FeaturePointById::_lane_id_s_type arg)
  {
    msg_.lane_id_s = std::move(arg);
    return Init_FeaturePointById_previous_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_project_percent
{
public:
  explicit Init_FeaturePointById_project_percent(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  Init_FeaturePointById_lane_id_s project_percent(::deva_gaode_routing_msgs::msg::FeaturePointById::_project_percent_type arg)
  {
    msg_.project_percent = std::move(arg);
    return Init_FeaturePointById_lane_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_link_id
{
public:
  explicit Init_FeaturePointById_link_id(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  Init_FeaturePointById_project_percent link_id(::deva_gaode_routing_msgs::msg::FeaturePointById::_link_id_type arg)
  {
    msg_.link_id = std::move(arg);
    return Init_FeaturePointById_project_percent(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_coordinate
{
public:
  explicit Init_FeaturePointById_coordinate(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  Init_FeaturePointById_link_id coordinate(::deva_gaode_routing_msgs::msg::FeaturePointById::_coordinate_type arg)
  {
    msg_.coordinate = std::move(arg);
    return Init_FeaturePointById_link_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_direction
{
public:
  explicit Init_FeaturePointById_direction(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  Init_FeaturePointById_coordinate direction(::deva_gaode_routing_msgs::msg::FeaturePointById::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_FeaturePointById_coordinate(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_types
{
public:
  explicit Init_FeaturePointById_types(::deva_gaode_routing_msgs::msg::FeaturePointById & msg)
  : msg_(msg)
  {}
  Init_FeaturePointById_direction types(::deva_gaode_routing_msgs::msg::FeaturePointById::_types_type arg)
  {
    msg_.types = std::move(arg);
    return Init_FeaturePointById_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

class Init_FeaturePointById_id
{
public:
  Init_FeaturePointById_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeaturePointById_types id(::deva_gaode_routing_msgs::msg::FeaturePointById::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FeaturePointById_types(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::FeaturePointById msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::FeaturePointById>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_FeaturePointById_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__BUILDER_HPP_
