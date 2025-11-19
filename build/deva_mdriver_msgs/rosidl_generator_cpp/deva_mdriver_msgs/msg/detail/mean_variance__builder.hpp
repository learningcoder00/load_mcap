// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/MeanVariance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/mean_variance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_MeanVariance_variance
{
public:
  explicit Init_MeanVariance_variance(::deva_mdriver_msgs::msg::MeanVariance & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::MeanVariance variance(::deva_mdriver_msgs::msg::MeanVariance::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MeanVariance msg_;
};

class Init_MeanVariance_mean
{
public:
  Init_MeanVariance_mean()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeanVariance_variance mean(::deva_mdriver_msgs::msg::MeanVariance::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_MeanVariance_variance(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MeanVariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::MeanVariance>()
{
  return deva_mdriver_msgs::msg::builder::Init_MeanVariance_mean();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__BUILDER_HPP_
