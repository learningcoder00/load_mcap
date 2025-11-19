// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/EdgeDisperseCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_DISPERSE_CURVE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_DISPERSE_CURVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/edge_disperse_curve__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_EdgeDisperseCurve_blocked_confidence
{
public:
  explicit Init_EdgeDisperseCurve_blocked_confidence(::deva_perception_msgs::msg::EdgeDisperseCurve & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::EdgeDisperseCurve blocked_confidence(::deva_perception_msgs::msg::EdgeDisperseCurve::_blocked_confidence_type arg)
  {
    msg_.blocked_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::EdgeDisperseCurve msg_;
};

class Init_EdgeDisperseCurve_confidence
{
public:
  explicit Init_EdgeDisperseCurve_confidence(::deva_perception_msgs::msg::EdgeDisperseCurve & msg)
  : msg_(msg)
  {}
  Init_EdgeDisperseCurve_blocked_confidence confidence(::deva_perception_msgs::msg::EdgeDisperseCurve::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_EdgeDisperseCurve_blocked_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::EdgeDisperseCurve msg_;
};

class Init_EdgeDisperseCurve_is_blocked
{
public:
  explicit Init_EdgeDisperseCurve_is_blocked(::deva_perception_msgs::msg::EdgeDisperseCurve & msg)
  : msg_(msg)
  {}
  Init_EdgeDisperseCurve_confidence is_blocked(::deva_perception_msgs::msg::EdgeDisperseCurve::_is_blocked_type arg)
  {
    msg_.is_blocked = std::move(arg);
    return Init_EdgeDisperseCurve_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::EdgeDisperseCurve msg_;
};

class Init_EdgeDisperseCurve_segment
{
public:
  Init_EdgeDisperseCurve_segment()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeDisperseCurve_is_blocked segment(::deva_perception_msgs::msg::EdgeDisperseCurve::_segment_type arg)
  {
    msg_.segment = std::move(arg);
    return Init_EdgeDisperseCurve_is_blocked(msg_);
  }

private:
  ::deva_perception_msgs::msg::EdgeDisperseCurve msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::EdgeDisperseCurve>()
{
  return deva_perception_msgs::msg::builder::Init_EdgeDisperseCurve_segment();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_DISPERSE_CURVE__BUILDER_HPP_
