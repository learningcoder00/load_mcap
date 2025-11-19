// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/BoundPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/bound_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundPoint_width
{
public:
  explicit Init_BoundPoint_width(::environment_model_msgs::msg::BoundPoint & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::BoundPoint width(::environment_model_msgs::msg::BoundPoint::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundPoint msg_;
};

class Init_BoundPoint_enum_color
{
public:
  explicit Init_BoundPoint_enum_color(::environment_model_msgs::msg::BoundPoint & msg)
  : msg_(msg)
  {}
  Init_BoundPoint_width enum_color(::environment_model_msgs::msg::BoundPoint::_enum_color_type arg)
  {
    msg_.enum_color = std::move(arg);
    return Init_BoundPoint_width(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundPoint msg_;
};

class Init_BoundPoint_enum_marking_type
{
public:
  explicit Init_BoundPoint_enum_marking_type(::environment_model_msgs::msg::BoundPoint & msg)
  : msg_(msg)
  {}
  Init_BoundPoint_enum_color enum_marking_type(::environment_model_msgs::msg::BoundPoint::_enum_marking_type_type arg)
  {
    msg_.enum_marking_type = std::move(arg);
    return Init_BoundPoint_enum_color(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundPoint msg_;
};

class Init_BoundPoint_y
{
public:
  explicit Init_BoundPoint_y(::environment_model_msgs::msg::BoundPoint & msg)
  : msg_(msg)
  {}
  Init_BoundPoint_enum_marking_type y(::environment_model_msgs::msg::BoundPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BoundPoint_enum_marking_type(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundPoint msg_;
};

class Init_BoundPoint_x
{
public:
  Init_BoundPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundPoint_y x(::environment_model_msgs::msg::BoundPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BoundPoint_y(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::BoundPoint>()
{
  return environment_model_msgs::msg::builder::Init_BoundPoint_x();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__BUILDER_HPP_
