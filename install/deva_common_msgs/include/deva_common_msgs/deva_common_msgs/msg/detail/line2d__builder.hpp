// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/Line2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/line2d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Line2d_c0
{
public:
  explicit Init_Line2d_c0(::deva_common_msgs::msg::Line2d & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::Line2d c0(::deva_common_msgs::msg::Line2d::_c0_type arg)
  {
    msg_.c0 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::Line2d msg_;
};

class Init_Line2d_c1
{
public:
  explicit Init_Line2d_c1(::deva_common_msgs::msg::Line2d & msg)
  : msg_(msg)
  {}
  Init_Line2d_c0 c1(::deva_common_msgs::msg::Line2d::_c1_type arg)
  {
    msg_.c1 = std::move(arg);
    return Init_Line2d_c0(msg_);
  }

private:
  ::deva_common_msgs::msg::Line2d msg_;
};

class Init_Line2d_c2
{
public:
  explicit Init_Line2d_c2(::deva_common_msgs::msg::Line2d & msg)
  : msg_(msg)
  {}
  Init_Line2d_c1 c2(::deva_common_msgs::msg::Line2d::_c2_type arg)
  {
    msg_.c2 = std::move(arg);
    return Init_Line2d_c1(msg_);
  }

private:
  ::deva_common_msgs::msg::Line2d msg_;
};

class Init_Line2d_c3
{
public:
  explicit Init_Line2d_c3(::deva_common_msgs::msg::Line2d & msg)
  : msg_(msg)
  {}
  Init_Line2d_c2 c3(::deva_common_msgs::msg::Line2d::_c3_type arg)
  {
    msg_.c3 = std::move(arg);
    return Init_Line2d_c2(msg_);
  }

private:
  ::deva_common_msgs::msg::Line2d msg_;
};

class Init_Line2d_fit_property
{
public:
  Init_Line2d_fit_property()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Line2d_c3 fit_property(::deva_common_msgs::msg::Line2d::_fit_property_type arg)
  {
    msg_.fit_property = std::move(arg);
    return Init_Line2d_c3(msg_);
  }

private:
  ::deva_common_msgs::msg::Line2d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::Line2d>()
{
  return deva_common_msgs::msg::builder::Init_Line2d_fit_property();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__BUILDER_HPP_
