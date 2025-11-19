// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Entrance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/entrance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Entrance_direction
{
public:
  explicit Init_Entrance_direction(::deva_perception_msgs::msg::Entrance & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Entrance direction(::deva_perception_msgs::msg::Entrance::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Entrance msg_;
};

class Init_Entrance_points
{
public:
  explicit Init_Entrance_points(::deva_perception_msgs::msg::Entrance & msg)
  : msg_(msg)
  {}
  Init_Entrance_direction points(::deva_perception_msgs::msg::Entrance::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Entrance_direction(msg_);
  }

private:
  ::deva_perception_msgs::msg::Entrance msg_;
};

class Init_Entrance_confidence
{
public:
  explicit Init_Entrance_confidence(::deva_perception_msgs::msg::Entrance & msg)
  : msg_(msg)
  {}
  Init_Entrance_points confidence(::deva_perception_msgs::msg::Entrance::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Entrance_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::Entrance msg_;
};

class Init_Entrance_type
{
public:
  explicit Init_Entrance_type(::deva_perception_msgs::msg::Entrance & msg)
  : msg_(msg)
  {}
  Init_Entrance_confidence type(::deva_perception_msgs::msg::Entrance::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Entrance_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::Entrance msg_;
};

class Init_Entrance_id
{
public:
  Init_Entrance_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Entrance_type id(::deva_perception_msgs::msg::Entrance::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Entrance_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Entrance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Entrance>()
{
  return deva_perception_msgs::msg::builder::Init_Entrance_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE__BUILDER_HPP_
