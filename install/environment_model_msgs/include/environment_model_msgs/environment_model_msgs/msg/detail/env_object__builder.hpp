// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvObject.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_OBJECT__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvObject_polygen
{
public:
  explicit Init_EnvObject_polygen(::environment_model_msgs::msg::EnvObject & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvObject polygen(::environment_model_msgs::msg::EnvObject::_polygen_type arg)
  {
    msg_.polygen = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvObject msg_;
};

class Init_EnvObject_enum_object_type
{
public:
  explicit Init_EnvObject_enum_object_type(::environment_model_msgs::msg::EnvObject & msg)
  : msg_(msg)
  {}
  Init_EnvObject_polygen enum_object_type(::environment_model_msgs::msg::EnvObject::_enum_object_type_type arg)
  {
    msg_.enum_object_type = std::move(arg);
    return Init_EnvObject_polygen(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvObject msg_;
};

class Init_EnvObject_id
{
public:
  Init_EnvObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvObject_enum_object_type id(::environment_model_msgs::msg::EnvObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EnvObject_enum_object_type(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvObject>()
{
  return environment_model_msgs::msg::builder::Init_EnvObject_id();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_OBJECT__BUILDER_HPP_
