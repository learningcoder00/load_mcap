// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/channel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Channel_extra_info
{
public:
  explicit Init_Channel_extra_info(::deva_perception_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Channel extra_info(::deva_perception_msgs::msg::Channel::_extra_info_type arg)
  {
    msg_.extra_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

class Init_Channel_bbox2d
{
public:
  explicit Init_Channel_bbox2d(::deva_perception_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_extra_info bbox2d(::deva_perception_msgs::msg::Channel::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return Init_Channel_extra_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

class Init_Channel_type
{
public:
  explicit Init_Channel_type(::deva_perception_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_bbox2d type(::deva_perception_msgs::msg::Channel::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Channel_bbox2d(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

class Init_Channel_last_observation_depth
{
public:
  explicit Init_Channel_last_observation_depth(::deva_perception_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_type last_observation_depth(::deva_perception_msgs::msg::Channel::_last_observation_depth_type arg)
  {
    msg_.last_observation_depth = std::move(arg);
    return Init_Channel_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

class Init_Channel_score
{
public:
  explicit Init_Channel_score(::deva_perception_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_last_observation_depth score(::deva_perception_msgs::msg::Channel::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Channel_last_observation_depth(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

class Init_Channel_dimensions
{
public:
  explicit Init_Channel_dimensions(::deva_perception_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_score dimensions(::deva_perception_msgs::msg::Channel::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_Channel_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

class Init_Channel_pose
{
public:
  explicit Init_Channel_pose(::deva_perception_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_dimensions pose(::deva_perception_msgs::msg::Channel::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Channel_dimensions(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

class Init_Channel_id
{
public:
  Init_Channel_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Channel_pose id(::deva_perception_msgs::msg::Channel::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Channel_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::Channel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Channel>()
{
  return deva_perception_msgs::msg::builder::Init_Channel_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__BUILDER_HPP_
