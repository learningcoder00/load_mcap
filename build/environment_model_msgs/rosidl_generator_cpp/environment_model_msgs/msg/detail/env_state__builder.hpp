// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvState.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvState_msg
{
public:
  explicit Init_EnvState_msg(::environment_model_msgs::msg::EnvState & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvState msg(::environment_model_msgs::msg::EnvState::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvState msg_;
};

class Init_EnvState_msg_length
{
public:
  explicit Init_EnvState_msg_length(::environment_model_msgs::msg::EnvState & msg)
  : msg_(msg)
  {}
  Init_EnvState_msg msg_length(::environment_model_msgs::msg::EnvState::_msg_length_type arg)
  {
    msg_.msg_length = std::move(arg);
    return Init_EnvState_msg(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvState msg_;
};

class Init_EnvState_type
{
public:
  Init_EnvState_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvState_msg_length type(::environment_model_msgs::msg::EnvState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EnvState_msg_length(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvState>()
{
  return environment_model_msgs::msg::builder::Init_EnvState_type();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__BUILDER_HPP_
