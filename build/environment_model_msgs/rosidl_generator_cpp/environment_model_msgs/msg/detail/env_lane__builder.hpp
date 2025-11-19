// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvLane.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvLane_right_neibors
{
public:
  explicit Init_EnvLane_right_neibors(::environment_model_msgs::msg::EnvLane & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvLane right_neibors(::environment_model_msgs::msg::EnvLane::_right_neibors_type arg)
  {
    msg_.right_neibors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLane msg_;
};

class Init_EnvLane_left_neibors
{
public:
  explicit Init_EnvLane_left_neibors(::environment_model_msgs::msg::EnvLane & msg)
  : msg_(msg)
  {}
  Init_EnvLane_right_neibors left_neibors(::environment_model_msgs::msg::EnvLane::_left_neibors_type arg)
  {
    msg_.left_neibors = std::move(arg);
    return Init_EnvLane_right_neibors(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLane msg_;
};

class Init_EnvLane_right_boundary
{
public:
  explicit Init_EnvLane_right_boundary(::environment_model_msgs::msg::EnvLane & msg)
  : msg_(msg)
  {}
  Init_EnvLane_left_neibors right_boundary(::environment_model_msgs::msg::EnvLane::_right_boundary_type arg)
  {
    msg_.right_boundary = std::move(arg);
    return Init_EnvLane_left_neibors(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLane msg_;
};

class Init_EnvLane_left_boundary
{
public:
  explicit Init_EnvLane_left_boundary(::environment_model_msgs::msg::EnvLane & msg)
  : msg_(msg)
  {}
  Init_EnvLane_right_boundary left_boundary(::environment_model_msgs::msg::EnvLane::_left_boundary_type arg)
  {
    msg_.left_boundary = std::move(arg);
    return Init_EnvLane_right_boundary(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLane msg_;
};

class Init_EnvLane_extends
{
public:
  explicit Init_EnvLane_extends(::environment_model_msgs::msg::EnvLane & msg)
  : msg_(msg)
  {}
  Init_EnvLane_left_boundary extends(::environment_model_msgs::msg::EnvLane::_extends_type arg)
  {
    msg_.extends = std::move(arg);
    return Init_EnvLane_left_boundary(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLane msg_;
};

class Init_EnvLane_coords
{
public:
  explicit Init_EnvLane_coords(::environment_model_msgs::msg::EnvLane & msg)
  : msg_(msg)
  {}
  Init_EnvLane_extends coords(::environment_model_msgs::msg::EnvLane::_coords_type arg)
  {
    msg_.coords = std::move(arg);
    return Init_EnvLane_extends(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLane msg_;
};

class Init_EnvLane_id
{
public:
  Init_EnvLane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvLane_coords id(::environment_model_msgs::msg::EnvLane::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EnvLane_coords(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvLane>()
{
  return environment_model_msgs::msg::builder::Init_EnvLane_id();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__BUILDER_HPP_
