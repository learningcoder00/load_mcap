// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/AvpRefLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/avp_ref_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_AvpRefLine_is_junction
{
public:
  explicit Init_AvpRefLine_is_junction(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::AvpRefLine is_junction(::deva_planning_msgs2::msg::AvpRefLine::_is_junction_type arg)
  {
    msg_.is_junction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_right_boundary_n
{
public:
  explicit Init_AvpRefLine_right_boundary_n(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_is_junction right_boundary_n(::deva_planning_msgs2::msg::AvpRefLine::_right_boundary_n_type arg)
  {
    msg_.right_boundary_n = std::move(arg);
    return Init_AvpRefLine_is_junction(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_left_boundary_n
{
public:
  explicit Init_AvpRefLine_left_boundary_n(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_right_boundary_n left_boundary_n(::deva_planning_msgs2::msg::AvpRefLine::_left_boundary_n_type arg)
  {
    msg_.left_boundary_n = std::move(arg);
    return Init_AvpRefLine_right_boundary_n(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_right_boundary_z
{
public:
  explicit Init_AvpRefLine_right_boundary_z(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_left_boundary_n right_boundary_z(::deva_planning_msgs2::msg::AvpRefLine::_right_boundary_z_type arg)
  {
    msg_.right_boundary_z = std::move(arg);
    return Init_AvpRefLine_left_boundary_n(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_right_boundary_y
{
public:
  explicit Init_AvpRefLine_right_boundary_y(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_right_boundary_z right_boundary_y(::deva_planning_msgs2::msg::AvpRefLine::_right_boundary_y_type arg)
  {
    msg_.right_boundary_y = std::move(arg);
    return Init_AvpRefLine_right_boundary_z(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_right_boundary_x
{
public:
  explicit Init_AvpRefLine_right_boundary_x(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_right_boundary_y right_boundary_x(::deva_planning_msgs2::msg::AvpRefLine::_right_boundary_x_type arg)
  {
    msg_.right_boundary_x = std::move(arg);
    return Init_AvpRefLine_right_boundary_y(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_left_boundary_z
{
public:
  explicit Init_AvpRefLine_left_boundary_z(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_right_boundary_x left_boundary_z(::deva_planning_msgs2::msg::AvpRefLine::_left_boundary_z_type arg)
  {
    msg_.left_boundary_z = std::move(arg);
    return Init_AvpRefLine_right_boundary_x(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_left_boundary_y
{
public:
  explicit Init_AvpRefLine_left_boundary_y(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_left_boundary_z left_boundary_y(::deva_planning_msgs2::msg::AvpRefLine::_left_boundary_y_type arg)
  {
    msg_.left_boundary_y = std::move(arg);
    return Init_AvpRefLine_left_boundary_z(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_left_boundary_x
{
public:
  explicit Init_AvpRefLine_left_boundary_x(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_left_boundary_y left_boundary_x(::deva_planning_msgs2::msg::AvpRefLine::_left_boundary_x_type arg)
  {
    msg_.left_boundary_x = std::move(arg);
    return Init_AvpRefLine_left_boundary_y(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_heading
{
public:
  explicit Init_AvpRefLine_heading(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_left_boundary_x heading(::deva_planning_msgs2::msg::AvpRefLine::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_AvpRefLine_left_boundary_x(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_z
{
public:
  explicit Init_AvpRefLine_z(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_heading z(::deva_planning_msgs2::msg::AvpRefLine::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_AvpRefLine_heading(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_y
{
public:
  explicit Init_AvpRefLine_y(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_z y(::deva_planning_msgs2::msg::AvpRefLine::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_AvpRefLine_z(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_x
{
public:
  explicit Init_AvpRefLine_x(::deva_planning_msgs2::msg::AvpRefLine & msg)
  : msg_(msg)
  {}
  Init_AvpRefLine_y x(::deva_planning_msgs2::msg::AvpRefLine::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_AvpRefLine_y(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

class Init_AvpRefLine_s
{
public:
  Init_AvpRefLine_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvpRefLine_x s(::deva_planning_msgs2::msg::AvpRefLine::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_AvpRefLine_x(msg_);
  }

private:
  ::deva_planning_msgs2::msg::AvpRefLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::AvpRefLine>()
{
  return deva_planning_msgs2::msg::builder::Init_AvpRefLine_s();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE__BUILDER_HPP_
