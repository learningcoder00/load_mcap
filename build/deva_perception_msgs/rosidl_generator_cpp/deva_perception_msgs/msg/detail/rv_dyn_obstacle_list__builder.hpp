// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVDynObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVDynObstacleList_source
{
public:
  explicit Init_RVDynObstacleList_source(::deva_perception_msgs::msg::RVDynObstacleList & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVDynObstacleList source(::deva_perception_msgs::msg::RVDynObstacleList::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacleList msg_;
};

class Init_RVDynObstacleList_dynamic_obstacles
{
public:
  Init_RVDynObstacleList_dynamic_obstacles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVDynObstacleList_source dynamic_obstacles(::deva_perception_msgs::msg::RVDynObstacleList::_dynamic_obstacles_type arg)
  {
    msg_.dynamic_obstacles = std::move(arg);
    return Init_RVDynObstacleList_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVDynObstacleList>()
{
  return deva_perception_msgs::msg::builder::Init_RVDynObstacleList_dynamic_obstacles();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__BUILDER_HPP_
