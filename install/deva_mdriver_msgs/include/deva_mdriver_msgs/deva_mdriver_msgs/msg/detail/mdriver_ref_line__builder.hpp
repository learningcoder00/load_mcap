// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/MdriverRefLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/mdriver_ref_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_MdriverRefLine_score
{
public:
  explicit Init_MdriverRefLine_score(::deva_mdriver_msgs::msg::MdriverRefLine & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::MdriverRefLine score(::deva_mdriver_msgs::msg::MdriverRefLine::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverRefLine msg_;
};

class Init_MdriverRefLine_meta_action
{
public:
  explicit Init_MdriverRefLine_meta_action(::deva_mdriver_msgs::msg::MdriverRefLine & msg)
  : msg_(msg)
  {}
  Init_MdriverRefLine_score meta_action(::deva_mdriver_msgs::msg::MdriverRefLine::_meta_action_type arg)
  {
    msg_.meta_action = std::move(arg);
    return Init_MdriverRefLine_score(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverRefLine msg_;
};

class Init_MdriverRefLine_points
{
public:
  Init_MdriverRefLine_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MdriverRefLine_meta_action points(::deva_mdriver_msgs::msg::MdriverRefLine::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_MdriverRefLine_meta_action(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverRefLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::MdriverRefLine>()
{
  return deva_mdriver_msgs::msg::builder::Init_MdriverRefLine_points();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__BUILDER_HPP_
