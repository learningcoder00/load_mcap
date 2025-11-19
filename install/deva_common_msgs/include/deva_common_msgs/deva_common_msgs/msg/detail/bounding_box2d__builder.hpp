// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/BoundingBox2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX2D__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX2D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox2d_height
{
public:
  explicit Init_BoundingBox2d_height(::deva_common_msgs::msg::BoundingBox2d & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::BoundingBox2d height(::deva_common_msgs::msg::BoundingBox2d::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::BoundingBox2d msg_;
};

class Init_BoundingBox2d_width
{
public:
  explicit Init_BoundingBox2d_width(::deva_common_msgs::msg::BoundingBox2d & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2d_height width(::deva_common_msgs::msg::BoundingBox2d::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_BoundingBox2d_height(msg_);
  }

private:
  ::deva_common_msgs::msg::BoundingBox2d msg_;
};

class Init_BoundingBox2d_y
{
public:
  explicit Init_BoundingBox2d_y(::deva_common_msgs::msg::BoundingBox2d & msg)
  : msg_(msg)
  {}
  Init_BoundingBox2d_width y(::deva_common_msgs::msg::BoundingBox2d::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BoundingBox2d_width(msg_);
  }

private:
  ::deva_common_msgs::msg::BoundingBox2d msg_;
};

class Init_BoundingBox2d_x
{
public:
  Init_BoundingBox2d_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox2d_y x(::deva_common_msgs::msg::BoundingBox2d::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BoundingBox2d_y(msg_);
  }

private:
  ::deva_common_msgs::msg::BoundingBox2d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::BoundingBox2d>()
{
  return deva_common_msgs::msg::builder::Init_BoundingBox2d_x();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX2D__BUILDER_HPP_
