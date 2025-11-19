// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FsmStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fsm_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FsmStateMsg_parking_state
{
public:
  explicit Init_FsmStateMsg_parking_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FsmStateMsg parking_state(::deva_function_msgs::msg::FsmStateMsg::_parking_state_type arg)
  {
    msg_.parking_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_mapping_state
{
public:
  explicit Init_FsmStateMsg_mapping_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_parking_state mapping_state(::deva_function_msgs::msg::FsmStateMsg::_mapping_state_type arg)
  {
    msg_.mapping_state = std::move(arg);
    return Init_FsmStateMsg_parking_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_calibra_state
{
public:
  explicit Init_FsmStateMsg_calibra_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_mapping_state calibra_state(::deva_function_msgs::msg::FsmStateMsg::_calibra_state_type arg)
  {
    msg_.calibra_state = std::move(arg);
    return Init_FsmStateMsg_mapping_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_d2d_state
{
public:
  explicit Init_FsmStateMsg_d2d_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_calibra_state d2d_state(::deva_function_msgs::msg::FsmStateMsg::_d2d_state_type arg)
  {
    msg_.d2d_state = std::move(arg);
    return Init_FsmStateMsg_calibra_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_noa_state
{
public:
  explicit Init_FsmStateMsg_noa_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_d2d_state noa_state(::deva_function_msgs::msg::FsmStateMsg::_noa_state_type arg)
  {
    msg_.noa_state = std::move(arg);
    return Init_FsmStateMsg_d2d_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_icc_state
{
public:
  explicit Init_FsmStateMsg_icc_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_noa_state icc_state(::deva_function_msgs::msg::FsmStateMsg::_icc_state_type arg)
  {
    msg_.icc_state = std::move(arg);
    return Init_FsmStateMsg_noa_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_acc_state
{
public:
  explicit Init_FsmStateMsg_acc_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_icc_state acc_state(::deva_function_msgs::msg::FsmStateMsg::_acc_state_type arg)
  {
    msg_.acc_state = std::move(arg);
    return Init_FsmStateMsg_icc_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_top_state
{
public:
  explicit Init_FsmStateMsg_top_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_acc_state top_state(::deva_function_msgs::msg::FsmStateMsg::_top_state_type arg)
  {
    msg_.top_state = std::move(arg);
    return Init_FsmStateMsg_acc_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_fsm_state
{
public:
  explicit Init_FsmStateMsg_fsm_state(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_top_state fsm_state(::deva_function_msgs::msg::FsmStateMsg::_fsm_state_type arg)
  {
    msg_.fsm_state = std::move(arg);
    return Init_FsmStateMsg_top_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_publish_timestamp
{
public:
  explicit Init_FsmStateMsg_publish_timestamp(::deva_function_msgs::msg::FsmStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmStateMsg_fsm_state publish_timestamp(::deva_function_msgs::msg::FsmStateMsg::_publish_timestamp_type arg)
  {
    msg_.publish_timestamp = std::move(arg);
    return Init_FsmStateMsg_fsm_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

class Init_FsmStateMsg_header
{
public:
  Init_FsmStateMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsmStateMsg_publish_timestamp header(::deva_function_msgs::msg::FsmStateMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FsmStateMsg_publish_timestamp(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmStateMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FsmStateMsg>()
{
  return deva_function_msgs::msg::builder::Init_FsmStateMsg_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__BUILDER_HPP_
