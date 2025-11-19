// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/AvpRefLineTreePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpRefLineTreePoint_right_z
{
public:
  explicit Init_AvpRefLineTreePoint_right_z(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::AvpRefLineTreePoint right_z(::deva_planning_msgs::msg::AvpRefLineTreePoint::_right_z_type arg)
  {
    msg_.right_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_right_y
{
public:
  explicit Init_AvpRefLineTreePoint_right_y(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_right_z right_y(::deva_planning_msgs::msg::AvpRefLineTreePoint::_right_y_type arg)
  {
    msg_.right_y = std::move(arg);
    return Init_AvpRefLineTreePoint_right_z(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_right_x
{
public:
  explicit Init_AvpRefLineTreePoint_right_x(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_right_y right_x(::deva_planning_msgs::msg::AvpRefLineTreePoint::_right_x_type arg)
  {
    msg_.right_x = std::move(arg);
    return Init_AvpRefLineTreePoint_right_y(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_left_z
{
public:
  explicit Init_AvpRefLineTreePoint_left_z(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_right_x left_z(::deva_planning_msgs::msg::AvpRefLineTreePoint::_left_z_type arg)
  {
    msg_.left_z = std::move(arg);
    return Init_AvpRefLineTreePoint_right_x(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_left_y
{
public:
  explicit Init_AvpRefLineTreePoint_left_y(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_left_z left_y(::deva_planning_msgs::msg::AvpRefLineTreePoint::_left_y_type arg)
  {
    msg_.left_y = std::move(arg);
    return Init_AvpRefLineTreePoint_left_z(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_left_x
{
public:
  explicit Init_AvpRefLineTreePoint_left_x(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_left_y left_x(::deva_planning_msgs::msg::AvpRefLineTreePoint::_left_x_type arg)
  {
    msg_.left_x = std::move(arg);
    return Init_AvpRefLineTreePoint_left_y(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_right_n
{
public:
  explicit Init_AvpRefLineTreePoint_right_n(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_left_x right_n(::deva_planning_msgs::msg::AvpRefLineTreePoint::_right_n_type arg)
  {
    msg_.right_n = std::move(arg);
    return Init_AvpRefLineTreePoint_left_x(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_left_n
{
public:
  explicit Init_AvpRefLineTreePoint_left_n(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_right_n left_n(::deva_planning_msgs::msg::AvpRefLineTreePoint::_left_n_type arg)
  {
    msg_.left_n = std::move(arg);
    return Init_AvpRefLineTreePoint_right_n(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_center_point_z
{
public:
  explicit Init_AvpRefLineTreePoint_center_point_z(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_left_n center_point_z(::deva_planning_msgs::msg::AvpRefLineTreePoint::_center_point_z_type arg)
  {
    msg_.center_point_z = std::move(arg);
    return Init_AvpRefLineTreePoint_left_n(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_center_point_y
{
public:
  explicit Init_AvpRefLineTreePoint_center_point_y(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_center_point_z center_point_y(::deva_planning_msgs::msg::AvpRefLineTreePoint::_center_point_y_type arg)
  {
    msg_.center_point_y = std::move(arg);
    return Init_AvpRefLineTreePoint_center_point_z(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_center_point_x
{
public:
  explicit Init_AvpRefLineTreePoint_center_point_x(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_center_point_y center_point_x(::deva_planning_msgs::msg::AvpRefLineTreePoint::_center_point_x_type arg)
  {
    msg_.center_point_x = std::move(arg);
    return Init_AvpRefLineTreePoint_center_point_y(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_center_n
{
public:
  explicit Init_AvpRefLineTreePoint_center_n(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_center_point_x center_n(::deva_planning_msgs::msg::AvpRefLineTreePoint::_center_n_type arg)
  {
    msg_.center_n = std::move(arg);
    return Init_AvpRefLineTreePoint_center_point_x(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_directory
{
public:
  explicit Init_AvpRefLineTreePoint_directory(::deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
  : msg_(msg)
  {}
  Init_AvpRefLineTreePoint_center_n directory(::deva_planning_msgs::msg::AvpRefLineTreePoint::_directory_type arg)
  {
    msg_.directory = std::move(arg);
    return Init_AvpRefLineTreePoint_center_n(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

class Init_AvpRefLineTreePoint_idx
{
public:
  Init_AvpRefLineTreePoint_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvpRefLineTreePoint_directory idx(::deva_planning_msgs::msg::AvpRefLineTreePoint::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return Init_AvpRefLineTreePoint_directory(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::AvpRefLineTreePoint>()
{
  return deva_planning_msgs::msg::builder::Init_AvpRefLineTreePoint_idx();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__BUILDER_HPP_
