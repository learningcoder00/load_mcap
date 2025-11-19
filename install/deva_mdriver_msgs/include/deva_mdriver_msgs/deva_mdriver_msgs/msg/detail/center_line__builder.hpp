// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/center_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_CenterLine_traffic_elem_ids
{
public:
  explicit Init_CenterLine_traffic_elem_ids(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::CenterLine traffic_elem_ids(::deva_mdriver_msgs::msg::CenterLine::_traffic_elem_ids_type arg)
  {
    msg_.traffic_elem_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_right_line_dist
{
public:
  explicit Init_CenterLine_right_line_dist(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_traffic_elem_ids right_line_dist(::deva_mdriver_msgs::msg::CenterLine::_right_line_dist_type arg)
  {
    msg_.right_line_dist = std::move(arg);
    return Init_CenterLine_traffic_elem_ids(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_left_line_dist
{
public:
  explicit Init_CenterLine_left_line_dist(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_right_line_dist left_line_dist(::deva_mdriver_msgs::msg::CenterLine::_left_line_dist_type arg)
  {
    msg_.left_line_dist = std::move(arg);
    return Init_CenterLine_right_line_dist(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_right_line_attr
{
public:
  explicit Init_CenterLine_right_line_attr(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_left_line_dist right_line_attr(::deva_mdriver_msgs::msg::CenterLine::_right_line_attr_type arg)
  {
    msg_.right_line_attr = std::move(arg);
    return Init_CenterLine_left_line_dist(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_left_line_attr
{
public:
  explicit Init_CenterLine_left_line_attr(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_right_line_attr left_line_attr(::deva_mdriver_msgs::msg::CenterLine::_left_line_attr_type arg)
  {
    msg_.left_line_attr = std::move(arg);
    return Init_CenterLine_right_line_attr(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_suc_ids
{
public:
  explicit Init_CenterLine_suc_ids(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_left_line_attr suc_ids(::deva_mdriver_msgs::msg::CenterLine::_suc_ids_type arg)
  {
    msg_.suc_ids = std::move(arg);
    return Init_CenterLine_left_line_attr(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_pre_ids
{
public:
  explicit Init_CenterLine_pre_ids(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_suc_ids pre_ids(::deva_mdriver_msgs::msg::CenterLine::_pre_ids_type arg)
  {
    msg_.pre_ids = std::move(arg);
    return Init_CenterLine_suc_ids(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_pts
{
public:
  explicit Init_CenterLine_pts(::deva_mdriver_msgs::msg::CenterLine & msg)
  : msg_(msg)
  {}
  Init_CenterLine_pre_ids pts(::deva_mdriver_msgs::msg::CenterLine::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return Init_CenterLine_pre_ids(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

class Init_CenterLine_id
{
public:
  Init_CenterLine_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterLine_pts id(::deva_mdriver_msgs::msg::CenterLine::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CenterLine_pts(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::CenterLine>()
{
  return deva_mdriver_msgs::msg::builder::Init_CenterLine_id();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__BUILDER_HPP_
