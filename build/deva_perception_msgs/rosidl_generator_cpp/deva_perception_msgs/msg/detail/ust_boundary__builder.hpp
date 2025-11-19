// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/USTBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/ust_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_USTBoundary_is_stable_tracked
{
public:
  explicit Init_USTBoundary_is_stable_tracked(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::USTBoundary is_stable_tracked(::deva_perception_msgs::msg::USTBoundary::_is_stable_tracked_type arg)
  {
    msg_.is_stable_tracked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_waylink
{
public:
  explicit Init_USTBoundary_waylink(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  Init_USTBoundary_is_stable_tracked waylink(::deva_perception_msgs::msg::USTBoundary::_waylink_type arg)
  {
    msg_.waylink = std::move(arg);
    return Init_USTBoundary_is_stable_tracked(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_corner_points
{
public:
  explicit Init_USTBoundary_corner_points(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  Init_USTBoundary_waylink corner_points(::deva_perception_msgs::msg::USTBoundary::_corner_points_type arg)
  {
    msg_.corner_points = std::move(arg);
    return Init_USTBoundary_waylink(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_disperse_curves
{
public:
  explicit Init_USTBoundary_disperse_curves(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  Init_USTBoundary_corner_points disperse_curves(::deva_perception_msgs::msg::USTBoundary::_disperse_curves_type arg)
  {
    msg_.disperse_curves = std::move(arg);
    return Init_USTBoundary_corner_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_equation_curves
{
public:
  explicit Init_USTBoundary_equation_curves(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  Init_USTBoundary_disperse_curves equation_curves(::deva_perception_msgs::msg::USTBoundary::_equation_curves_type arg)
  {
    msg_.equation_curves = std::move(arg);
    return Init_USTBoundary_disperse_curves(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_line_segments
{
public:
  explicit Init_USTBoundary_line_segments(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  Init_USTBoundary_equation_curves line_segments(::deva_perception_msgs::msg::USTBoundary::_line_segments_type arg)
  {
    msg_.line_segments = std::move(arg);
    return Init_USTBoundary_equation_curves(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_segment_type
{
public:
  explicit Init_USTBoundary_segment_type(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  Init_USTBoundary_line_segments segment_type(::deva_perception_msgs::msg::USTBoundary::_segment_type_type arg)
  {
    msg_.segment_type = std::move(arg);
    return Init_USTBoundary_line_segments(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_type
{
public:
  explicit Init_USTBoundary_type(::deva_perception_msgs::msg::USTBoundary & msg)
  : msg_(msg)
  {}
  Init_USTBoundary_segment_type type(::deva_perception_msgs::msg::USTBoundary::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_USTBoundary_segment_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

class Init_USTBoundary_id
{
public:
  Init_USTBoundary_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_USTBoundary_type id(::deva_perception_msgs::msg::USTBoundary::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_USTBoundary_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::USTBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::USTBoundary>()
{
  return deva_perception_msgs::msg::builder::Init_USTBoundary_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__BUILDER_HPP_
