// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/VirtualWall.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/virtual_wall__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_VirtualWall_length
{
public:
  explicit Init_VirtualWall_length(::deva_planning_msgs2::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::VirtualWall length(::deva_planning_msgs2::msg::VirtualWall::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

class Init_VirtualWall_height
{
public:
  explicit Init_VirtualWall_height(::deva_planning_msgs2::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_length height(::deva_planning_msgs2::msg::VirtualWall::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_VirtualWall_length(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

class Init_VirtualWall_width
{
public:
  explicit Init_VirtualWall_width(::deva_planning_msgs2::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_height width(::deva_planning_msgs2::msg::VirtualWall::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_VirtualWall_height(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

class Init_VirtualWall_theta
{
public:
  explicit Init_VirtualWall_theta(::deva_planning_msgs2::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_width theta(::deva_planning_msgs2::msg::VirtualWall::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_VirtualWall_width(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

class Init_VirtualWall_z_center
{
public:
  explicit Init_VirtualWall_z_center(::deva_planning_msgs2::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_theta z_center(::deva_planning_msgs2::msg::VirtualWall::_z_center_type arg)
  {
    msg_.z_center = std::move(arg);
    return Init_VirtualWall_theta(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

class Init_VirtualWall_y_center
{
public:
  explicit Init_VirtualWall_y_center(::deva_planning_msgs2::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_z_center y_center(::deva_planning_msgs2::msg::VirtualWall::_y_center_type arg)
  {
    msg_.y_center = std::move(arg);
    return Init_VirtualWall_z_center(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

class Init_VirtualWall_x_center
{
public:
  explicit Init_VirtualWall_x_center(::deva_planning_msgs2::msg::VirtualWall & msg)
  : msg_(msg)
  {}
  Init_VirtualWall_y_center x_center(::deva_planning_msgs2::msg::VirtualWall::_x_center_type arg)
  {
    msg_.x_center = std::move(arg);
    return Init_VirtualWall_y_center(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

class Init_VirtualWall_id
{
public:
  Init_VirtualWall_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualWall_x_center id(::deva_planning_msgs2::msg::VirtualWall::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VirtualWall_x_center(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VirtualWall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::VirtualWall>()
{
  return deva_planning_msgs2::msg::builder::Init_VirtualWall_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL__BUILDER_HPP_
