// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/LineSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__LINE_SEGMENT__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__LINE_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/line_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_LineSegment_end
{
public:
  explicit Init_LineSegment_end(::deva_common_msgs::msg::LineSegment & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::LineSegment end(::deva_common_msgs::msg::LineSegment::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::LineSegment msg_;
};

class Init_LineSegment_start
{
public:
  Init_LineSegment_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineSegment_end start(::deva_common_msgs::msg::LineSegment::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_LineSegment_end(msg_);
  }

private:
  ::deva_common_msgs::msg::LineSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::LineSegment>()
{
  return deva_common_msgs::msg::builder::Init_LineSegment_start();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__LINE_SEGMENT__BUILDER_HPP_
