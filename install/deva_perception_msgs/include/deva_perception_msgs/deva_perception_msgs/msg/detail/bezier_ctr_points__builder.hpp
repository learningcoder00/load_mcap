// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/BezierCtrPoints.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/bezier_ctr_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_BezierCtrPoints_bezier_ctr_points
{
public:
  explicit Init_BezierCtrPoints_bezier_ctr_points(::deva_perception_msgs::msg::BezierCtrPoints & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::BezierCtrPoints bezier_ctr_points(::deva_perception_msgs::msg::BezierCtrPoints::_bezier_ctr_points_type arg)
  {
    msg_.bezier_ctr_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::BezierCtrPoints msg_;
};

class Init_BezierCtrPoints_header
{
public:
  Init_BezierCtrPoints_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BezierCtrPoints_bezier_ctr_points header(::deva_perception_msgs::msg::BezierCtrPoints::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BezierCtrPoints_bezier_ctr_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::BezierCtrPoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::BezierCtrPoints>()
{
  return deva_perception_msgs::msg::builder::Init_BezierCtrPoints_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__BUILDER_HPP_
