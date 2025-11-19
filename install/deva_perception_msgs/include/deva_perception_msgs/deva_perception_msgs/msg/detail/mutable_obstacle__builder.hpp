// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/MutableObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/mutable_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_MutableObstacle_is_blocked
{
public:
  explicit Init_MutableObstacle_is_blocked(::deva_perception_msgs::msg::MutableObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::MutableObstacle is_blocked(::deva_perception_msgs::msg::MutableObstacle::_is_blocked_type arg)
  {
    msg_.is_blocked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::MutableObstacle msg_;
};

class Init_MutableObstacle_static_obstacle
{
public:
  Init_MutableObstacle_static_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutableObstacle_is_blocked static_obstacle(::deva_perception_msgs::msg::MutableObstacle::_static_obstacle_type arg)
  {
    msg_.static_obstacle = std::move(arg);
    return Init_MutableObstacle_is_blocked(msg_);
  }

private:
  ::deva_perception_msgs::msg::MutableObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::MutableObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_MutableObstacle_static_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__BUILDER_HPP_
