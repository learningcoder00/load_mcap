// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvLaneArray.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_lane_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvLaneArray_env_lane
{
public:
  explicit Init_EnvLaneArray_env_lane(::environment_model_msgs::msg::EnvLaneArray & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvLaneArray env_lane(::environment_model_msgs::msg::EnvLaneArray::_env_lane_type arg)
  {
    msg_.env_lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLaneArray msg_;
};

class Init_EnvLaneArray_header
{
public:
  Init_EnvLaneArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvLaneArray_env_lane header(::environment_model_msgs::msg::EnvLaneArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnvLaneArray_env_lane(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLaneArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvLaneArray>()
{
  return environment_model_msgs::msg::builder::Init_EnvLaneArray_header();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__BUILDER_HPP_
