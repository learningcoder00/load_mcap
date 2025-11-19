// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/CenterLinePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE_POINT__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/center_line_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_CenterLinePoint_z
{
public:
  explicit Init_CenterLinePoint_z(::deva_mdriver_msgs::msg::CenterLinePoint & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::CenterLinePoint z(::deva_mdriver_msgs::msg::CenterLinePoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLinePoint msg_;
};

class Init_CenterLinePoint_y
{
public:
  explicit Init_CenterLinePoint_y(::deva_mdriver_msgs::msg::CenterLinePoint & msg)
  : msg_(msg)
  {}
  Init_CenterLinePoint_z y(::deva_mdriver_msgs::msg::CenterLinePoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CenterLinePoint_z(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLinePoint msg_;
};

class Init_CenterLinePoint_x
{
public:
  Init_CenterLinePoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterLinePoint_y x(::deva_mdriver_msgs::msg::CenterLinePoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CenterLinePoint_y(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLinePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::CenterLinePoint>()
{
  return deva_mdriver_msgs::msg::builder::Init_CenterLinePoint_x();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE_POINT__BUILDER_HPP_
