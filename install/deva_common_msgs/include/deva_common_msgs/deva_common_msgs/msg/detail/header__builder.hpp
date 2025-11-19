// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Header_frame_id
{
public:
  explicit Init_Header_frame_id(::deva_common_msgs::msg::Header & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::Header frame_id(::deva_common_msgs::msg::Header::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::Header msg_;
};

class Init_Header_index
{
public:
  explicit Init_Header_index(::deva_common_msgs::msg::Header & msg)
  : msg_(msg)
  {}
  Init_Header_frame_id index(::deva_common_msgs::msg::Header::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_Header_frame_id(msg_);
  }

private:
  ::deva_common_msgs::msg::Header msg_;
};

class Init_Header_pub_stamp
{
public:
  explicit Init_Header_pub_stamp(::deva_common_msgs::msg::Header & msg)
  : msg_(msg)
  {}
  Init_Header_index pub_stamp(::deva_common_msgs::msg::Header::_pub_stamp_type arg)
  {
    msg_.pub_stamp = std::move(arg);
    return Init_Header_index(msg_);
  }

private:
  ::deva_common_msgs::msg::Header msg_;
};

class Init_Header_stamp
{
public:
  Init_Header_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Header_pub_stamp stamp(::deva_common_msgs::msg::Header::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Header_pub_stamp(msg_);
  }

private:
  ::deva_common_msgs::msg::Header msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::Header>()
{
  return deva_common_msgs::msg::builder::Init_Header_stamp();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__BUILDER_HPP_
