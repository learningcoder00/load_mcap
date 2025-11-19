// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/MapIds.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/map_ids__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_MapIds_value2
{
public:
  explicit Init_MapIds_value2(::environment_model_msgs::msg::MapIds & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::MapIds value2(::environment_model_msgs::msg::MapIds::_value2_type arg)
  {
    msg_.value2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::MapIds msg_;
};

class Init_MapIds_value1
{
public:
  explicit Init_MapIds_value1(::environment_model_msgs::msg::MapIds & msg)
  : msg_(msg)
  {}
  Init_MapIds_value2 value1(::environment_model_msgs::msg::MapIds::_value1_type arg)
  {
    msg_.value1 = std::move(arg);
    return Init_MapIds_value2(msg_);
  }

private:
  ::environment_model_msgs::msg::MapIds msg_;
};

class Init_MapIds_key
{
public:
  Init_MapIds_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapIds_value1 key(::environment_model_msgs::msg::MapIds::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_MapIds_value1(msg_);
  }

private:
  ::environment_model_msgs::msg::MapIds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::MapIds>()
{
  return environment_model_msgs::msg::builder::Init_MapIds_key();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__BUILDER_HPP_
