// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FsmTestToolDataMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_TEST_TOOL_DATA_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_TEST_TOOL_DATA_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fsm_test_tool_data_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FsmTestToolDataMsg_conditions
{
public:
  explicit Init_FsmTestToolDataMsg_conditions(::deva_function_msgs::msg::FsmTestToolDataMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FsmTestToolDataMsg conditions(::deva_function_msgs::msg::FsmTestToolDataMsg::_conditions_type arg)
  {
    msg_.conditions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmTestToolDataMsg msg_;
};

class Init_FsmTestToolDataMsg_state
{
public:
  explicit Init_FsmTestToolDataMsg_state(::deva_function_msgs::msg::FsmTestToolDataMsg & msg)
  : msg_(msg)
  {}
  Init_FsmTestToolDataMsg_conditions state(::deva_function_msgs::msg::FsmTestToolDataMsg::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_FsmTestToolDataMsg_conditions(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmTestToolDataMsg msg_;
};

class Init_FsmTestToolDataMsg_values
{
public:
  explicit Init_FsmTestToolDataMsg_values(::deva_function_msgs::msg::FsmTestToolDataMsg & msg)
  : msg_(msg)
  {}
  Init_FsmTestToolDataMsg_state values(::deva_function_msgs::msg::FsmTestToolDataMsg::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_FsmTestToolDataMsg_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmTestToolDataMsg msg_;
};

class Init_FsmTestToolDataMsg_keys
{
public:
  explicit Init_FsmTestToolDataMsg_keys(::deva_function_msgs::msg::FsmTestToolDataMsg & msg)
  : msg_(msg)
  {}
  Init_FsmTestToolDataMsg_values keys(::deva_function_msgs::msg::FsmTestToolDataMsg::_keys_type arg)
  {
    msg_.keys = std::move(arg);
    return Init_FsmTestToolDataMsg_values(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmTestToolDataMsg msg_;
};

class Init_FsmTestToolDataMsg_request_id
{
public:
  explicit Init_FsmTestToolDataMsg_request_id(::deva_function_msgs::msg::FsmTestToolDataMsg & msg)
  : msg_(msg)
  {}
  Init_FsmTestToolDataMsg_keys request_id(::deva_function_msgs::msg::FsmTestToolDataMsg::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_FsmTestToolDataMsg_keys(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmTestToolDataMsg msg_;
};

class Init_FsmTestToolDataMsg_cmd
{
public:
  explicit Init_FsmTestToolDataMsg_cmd(::deva_function_msgs::msg::FsmTestToolDataMsg & msg)
  : msg_(msg)
  {}
  Init_FsmTestToolDataMsg_request_id cmd(::deva_function_msgs::msg::FsmTestToolDataMsg::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_FsmTestToolDataMsg_request_id(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmTestToolDataMsg msg_;
};

class Init_FsmTestToolDataMsg_header
{
public:
  Init_FsmTestToolDataMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsmTestToolDataMsg_cmd header(::deva_function_msgs::msg::FsmTestToolDataMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FsmTestToolDataMsg_cmd(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmTestToolDataMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FsmTestToolDataMsg>()
{
  return deva_function_msgs::msg::builder::Init_FsmTestToolDataMsg_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_TEST_TOOL_DATA_MSG__BUILDER_HPP_
