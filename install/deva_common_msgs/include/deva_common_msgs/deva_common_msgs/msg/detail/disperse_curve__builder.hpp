// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/DisperseCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__DISPERSE_CURVE__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__DISPERSE_CURVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/disperse_curve__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_DisperseCurve_points
{
public:
  Init_DisperseCurve_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_common_msgs::msg::DisperseCurve points(::deva_common_msgs::msg::DisperseCurve::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::DisperseCurve msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::DisperseCurve>()
{
  return deva_common_msgs::msg::builder::Init_DisperseCurve_points();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__DISPERSE_CURVE__BUILDER_HPP_
