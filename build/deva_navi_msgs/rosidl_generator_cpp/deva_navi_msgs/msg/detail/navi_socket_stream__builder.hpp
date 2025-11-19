// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/NaviSocketStream.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SOCKET_STREAM__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SOCKET_STREAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/navi_socket_stream__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_NaviSocketStream_payload
{
public:
  explicit Init_NaviSocketStream_payload(::deva_navi_msgs::msg::NaviSocketStream & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::NaviSocketStream payload(::deva_navi_msgs::msg::NaviSocketStream::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSocketStream msg_;
};

class Init_NaviSocketStream_topic
{
public:
  explicit Init_NaviSocketStream_topic(::deva_navi_msgs::msg::NaviSocketStream & msg)
  : msg_(msg)
  {}
  Init_NaviSocketStream_payload topic(::deva_navi_msgs::msg::NaviSocketStream::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_NaviSocketStream_payload(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSocketStream msg_;
};

class Init_NaviSocketStream_timestamp
{
public:
  explicit Init_NaviSocketStream_timestamp(::deva_navi_msgs::msg::NaviSocketStream & msg)
  : msg_(msg)
  {}
  Init_NaviSocketStream_topic timestamp(::deva_navi_msgs::msg::NaviSocketStream::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NaviSocketStream_topic(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSocketStream msg_;
};

class Init_NaviSocketStream_id
{
public:
  Init_NaviSocketStream_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NaviSocketStream_timestamp id(::deva_navi_msgs::msg::NaviSocketStream::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NaviSocketStream_timestamp(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSocketStream msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::NaviSocketStream>()
{
  return deva_navi_msgs::msg::builder::Init_NaviSocketStream_id();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SOCKET_STREAM__BUILDER_HPP_
