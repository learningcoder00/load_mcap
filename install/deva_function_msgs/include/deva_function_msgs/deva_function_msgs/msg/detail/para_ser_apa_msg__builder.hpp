// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/ParaSerApaMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/para_ser_apa_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_ParaSerApaMsg_summon_switch_setting_result
{
public:
  explicit Init_ParaSerApaMsg_summon_switch_setting_result(::deva_function_msgs::msg::ParaSerApaMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::ParaSerApaMsg summon_switch_setting_result(::deva_function_msgs::msg::ParaSerApaMsg::_summon_switch_setting_result_type arg)
  {
    msg_.summon_switch_setting_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::ParaSerApaMsg msg_;
};

class Init_ParaSerApaMsg_rpa_switch_setting_result
{
public:
  explicit Init_ParaSerApaMsg_rpa_switch_setting_result(::deva_function_msgs::msg::ParaSerApaMsg & msg)
  : msg_(msg)
  {}
  Init_ParaSerApaMsg_summon_switch_setting_result rpa_switch_setting_result(::deva_function_msgs::msg::ParaSerApaMsg::_rpa_switch_setting_result_type arg)
  {
    msg_.rpa_switch_setting_result = std::move(arg);
    return Init_ParaSerApaMsg_summon_switch_setting_result(msg_);
  }

private:
  ::deva_function_msgs::msg::ParaSerApaMsg msg_;
};

class Init_ParaSerApaMsg_apa_switch_setting_result
{
public:
  explicit Init_ParaSerApaMsg_apa_switch_setting_result(::deva_function_msgs::msg::ParaSerApaMsg & msg)
  : msg_(msg)
  {}
  Init_ParaSerApaMsg_rpa_switch_setting_result apa_switch_setting_result(::deva_function_msgs::msg::ParaSerApaMsg::_apa_switch_setting_result_type arg)
  {
    msg_.apa_switch_setting_result = std::move(arg);
    return Init_ParaSerApaMsg_rpa_switch_setting_result(msg_);
  }

private:
  ::deva_function_msgs::msg::ParaSerApaMsg msg_;
};

class Init_ParaSerApaMsg_publish_timestamp
{
public:
  Init_ParaSerApaMsg_publish_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParaSerApaMsg_apa_switch_setting_result publish_timestamp(::deva_function_msgs::msg::ParaSerApaMsg::_publish_timestamp_type arg)
  {
    msg_.publish_timestamp = std::move(arg);
    return Init_ParaSerApaMsg_apa_switch_setting_result(msg_);
  }

private:
  ::deva_function_msgs::msg::ParaSerApaMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::ParaSerApaMsg>()
{
  return deva_function_msgs::msg::builder::Init_ParaSerApaMsg_publish_timestamp();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__BUILDER_HPP_
