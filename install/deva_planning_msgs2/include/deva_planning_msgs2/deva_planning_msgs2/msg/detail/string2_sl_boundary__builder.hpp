// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/String2SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_SL_BOUNDARY__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_SL_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/string2_sl_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_String2SLBoundary_sl_boundary
{
public:
  explicit Init_String2SLBoundary_sl_boundary(::deva_planning_msgs2::msg::String2SLBoundary & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::String2SLBoundary sl_boundary(::deva_planning_msgs2::msg::String2SLBoundary::_sl_boundary_type arg)
  {
    msg_.sl_boundary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::String2SLBoundary msg_;
};

class Init_String2SLBoundary_obs_id
{
public:
  Init_String2SLBoundary_obs_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_String2SLBoundary_sl_boundary obs_id(::deva_planning_msgs2::msg::String2SLBoundary::_obs_id_type arg)
  {
    msg_.obs_id = std::move(arg);
    return Init_String2SLBoundary_sl_boundary(msg_);
  }

private:
  ::deva_planning_msgs2::msg::String2SLBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::String2SLBoundary>()
{
  return deva_planning_msgs2::msg::builder::Init_String2SLBoundary_obs_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STRING2_SL_BOUNDARY__BUILDER_HPP_
