// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/SteeringArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/steering_arrow__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringArrow_property
{
public:
  explicit Init_SteeringArrow_property(::deva_perception_msgs::msg::SteeringArrow & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::SteeringArrow property(::deva_perception_msgs::msg::SteeringArrow::_property_type arg)
  {
    msg_.property = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::SteeringArrow msg_;
};

class Init_SteeringArrow_center_line_id
{
public:
  explicit Init_SteeringArrow_center_line_id(::deva_perception_msgs::msg::SteeringArrow & msg)
  : msg_(msg)
  {}
  Init_SteeringArrow_property center_line_id(::deva_perception_msgs::msg::SteeringArrow::_center_line_id_type arg)
  {
    msg_.center_line_id = std::move(arg);
    return Init_SteeringArrow_property(msg_);
  }

private:
  ::deva_perception_msgs::msg::SteeringArrow msg_;
};

class Init_SteeringArrow_vertices
{
public:
  explicit Init_SteeringArrow_vertices(::deva_perception_msgs::msg::SteeringArrow & msg)
  : msg_(msg)
  {}
  Init_SteeringArrow_center_line_id vertices(::deva_perception_msgs::msg::SteeringArrow::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return Init_SteeringArrow_center_line_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::SteeringArrow msg_;
};

class Init_SteeringArrow_center_point
{
public:
  explicit Init_SteeringArrow_center_point(::deva_perception_msgs::msg::SteeringArrow & msg)
  : msg_(msg)
  {}
  Init_SteeringArrow_vertices center_point(::deva_perception_msgs::msg::SteeringArrow::_center_point_type arg)
  {
    msg_.center_point = std::move(arg);
    return Init_SteeringArrow_vertices(msg_);
  }

private:
  ::deva_perception_msgs::msg::SteeringArrow msg_;
};

class Init_SteeringArrow_confidence
{
public:
  explicit Init_SteeringArrow_confidence(::deva_perception_msgs::msg::SteeringArrow & msg)
  : msg_(msg)
  {}
  Init_SteeringArrow_center_point confidence(::deva_perception_msgs::msg::SteeringArrow::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_SteeringArrow_center_point(msg_);
  }

private:
  ::deva_perception_msgs::msg::SteeringArrow msg_;
};

class Init_SteeringArrow_id
{
public:
  Init_SteeringArrow_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringArrow_confidence id(::deva_perception_msgs::msg::SteeringArrow::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SteeringArrow_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::SteeringArrow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::SteeringArrow>()
{
  return deva_perception_msgs::msg::builder::Init_SteeringArrow_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__BUILDER_HPP_
