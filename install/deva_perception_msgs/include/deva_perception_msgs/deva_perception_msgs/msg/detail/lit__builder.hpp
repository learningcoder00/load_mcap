// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Lit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LIT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Lit_brightness
{
public:
  explicit Init_Lit_brightness(::deva_perception_msgs::msg::Lit & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Lit brightness(::deva_perception_msgs::msg::Lit::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lit msg_;
};

class Init_Lit_lit_area
{
public:
  explicit Init_Lit_lit_area(::deva_perception_msgs::msg::Lit & msg)
  : msg_(msg)
  {}
  Init_Lit_brightness lit_area(::deva_perception_msgs::msg::Lit::_lit_area_type arg)
  {
    msg_.lit_area = std::move(arg);
    return Init_Lit_brightness(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lit msg_;
};

class Init_Lit_header
{
public:
  Init_Lit_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lit_lit_area header(::deva_perception_msgs::msg::Lit::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Lit_lit_area(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Lit>()
{
  return deva_perception_msgs::msg::builder::Init_Lit_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LIT__BUILDER_HPP_
