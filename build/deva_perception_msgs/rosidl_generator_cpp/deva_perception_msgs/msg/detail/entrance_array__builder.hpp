// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/EntranceArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/entrance_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_EntranceArray_entrance_array
{
public:
  explicit Init_EntranceArray_entrance_array(::deva_perception_msgs::msg::EntranceArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::EntranceArray entrance_array(::deva_perception_msgs::msg::EntranceArray::_entrance_array_type arg)
  {
    msg_.entrance_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::EntranceArray msg_;
};

class Init_EntranceArray_header
{
public:
  Init_EntranceArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EntranceArray_entrance_array header(::deva_perception_msgs::msg::EntranceArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EntranceArray_entrance_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::EntranceArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::EntranceArray>()
{
  return deva_perception_msgs::msg::builder::Init_EntranceArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ENTRANCE_ARRAY__BUILDER_HPP_
