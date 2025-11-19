// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficRegion.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_REGION__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficRegion_score
{
public:
  explicit Init_TrafficRegion_score(::deva_perception_msgs::msg::TrafficRegion & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficRegion score(::deva_perception_msgs::msg::TrafficRegion::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRegion msg_;
};

class Init_TrafficRegion_h
{
public:
  explicit Init_TrafficRegion_h(::deva_perception_msgs::msg::TrafficRegion & msg)
  : msg_(msg)
  {}
  Init_TrafficRegion_score h(::deva_perception_msgs::msg::TrafficRegion::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_TrafficRegion_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRegion msg_;
};

class Init_TrafficRegion_w
{
public:
  explicit Init_TrafficRegion_w(::deva_perception_msgs::msg::TrafficRegion & msg)
  : msg_(msg)
  {}
  Init_TrafficRegion_h w(::deva_perception_msgs::msg::TrafficRegion::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_TrafficRegion_h(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRegion msg_;
};

class Init_TrafficRegion_y
{
public:
  explicit Init_TrafficRegion_y(::deva_perception_msgs::msg::TrafficRegion & msg)
  : msg_(msg)
  {}
  Init_TrafficRegion_w y(::deva_perception_msgs::msg::TrafficRegion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrafficRegion_w(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRegion msg_;
};

class Init_TrafficRegion_x
{
public:
  Init_TrafficRegion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficRegion_y x(::deva_perception_msgs::msg::TrafficRegion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrafficRegion_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficRegion>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficRegion_x();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_REGION__BUILDER_HPP_
