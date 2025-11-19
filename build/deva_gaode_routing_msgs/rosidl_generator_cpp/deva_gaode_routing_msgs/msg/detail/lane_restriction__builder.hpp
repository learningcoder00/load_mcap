// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneRestriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneRestriction_lane_range_end
{
public:
  explicit Init_LaneRestriction_lane_range_end(::deva_gaode_routing_msgs::msg::LaneRestriction & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LaneRestriction lane_range_end(::deva_gaode_routing_msgs::msg::LaneRestriction::_lane_range_end_type arg)
  {
    msg_.lane_range_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

class Init_LaneRestriction_lane_range_start
{
public:
  explicit Init_LaneRestriction_lane_range_start(::deva_gaode_routing_msgs::msg::LaneRestriction & msg)
  : msg_(msg)
  {}
  Init_LaneRestriction_lane_range_end lane_range_start(::deva_gaode_routing_msgs::msg::LaneRestriction::_lane_range_start_type arg)
  {
    msg_.lane_range_start = std::move(arg);
    return Init_LaneRestriction_lane_range_end(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

class Init_LaneRestriction_lane_retriction_type
{
public:
  explicit Init_LaneRestriction_lane_retriction_type(::deva_gaode_routing_msgs::msg::LaneRestriction & msg)
  : msg_(msg)
  {}
  Init_LaneRestriction_lane_range_start lane_retriction_type(::deva_gaode_routing_msgs::msg::LaneRestriction::_lane_retriction_type_type arg)
  {
    msg_.lane_retriction_type = std::move(arg);
    return Init_LaneRestriction_lane_range_start(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

class Init_LaneRestriction_lane_direction
{
public:
  explicit Init_LaneRestriction_lane_direction(::deva_gaode_routing_msgs::msg::LaneRestriction & msg)
  : msg_(msg)
  {}
  Init_LaneRestriction_lane_retriction_type lane_direction(::deva_gaode_routing_msgs::msg::LaneRestriction::_lane_direction_type arg)
  {
    msg_.lane_direction = std::move(arg);
    return Init_LaneRestriction_lane_retriction_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

class Init_LaneRestriction_restrict_time_period
{
public:
  explicit Init_LaneRestriction_restrict_time_period(::deva_gaode_routing_msgs::msg::LaneRestriction & msg)
  : msg_(msg)
  {}
  Init_LaneRestriction_lane_direction restrict_time_period(::deva_gaode_routing_msgs::msg::LaneRestriction::_restrict_time_period_type arg)
  {
    msg_.restrict_time_period = std::move(arg);
    return Init_LaneRestriction_lane_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

class Init_LaneRestriction_special_time_type
{
public:
  explicit Init_LaneRestriction_special_time_type(::deva_gaode_routing_msgs::msg::LaneRestriction & msg)
  : msg_(msg)
  {}
  Init_LaneRestriction_restrict_time_period special_time_type(::deva_gaode_routing_msgs::msg::LaneRestriction::_special_time_type_type arg)
  {
    msg_.special_time_type = std::move(arg);
    return Init_LaneRestriction_restrict_time_period(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

class Init_LaneRestriction_limit_vehicle_type
{
public:
  explicit Init_LaneRestriction_limit_vehicle_type(::deva_gaode_routing_msgs::msg::LaneRestriction & msg)
  : msg_(msg)
  {}
  Init_LaneRestriction_special_time_type limit_vehicle_type(::deva_gaode_routing_msgs::msg::LaneRestriction::_limit_vehicle_type_type arg)
  {
    msg_.limit_vehicle_type = std::move(arg);
    return Init_LaneRestriction_special_time_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

class Init_LaneRestriction_id
{
public:
  Init_LaneRestriction_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneRestriction_limit_vehicle_type id(::deva_gaode_routing_msgs::msg::LaneRestriction::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneRestriction_limit_vehicle_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneRestriction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LaneRestriction>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LaneRestriction_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__BUILDER_HPP_
