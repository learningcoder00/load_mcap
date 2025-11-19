// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebLane_callback_point
{
public:
  explicit Init_WebLane_callback_point(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebLane callback_point(::deva_gaode_routing_msgs::msg::WebLane::_callback_point_type arg)
  {
    msg_.callback_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_md5
{
public:
  explicit Init_WebLane_md5(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_callback_point md5(::deva_gaode_routing_msgs::msg::WebLane::_md5_type arg)
  {
    msg_.md5 = std::move(arg);
    return Init_WebLane_callback_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_step_idx
{
public:
  explicit Init_WebLane_step_idx(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_md5 step_idx(::deva_gaode_routing_msgs::msg::WebLane::_step_idx_type arg)
  {
    msg_.step_idx = std::move(arg);
    return Init_WebLane_md5(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_road_idx
{
public:
  explicit Init_WebLane_road_idx(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_step_idx road_idx(::deva_gaode_routing_msgs::msg::WebLane::_road_idx_type arg)
  {
    msg_.road_idx = std::move(arg);
    return Init_WebLane_step_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_navi_turn_type
{
public:
  explicit Init_WebLane_navi_turn_type(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_road_idx navi_turn_type(::deva_gaode_routing_msgs::msg::WebLane::_navi_turn_type_type arg)
  {
    msg_.navi_turn_type = std::move(arg);
    return Init_WebLane_road_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_actual_turn_type
{
public:
  explicit Init_WebLane_actual_turn_type(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_navi_turn_type actual_turn_type(::deva_gaode_routing_msgs::msg::WebLane::_actual_turn_type_type arg)
  {
    msg_.actual_turn_type = std::move(arg);
    return Init_WebLane_navi_turn_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_exten_turn
{
public:
  explicit Init_WebLane_exten_turn(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_actual_turn_type exten_turn(::deva_gaode_routing_msgs::msg::WebLane::_exten_turn_type arg)
  {
    msg_.exten_turn = std::move(arg);
    return Init_WebLane_actual_turn_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_actual_exten_turn
{
public:
  explicit Init_WebLane_actual_exten_turn(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_exten_turn actual_exten_turn(::deva_gaode_routing_msgs::msg::WebLane::_actual_exten_turn_type arg)
  {
    msg_.actual_exten_turn = std::move(arg);
    return Init_WebLane_exten_turn(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_optimal_turn
{
public:
  explicit Init_WebLane_optimal_turn(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_actual_exten_turn optimal_turn(::deva_gaode_routing_msgs::msg::WebLane::_optimal_turn_type arg)
  {
    msg_.optimal_turn = std::move(arg);
    return Init_WebLane_actual_exten_turn(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_navi_turn
{
public:
  explicit Init_WebLane_navi_turn(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_optimal_turn navi_turn(::deva_gaode_routing_msgs::msg::WebLane::_navi_turn_type arg)
  {
    msg_.navi_turn = std::move(arg);
    return Init_WebLane_optimal_turn(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_actual_turn
{
public:
  explicit Init_WebLane_actual_turn(::deva_gaode_routing_msgs::msg::WebLane & msg)
  : msg_(msg)
  {}
  Init_WebLane_navi_turn actual_turn(::deva_gaode_routing_msgs::msg::WebLane::_actual_turn_type arg)
  {
    msg_.actual_turn = std::move(arg);
    return Init_WebLane_navi_turn(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

class Init_WebLane_lane_num
{
public:
  Init_WebLane_lane_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebLane_actual_turn lane_num(::deva_gaode_routing_msgs::msg::WebLane::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_WebLane_actual_turn(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebLane>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebLane_lane_num();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__BUILDER_HPP_
