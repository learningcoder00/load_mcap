// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/Dimension.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__DIMENSION__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__DIMENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/dimension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Dimension_height
{
public:
  explicit Init_Dimension_height(::deva_common_msgs::msg::Dimension & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::Dimension height(::deva_common_msgs::msg::Dimension::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::Dimension msg_;
};

class Init_Dimension_width
{
public:
  explicit Init_Dimension_width(::deva_common_msgs::msg::Dimension & msg)
  : msg_(msg)
  {}
  Init_Dimension_height width(::deva_common_msgs::msg::Dimension::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Dimension_height(msg_);
  }

private:
  ::deva_common_msgs::msg::Dimension msg_;
};

class Init_Dimension_length
{
public:
  Init_Dimension_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dimension_width length(::deva_common_msgs::msg::Dimension::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Dimension_width(msg_);
  }

private:
  ::deva_common_msgs::msg::Dimension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::Dimension>()
{
  return deva_common_msgs::msg::builder::Init_Dimension_length();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__DIMENSION__BUILDER_HPP_
