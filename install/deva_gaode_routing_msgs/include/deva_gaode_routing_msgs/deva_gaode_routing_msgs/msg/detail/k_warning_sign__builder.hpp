// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/KWarningSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_KWarningSign_coordinate
{
public:
  explicit Init_KWarningSign_coordinate(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::KWarningSign coordinate(::deva_gaode_routing_msgs::msg::KWarningSign::_coordinate_type arg)
  {
    msg_.coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_descript
{
public:
  explicit Init_KWarningSign_descript(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  Init_KWarningSign_coordinate descript(::deva_gaode_routing_msgs::msg::KWarningSign::_descript_type arg)
  {
    msg_.descript = std::move(arg);
    return Init_KWarningSign_coordinate(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_link_direction
{
public:
  explicit Init_KWarningSign_link_direction(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  Init_KWarningSign_descript link_direction(::deva_gaode_routing_msgs::msg::KWarningSign::_link_direction_type arg)
  {
    msg_.link_direction = std::move(arg);
    return Init_KWarningSign_descript(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_control_dist
{
public:
  explicit Init_KWarningSign_control_dist(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  Init_KWarningSign_link_direction control_dist(::deva_gaode_routing_msgs::msg::KWarningSign::_control_dist_type arg)
  {
    msg_.control_dist = std::move(arg);
    return Init_KWarningSign_link_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_forcetold_dist
{
public:
  explicit Init_KWarningSign_forcetold_dist(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  Init_KWarningSign_control_dist forcetold_dist(::deva_gaode_routing_msgs::msg::KWarningSign::_forcetold_dist_type arg)
  {
    msg_.forcetold_dist = std::move(arg);
    return Init_KWarningSign_control_dist(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_trc_kind
{
public:
  explicit Init_KWarningSign_trc_kind(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  Init_KWarningSign_forcetold_dist trc_kind(::deva_gaode_routing_msgs::msg::KWarningSign::_trc_kind_type arg)
  {
    msg_.trc_kind = std::move(arg);
    return Init_KWarningSign_forcetold_dist(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_pass_link_id_s
{
public:
  explicit Init_KWarningSign_pass_link_id_s(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  Init_KWarningSign_trc_kind pass_link_id_s(::deva_gaode_routing_msgs::msg::KWarningSign::_pass_link_id_s_type arg)
  {
    msg_.pass_link_id_s = std::move(arg);
    return Init_KWarningSign_trc_kind(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_node_id
{
public:
  explicit Init_KWarningSign_node_id(::deva_gaode_routing_msgs::msg::KWarningSign & msg)
  : msg_(msg)
  {}
  Init_KWarningSign_pass_link_id_s node_id(::deva_gaode_routing_msgs::msg::KWarningSign::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_KWarningSign_pass_link_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

class Init_KWarningSign_in_link_id
{
public:
  Init_KWarningSign_in_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KWarningSign_node_id in_link_id(::deva_gaode_routing_msgs::msg::KWarningSign::_in_link_id_type arg)
  {
    msg_.in_link_id = std::move(arg);
    return Init_KWarningSign_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::KWarningSign msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::KWarningSign>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_KWarningSign_in_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__BUILDER_HPP_
