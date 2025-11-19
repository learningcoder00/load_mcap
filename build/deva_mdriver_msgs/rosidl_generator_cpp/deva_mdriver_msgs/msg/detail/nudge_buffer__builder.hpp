// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/NudgeBuffer.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/nudge_buffer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_NudgeBuffer_obstacle_nudge_buffer
{
public:
  Init_NudgeBuffer_obstacle_nudge_buffer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_mdriver_msgs::msg::NudgeBuffer obstacle_nudge_buffer(::deva_mdriver_msgs::msg::NudgeBuffer::_obstacle_nudge_buffer_type arg)
  {
    msg_.obstacle_nudge_buffer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::NudgeBuffer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::NudgeBuffer>()
{
  return deva_mdriver_msgs::msg::builder::Init_NudgeBuffer_obstacle_nudge_buffer();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__BUILDER_HPP_
