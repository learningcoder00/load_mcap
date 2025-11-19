// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProPathMerge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_MERGE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_MERGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_merge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProPathMerge_is_master
{
public:
  explicit Init_SdProPathMerge_is_master(::deva_gaode_routing_msgs::msg::SdProPathMerge & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProPathMerge is_master(::deva_gaode_routing_msgs::msg::SdProPathMerge::_is_master_type arg)
  {
    msg_.is_master = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPathMerge msg_;
};

class Init_SdProPathMerge_offset
{
public:
  explicit Init_SdProPathMerge_offset(::deva_gaode_routing_msgs::msg::SdProPathMerge & msg)
  : msg_(msg)
  {}
  Init_SdProPathMerge_is_master offset(::deva_gaode_routing_msgs::msg::SdProPathMerge::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_SdProPathMerge_is_master(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPathMerge msg_;
};

class Init_SdProPathMerge_path_id
{
public:
  Init_SdProPathMerge_path_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProPathMerge_offset path_id(::deva_gaode_routing_msgs::msg::SdProPathMerge::_path_id_type arg)
  {
    msg_.path_id = std::move(arg);
    return Init_SdProPathMerge_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPathMerge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProPathMerge>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProPathMerge_path_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_MERGE__BUILDER_HPP_
