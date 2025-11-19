// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/FixedObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE_LIST__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/fixed_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedObstacleList_source
{
public:
  explicit Init_FixedObstacleList_source(::deva_perception_msgs::msg::FixedObstacleList & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::FixedObstacleList source(::deva_perception_msgs::msg::FixedObstacleList::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacleList msg_;
};

class Init_FixedObstacleList_fixed_obstacles
{
public:
  Init_FixedObstacleList_fixed_obstacles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedObstacleList_source fixed_obstacles(::deva_perception_msgs::msg::FixedObstacleList::_fixed_obstacles_type arg)
  {
    msg_.fixed_obstacles = std::move(arg);
    return Init_FixedObstacleList_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::FixedObstacleList>()
{
  return deva_perception_msgs::msg::builder::Init_FixedObstacleList_fixed_obstacles();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE_LIST__BUILDER_HPP_
