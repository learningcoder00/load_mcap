// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/AccHeadingSteeringStats.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_AccHeadingSteeringStats_heading_steering_stats
{
public:
  explicit Init_AccHeadingSteeringStats_heading_steering_stats(::deva_mdriver_msgs::msg::AccHeadingSteeringStats & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::AccHeadingSteeringStats heading_steering_stats(::deva_mdriver_msgs::msg::AccHeadingSteeringStats::_heading_steering_stats_type arg)
  {
    msg_.heading_steering_stats = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::AccHeadingSteeringStats msg_;
};

class Init_AccHeadingSteeringStats_acc_steering_stats
{
public:
  Init_AccHeadingSteeringStats_acc_steering_stats()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccHeadingSteeringStats_heading_steering_stats acc_steering_stats(::deva_mdriver_msgs::msg::AccHeadingSteeringStats::_acc_steering_stats_type arg)
  {
    msg_.acc_steering_stats = std::move(arg);
    return Init_AccHeadingSteeringStats_heading_steering_stats(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::AccHeadingSteeringStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::AccHeadingSteeringStats>()
{
  return deva_mdriver_msgs::msg::builder::Init_AccHeadingSteeringStats_acc_steering_stats();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__BUILDER_HPP_
