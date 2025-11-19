// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/GroundPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/ground_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_GroundPoint_confidence
{
public:
  explicit Init_GroundPoint_confidence(::deva_common_msgs::msg::GroundPoint & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::GroundPoint confidence(::deva_common_msgs::msg::GroundPoint::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::GroundPoint msg_;
};

class Init_GroundPoint_y
{
public:
  explicit Init_GroundPoint_y(::deva_common_msgs::msg::GroundPoint & msg)
  : msg_(msg)
  {}
  Init_GroundPoint_confidence y(::deva_common_msgs::msg::GroundPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GroundPoint_confidence(msg_);
  }

private:
  ::deva_common_msgs::msg::GroundPoint msg_;
};

class Init_GroundPoint_x
{
public:
  Init_GroundPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroundPoint_y x(::deva_common_msgs::msg::GroundPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GroundPoint_y(msg_);
  }

private:
  ::deva_common_msgs::msg::GroundPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::GroundPoint>()
{
  return deva_common_msgs::msg::builder::Init_GroundPoint_x();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__BUILDER_HPP_
