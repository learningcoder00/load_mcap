// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficPole.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_pole__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficPole_raised
{
public:
  explicit Init_TrafficPole_raised(::deva_perception_msgs::msg::TrafficPole & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficPole raised(::deva_perception_msgs::msg::TrafficPole::_raised_type arg)
  {
    msg_.raised = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficPole msg_;
};

class Init_TrafficPole_bind_id
{
public:
  explicit Init_TrafficPole_bind_id(::deva_perception_msgs::msg::TrafficPole & msg)
  : msg_(msg)
  {}
  Init_TrafficPole_raised bind_id(::deva_perception_msgs::msg::TrafficPole::_bind_id_type arg)
  {
    msg_.bind_id = std::move(arg);
    return Init_TrafficPole_raised(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficPole msg_;
};

class Init_TrafficPole_perception_obstacle
{
public:
  Init_TrafficPole_perception_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficPole_bind_id perception_obstacle(::deva_perception_msgs::msg::TrafficPole::_perception_obstacle_type arg)
  {
    msg_.perception_obstacle = std::move(arg);
    return Init_TrafficPole_bind_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficPole msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficPole>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficPole_perception_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__BUILDER_HPP_
