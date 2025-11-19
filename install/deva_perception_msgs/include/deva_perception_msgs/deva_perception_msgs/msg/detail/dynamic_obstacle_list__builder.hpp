// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/DynamicObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE_LIST__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/dynamic_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObstacleList_source
{
public:
  explicit Init_DynamicObstacleList_source(::deva_perception_msgs::msg::DynamicObstacleList & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::DynamicObstacleList source(::deva_perception_msgs::msg::DynamicObstacleList::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacleList msg_;
};

class Init_DynamicObstacleList_dynamic_obstacles
{
public:
  Init_DynamicObstacleList_dynamic_obstacles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObstacleList_source dynamic_obstacles(::deva_perception_msgs::msg::DynamicObstacleList::_dynamic_obstacles_type arg)
  {
    msg_.dynamic_obstacles = std::move(arg);
    return Init_DynamicObstacleList_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::DynamicObstacleList>()
{
  return deva_perception_msgs::msg::builder::Init_DynamicObstacleList_dynamic_obstacles();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE_LIST__BUILDER_HPP_
