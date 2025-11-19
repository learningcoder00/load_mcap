// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/Vec2dArray.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/vec2d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec2dArray_vec2d_array
{
public:
  Init_Vec2dArray_vec2d_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::environment_model_msgs::msg::Vec2dArray vec2d_array(::environment_model_msgs::msg::Vec2dArray::_vec2d_array_type arg)
  {
    msg_.vec2d_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::Vec2dArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::Vec2dArray>()
{
  return environment_model_msgs::msg::builder::Init_Vec2dArray_vec2d_array();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__BUILDER_HPP_
