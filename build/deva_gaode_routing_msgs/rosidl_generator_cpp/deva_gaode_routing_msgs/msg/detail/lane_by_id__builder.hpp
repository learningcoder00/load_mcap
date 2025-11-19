// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneById.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneById_next_id_s
{
public:
  explicit Init_LaneById_next_id_s(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LaneById next_id_s(::deva_gaode_routing_msgs::msg::LaneById::_next_id_s_type arg)
  {
    msg_.next_id_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_previous_id_s
{
public:
  explicit Init_LaneById_previous_id_s(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_next_id_s previous_id_s(::deva_gaode_routing_msgs::msg::LaneById::_previous_id_s_type arg)
  {
    msg_.previous_id_s = std::move(arg);
    return Init_LaneById_next_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_lane_end_width
{
public:
  explicit Init_LaneById_lane_end_width(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_previous_id_s lane_end_width(::deva_gaode_routing_msgs::msg::LaneById::_lane_end_width_type arg)
  {
    msg_.lane_end_width = std::move(arg);
    return Init_LaneById_previous_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_lane_start_width
{
public:
  explicit Init_LaneById_lane_start_width(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_lane_end_width lane_start_width(::deva_gaode_routing_msgs::msg::LaneById::_lane_start_width_type arg)
  {
    msg_.lane_start_width = std::move(arg);
    return Init_LaneById_lane_end_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_lane_width
{
public:
  explicit Init_LaneById_lane_width(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_lane_start_width lane_width(::deva_gaode_routing_msgs::msg::LaneById::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_LaneById_lane_start_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_border_colors
{
public:
  explicit Init_LaneById_border_colors(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_lane_width border_colors(::deva_gaode_routing_msgs::msg::LaneById::_border_colors_type arg)
  {
    msg_.border_colors = std::move(arg);
    return Init_LaneById_lane_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_border_types
{
public:
  explicit Init_LaneById_border_types(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_border_colors border_types(::deva_gaode_routing_msgs::msg::LaneById::_border_types_type arg)
  {
    msg_.border_types = std::move(arg);
    return Init_LaneById_border_colors(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_lane_type
{
public:
  explicit Init_LaneById_lane_type(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_border_types lane_type(::deva_gaode_routing_msgs::msg::LaneById::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LaneById_border_types(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_direction
{
public:
  explicit Init_LaneById_direction(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_lane_type direction(::deva_gaode_routing_msgs::msg::LaneById::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_LaneById_lane_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_feature_point_id_s
{
public:
  explicit Init_LaneById_feature_point_id_s(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_direction feature_point_id_s(::deva_gaode_routing_msgs::msg::LaneById::_feature_point_id_s_type arg)
  {
    msg_.feature_point_id_s = std::move(arg);
    return Init_LaneById_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_lane_group_id_type
{
public:
  explicit Init_LaneById_lane_group_id_type(::deva_gaode_routing_msgs::msg::LaneById & msg)
  : msg_(msg)
  {}
  Init_LaneById_feature_point_id_s lane_group_id_type(::deva_gaode_routing_msgs::msg::LaneById::_lane_group_id_type_type arg)
  {
    msg_.lane_group_id_type = std::move(arg);
    return Init_LaneById_feature_point_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

class Init_LaneById_id
{
public:
  Init_LaneById_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneById_lane_group_id_type id(::deva_gaode_routing_msgs::msg::LaneById::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneById_lane_group_id_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneById msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LaneById>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LaneById_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__BUILDER_HPP_
