// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_J6mLaneMarking_lane_marking_coordinates
{
public:
  explicit Init_J6mLaneMarking_lane_marking_coordinates(::deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking lane_marking_coordinates(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_coordinates_type arg)
  {
    msg_.lane_marking_coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

class Init_J6mLaneMarking_lane_marking_confidence
{
public:
  explicit Init_J6mLaneMarking_lane_marking_confidence(::deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
  : msg_(msg)
  {}
  Init_J6mLaneMarking_lane_marking_coordinates lane_marking_confidence(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_confidence_type arg)
  {
    msg_.lane_marking_confidence = std::move(arg);
    return Init_J6mLaneMarking_lane_marking_coordinates(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

class Init_J6mLaneMarking_lane_marking_color
{
public:
  explicit Init_J6mLaneMarking_lane_marking_color(::deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
  : msg_(msg)
  {}
  Init_J6mLaneMarking_lane_marking_confidence lane_marking_color(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_color_type arg)
  {
    msg_.lane_marking_color = std::move(arg);
    return Init_J6mLaneMarking_lane_marking_confidence(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

class Init_J6mLaneMarking_lane_marking_offset
{
public:
  explicit Init_J6mLaneMarking_lane_marking_offset(::deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
  : msg_(msg)
  {}
  Init_J6mLaneMarking_lane_marking_color lane_marking_offset(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_offset_type arg)
  {
    msg_.lane_marking_offset = std::move(arg);
    return Init_J6mLaneMarking_lane_marking_color(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

class Init_J6mLaneMarking_lane_marking_order_number
{
public:
  explicit Init_J6mLaneMarking_lane_marking_order_number(::deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
  : msg_(msg)
  {}
  Init_J6mLaneMarking_lane_marking_offset lane_marking_order_number(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_order_number_type arg)
  {
    msg_.lane_marking_order_number = std::move(arg);
    return Init_J6mLaneMarking_lane_marking_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

class Init_J6mLaneMarking_lane_marking_length
{
public:
  explicit Init_J6mLaneMarking_lane_marking_length(::deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
  : msg_(msg)
  {}
  Init_J6mLaneMarking_lane_marking_order_number lane_marking_length(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_length_type arg)
  {
    msg_.lane_marking_length = std::move(arg);
    return Init_J6mLaneMarking_lane_marking_order_number(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

class Init_J6mLaneMarking_lane_marking_type
{
public:
  explicit Init_J6mLaneMarking_lane_marking_type(::deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
  : msg_(msg)
  {}
  Init_J6mLaneMarking_lane_marking_length lane_marking_type(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_type_type arg)
  {
    msg_.lane_marking_type = std::move(arg);
    return Init_J6mLaneMarking_lane_marking_length(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

class Init_J6mLaneMarking_lane_marking_id
{
public:
  Init_J6mLaneMarking_lane_marking_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J6mLaneMarking_lane_marking_type lane_marking_id(::deva_gaode_routing_msgs::msg::J6mLaneMarking::_lane_marking_id_type arg)
  {
    msg_.lane_marking_id = std::move(arg);
    return Init_J6mLaneMarking_lane_marking_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLaneMarking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::J6mLaneMarking>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_J6mLaneMarking_lane_marking_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__BUILDER_HPP_
