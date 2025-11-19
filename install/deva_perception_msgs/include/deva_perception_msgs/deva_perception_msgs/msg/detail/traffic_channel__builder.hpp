// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficChannel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_channel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficChannel_extra_info
{
public:
  explicit Init_TrafficChannel_extra_info(::deva_perception_msgs::msg::TrafficChannel & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficChannel extra_info(::deva_perception_msgs::msg::TrafficChannel::_extra_info_type arg)
  {
    msg_.extra_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

class Init_TrafficChannel_bbox2d
{
public:
  explicit Init_TrafficChannel_bbox2d(::deva_perception_msgs::msg::TrafficChannel & msg)
  : msg_(msg)
  {}
  Init_TrafficChannel_extra_info bbox2d(::deva_perception_msgs::msg::TrafficChannel::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return Init_TrafficChannel_extra_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

class Init_TrafficChannel_type
{
public:
  explicit Init_TrafficChannel_type(::deva_perception_msgs::msg::TrafficChannel & msg)
  : msg_(msg)
  {}
  Init_TrafficChannel_bbox2d type(::deva_perception_msgs::msg::TrafficChannel::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TrafficChannel_bbox2d(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

class Init_TrafficChannel_score
{
public:
  explicit Init_TrafficChannel_score(::deva_perception_msgs::msg::TrafficChannel & msg)
  : msg_(msg)
  {}
  Init_TrafficChannel_type score(::deva_perception_msgs::msg::TrafficChannel::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_TrafficChannel_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

class Init_TrafficChannel_dimensions
{
public:
  explicit Init_TrafficChannel_dimensions(::deva_perception_msgs::msg::TrafficChannel & msg)
  : msg_(msg)
  {}
  Init_TrafficChannel_score dimensions(::deva_perception_msgs::msg::TrafficChannel::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_TrafficChannel_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

class Init_TrafficChannel_pose
{
public:
  explicit Init_TrafficChannel_pose(::deva_perception_msgs::msg::TrafficChannel & msg)
  : msg_(msg)
  {}
  Init_TrafficChannel_dimensions pose(::deva_perception_msgs::msg::TrafficChannel::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrafficChannel_dimensions(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

class Init_TrafficChannel_id
{
public:
  explicit Init_TrafficChannel_id(::deva_perception_msgs::msg::TrafficChannel & msg)
  : msg_(msg)
  {}
  Init_TrafficChannel_pose id(::deva_perception_msgs::msg::TrafficChannel::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrafficChannel_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

class Init_TrafficChannel_header
{
public:
  Init_TrafficChannel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficChannel_id header(::deva_perception_msgs::msg::TrafficChannel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficChannel_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficChannel>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficChannel_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL__BUILDER_HPP_
