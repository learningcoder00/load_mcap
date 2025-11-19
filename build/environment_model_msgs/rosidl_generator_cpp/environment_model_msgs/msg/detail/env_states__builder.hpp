// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvStates.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATES__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvStates_states
{
public:
  explicit Init_EnvStates_states(::environment_model_msgs::msg::EnvStates & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvStates states(::environment_model_msgs::msg::EnvStates::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvStates msg_;
};

class Init_EnvStates_header
{
public:
  Init_EnvStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvStates_states header(::environment_model_msgs::msg::EnvStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnvStates_states(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvStates>()
{
  return environment_model_msgs::msg::builder::Init_EnvStates_header();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATES__BUILDER_HPP_
