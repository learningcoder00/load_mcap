// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/perception_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PerceptionResult_fork_points
{
public:
  explicit Init_PerceptionResult_fork_points(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::PerceptionResult fork_points(::deva_perception_msgs::msg::PerceptionResult::_fork_points_type arg)
  {
    msg_.fork_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_center_lines
{
public:
  explicit Init_PerceptionResult_center_lines(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_fork_points center_lines(::deva_perception_msgs::msg::PerceptionResult::_center_lines_type arg)
  {
    msg_.center_lines = std::move(arg);
    return Init_PerceptionResult_fork_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_mutable_obstacles
{
public:
  explicit Init_PerceptionResult_mutable_obstacles(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_center_lines mutable_obstacles(::deva_perception_msgs::msg::PerceptionResult::_mutable_obstacles_type arg)
  {
    msg_.mutable_obstacles = std::move(arg);
    return Init_PerceptionResult_center_lines(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_traffic_light_obstacles
{
public:
  explicit Init_PerceptionResult_traffic_light_obstacles(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_mutable_obstacles traffic_light_obstacles(::deva_perception_msgs::msg::PerceptionResult::_traffic_light_obstacles_type arg)
  {
    msg_.traffic_light_obstacles = std::move(arg);
    return Init_PerceptionResult_mutable_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_general_static_obstacles
{
public:
  explicit Init_PerceptionResult_general_static_obstacles(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_traffic_light_obstacles general_static_obstacles(::deva_perception_msgs::msg::PerceptionResult::_general_static_obstacles_type arg)
  {
    msg_.general_static_obstacles = std::move(arg);
    return Init_PerceptionResult_traffic_light_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_moving_obstacles
{
public:
  explicit Init_PerceptionResult_moving_obstacles(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_general_static_obstacles moving_obstacles(::deva_perception_msgs::msg::PerceptionResult::_moving_obstacles_type arg)
  {
    msg_.moving_obstacles = std::move(arg);
    return Init_PerceptionResult_general_static_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_areas
{
public:
  explicit Init_PerceptionResult_areas(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_moving_obstacles areas(::deva_perception_msgs::msg::PerceptionResult::_areas_type arg)
  {
    msg_.areas = std::move(arg);
    return Init_PerceptionResult_moving_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_noparking_zones
{
public:
  explicit Init_PerceptionResult_noparking_zones(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_areas noparking_zones(::deva_perception_msgs::msg::PerceptionResult::_noparking_zones_type arg)
  {
    msg_.noparking_zones = std::move(arg);
    return Init_PerceptionResult_areas(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_steering_arrows
{
public:
  explicit Init_PerceptionResult_steering_arrows(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_noparking_zones steering_arrows(::deva_perception_msgs::msg::PerceptionResult::_steering_arrows_type arg)
  {
    msg_.steering_arrows = std::move(arg);
    return Init_PerceptionResult_noparking_zones(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_crosswalks
{
public:
  explicit Init_PerceptionResult_crosswalks(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_steering_arrows crosswalks(::deva_perception_msgs::msg::PerceptionResult::_crosswalks_type arg)
  {
    msg_.crosswalks = std::move(arg);
    return Init_PerceptionResult_steering_arrows(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_ust_boundaries
{
public:
  explicit Init_PerceptionResult_ust_boundaries(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_crosswalks ust_boundaries(::deva_perception_msgs::msg::PerceptionResult::_ust_boundaries_type arg)
  {
    msg_.ust_boundaries = std::move(arg);
    return Init_PerceptionResult_crosswalks(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_st_boundaries
{
public:
  explicit Init_PerceptionResult_st_boundaries(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_ust_boundaries st_boundaries(::deva_perception_msgs::msg::PerceptionResult::_st_boundaries_type arg)
  {
    msg_.st_boundaries = std::move(arg);
    return Init_PerceptionResult_ust_boundaries(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_orientation
{
public:
  explicit Init_PerceptionResult_orientation(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_st_boundaries orientation(::deva_perception_msgs::msg::PerceptionResult::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_PerceptionResult_st_boundaries(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_translation
{
public:
  explicit Init_PerceptionResult_translation(::deva_perception_msgs::msg::PerceptionResult & msg)
  : msg_(msg)
  {}
  Init_PerceptionResult_orientation translation(::deva_perception_msgs::msg::PerceptionResult::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_PerceptionResult_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

class Init_PerceptionResult_header
{
public:
  Init_PerceptionResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionResult_translation header(::deva_perception_msgs::msg::PerceptionResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PerceptionResult_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::PerceptionResult>()
{
  return deva_perception_msgs::msg::builder::Init_PerceptionResult_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__BUILDER_HPP_
