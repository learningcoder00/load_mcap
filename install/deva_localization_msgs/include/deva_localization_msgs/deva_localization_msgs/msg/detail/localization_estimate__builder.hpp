// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_localization_msgs:msg/LocalizationEstimate.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__BUILDER_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_localization_msgs/msg/detail/localization_estimate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalizationEstimate_global_pose_state_message
{
public:
  explicit Init_LocalizationEstimate_global_pose_state_message(::deva_localization_msgs::msg::LocalizationEstimate & msg)
  : msg_(msg)
  {}
  ::deva_localization_msgs::msg::LocalizationEstimate global_pose_state_message(::deva_localization_msgs::msg::LocalizationEstimate::_global_pose_state_message_type arg)
  {
    msg_.global_pose_state_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationEstimate msg_;
};

class Init_LocalizationEstimate_state_message
{
public:
  explicit Init_LocalizationEstimate_state_message(::deva_localization_msgs::msg::LocalizationEstimate & msg)
  : msg_(msg)
  {}
  Init_LocalizationEstimate_global_pose_state_message state_message(::deva_localization_msgs::msg::LocalizationEstimate::_state_message_type arg)
  {
    msg_.state_message = std::move(arg);
    return Init_LocalizationEstimate_global_pose_state_message(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationEstimate msg_;
};

class Init_LocalizationEstimate_measurement_time
{
public:
  explicit Init_LocalizationEstimate_measurement_time(::deva_localization_msgs::msg::LocalizationEstimate & msg)
  : msg_(msg)
  {}
  Init_LocalizationEstimate_state_message measurement_time(::deva_localization_msgs::msg::LocalizationEstimate::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_LocalizationEstimate_state_message(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationEstimate msg_;
};

class Init_LocalizationEstimate_global_pose
{
public:
  explicit Init_LocalizationEstimate_global_pose(::deva_localization_msgs::msg::LocalizationEstimate & msg)
  : msg_(msg)
  {}
  Init_LocalizationEstimate_measurement_time global_pose(::deva_localization_msgs::msg::LocalizationEstimate::_global_pose_type arg)
  {
    msg_.global_pose = std::move(arg);
    return Init_LocalizationEstimate_measurement_time(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationEstimate msg_;
};

class Init_LocalizationEstimate_pose
{
public:
  explicit Init_LocalizationEstimate_pose(::deva_localization_msgs::msg::LocalizationEstimate & msg)
  : msg_(msg)
  {}
  Init_LocalizationEstimate_global_pose pose(::deva_localization_msgs::msg::LocalizationEstimate::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LocalizationEstimate_global_pose(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationEstimate msg_;
};

class Init_LocalizationEstimate_header
{
public:
  Init_LocalizationEstimate_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizationEstimate_pose header(::deva_localization_msgs::msg::LocalizationEstimate::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalizationEstimate_pose(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationEstimate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_localization_msgs::msg::LocalizationEstimate>()
{
  return deva_localization_msgs::msg::builder::Init_LocalizationEstimate_header();
}

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__BUILDER_HPP_
