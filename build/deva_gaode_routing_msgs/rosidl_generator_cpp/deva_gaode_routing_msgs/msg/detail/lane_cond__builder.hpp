// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneCond.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/lane_cond__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneCond_special_times
{
public:
  explicit Init_LaneCond_special_times(::deva_gaode_routing_msgs::msg::LaneCond & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LaneCond special_times(::deva_gaode_routing_msgs::msg::LaneCond::_special_times_type arg)
  {
    msg_.special_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneCond msg_;
};

class Init_LaneCond_vehicles
{
public:
  explicit Init_LaneCond_vehicles(::deva_gaode_routing_msgs::msg::LaneCond & msg)
  : msg_(msg)
  {}
  Init_LaneCond_special_times vehicles(::deva_gaode_routing_msgs::msg::LaneCond::_vehicles_type arg)
  {
    msg_.vehicles = std::move(arg);
    return Init_LaneCond_special_times(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneCond msg_;
};

class Init_LaneCond_date
{
public:
  explicit Init_LaneCond_date(::deva_gaode_routing_msgs::msg::LaneCond & msg)
  : msg_(msg)
  {}
  Init_LaneCond_vehicles date(::deva_gaode_routing_msgs::msg::LaneCond::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_LaneCond_vehicles(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneCond msg_;
};

class Init_LaneCond_link_direction
{
public:
  explicit Init_LaneCond_link_direction(::deva_gaode_routing_msgs::msg::LaneCond & msg)
  : msg_(msg)
  {}
  Init_LaneCond_date link_direction(::deva_gaode_routing_msgs::msg::LaneCond::_link_direction_type arg)
  {
    msg_.link_direction = std::move(arg);
    return Init_LaneCond_date(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneCond msg_;
};

class Init_LaneCond_laneinfo_cond
{
public:
  Init_LaneCond_laneinfo_cond()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneCond_link_direction laneinfo_cond(::deva_gaode_routing_msgs::msg::LaneCond::_laneinfo_cond_type arg)
  {
    msg_.laneinfo_cond = std::move(arg);
    return Init_LaneCond_link_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneCond msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LaneCond>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LaneCond_laneinfo_cond();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__BUILDER_HPP_
