// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/Restriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/restriction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_Restriction_restriction_detail
{
public:
  explicit Init_Restriction_restriction_detail(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::Restriction restriction_detail(::deva_gaode_routing_msgs::msg::Restriction::_restriction_detail_type arg)
  {
    msg_.restriction_detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_toll_name
{
public:
  explicit Init_Restriction_toll_name(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_restriction_detail toll_name(::deva_gaode_routing_msgs::msg::Restriction::_toll_name_type arg)
  {
    msg_.toll_name = std::move(arg);
    return Init_Restriction_restriction_detail(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_toll_lane_type
{
public:
  explicit Init_Restriction_toll_lane_type(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_toll_name toll_lane_type(::deva_gaode_routing_msgs::msg::Restriction::_toll_lane_type_type arg)
  {
    msg_.toll_lane_type = std::move(arg);
    return Init_Restriction_toll_name(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_toll_mode
{
public:
  explicit Init_Restriction_toll_mode(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_toll_lane_type toll_mode(::deva_gaode_routing_msgs::msg::Restriction::_toll_mode_type arg)
  {
    msg_.toll_mode = std::move(arg);
    return Init_Restriction_toll_lane_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_slope
{
public:
  explicit Init_Restriction_slope(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_toll_mode slope(::deva_gaode_routing_msgs::msg::Restriction::_slope_type arg)
  {
    msg_.slope = std::move(arg);
    return Init_Restriction_toll_mode(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_passage
{
public:
  explicit Init_Restriction_passage(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_slope passage(::deva_gaode_routing_msgs::msg::Restriction::_passage_type arg)
  {
    msg_.passage = std::move(arg);
    return Init_Restriction_slope(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_out_road
{
public:
  explicit Init_Restriction_out_road(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_passage out_road(::deva_gaode_routing_msgs::msg::Restriction::_out_road_type arg)
  {
    msg_.out_road = std::move(arg);
    return Init_Restriction_passage(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_pass_list
{
public:
  explicit Init_Restriction_pass_list(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_out_road pass_list(::deva_gaode_routing_msgs::msg::Restriction::_pass_list_type arg)
  {
    msg_.pass_list = std::move(arg);
    return Init_Restriction_out_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_node_id
{
public:
  explicit Init_Restriction_node_id(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_pass_list node_id(::deva_gaode_routing_msgs::msg::Restriction::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_Restriction_pass_list(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_limit_type
{
public:
  explicit Init_Restriction_limit_type(::deva_gaode_routing_msgs::msg::Restriction & msg)
  : msg_(msg)
  {}
  Init_Restriction_node_id limit_type(::deva_gaode_routing_msgs::msg::Restriction::_limit_type_type arg)
  {
    msg_.limit_type = std::move(arg);
    return Init_Restriction_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

class Init_Restriction_id
{
public:
  Init_Restriction_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Restriction_limit_type id(::deva_gaode_routing_msgs::msg::Restriction::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Restriction_limit_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Restriction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::Restriction>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_Restriction_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__BUILDER_HPP_
