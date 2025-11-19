// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/DictInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DICT_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DICT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/dict_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DictInfo_value
{
public:
  explicit Init_DictInfo_value(::deva_perception_msgs::msg::DictInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::DictInfo value(::deva_perception_msgs::msg::DictInfo::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::DictInfo msg_;
};

class Init_DictInfo_key
{
public:
  Init_DictInfo_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DictInfo_value key(::deva_perception_msgs::msg::DictInfo::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_DictInfo_value(msg_);
  }

private:
  ::deva_perception_msgs::msg::DictInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::DictInfo>()
{
  return deva_perception_msgs::msg::builder::Init_DictInfo_key();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DICT_INFO__BUILDER_HPP_
