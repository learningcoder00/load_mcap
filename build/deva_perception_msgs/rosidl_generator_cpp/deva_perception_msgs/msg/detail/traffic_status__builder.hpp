// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficStatus_countdown_value
{
public:
  explicit Init_TrafficStatus_countdown_value(::deva_perception_msgs::msg::TrafficStatus & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficStatus countdown_value(::deva_perception_msgs::msg::TrafficStatus::_countdown_value_type arg)
  {
    msg_.countdown_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficStatus msg_;
};

class Init_TrafficStatus_blink
{
public:
  explicit Init_TrafficStatus_blink(::deva_perception_msgs::msg::TrafficStatus & msg)
  : msg_(msg)
  {}
  Init_TrafficStatus_countdown_value blink(::deva_perception_msgs::msg::TrafficStatus::_blink_type arg)
  {
    msg_.blink = std::move(arg);
    return Init_TrafficStatus_countdown_value(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficStatus msg_;
};

class Init_TrafficStatus_shape_confidence
{
public:
  explicit Init_TrafficStatus_shape_confidence(::deva_perception_msgs::msg::TrafficStatus & msg)
  : msg_(msg)
  {}
  Init_TrafficStatus_blink shape_confidence(::deva_perception_msgs::msg::TrafficStatus::_shape_confidence_type arg)
  {
    msg_.shape_confidence = std::move(arg);
    return Init_TrafficStatus_blink(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficStatus msg_;
};

class Init_TrafficStatus_color_confidence
{
public:
  explicit Init_TrafficStatus_color_confidence(::deva_perception_msgs::msg::TrafficStatus & msg)
  : msg_(msg)
  {}
  Init_TrafficStatus_shape_confidence color_confidence(::deva_perception_msgs::msg::TrafficStatus::_color_confidence_type arg)
  {
    msg_.color_confidence = std::move(arg);
    return Init_TrafficStatus_shape_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficStatus msg_;
};

class Init_TrafficStatus_shape
{
public:
  explicit Init_TrafficStatus_shape(::deva_perception_msgs::msg::TrafficStatus & msg)
  : msg_(msg)
  {}
  Init_TrafficStatus_color_confidence shape(::deva_perception_msgs::msg::TrafficStatus::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_TrafficStatus_color_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficStatus msg_;
};

class Init_TrafficStatus_color
{
public:
  Init_TrafficStatus_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficStatus_shape color(::deva_perception_msgs::msg::TrafficStatus::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrafficStatus_shape(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficStatus>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficStatus_color();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__BUILDER_HPP_
