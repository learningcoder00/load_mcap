// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/GodObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/god_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_GodObstacle_object_type
{
public:
  explicit Init_GodObstacle_object_type(::deva_perception_msgs::msg::GodObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::GodObstacle object_type(::deva_perception_msgs::msg::GodObstacle::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::GodObstacle msg_;
};

class Init_GodObstacle_obstacle
{
public:
  Init_GodObstacle_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GodObstacle_object_type obstacle(::deva_perception_msgs::msg::GodObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_GodObstacle_object_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::GodObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::GodObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_GodObstacle_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__BUILDER_HPP_
