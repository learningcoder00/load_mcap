// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProLink_road
{
public:
  explicit Init_SdProLink_road(::deva_gaode_routing_msgs::msg::SdProLink & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProLink road(::deva_gaode_routing_msgs::msg::SdProLink::_road_type arg)
  {
    msg_.road = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLink msg_;
};

class Init_SdProLink_offset
{
public:
  explicit Init_SdProLink_offset(::deva_gaode_routing_msgs::msg::SdProLink & msg)
  : msg_(msg)
  {}
  Init_SdProLink_road offset(::deva_gaode_routing_msgs::msg::SdProLink::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_SdProLink_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLink msg_;
};

class Init_SdProLink_path_id
{
public:
  Init_SdProLink_path_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProLink_offset path_id(::deva_gaode_routing_msgs::msg::SdProLink::_path_id_type arg)
  {
    msg_.path_id = std::move(arg);
    return Init_SdProLink_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProLink>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProLink_path_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LINK__BUILDER_HPP_
