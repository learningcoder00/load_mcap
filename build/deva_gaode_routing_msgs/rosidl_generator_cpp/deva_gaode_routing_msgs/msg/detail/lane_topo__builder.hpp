// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/lane_topo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneTopo_special_times
{
public:
  explicit Init_LaneTopo_special_times(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LaneTopo special_times(::deva_gaode_routing_msgs::msg::LaneTopo::_special_times_type arg)
  {
    msg_.special_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_vehicles
{
public:
  explicit Init_LaneTopo_vehicles(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_special_times vehicles(::deva_gaode_routing_msgs::msg::LaneTopo::_vehicles_type arg)
  {
    msg_.vehicles = std::move(arg);
    return Init_LaneTopo_special_times(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_date
{
public:
  explicit Init_LaneTopo_date(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_vehicles date(::deva_gaode_routing_msgs::msg::LaneTopo::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_LaneTopo_vehicles(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_direction
{
public:
  explicit Init_LaneTopo_direction(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_date direction(::deva_gaode_routing_msgs::msg::LaneTopo::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_LaneTopo_date(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_laneinfo_cond
{
public:
  explicit Init_LaneTopo_laneinfo_cond(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_direction laneinfo_cond(::deva_gaode_routing_msgs::msg::LaneTopo::_laneinfo_cond_type arg)
  {
    msg_.laneinfo_cond = std::move(arg);
    return Init_LaneTopo_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_lane_conds
{
public:
  explicit Init_LaneTopo_lane_conds(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_laneinfo_cond lane_conds(::deva_gaode_routing_msgs::msg::LaneTopo::_lane_conds_type arg)
  {
    msg_.lane_conds = std::move(arg);
    return Init_LaneTopo_laneinfo_cond(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_out_link_ids
{
public:
  explicit Init_LaneTopo_out_link_ids(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_lane_conds out_link_ids(::deva_gaode_routing_msgs::msg::LaneTopo::_out_link_ids_type arg)
  {
    msg_.out_link_ids = std::move(arg);
    return Init_LaneTopo_lane_conds(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_bus_flag
{
public:
  explicit Init_LaneTopo_bus_flag(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_out_link_ids bus_flag(::deva_gaode_routing_msgs::msg::LaneTopo::_bus_flag_type arg)
  {
    msg_.bus_flag = std::move(arg);
    return Init_LaneTopo_out_link_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_lane_flag
{
public:
  explicit Init_LaneTopo_lane_flag(::deva_gaode_routing_msgs::msg::LaneTopo & msg)
  : msg_(msg)
  {}
  Init_LaneTopo_bus_flag lane_flag(::deva_gaode_routing_msgs::msg::LaneTopo::_lane_flag_type arg)
  {
    msg_.lane_flag = std::move(arg);
    return Init_LaneTopo_bus_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

class Init_LaneTopo_lane_arrow
{
public:
  Init_LaneTopo_lane_arrow()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneTopo_lane_flag lane_arrow(::deva_gaode_routing_msgs::msg::LaneTopo::_lane_arrow_type arg)
  {
    msg_.lane_arrow = std::move(arg);
    return Init_LaneTopo_lane_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTopo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LaneTopo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LaneTopo_lane_arrow();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__BUILDER_HPP_
