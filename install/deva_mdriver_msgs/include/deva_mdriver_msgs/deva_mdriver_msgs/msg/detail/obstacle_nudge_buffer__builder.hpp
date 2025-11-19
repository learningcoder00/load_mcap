// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/ObstacleNudgeBuffer.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/obstacle_nudge_buffer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleNudgeBuffer_label
{
public:
  explicit Init_ObstacleNudgeBuffer_label(::deva_mdriver_msgs::msg::ObstacleNudgeBuffer & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::ObstacleNudgeBuffer label(::deva_mdriver_msgs::msg::ObstacleNudgeBuffer::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::ObstacleNudgeBuffer msg_;
};

class Init_ObstacleNudgeBuffer_value
{
public:
  explicit Init_ObstacleNudgeBuffer_value(::deva_mdriver_msgs::msg::ObstacleNudgeBuffer & msg)
  : msg_(msg)
  {}
  Init_ObstacleNudgeBuffer_label value(::deva_mdriver_msgs::msg::ObstacleNudgeBuffer::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_ObstacleNudgeBuffer_label(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::ObstacleNudgeBuffer msg_;
};

class Init_ObstacleNudgeBuffer_track_id
{
public:
  Init_ObstacleNudgeBuffer_track_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleNudgeBuffer_value track_id(::deva_mdriver_msgs::msg::ObstacleNudgeBuffer::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return Init_ObstacleNudgeBuffer_value(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::ObstacleNudgeBuffer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::ObstacleNudgeBuffer>()
{
  return deva_mdriver_msgs::msg::builder::Init_ObstacleNudgeBuffer_track_id();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__BUILDER_HPP_
