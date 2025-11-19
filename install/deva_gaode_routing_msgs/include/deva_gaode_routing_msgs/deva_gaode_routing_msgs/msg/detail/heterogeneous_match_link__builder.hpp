// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/HeterogeneousMatchLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HETEROGENEOUS_MATCH_LINK__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HETEROGENEOUS_MATCH_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_HeterogeneousMatchLink_links
{
public:
  Init_HeterogeneousMatchLink_links()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_gaode_routing_msgs::msg::HeterogeneousMatchLink links(::deva_gaode_routing_msgs::msg::HeterogeneousMatchLink::_links_type arg)
  {
    msg_.links = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::HeterogeneousMatchLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::HeterogeneousMatchLink>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_HeterogeneousMatchLink_links();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HETEROGENEOUS_MATCH_LINK__BUILDER_HPP_
