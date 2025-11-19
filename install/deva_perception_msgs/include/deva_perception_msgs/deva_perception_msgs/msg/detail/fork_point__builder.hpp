// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ForkPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/fork_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ForkPoint_fork_point
{
public:
  explicit Init_ForkPoint_fork_point(::deva_perception_msgs::msg::ForkPoint & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ForkPoint fork_point(::deva_perception_msgs::msg::ForkPoint::_fork_point_type arg)
  {
    msg_.fork_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ForkPoint msg_;
};

class Init_ForkPoint_lane_ids
{
public:
  explicit Init_ForkPoint_lane_ids(::deva_perception_msgs::msg::ForkPoint & msg)
  : msg_(msg)
  {}
  Init_ForkPoint_fork_point lane_ids(::deva_perception_msgs::msg::ForkPoint::_lane_ids_type arg)
  {
    msg_.lane_ids = std::move(arg);
    return Init_ForkPoint_fork_point(msg_);
  }

private:
  ::deva_perception_msgs::msg::ForkPoint msg_;
};

class Init_ForkPoint_fork_id
{
public:
  explicit Init_ForkPoint_fork_id(::deva_perception_msgs::msg::ForkPoint & msg)
  : msg_(msg)
  {}
  Init_ForkPoint_lane_ids fork_id(::deva_perception_msgs::msg::ForkPoint::_fork_id_type arg)
  {
    msg_.fork_id = std::move(arg);
    return Init_ForkPoint_lane_ids(msg_);
  }

private:
  ::deva_perception_msgs::msg::ForkPoint msg_;
};

class Init_ForkPoint_fork_property_type
{
public:
  Init_ForkPoint_fork_property_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ForkPoint_fork_id fork_property_type(::deva_perception_msgs::msg::ForkPoint::_fork_property_type_type arg)
  {
    msg_.fork_property_type = std::move(arg);
    return Init_ForkPoint_fork_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::ForkPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ForkPoint>()
{
  return deva_perception_msgs::msg::builder::Init_ForkPoint_fork_property_type();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__BUILDER_HPP_
