// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvLink_sub_link_num
{
public:
  explicit Init_EnvLink_sub_link_num(::environment_model_msgs::msg::EnvLink & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvLink sub_link_num(::environment_model_msgs::msg::EnvLink::_sub_link_num_type arg)
  {
    msg_.sub_link_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLink msg_;
};

class Init_EnvLink_lane_num
{
public:
  explicit Init_EnvLink_lane_num(::environment_model_msgs::msg::EnvLink & msg)
  : msg_(msg)
  {}
  Init_EnvLink_sub_link_num lane_num(::environment_model_msgs::msg::EnvLink::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_EnvLink_sub_link_num(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLink msg_;
};

class Init_EnvLink_is_on_routing
{
public:
  explicit Init_EnvLink_is_on_routing(::environment_model_msgs::msg::EnvLink & msg)
  : msg_(msg)
  {}
  Init_EnvLink_lane_num is_on_routing(::environment_model_msgs::msg::EnvLink::_is_on_routing_type arg)
  {
    msg_.is_on_routing = std::move(arg);
    return Init_EnvLink_lane_num(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLink msg_;
};

class Init_EnvLink_length
{
public:
  explicit Init_EnvLink_length(::environment_model_msgs::msg::EnvLink & msg)
  : msg_(msg)
  {}
  Init_EnvLink_is_on_routing length(::environment_model_msgs::msg::EnvLink::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_EnvLink_is_on_routing(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLink msg_;
};

class Init_EnvLink_angle_with_parent
{
public:
  explicit Init_EnvLink_angle_with_parent(::environment_model_msgs::msg::EnvLink & msg)
  : msg_(msg)
  {}
  Init_EnvLink_length angle_with_parent(::environment_model_msgs::msg::EnvLink::_angle_with_parent_type arg)
  {
    msg_.angle_with_parent = std::move(arg);
    return Init_EnvLink_length(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLink msg_;
};

class Init_EnvLink_parent_link_id
{
public:
  explicit Init_EnvLink_parent_link_id(::environment_model_msgs::msg::EnvLink & msg)
  : msg_(msg)
  {}
  Init_EnvLink_angle_with_parent parent_link_id(::environment_model_msgs::msg::EnvLink::_parent_link_id_type arg)
  {
    msg_.parent_link_id = std::move(arg);
    return Init_EnvLink_angle_with_parent(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLink msg_;
};

class Init_EnvLink_id
{
public:
  Init_EnvLink_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvLink_parent_link_id id(::environment_model_msgs::msg::EnvLink::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EnvLink_parent_link_id(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvLink>()
{
  return environment_model_msgs::msg::builder::Init_EnvLink_id();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__BUILDER_HPP_
