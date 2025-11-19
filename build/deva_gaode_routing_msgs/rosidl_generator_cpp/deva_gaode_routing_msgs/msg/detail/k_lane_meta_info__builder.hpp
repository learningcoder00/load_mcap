// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_KLaneMetaInfo_lane_topos
{
public:
  explicit Init_KLaneMetaInfo_lane_topos(::deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo lane_topos(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_lane_topos_type arg)
  {
    msg_.lane_topos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

class Init_KLaneMetaInfo_lane_infos
{
public:
  explicit Init_KLaneMetaInfo_lane_infos(::deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
  : msg_(msg)
  {}
  Init_KLaneMetaInfo_lane_topos lane_infos(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_lane_infos_type arg)
  {
    msg_.lane_infos = std::move(arg);
    return Init_KLaneMetaInfo_lane_topos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

class Init_KLaneMetaInfo_lane_num_right
{
public:
  explicit Init_KLaneMetaInfo_lane_num_right(::deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
  : msg_(msg)
  {}
  Init_KLaneMetaInfo_lane_infos lane_num_right(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_lane_num_right_type arg)
  {
    msg_.lane_num_right = std::move(arg);
    return Init_KLaneMetaInfo_lane_infos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

class Init_KLaneMetaInfo_lane_num_left
{
public:
  explicit Init_KLaneMetaInfo_lane_num_left(::deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
  : msg_(msg)
  {}
  Init_KLaneMetaInfo_lane_num_right lane_num_left(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_lane_num_left_type arg)
  {
    msg_.lane_num_left = std::move(arg);
    return Init_KLaneMetaInfo_lane_num_right(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

class Init_KLaneMetaInfo_lane_num
{
public:
  explicit Init_KLaneMetaInfo_lane_num(::deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
  : msg_(msg)
  {}
  Init_KLaneMetaInfo_lane_num_left lane_num(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_KLaneMetaInfo_lane_num_left(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

class Init_KLaneMetaInfo_pass_link_id_s
{
public:
  explicit Init_KLaneMetaInfo_pass_link_id_s(::deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
  : msg_(msg)
  {}
  Init_KLaneMetaInfo_lane_num pass_link_id_s(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_pass_link_id_s_type arg)
  {
    msg_.pass_link_id_s = std::move(arg);
    return Init_KLaneMetaInfo_lane_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

class Init_KLaneMetaInfo_node_id
{
public:
  explicit Init_KLaneMetaInfo_node_id(::deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
  : msg_(msg)
  {}
  Init_KLaneMetaInfo_pass_link_id_s node_id(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_KLaneMetaInfo_pass_link_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

class Init_KLaneMetaInfo_in_link_id
{
public:
  Init_KLaneMetaInfo_in_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KLaneMetaInfo_node_id in_link_id(::deva_gaode_routing_msgs::msg::KLaneMetaInfo::_in_link_id_type arg)
  {
    msg_.in_link_id = std::move(arg);
    return Init_KLaneMetaInfo_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KLaneMetaInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::KLaneMetaInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_KLaneMetaInfo_in_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__BUILDER_HPP_
