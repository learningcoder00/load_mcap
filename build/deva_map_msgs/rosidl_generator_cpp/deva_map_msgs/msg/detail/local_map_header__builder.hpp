// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/LocalMapHeader.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/local_map_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalMapHeader_preseptionmap_header
{
public:
  explicit Init_LocalMapHeader_preseptionmap_header(::deva_map_msgs::msg::LocalMapHeader & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::LocalMapHeader preseptionmap_header(::deva_map_msgs::msg::LocalMapHeader::_preseptionmap_header_type arg)
  {
    msg_.preseptionmap_header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMapHeader msg_;
};

class Init_LocalMapHeader_received_preseptionmap_header
{
public:
  explicit Init_LocalMapHeader_received_preseptionmap_header(::deva_map_msgs::msg::LocalMapHeader & msg)
  : msg_(msg)
  {}
  Init_LocalMapHeader_preseptionmap_header received_preseptionmap_header(::deva_map_msgs::msg::LocalMapHeader::_received_preseptionmap_header_type arg)
  {
    msg_.received_preseptionmap_header = std::move(arg);
    return Init_LocalMapHeader_preseptionmap_header(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMapHeader msg_;
};

class Init_LocalMapHeader_send_localmap_header
{
public:
  Init_LocalMapHeader_send_localmap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalMapHeader_received_preseptionmap_header send_localmap_header(::deva_map_msgs::msg::LocalMapHeader::_send_localmap_header_type arg)
  {
    msg_.send_localmap_header = std::move(arg);
    return Init_LocalMapHeader_received_preseptionmap_header(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMapHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::LocalMapHeader>()
{
  return deva_map_msgs::msg::builder::Init_LocalMapHeader_send_localmap_header();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__BUILDER_HPP_
