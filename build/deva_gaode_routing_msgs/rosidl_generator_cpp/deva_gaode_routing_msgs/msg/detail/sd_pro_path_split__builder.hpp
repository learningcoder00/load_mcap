// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProPathSplit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProPathSplit_split_list
{
public:
  explicit Init_SdProPathSplit_split_list(::deva_gaode_routing_msgs::msg::SdProPathSplit & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProPathSplit split_list(::deva_gaode_routing_msgs::msg::SdProPathSplit::_split_list_type arg)
  {
    msg_.split_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPathSplit msg_;
};

class Init_SdProPathSplit_offset
{
public:
  explicit Init_SdProPathSplit_offset(::deva_gaode_routing_msgs::msg::SdProPathSplit & msg)
  : msg_(msg)
  {}
  Init_SdProPathSplit_split_list offset(::deva_gaode_routing_msgs::msg::SdProPathSplit::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_SdProPathSplit_split_list(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPathSplit msg_;
};

class Init_SdProPathSplit_split_node_id
{
public:
  explicit Init_SdProPathSplit_split_node_id(::deva_gaode_routing_msgs::msg::SdProPathSplit & msg)
  : msg_(msg)
  {}
  Init_SdProPathSplit_offset split_node_id(::deva_gaode_routing_msgs::msg::SdProPathSplit::_split_node_id_type arg)
  {
    msg_.split_node_id = std::move(arg);
    return Init_SdProPathSplit_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPathSplit msg_;
};

class Init_SdProPathSplit_path_id
{
public:
  Init_SdProPathSplit_path_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProPathSplit_split_node_id path_id(::deva_gaode_routing_msgs::msg::SdProPathSplit::_path_id_type arg)
  {
    msg_.path_id = std::move(arg);
    return Init_SdProPathSplit_split_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProPathSplit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProPathSplit>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProPathSplit_path_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__BUILDER_HPP_
