// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/virtual_line_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualLineInfo_exit_seq_id
{
public:
  explicit Init_VirtualLineInfo_exit_seq_id(::environment_model_msgs::msg::VirtualLineInfo & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::VirtualLineInfo exit_seq_id(::environment_model_msgs::msg::VirtualLineInfo::_exit_seq_id_type arg)
  {
    msg_.exit_seq_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::VirtualLineInfo msg_;
};

class Init_VirtualLineInfo_exit_lane_id
{
public:
  explicit Init_VirtualLineInfo_exit_lane_id(::environment_model_msgs::msg::VirtualLineInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualLineInfo_exit_seq_id exit_lane_id(::environment_model_msgs::msg::VirtualLineInfo::_exit_lane_id_type arg)
  {
    msg_.exit_lane_id = std::move(arg);
    return Init_VirtualLineInfo_exit_seq_id(msg_);
  }

private:
  ::environment_model_msgs::msg::VirtualLineInfo msg_;
};

class Init_VirtualLineInfo_e2e_pair
{
public:
  explicit Init_VirtualLineInfo_e2e_pair(::environment_model_msgs::msg::VirtualLineInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualLineInfo_exit_lane_id e2e_pair(::environment_model_msgs::msg::VirtualLineInfo::_e2e_pair_type arg)
  {
    msg_.e2e_pair = std::move(arg);
    return Init_VirtualLineInfo_exit_lane_id(msg_);
  }

private:
  ::environment_model_msgs::msg::VirtualLineInfo msg_;
};

class Init_VirtualLineInfo_ori_ids
{
public:
  explicit Init_VirtualLineInfo_ori_ids(::environment_model_msgs::msg::VirtualLineInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualLineInfo_e2e_pair ori_ids(::environment_model_msgs::msg::VirtualLineInfo::_ori_ids_type arg)
  {
    msg_.ori_ids = std::move(arg);
    return Init_VirtualLineInfo_e2e_pair(msg_);
  }

private:
  ::environment_model_msgs::msg::VirtualLineInfo msg_;
};

class Init_VirtualLineInfo_virtual_score
{
public:
  explicit Init_VirtualLineInfo_virtual_score(::environment_model_msgs::msg::VirtualLineInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualLineInfo_ori_ids virtual_score(::environment_model_msgs::msg::VirtualLineInfo::_virtual_score_type arg)
  {
    msg_.virtual_score = std::move(arg);
    return Init_VirtualLineInfo_ori_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::VirtualLineInfo msg_;
};

class Init_VirtualLineInfo_enum_vlane_type
{
public:
  Init_VirtualLineInfo_enum_vlane_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualLineInfo_virtual_score enum_vlane_type(::environment_model_msgs::msg::VirtualLineInfo::_enum_vlane_type_type arg)
  {
    msg_.enum_vlane_type = std::move(arg);
    return Init_VirtualLineInfo_virtual_score(msg_);
  }

private:
  ::environment_model_msgs::msg::VirtualLineInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::VirtualLineInfo>()
{
  return environment_model_msgs::msg::builder::Init_VirtualLineInfo_enum_vlane_type();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__BUILDER_HPP_
