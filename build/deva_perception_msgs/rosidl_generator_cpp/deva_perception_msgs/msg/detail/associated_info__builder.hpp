// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/AssociatedInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/associated_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_AssociatedInfo_associated_id
{
public:
  explicit Init_AssociatedInfo_associated_id(::deva_perception_msgs::msg::AssociatedInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::AssociatedInfo associated_id(::deva_perception_msgs::msg::AssociatedInfo::_associated_id_type arg)
  {
    msg_.associated_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::AssociatedInfo msg_;
};

class Init_AssociatedInfo_associated_type
{
public:
  Init_AssociatedInfo_associated_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssociatedInfo_associated_id associated_type(::deva_perception_msgs::msg::AssociatedInfo::_associated_type_type arg)
  {
    msg_.associated_type = std::move(arg);
    return Init_AssociatedInfo_associated_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::AssociatedInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::AssociatedInfo>()
{
  return deva_perception_msgs::msg::builder::Init_AssociatedInfo_associated_type();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__BUILDER_HPP_
