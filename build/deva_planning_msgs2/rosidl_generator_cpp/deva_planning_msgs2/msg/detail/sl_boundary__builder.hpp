// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/sl_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_SLBoundary_end_l
{
public:
  explicit Init_SLBoundary_end_l(::deva_planning_msgs2::msg::SLBoundary & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::SLBoundary end_l(::deva_planning_msgs2::msg::SLBoundary::_end_l_type arg)
  {
    msg_.end_l = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SLBoundary msg_;
};

class Init_SLBoundary_start_l
{
public:
  explicit Init_SLBoundary_start_l(::deva_planning_msgs2::msg::SLBoundary & msg)
  : msg_(msg)
  {}
  Init_SLBoundary_end_l start_l(::deva_planning_msgs2::msg::SLBoundary::_start_l_type arg)
  {
    msg_.start_l = std::move(arg);
    return Init_SLBoundary_end_l(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SLBoundary msg_;
};

class Init_SLBoundary_end_s
{
public:
  explicit Init_SLBoundary_end_s(::deva_planning_msgs2::msg::SLBoundary & msg)
  : msg_(msg)
  {}
  Init_SLBoundary_start_l end_s(::deva_planning_msgs2::msg::SLBoundary::_end_s_type arg)
  {
    msg_.end_s = std::move(arg);
    return Init_SLBoundary_start_l(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SLBoundary msg_;
};

class Init_SLBoundary_start_s
{
public:
  Init_SLBoundary_start_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SLBoundary_end_s start_s(::deva_planning_msgs2::msg::SLBoundary::_start_s_type arg)
  {
    msg_.start_s = std::move(arg);
    return Init_SLBoundary_end_s(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SLBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::SLBoundary>()
{
  return deva_planning_msgs2::msg::builder::Init_SLBoundary_start_s();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__BUILDER_HPP_
