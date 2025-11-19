// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/GodResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/god_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_GodResult_god_obstacles
{
public:
  explicit Init_GodResult_god_obstacles(::deva_perception_msgs::msg::GodResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::GodResult god_obstacles(::deva_perception_msgs::msg::GodResult::_god_obstacles_type arg)
  {
    msg_.god_obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::GodResult msg_;
};

class Init_GodResult_orientation
{
public:
  explicit Init_GodResult_orientation(::deva_perception_msgs::msg::GodResult & msg)
  : msg_(msg)
  {}
  Init_GodResult_god_obstacles orientation(::deva_perception_msgs::msg::GodResult::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_GodResult_god_obstacles(msg_);
  }

private:
  ::deva_perception_msgs::msg::GodResult msg_;
};

class Init_GodResult_translation
{
public:
  explicit Init_GodResult_translation(::deva_perception_msgs::msg::GodResult & msg)
  : msg_(msg)
  {}
  Init_GodResult_orientation translation(::deva_perception_msgs::msg::GodResult::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_GodResult_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::GodResult msg_;
};

class Init_GodResult_header
{
public:
  Init_GodResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GodResult_translation header(::deva_perception_msgs::msg::GodResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GodResult_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::GodResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::GodResult>()
{
  return deva_perception_msgs::msg::builder::Init_GodResult_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_RESULT__BUILDER_HPP_
