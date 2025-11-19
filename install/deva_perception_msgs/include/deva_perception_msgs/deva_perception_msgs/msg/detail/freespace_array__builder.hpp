// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/FreespaceArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/freespace_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_FreespaceArray_freespace_array
{
public:
  explicit Init_FreespaceArray_freespace_array(::deva_perception_msgs::msg::FreespaceArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::FreespaceArray freespace_array(::deva_perception_msgs::msg::FreespaceArray::_freespace_array_type arg)
  {
    msg_.freespace_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespaceArray msg_;
};

class Init_FreespaceArray_header
{
public:
  Init_FreespaceArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FreespaceArray_freespace_array header(::deva_perception_msgs::msg::FreespaceArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FreespaceArray_freespace_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespaceArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::FreespaceArray>()
{
  return deva_perception_msgs::msg::builder::Init_FreespaceArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__BUILDER_HPP_
