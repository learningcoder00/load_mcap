// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eFailsafe.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_failsafe__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eFailsafe_result
{
public:
  explicit Init_E2eFailsafe_result(::deva_perception_msgs::msg::E2eFailsafe & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eFailsafe result(::deva_perception_msgs::msg::E2eFailsafe::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafe msg_;
};

class Init_E2eFailsafe_id
{
public:
  explicit Init_E2eFailsafe_id(::deva_perception_msgs::msg::E2eFailsafe & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafe_result id(::deva_perception_msgs::msg::E2eFailsafe::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_E2eFailsafe_result(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafe msg_;
};

class Init_E2eFailsafe_header
{
public:
  Init_E2eFailsafe_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eFailsafe_id header(::deva_perception_msgs::msg::E2eFailsafe::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_E2eFailsafe_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafe msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eFailsafe>()
{
  return deva_perception_msgs::msg::builder::Init_E2eFailsafe_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__BUILDER_HPP_
