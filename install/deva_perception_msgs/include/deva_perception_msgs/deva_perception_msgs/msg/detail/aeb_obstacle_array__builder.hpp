// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/AEBObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/aeb_obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_AEBObstacleArray_aeb_obstacles
{
public:
  explicit Init_AEBObstacleArray_aeb_obstacles(::deva_perception_msgs::msg::AEBObstacleArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::AEBObstacleArray aeb_obstacles(::deva_perception_msgs::msg::AEBObstacleArray::_aeb_obstacles_type arg)
  {
    msg_.aeb_obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacleArray msg_;
};

class Init_AEBObstacleArray_orientation
{
public:
  explicit Init_AEBObstacleArray_orientation(::deva_perception_msgs::msg::AEBObstacleArray & msg)
  : msg_(msg)
  {}
  Init_AEBObstacleArray_aeb_obstacles orientation(::deva_perception_msgs::msg::AEBObstacleArray::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_AEBObstacleArray_aeb_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacleArray msg_;
};

class Init_AEBObstacleArray_translation
{
public:
  explicit Init_AEBObstacleArray_translation(::deva_perception_msgs::msg::AEBObstacleArray & msg)
  : msg_(msg)
  {}
  Init_AEBObstacleArray_orientation translation(::deva_perception_msgs::msg::AEBObstacleArray::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_AEBObstacleArray_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacleArray msg_;
};

class Init_AEBObstacleArray_header
{
public:
  Init_AEBObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AEBObstacleArray_translation header(::deva_perception_msgs::msg::AEBObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AEBObstacleArray_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::AEBObstacleArray>()
{
  return deva_perception_msgs::msg::builder::Init_AEBObstacleArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__BUILDER_HPP_
