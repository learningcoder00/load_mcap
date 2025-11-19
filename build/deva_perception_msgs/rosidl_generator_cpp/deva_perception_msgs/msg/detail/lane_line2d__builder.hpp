// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/LaneLine2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lane_line2d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneLine2d_curve_line_coeffs
{
public:
  explicit Init_LaneLine2d_curve_line_coeffs(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::LaneLine2d curve_line_coeffs(::deva_perception_msgs::msg::LaneLine2d::_curve_line_coeffs_type arg)
  {
    msg_.curve_line_coeffs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_pixel_points
{
public:
  explicit Init_LaneLine2d_pixel_points(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_curve_line_coeffs pixel_points(::deva_perception_msgs::msg::LaneLine2d::_pixel_points_type arg)
  {
    msg_.pixel_points = std::move(arg);
    return Init_LaneLine2d_curve_line_coeffs(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_lane_property
{
public:
  explicit Init_LaneLine2d_lane_property(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_pixel_points lane_property(::deva_perception_msgs::msg::LaneLine2d::_lane_property_type arg)
  {
    msg_.lane_property = std::move(arg);
    return Init_LaneLine2d_pixel_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_lane_color
{
public:
  explicit Init_LaneLine2d_lane_color(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_lane_property lane_color(::deva_perception_msgs::msg::LaneLine2d::_lane_color_type arg)
  {
    msg_.lane_color = std::move(arg);
    return Init_LaneLine2d_lane_property(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_lane_type
{
public:
  explicit Init_LaneLine2d_lane_type(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_lane_color lane_type(::deva_perception_msgs::msg::LaneLine2d::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LaneLine2d_lane_color(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_num_points
{
public:
  explicit Init_LaneLine2d_num_points(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_lane_type num_points(::deva_perception_msgs::msg::LaneLine2d::_num_points_type arg)
  {
    msg_.num_points = std::move(arg);
    return Init_LaneLine2d_lane_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_confidence
{
public:
  explicit Init_LaneLine2d_confidence(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_num_points confidence(::deva_perception_msgs::msg::LaneLine2d::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_LaneLine2d_num_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_right_lane_id
{
public:
  explicit Init_LaneLine2d_right_lane_id(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_confidence right_lane_id(::deva_perception_msgs::msg::LaneLine2d::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_LaneLine2d_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_left_lane_id
{
public:
  explicit Init_LaneLine2d_left_lane_id(::deva_perception_msgs::msg::LaneLine2d & msg)
  : msg_(msg)
  {}
  Init_LaneLine2d_right_lane_id left_lane_id(::deva_perception_msgs::msg::LaneLine2d::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_LaneLine2d_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

class Init_LaneLine2d_lane_id
{
public:
  Init_LaneLine2d_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneLine2d_left_lane_id lane_id(::deva_perception_msgs::msg::LaneLine2d::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_LaneLine2d_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneLine2d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::LaneLine2d>()
{
  return deva_perception_msgs::msg::builder::Init_LaneLine2d_lane_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__BUILDER_HPP_
