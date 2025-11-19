// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RouteGuideResponse.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteGuideResponse_route_guides
{
public:
  Init_RouteGuideResponse_route_guides()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_gaode_routing_msgs::msg::RouteGuideResponse route_guides(::deva_gaode_routing_msgs::msg::RouteGuideResponse::_route_guides_type arg)
  {
    msg_.route_guides = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RouteGuideResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RouteGuideResponse>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RouteGuideResponse_route_guides();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__BUILDER_HPP_
