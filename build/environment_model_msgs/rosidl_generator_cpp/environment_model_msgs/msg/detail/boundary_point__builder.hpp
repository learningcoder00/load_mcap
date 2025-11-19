// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/BoundaryPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUNDARY_POINT__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUNDARY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/boundary_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundaryPoint_boundary_type
{
public:
  explicit Init_BoundaryPoint_boundary_type(::environment_model_msgs::msg::BoundaryPoint & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::BoundaryPoint boundary_type(::environment_model_msgs::msg::BoundaryPoint::_boundary_type_type arg)
  {
    msg_.boundary_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundaryPoint msg_;
};

class Init_BoundaryPoint_y
{
public:
  explicit Init_BoundaryPoint_y(::environment_model_msgs::msg::BoundaryPoint & msg)
  : msg_(msg)
  {}
  Init_BoundaryPoint_boundary_type y(::environment_model_msgs::msg::BoundaryPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BoundaryPoint_boundary_type(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundaryPoint msg_;
};

class Init_BoundaryPoint_x
{
public:
  Init_BoundaryPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundaryPoint_y x(::environment_model_msgs::msg::BoundaryPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BoundaryPoint_y(msg_);
  }

private:
  ::environment_model_msgs::msg::BoundaryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::BoundaryPoint>()
{
  return environment_model_msgs::msg::builder::Init_BoundaryPoint_x();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUNDARY_POINT__BUILDER_HPP_
