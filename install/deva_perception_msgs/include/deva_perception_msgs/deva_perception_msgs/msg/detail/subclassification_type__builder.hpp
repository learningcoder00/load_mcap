// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/SubclassificationType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/subclassification_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_SubclassificationType_type
{
public:
  Init_SubclassificationType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_perception_msgs::msg::SubclassificationType type(::deva_perception_msgs::msg::SubclassificationType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::SubclassificationType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::SubclassificationType>()
{
  return deva_perception_msgs::msg::builder::Init_SubclassificationType_type();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__BUILDER_HPP_
