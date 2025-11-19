// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LinkIDType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkIDType_raw_id
{
public:
  explicit Init_LinkIDType_raw_id(::deva_gaode_routing_msgs::msg::LinkIDType & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LinkIDType raw_id(::deva_gaode_routing_msgs::msg::LinkIDType::_raw_id_type arg)
  {
    msg_.raw_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkIDType msg_;
};

class Init_LinkIDType_link_id
{
public:
  explicit Init_LinkIDType_link_id(::deva_gaode_routing_msgs::msg::LinkIDType & msg)
  : msg_(msg)
  {}
  Init_LinkIDType_raw_id link_id(::deva_gaode_routing_msgs::msg::LinkIDType::_link_id_type arg)
  {
    msg_.link_id = std::move(arg);
    return Init_LinkIDType_raw_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkIDType msg_;
};

class Init_LinkIDType_tile_id
{
public:
  Init_LinkIDType_tile_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkIDType_link_id tile_id(::deva_gaode_routing_msgs::msg::LinkIDType::_tile_id_type arg)
  {
    msg_.tile_id = std::move(arg);
    return Init_LinkIDType_link_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkIDType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LinkIDType>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LinkIDType_tile_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__BUILDER_HPP_
