// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleArray_state_message
{
public:
  explicit Init_ObstacleArray_state_message(::deva_perception_msgs::msg::ObstacleArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ObstacleArray state_message(::deva_perception_msgs::msg::ObstacleArray::_state_message_type arg)
  {
    msg_.state_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleArray msg_;
};

class Init_ObstacleArray_orientation
{
public:
  explicit Init_ObstacleArray_orientation(::deva_perception_msgs::msg::ObstacleArray & msg)
  : msg_(msg)
  {}
  Init_ObstacleArray_state_message orientation(::deva_perception_msgs::msg::ObstacleArray::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_ObstacleArray_state_message(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleArray msg_;
};

class Init_ObstacleArray_position
{
public:
  explicit Init_ObstacleArray_position(::deva_perception_msgs::msg::ObstacleArray & msg)
  : msg_(msg)
  {}
  Init_ObstacleArray_orientation position(::deva_perception_msgs::msg::ObstacleArray::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ObstacleArray_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleArray msg_;
};

class Init_ObstacleArray_obstacle_array
{
public:
  explicit Init_ObstacleArray_obstacle_array(::deva_perception_msgs::msg::ObstacleArray & msg)
  : msg_(msg)
  {}
  Init_ObstacleArray_position obstacle_array(::deva_perception_msgs::msg::ObstacleArray::_obstacle_array_type arg)
  {
    msg_.obstacle_array = std::move(arg);
    return Init_ObstacleArray_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleArray msg_;
};

class Init_ObstacleArray_header
{
public:
  Init_ObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleArray_obstacle_array header(::deva_perception_msgs::msg::ObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleArray_obstacle_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ObstacleArray>()
{
  return deva_perception_msgs::msg::builder::Init_ObstacleArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__BUILDER_HPP_
