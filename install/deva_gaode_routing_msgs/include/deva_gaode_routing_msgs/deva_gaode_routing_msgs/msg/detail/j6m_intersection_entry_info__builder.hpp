// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersectionEntryInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_J6mIntersectionEntryInfo_position
{
public:
  explicit Init_J6mIntersectionEntryInfo_position(::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo position(::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo msg_;
};

class Init_J6mIntersectionEntryInfo_offset
{
public:
  explicit Init_J6mIntersectionEntryInfo_offset(::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo & msg)
  : msg_(msg)
  {}
  Init_J6mIntersectionEntryInfo_position offset(::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_J6mIntersectionEntryInfo_position(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo msg_;
};

class Init_J6mIntersectionEntryInfo_crowd_sourcing_link_id
{
public:
  Init_J6mIntersectionEntryInfo_crowd_sourcing_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J6mIntersectionEntryInfo_offset crowd_sourcing_link_id(::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo::_crowd_sourcing_link_id_type arg)
  {
    msg_.crowd_sourcing_link_id = std::move(arg);
    return Init_J6mIntersectionEntryInfo_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_J6mIntersectionEntryInfo_crowd_sourcing_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__BUILDER_HPP_
