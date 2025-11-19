// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Area_pixel_points
{
public:
  explicit Init_Area_pixel_points(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Area pixel_points(::deva_perception_msgs::msg::Area::_pixel_points_type arg)
  {
    msg_.pixel_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_static_obstacles
{
public:
  explicit Init_Area_static_obstacles(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_pixel_points static_obstacles(::deva_perception_msgs::msg::Area::_static_obstacles_type arg)
  {
    msg_.static_obstacles = std::move(arg);
    return Init_Area_pixel_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_occupied_confidence
{
public:
  explicit Init_Area_occupied_confidence(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_static_obstacles occupied_confidence(::deva_perception_msgs::msg::Area::_occupied_confidence_type arg)
  {
    msg_.occupied_confidence = std::move(arg);
    return Init_Area_static_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_is_stable_tracked
{
public:
  explicit Init_Area_is_stable_tracked(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_occupied_confidence is_stable_tracked(::deva_perception_msgs::msg::Area::_is_stable_tracked_type arg)
  {
    msg_.is_stable_tracked = std::move(arg);
    return Init_Area_occupied_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_is_occupied
{
public:
  explicit Init_Area_is_occupied(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_is_stable_tracked is_occupied(::deva_perception_msgs::msg::Area::_is_occupied_type arg)
  {
    msg_.is_occupied = std::move(arg);
    return Init_Area_is_stable_tracked(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_depth_carcoord
{
public:
  explicit Init_Area_depth_carcoord(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_is_occupied depth_carcoord(::deva_perception_msgs::msg::Area::_depth_carcoord_type arg)
  {
    msg_.depth_carcoord = std::move(arg);
    return Init_Area_is_occupied(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_confidence
{
public:
  explicit Init_Area_confidence(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_depth_carcoord confidence(::deva_perception_msgs::msg::Area::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Area_depth_carcoord(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_direction_pixcoord
{
public:
  explicit Init_Area_direction_pixcoord(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_confidence direction_pixcoord(::deva_perception_msgs::msg::Area::_direction_pixcoord_type arg)
  {
    msg_.direction_pixcoord = std::move(arg);
    return Init_Area_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_corner_points
{
public:
  explicit Init_Area_corner_points(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_direction_pixcoord corner_points(::deva_perception_msgs::msg::Area::_corner_points_type arg)
  {
    msg_.corner_points = std::move(arg);
    return Init_Area_direction_pixcoord(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_disperse_curves
{
public:
  explicit Init_Area_disperse_curves(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_corner_points disperse_curves(::deva_perception_msgs::msg::Area::_disperse_curves_type arg)
  {
    msg_.disperse_curves = std::move(arg);
    return Init_Area_corner_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_equation_curves
{
public:
  explicit Init_Area_equation_curves(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_disperse_curves equation_curves(::deva_perception_msgs::msg::Area::_equation_curves_type arg)
  {
    msg_.equation_curves = std::move(arg);
    return Init_Area_disperse_curves(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_line_segments
{
public:
  explicit Init_Area_line_segments(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_equation_curves line_segments(::deva_perception_msgs::msg::Area::_line_segments_type arg)
  {
    msg_.line_segments = std::move(arg);
    return Init_Area_equation_curves(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_segment_type
{
public:
  explicit Init_Area_segment_type(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_line_segments segment_type(::deva_perception_msgs::msg::Area::_segment_type_type arg)
  {
    msg_.segment_type = std::move(arg);
    return Init_Area_line_segments(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_pose
{
public:
  explicit Init_Area_pose(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_segment_type pose(::deva_perception_msgs::msg::Area::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Area_segment_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_dims
{
public:
  explicit Init_Area_dims(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_pose dims(::deva_perception_msgs::msg::Area::_dims_type arg)
  {
    msg_.dims = std::move(arg);
    return Init_Area_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_type
{
public:
  explicit Init_Area_type(::deva_perception_msgs::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_dims type(::deva_perception_msgs::msg::Area::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Area_dims(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

class Init_Area_id
{
public:
  Init_Area_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Area_type id(::deva_perception_msgs::msg::Area::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Area_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Area msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Area>()
{
  return deva_perception_msgs::msg::builder::Init_Area_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__BUILDER_HPP_
