// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProLane_transition
{
public:
  explicit Init_SdProLane_transition(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProLane transition(::deva_gaode_routing_msgs::msg::SdProLane::_transition_type arg)
  {
    msg_.transition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_pre_lanes
{
public:
  explicit Init_SdProLane_pre_lanes(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_transition pre_lanes(::deva_gaode_routing_msgs::msg::SdProLane::_pre_lanes_type arg)
  {
    msg_.pre_lanes = std::move(arg);
    return Init_SdProLane_transition(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_next_lanes
{
public:
  explicit Init_SdProLane_next_lanes(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_pre_lanes next_lanes(::deva_gaode_routing_msgs::msg::SdProLane::_next_lanes_type arg)
  {
    msg_.next_lanes = std::move(arg);
    return Init_SdProLane_pre_lanes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_direction
{
public:
  explicit Init_SdProLane_direction(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_next_lanes direction(::deva_gaode_routing_msgs::msg::SdProLane::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_SdProLane_next_lanes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_length
{
public:
  explicit Init_SdProLane_length(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_direction length(::deva_gaode_routing_msgs::msg::SdProLane::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_SdProLane_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_lane_num
{
public:
  explicit Init_SdProLane_lane_num(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_length lane_num(::deva_gaode_routing_msgs::msg::SdProLane::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_SdProLane_length(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_category_special
{
public:
  explicit Init_SdProLane_category_special(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_lane_num category_special(::deva_gaode_routing_msgs::msg::SdProLane::_category_special_type arg)
  {
    msg_.category_special = std::move(arg);
    return Init_SdProLane_lane_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_category_vehicle
{
public:
  explicit Init_SdProLane_category_vehicle(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_category_special category_vehicle(::deva_gaode_routing_msgs::msg::SdProLane::_category_vehicle_type arg)
  {
    msg_.category_vehicle = std::move(arg);
    return Init_SdProLane_category_special(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_category_location
{
public:
  explicit Init_SdProLane_category_location(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_category_vehicle category_location(::deva_gaode_routing_msgs::msg::SdProLane::_category_location_type arg)
  {
    msg_.category_location = std::move(arg);
    return Init_SdProLane_category_vehicle(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_lane_arrow_type
{
public:
  explicit Init_SdProLane_lane_arrow_type(::deva_gaode_routing_msgs::msg::SdProLane & msg)
  : msg_(msg)
  {}
  Init_SdProLane_category_location lane_arrow_type(::deva_gaode_routing_msgs::msg::SdProLane::_lane_arrow_type_type arg)
  {
    msg_.lane_arrow_type = std::move(arg);
    return Init_SdProLane_category_location(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

class Init_SdProLane_id
{
public:
  Init_SdProLane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProLane_lane_arrow_type id(::deva_gaode_routing_msgs::msg::SdProLane::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SdProLane_lane_arrow_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProLane>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProLane_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__BUILDER_HPP_
