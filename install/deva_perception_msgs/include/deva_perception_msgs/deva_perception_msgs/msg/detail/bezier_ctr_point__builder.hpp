// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/BezierCtrPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/bezier_ctr_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_BezierCtrPoint_points
{
public:
  explicit Init_BezierCtrPoint_points(::deva_perception_msgs::msg::BezierCtrPoint & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::BezierCtrPoint points(::deva_perception_msgs::msg::BezierCtrPoint::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::BezierCtrPoint msg_;
};

class Init_BezierCtrPoint_header
{
public:
  Init_BezierCtrPoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BezierCtrPoint_points header(::deva_perception_msgs::msg::BezierCtrPoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BezierCtrPoint_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::BezierCtrPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::BezierCtrPoint>()
{
  return deva_perception_msgs::msg::builder::Init_BezierCtrPoint_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINT__BUILDER_HPP_
