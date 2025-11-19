// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ConeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/cone_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeArray_translation
{
public:
  explicit Init_ConeArray_translation(::deva_perception_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ConeArray translation(::deva_perception_msgs::msg::ConeArray::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_orientation
{
public:
  explicit Init_ConeArray_orientation(::deva_perception_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  Init_ConeArray_translation orientation(::deva_perception_msgs::msg::ConeArray::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_ConeArray_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_cone_array
{
public:
  explicit Init_ConeArray_cone_array(::deva_perception_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  Init_ConeArray_orientation cone_array(::deva_perception_msgs::msg::ConeArray::_cone_array_type arg)
  {
    msg_.cone_array = std::move(arg);
    return Init_ConeArray_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_header
{
public:
  Init_ConeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeArray_cone_array header(::deva_perception_msgs::msg::ConeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConeArray_cone_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::ConeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ConeArray>()
{
  return deva_perception_msgs::msg::builder::Init_ConeArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_
