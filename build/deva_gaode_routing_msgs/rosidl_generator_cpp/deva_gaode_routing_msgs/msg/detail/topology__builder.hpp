// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/Topology.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/topology__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_Topology_previous_within_intersection
{
public:
  explicit Init_Topology_previous_within_intersection(::deva_gaode_routing_msgs::msg::Topology & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::Topology previous_within_intersection(::deva_gaode_routing_msgs::msg::Topology::_previous_within_intersection_type arg)
  {
    msg_.previous_within_intersection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Topology msg_;
};

class Init_Topology_next_within_intersection
{
public:
  explicit Init_Topology_next_within_intersection(::deva_gaode_routing_msgs::msg::Topology & msg)
  : msg_(msg)
  {}
  Init_Topology_previous_within_intersection next_within_intersection(::deva_gaode_routing_msgs::msg::Topology::_next_within_intersection_type arg)
  {
    msg_.next_within_intersection = std::move(arg);
    return Init_Topology_previous_within_intersection(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Topology msg_;
};

class Init_Topology_previous_id_s
{
public:
  explicit Init_Topology_previous_id_s(::deva_gaode_routing_msgs::msg::Topology & msg)
  : msg_(msg)
  {}
  Init_Topology_next_within_intersection previous_id_s(::deva_gaode_routing_msgs::msg::Topology::_previous_id_s_type arg)
  {
    msg_.previous_id_s = std::move(arg);
    return Init_Topology_next_within_intersection(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Topology msg_;
};

class Init_Topology_next_id_s
{
public:
  Init_Topology_next_id_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Topology_previous_id_s next_id_s(::deva_gaode_routing_msgs::msg::Topology::_next_id_s_type arg)
  {
    msg_.next_id_s = std::move(arg);
    return Init_Topology_previous_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Topology msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::Topology>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_Topology_next_id_s();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__BUILDER_HPP_
