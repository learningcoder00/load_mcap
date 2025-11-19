// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvSignal.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvSignal_block
{
public:
  explicit Init_EnvSignal_block(::environment_model_msgs::msg::EnvSignal & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvSignal block(::environment_model_msgs::msg::EnvSignal::_block_type arg)
  {
    msg_.block = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

class Init_EnvSignal_blink
{
public:
  explicit Init_EnvSignal_blink(::environment_model_msgs::msg::EnvSignal & msg)
  : msg_(msg)
  {}
  Init_EnvSignal_block blink(::environment_model_msgs::msg::EnvSignal::_blink_type arg)
  {
    msg_.blink = std::move(arg);
    return Init_EnvSignal_block(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

class Init_EnvSignal_virtual_brake_point
{
public:
  explicit Init_EnvSignal_virtual_brake_point(::environment_model_msgs::msg::EnvSignal & msg)
  : msg_(msg)
  {}
  Init_EnvSignal_blink virtual_brake_point(::environment_model_msgs::msg::EnvSignal::_virtual_brake_point_type arg)
  {
    msg_.virtual_brake_point = std::move(arg);
    return Init_EnvSignal_blink(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

class Init_EnvSignal_polygen
{
public:
  explicit Init_EnvSignal_polygen(::environment_model_msgs::msg::EnvSignal & msg)
  : msg_(msg)
  {}
  Init_EnvSignal_virtual_brake_point polygen(::environment_model_msgs::msg::EnvSignal::_polygen_type arg)
  {
    msg_.polygen = std::move(arg);
    return Init_EnvSignal_virtual_brake_point(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

class Init_EnvSignal_enum_shape_type
{
public:
  explicit Init_EnvSignal_enum_shape_type(::environment_model_msgs::msg::EnvSignal & msg)
  : msg_(msg)
  {}
  Init_EnvSignal_polygen enum_shape_type(::environment_model_msgs::msg::EnvSignal::_enum_shape_type_type arg)
  {
    msg_.enum_shape_type = std::move(arg);
    return Init_EnvSignal_polygen(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

class Init_EnvSignal_id
{
public:
  explicit Init_EnvSignal_id(::environment_model_msgs::msg::EnvSignal & msg)
  : msg_(msg)
  {}
  Init_EnvSignal_enum_shape_type id(::environment_model_msgs::msg::EnvSignal::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EnvSignal_enum_shape_type(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

class Init_EnvSignal_remain_time
{
public:
  explicit Init_EnvSignal_remain_time(::environment_model_msgs::msg::EnvSignal & msg)
  : msg_(msg)
  {}
  Init_EnvSignal_id remain_time(::environment_model_msgs::msg::EnvSignal::_remain_time_type arg)
  {
    msg_.remain_time = std::move(arg);
    return Init_EnvSignal_id(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

class Init_EnvSignal_enum_color
{
public:
  Init_EnvSignal_enum_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvSignal_remain_time enum_color(::environment_model_msgs::msg::EnvSignal::_enum_color_type arg)
  {
    msg_.enum_color = std::move(arg);
    return Init_EnvSignal_remain_time(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvSignal>()
{
  return environment_model_msgs::msg::builder::Init_EnvSignal_enum_color();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__BUILDER_HPP_
