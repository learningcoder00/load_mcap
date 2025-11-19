// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ExtraInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EXTRA_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EXTRA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ExtraInfo_value
{
public:
  explicit Init_ExtraInfo_value(::deva_perception_msgs::msg::ExtraInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ExtraInfo value(::deva_perception_msgs::msg::ExtraInfo::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ExtraInfo msg_;
};

class Init_ExtraInfo_key
{
public:
  Init_ExtraInfo_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExtraInfo_value key(::deva_perception_msgs::msg::ExtraInfo::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_ExtraInfo_value(msg_);
  }

private:
  ::deva_perception_msgs::msg::ExtraInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ExtraInfo>()
{
  return deva_perception_msgs::msg::builder::Init_ExtraInfo_key();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EXTRA_INFO__BUILDER_HPP_
