// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/center_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_CenterLine_is_virtual_lane
{
public:
  explicit Init_CenterLine_is_virtual_lane(::deva_perception_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::CenterLine is_virtual_lane(::deva_perception_msgs::msg::CenterLine::_is_virtual_lane_type arg)
  {
    msg_.is_virtual_lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_is_current_lane
{
public:
  explicit Init_CenterLine_is_current_lane(::deva_perception_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_is_virtual_lane is_current_lane(::deva_perception_msgs::msg::CenterLine::_is_current_lane_type arg)
  {
    msg_.is_current_lane = std::move(arg);
    return Init_CenterLine_is_virtual_lane(msg_);
  }

private:
  ::deva_perception_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_lane_equalization
{
public:
  explicit Init_CenterLine_lane_equalization(::deva_perception_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_is_current_lane lane_equalization(::deva_perception_msgs::msg::CenterLine::_lane_equalization_type arg)
  {
    msg_.lane_equalization = std::move(arg);
    return Init_CenterLine_is_current_lane(msg_);
  }

private:
  ::deva_perception_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_right_lane_id
{
public:
  explicit Init_CenterLine_right_lane_id(::deva_perception_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_lane_equalization right_lane_id(::deva_perception_msgs::msg::CenterLine::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_CenterLine_lane_equalization(msg_);
  }

private:
  ::deva_perception_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_left_lane_id
{
public:
  explicit Init_CenterLine_left_lane_id(::deva_perception_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_right_lane_id left_lane_id(::deva_perception_msgs::msg::CenterLine::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_CenterLine_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_center_line_id
{
public:
  Init_CenterLine_center_line_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterLine_left_lane_id center_line_id(::deva_perception_msgs::msg::CenterLine::_center_line_id_type arg)
  {
    msg_.center_line_id = std::move(arg);
    return Init_CenterLine_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::CenterLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::CenterLine>()
{
  return deva_perception_msgs::msg::builder::Init_CenterLine_center_line_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__BUILDER_HPP_
