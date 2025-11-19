// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/PlanningFail.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_FAIL__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_FAIL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/planning_fail__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningFail_request
{
public:
  explicit Init_PlanningFail_request(::deva_planning_msgs::msg::PlanningFail & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::PlanningFail request(::deva_planning_msgs::msg::PlanningFail::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningFail msg_;
};

class Init_PlanningFail_reason
{
public:
  Init_PlanningFail_reason()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningFail_request reason(::deva_planning_msgs::msg::PlanningFail::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_PlanningFail_request(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningFail msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::PlanningFail>()
{
  return deva_planning_msgs::msg::builder::Init_PlanningFail_reason();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_FAIL__BUILDER_HPP_
