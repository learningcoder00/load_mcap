// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVObstacleArray_obstacle_array
{
public:
  explicit Init_RVObstacleArray_obstacle_array(::deva_perception_msgs::msg::RVObstacleArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVObstacleArray obstacle_array(::deva_perception_msgs::msg::RVObstacleArray::_obstacle_array_type arg)
  {
    msg_.obstacle_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVObstacleArray msg_;
};

class Init_RVObstacleArray_header
{
public:
  Init_RVObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVObstacleArray_obstacle_array header(::deva_perception_msgs::msg::RVObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RVObstacleArray_obstacle_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVObstacleArray>()
{
  return deva_perception_msgs::msg::builder::Init_RVObstacleArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE_ARRAY__BUILDER_HPP_
