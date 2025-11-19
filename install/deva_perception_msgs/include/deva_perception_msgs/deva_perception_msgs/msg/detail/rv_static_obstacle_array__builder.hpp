// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RvStaticObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_static_obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RvStaticObstacleArray_translation
{
public:
  explicit Init_RvStaticObstacleArray_translation(::deva_perception_msgs::msg::RvStaticObstacleArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RvStaticObstacleArray translation(::deva_perception_msgs::msg::RvStaticObstacleArray::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacleArray msg_;
};

class Init_RvStaticObstacleArray_orientation
{
public:
  explicit Init_RvStaticObstacleArray_orientation(::deva_perception_msgs::msg::RvStaticObstacleArray & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacleArray_translation orientation(::deva_perception_msgs::msg::RvStaticObstacleArray::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RvStaticObstacleArray_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacleArray msg_;
};

class Init_RvStaticObstacleArray_obstacle_array
{
public:
  explicit Init_RvStaticObstacleArray_obstacle_array(::deva_perception_msgs::msg::RvStaticObstacleArray & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacleArray_orientation obstacle_array(::deva_perception_msgs::msg::RvStaticObstacleArray::_obstacle_array_type arg)
  {
    msg_.obstacle_array = std::move(arg);
    return Init_RvStaticObstacleArray_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacleArray msg_;
};

class Init_RvStaticObstacleArray_header
{
public:
  Init_RvStaticObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RvStaticObstacleArray_obstacle_array header(::deva_perception_msgs::msg::RvStaticObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RvStaticObstacleArray_obstacle_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RvStaticObstacleArray>()
{
  return deva_perception_msgs::msg::builder::Init_RvStaticObstacleArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE_ARRAY__BUILDER_HPP_
