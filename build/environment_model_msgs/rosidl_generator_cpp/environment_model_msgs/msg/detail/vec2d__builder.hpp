// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/Vec2d.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/vec2d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec2d_y
{
public:
  explicit Init_Vec2d_y(::environment_model_msgs::msg::Vec2d & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::Vec2d y(::environment_model_msgs::msg::Vec2d::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::Vec2d msg_;
};

class Init_Vec2d_x
{
public:
  Init_Vec2d_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vec2d_y x(::environment_model_msgs::msg::Vec2d::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vec2d_y(msg_);
  }

private:
  ::environment_model_msgs::msg::Vec2d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::Vec2d>()
{
  return environment_model_msgs::msg::builder::Init_Vec2d_x();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D__BUILDER_HPP_
