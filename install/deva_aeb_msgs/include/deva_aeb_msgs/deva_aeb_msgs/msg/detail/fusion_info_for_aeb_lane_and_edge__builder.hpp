// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBLaneAndEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_lane_and_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_FusionInfoForAEBLaneAndEdge_fusionroadedge
{
public:
  explicit Init_FusionInfoForAEBLaneAndEdge_fusionroadedge(::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge fusionroadedge(::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge::_fusionroadedge_type arg)
  {
    msg_.fusionroadedge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge msg_;
};

class Init_FusionInfoForAEBLaneAndEdge_fusionlanemkrlist
{
public:
  explicit Init_FusionInfoForAEBLaneAndEdge_fusionlanemkrlist(::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBLaneAndEdge_fusionroadedge fusionlanemkrlist(::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge::_fusionlanemkrlist_type arg)
  {
    msg_.fusionlanemkrlist = std::move(arg);
    return Init_FusionInfoForAEBLaneAndEdge_fusionroadedge(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge msg_;
};

class Init_FusionInfoForAEBLaneAndEdge_header
{
public:
  Init_FusionInfoForAEBLaneAndEdge_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionInfoForAEBLaneAndEdge_fusionlanemkrlist header(::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FusionInfoForAEBLaneAndEdge_fusionlanemkrlist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge>()
{
  return deva_aeb_msgs::msg::builder::Init_FusionInfoForAEBLaneAndEdge_header();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__BUILDER_HPP_
