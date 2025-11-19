// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/ehp_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_EhpPosition_posn_rehead
{
public:
  explicit Init_EhpPosition_posn_rehead(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::EhpPosition posn_rehead(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_rehead_type arg)
  {
    msg_.posn_rehead = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_pos_confdc
{
public:
  explicit Init_EhpPosition_posn_pos_confdc(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_rehead posn_pos_confdc(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_pos_confdc_type arg)
  {
    msg_.posn_pos_confdc = std::move(arg);
    return Init_EhpPosition_posn_rehead(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_cur_lane
{
public:
  explicit Init_EhpPosition_posn_cur_lane(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_pos_confdc posn_cur_lane(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_cur_lane_type arg)
  {
    msg_.posn_cur_lane = std::move(arg);
    return Init_EhpPosition_posn_pos_confdc(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_spd
{
public:
  explicit Init_EhpPosition_posn_spd(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_cur_lane posn_spd(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_spd_type arg)
  {
    msg_.posn_spd = std::move(arg);
    return Init_EhpPosition_posn_cur_lane(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_idx
{
public:
  explicit Init_EhpPosition_posn_idx(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_spd posn_idx(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_idx_type arg)
  {
    msg_.posn_idx = std::move(arg);
    return Init_EhpPosition_posn_spd(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_pos_probb
{
public:
  explicit Init_EhpPosition_posn_pos_probb(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_idx posn_pos_probb(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_pos_probb_type arg)
  {
    msg_.posn_pos_probb = std::move(arg);
    return Init_EhpPosition_posn_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_age
{
public:
  explicit Init_EhpPosition_posn_age(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_pos_probb posn_age(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_age_type arg)
  {
    msg_.posn_age = std::move(arg);
    return Init_EhpPosition_posn_pos_probb(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_cyc_cnt
{
public:
  explicit Init_EhpPosition_posn_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_age posn_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_cyc_cnt_type arg)
  {
    msg_.posn_cyc_cnt = std::move(arg);
    return Init_EhpPosition_posn_age(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_path_idx
{
public:
  explicit Init_EhpPosition_posn_path_idx(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_cyc_cnt posn_path_idx(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_path_idx_type arg)
  {
    msg_.posn_path_idx = std::move(arg);
    return Init_EhpPosition_posn_cyc_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_msg_type
{
public:
  explicit Init_EhpPosition_posn_msg_type(::deva_gaode_routing_msgs::msg::EhpPosition & msg)
  : msg_(msg)
  {}
  Init_EhpPosition_posn_path_idx posn_msg_type(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_msg_type_type arg)
  {
    msg_.posn_msg_type = std::move(arg);
    return Init_EhpPosition_posn_path_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

class Init_EhpPosition_posn_offset
{
public:
  Init_EhpPosition_posn_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EhpPosition_posn_msg_type posn_offset(::deva_gaode_routing_msgs::msg::EhpPosition::_posn_offset_type arg)
  {
    msg_.posn_offset = std::move(arg);
    return Init_EhpPosition_posn_msg_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::EhpPosition>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_EhpPosition_posn_offset();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__BUILDER_HPP_
