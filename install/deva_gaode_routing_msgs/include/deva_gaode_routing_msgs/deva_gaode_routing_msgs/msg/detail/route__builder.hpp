// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_rg_tips_result
{
public:
  explicit Init_Route_rg_tips_result(::deva_gaode_routing_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::Route rg_tips_result(::deva_gaode_routing_msgs::msg::Route::_rg_tips_result_type arg)
  {
    msg_.rg_tips_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Route msg_;
};

class Init_Route_rg_red_light_result
{
public:
  explicit Init_Route_rg_red_light_result(::deva_gaode_routing_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_rg_tips_result rg_red_light_result(::deva_gaode_routing_msgs::msg::Route::_rg_red_light_result_type arg)
  {
    msg_.rg_red_light_result = std::move(arg);
    return Init_Route_rg_tips_result(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Route msg_;
};

class Init_Route_rg_lane_info_result
{
public:
  explicit Init_Route_rg_lane_info_result(::deva_gaode_routing_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_rg_red_light_result rg_lane_info_result(::deva_gaode_routing_msgs::msg::Route::_rg_lane_info_result_type arg)
  {
    msg_.rg_lane_info_result = std::move(arg);
    return Init_Route_rg_red_light_result(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Route msg_;
};

class Init_Route_rg_intersection_result
{
public:
  explicit Init_Route_rg_intersection_result(::deva_gaode_routing_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_rg_lane_info_result rg_intersection_result(::deva_gaode_routing_msgs::msg::Route::_rg_intersection_result_type arg)
  {
    msg_.rg_intersection_result = std::move(arg);
    return Init_Route_rg_lane_info_result(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Route msg_;
};

class Init_Route_route_points
{
public:
  Init_Route_route_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_rg_intersection_result route_points(::deva_gaode_routing_msgs::msg::Route::_route_points_type arg)
  {
    msg_.route_points = std::move(arg);
    return Init_Route_rg_intersection_result(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::Route>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_Route_route_points();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
