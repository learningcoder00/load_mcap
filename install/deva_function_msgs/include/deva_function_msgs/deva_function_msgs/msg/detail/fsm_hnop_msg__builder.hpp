// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FsmHnopMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_HNOP_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_HNOP_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fsm_hnop_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FsmHnopMsg_status
{
public:
  explicit Init_FsmHnopMsg_status(::deva_function_msgs::msg::FsmHnopMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FsmHnopMsg status(::deva_function_msgs::msg::FsmHnopMsg::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmHnopMsg msg_;
};

class Init_FsmHnopMsg_publish_timestamp
{
public:
  Init_FsmHnopMsg_publish_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsmHnopMsg_status publish_timestamp(::deva_function_msgs::msg::FsmHnopMsg::_publish_timestamp_type arg)
  {
    msg_.publish_timestamp = std::move(arg);
    return Init_FsmHnopMsg_status(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmHnopMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FsmHnopMsg>()
{
  return deva_function_msgs::msg::builder::Init_FsmHnopMsg_publish_timestamp();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_HNOP_MSG__BUILDER_HPP_
