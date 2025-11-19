// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/PilotObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PILOT_OBSTACLE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PILOT_OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/pilot_obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PilotObstacleArray_obstacles
{
public:
  explicit Init_PilotObstacleArray_obstacles(::deva_perception_msgs::msg::PilotObstacleArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::PilotObstacleArray obstacles(::deva_perception_msgs::msg::PilotObstacleArray::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::PilotObstacleArray msg_;
};

class Init_PilotObstacleArray_header
{
public:
  Init_PilotObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PilotObstacleArray_obstacles header(::deva_perception_msgs::msg::PilotObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PilotObstacleArray_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::PilotObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::PilotObstacleArray>()
{
  return deva_perception_msgs::msg::builder::Init_PilotObstacleArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PILOT_OBSTACLE_ARRAY__BUILDER_HPP_
