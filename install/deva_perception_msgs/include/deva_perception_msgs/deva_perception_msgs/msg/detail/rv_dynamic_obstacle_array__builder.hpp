// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVDynamicObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVDynamicObstacleArray_obstacles
{
public:
  explicit Init_RVDynamicObstacleArray_obstacles(::deva_perception_msgs::msg::RVDynamicObstacleArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVDynamicObstacleArray obstacles(::deva_perception_msgs::msg::RVDynamicObstacleArray::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacleArray msg_;
};

class Init_RVDynamicObstacleArray_num_obstacles
{
public:
  explicit Init_RVDynamicObstacleArray_num_obstacles(::deva_perception_msgs::msg::RVDynamicObstacleArray & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacleArray_obstacles num_obstacles(::deva_perception_msgs::msg::RVDynamicObstacleArray::_num_obstacles_type arg)
  {
    msg_.num_obstacles = std::move(arg);
    return Init_RVDynamicObstacleArray_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacleArray msg_;
};

class Init_RVDynamicObstacleArray_cipv_id
{
public:
  explicit Init_RVDynamicObstacleArray_cipv_id(::deva_perception_msgs::msg::RVDynamicObstacleArray & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacleArray_num_obstacles cipv_id(::deva_perception_msgs::msg::RVDynamicObstacleArray::_cipv_id_type arg)
  {
    msg_.cipv_id = std::move(arg);
    return Init_RVDynamicObstacleArray_num_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacleArray msg_;
};

class Init_RVDynamicObstacleArray_header
{
public:
  Init_RVDynamicObstacleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVDynamicObstacleArray_cipv_id header(::deva_perception_msgs::msg::RVDynamicObstacleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RVDynamicObstacleArray_cipv_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVDynamicObstacleArray>()
{
  return deva_perception_msgs::msg::builder::Init_RVDynamicObstacleArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__BUILDER_HPP_
