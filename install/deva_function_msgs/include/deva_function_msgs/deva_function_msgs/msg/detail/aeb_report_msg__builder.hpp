// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/AebReportMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/aeb_report_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_AebReportMsg_aeb_state
{
public:
  explicit Init_AebReportMsg_aeb_state(::deva_function_msgs::msg::AebReportMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::AebReportMsg aeb_state(::deva_function_msgs::msg::AebReportMsg::_aeb_state_type arg)
  {
    msg_.aeb_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::AebReportMsg msg_;
};

class Init_AebReportMsg_publish_timestamp
{
public:
  Init_AebReportMsg_publish_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AebReportMsg_aeb_state publish_timestamp(::deva_function_msgs::msg::AebReportMsg::_publish_timestamp_type arg)
  {
    msg_.publish_timestamp = std::move(arg);
    return Init_AebReportMsg_aeb_state(msg_);
  }

private:
  ::deva_function_msgs::msg::AebReportMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::AebReportMsg>()
{
  return deva_function_msgs::msg::builder::Init_AebReportMsg_publish_timestamp();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__BUILDER_HPP_
