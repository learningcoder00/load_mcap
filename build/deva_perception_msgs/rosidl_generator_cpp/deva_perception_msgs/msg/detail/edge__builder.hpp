// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Edge_blocked_confidence
{
public:
  explicit Init_Edge_blocked_confidence(::deva_perception_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Edge blocked_confidence(::deva_perception_msgs::msg::Edge::_blocked_confidence_type arg)
  {
    msg_.blocked_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Edge msg_;
};

class Init_Edge_confidence
{
public:
  explicit Init_Edge_confidence(::deva_perception_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_blocked_confidence confidence(::deva_perception_msgs::msg::Edge::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Edge_blocked_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::Edge msg_;
};

class Init_Edge_is_blocked
{
public:
  explicit Init_Edge_is_blocked(::deva_perception_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_confidence is_blocked(::deva_perception_msgs::msg::Edge::_is_blocked_type arg)
  {
    msg_.is_blocked = std::move(arg);
    return Init_Edge_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::Edge msg_;
};

class Init_Edge_segment
{
public:
  Init_Edge_segment()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Edge_is_blocked segment(::deva_perception_msgs::msg::Edge::_segment_type arg)
  {
    msg_.segment = std::move(arg);
    return Init_Edge_is_blocked(msg_);
  }

private:
  ::deva_perception_msgs::msg::Edge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Edge>()
{
  return deva_perception_msgs::msg::builder::Init_Edge_segment();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_
