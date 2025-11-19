// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/Ref2SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_Ref2SLBoundary_sl_boundary
{
public:
  explicit Init_Ref2SLBoundary_sl_boundary(::deva_planning_msgs2::msg::Ref2SLBoundary & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::Ref2SLBoundary sl_boundary(::deva_planning_msgs2::msg::Ref2SLBoundary::_sl_boundary_type arg)
  {
    msg_.sl_boundary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::Ref2SLBoundary msg_;
};

class Init_Ref2SLBoundary_ref_id
{
public:
  Init_Ref2SLBoundary_ref_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ref2SLBoundary_sl_boundary ref_id(::deva_planning_msgs2::msg::Ref2SLBoundary::_ref_id_type arg)
  {
    msg_.ref_id = std::move(arg);
    return Init_Ref2SLBoundary_sl_boundary(msg_);
  }

private:
  ::deva_planning_msgs2::msg::Ref2SLBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::Ref2SLBoundary>()
{
  return deva_planning_msgs2::msg::builder::Init_Ref2SLBoundary_ref_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__BUILDER_HPP_
