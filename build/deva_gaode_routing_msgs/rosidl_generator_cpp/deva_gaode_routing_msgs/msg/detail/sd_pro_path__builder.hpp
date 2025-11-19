// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProPath.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProPath_offset
{
public:
  explicit Init_SdProPath_offset(::deva_gaode_routing_msgs::msg::SdProPath & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProPath offset(::deva_gaode_routing_msgs::msg::SdProPath::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPath msg_;
};

class Init_SdProPath_parent_id
{
public:
  explicit Init_SdProPath_parent_id(::deva_gaode_routing_msgs::msg::SdProPath & msg)
  : msg_(msg)
  {}
  Init_SdProPath_offset parent_id(::deva_gaode_routing_msgs::msg::SdProPath::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_SdProPath_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPath msg_;
};

class Init_SdProPath_path_id
{
public:
  Init_SdProPath_path_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProPath_parent_id path_id(::deva_gaode_routing_msgs::msg::SdProPath::_path_id_type arg)
  {
    msg_.path_id = std::move(arg);
    return Init_SdProPath_parent_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProPath>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProPath_path_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH__BUILDER_HPP_
