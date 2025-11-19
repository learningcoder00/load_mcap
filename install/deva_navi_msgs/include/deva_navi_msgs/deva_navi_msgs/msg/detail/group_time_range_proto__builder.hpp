// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/GroupTimeRangeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/group_time_range_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_GroupTimeRangeProto_end_time
{
public:
  explicit Init_GroupTimeRangeProto_end_time(::deva_navi_msgs::msg::GroupTimeRangeProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::GroupTimeRangeProto end_time(::deva_navi_msgs::msg::GroupTimeRangeProto::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupTimeRangeProto msg_;
};

class Init_GroupTimeRangeProto_start_time
{
public:
  Init_GroupTimeRangeProto_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupTimeRangeProto_end_time start_time(::deva_navi_msgs::msg::GroupTimeRangeProto::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_GroupTimeRangeProto_end_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupTimeRangeProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::GroupTimeRangeProto>()
{
  return deva_navi_msgs::msg::builder::Init_GroupTimeRangeProto_start_time();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__BUILDER_HPP_
