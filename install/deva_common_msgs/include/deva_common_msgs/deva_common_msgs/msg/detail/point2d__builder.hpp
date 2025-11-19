// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/Point2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__POINT2D__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__POINT2D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/point2d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Point2d_y
{
public:
  explicit Init_Point2d_y(::deva_common_msgs::msg::Point2d & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::Point2d y(::deva_common_msgs::msg::Point2d::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::Point2d msg_;
};

class Init_Point2d_x
{
public:
  Init_Point2d_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2d_y x(::deva_common_msgs::msg::Point2d::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2d_y(msg_);
  }

private:
  ::deva_common_msgs::msg::Point2d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::Point2d>()
{
  return deva_common_msgs::msg::builder::Init_Point2d_x();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__POINT2D__BUILDER_HPP_
