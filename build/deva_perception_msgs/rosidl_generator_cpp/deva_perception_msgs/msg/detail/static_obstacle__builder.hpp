// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/StaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/static_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_StaticObstacle_slot_lock_type
{
public:
  explicit Init_StaticObstacle_slot_lock_type(::deva_perception_msgs::msg::StaticObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::StaticObstacle slot_lock_type(::deva_perception_msgs::msg::StaticObstacle::_slot_lock_type_type arg)
  {
    msg_.slot_lock_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::StaticObstacle msg_;
};

class Init_StaticObstacle_static_obstacle_type
{
public:
  explicit Init_StaticObstacle_static_obstacle_type(::deva_perception_msgs::msg::StaticObstacle & msg)
  : msg_(msg)
  {}
  Init_StaticObstacle_slot_lock_type static_obstacle_type(::deva_perception_msgs::msg::StaticObstacle::_static_obstacle_type_type arg)
  {
    msg_.static_obstacle_type = std::move(arg);
    return Init_StaticObstacle_slot_lock_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::StaticObstacle msg_;
};

class Init_StaticObstacle_object_type
{
public:
  explicit Init_StaticObstacle_object_type(::deva_perception_msgs::msg::StaticObstacle & msg)
  : msg_(msg)
  {}
  Init_StaticObstacle_static_obstacle_type object_type(::deva_perception_msgs::msg::StaticObstacle::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_StaticObstacle_static_obstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::StaticObstacle msg_;
};

class Init_StaticObstacle_obstacle
{
public:
  Init_StaticObstacle_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaticObstacle_object_type obstacle(::deva_perception_msgs::msg::StaticObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_StaticObstacle_object_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::StaticObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::StaticObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_StaticObstacle_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__BUILDER_HPP_
