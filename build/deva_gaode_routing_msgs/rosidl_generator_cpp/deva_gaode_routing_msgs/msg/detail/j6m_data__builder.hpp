// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/j6m_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_J6mData_j6m_road_objects
{
public:
  explicit Init_J6mData_j6m_road_objects(::deva_gaode_routing_msgs::msg::J6mData & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::J6mData j6m_road_objects(::deva_gaode_routing_msgs::msg::J6mData::_j6m_road_objects_type arg)
  {
    msg_.j6m_road_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mData msg_;
};

class Init_J6mData_j6m_lane_markings
{
public:
  explicit Init_J6mData_j6m_lane_markings(::deva_gaode_routing_msgs::msg::J6mData & msg)
  : msg_(msg)
  {}
  Init_J6mData_j6m_road_objects j6m_lane_markings(::deva_gaode_routing_msgs::msg::J6mData::_j6m_lane_markings_type arg)
  {
    msg_.j6m_lane_markings = std::move(arg);
    return Init_J6mData_j6m_road_objects(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mData msg_;
};

class Init_J6mData_j6m_lanes
{
public:
  explicit Init_J6mData_j6m_lanes(::deva_gaode_routing_msgs::msg::J6mData & msg)
  : msg_(msg)
  {}
  Init_J6mData_j6m_lane_markings j6m_lanes(::deva_gaode_routing_msgs::msg::J6mData::_j6m_lanes_type arg)
  {
    msg_.j6m_lanes = std::move(arg);
    return Init_J6mData_j6m_lane_markings(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mData msg_;
};

class Init_J6mData_j6m_intersections
{
public:
  explicit Init_J6mData_j6m_intersections(::deva_gaode_routing_msgs::msg::J6mData & msg)
  : msg_(msg)
  {}
  Init_J6mData_j6m_lanes j6m_intersections(::deva_gaode_routing_msgs::msg::J6mData::_j6m_intersections_type arg)
  {
    msg_.j6m_intersections = std::move(arg);
    return Init_J6mData_j6m_lanes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mData msg_;
};

class Init_J6mData_j6m_links
{
public:
  Init_J6mData_j6m_links()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J6mData_j6m_intersections j6m_links(::deva_gaode_routing_msgs::msg::J6mData::_j6m_links_type arg)
  {
    msg_.j6m_links = std::move(arg);
    return Init_J6mData_j6m_intersections(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::J6mData>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_J6mData_j6m_links();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__BUILDER_HPP_
