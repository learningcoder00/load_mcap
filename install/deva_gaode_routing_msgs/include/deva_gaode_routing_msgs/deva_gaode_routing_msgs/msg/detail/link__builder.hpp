// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_Link_j6m_link_ids
{
public:
  explicit Init_Link_j6m_link_ids(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::Link j6m_link_ids(::deva_gaode_routing_msgs::msg::Link::_j6m_link_ids_type arg)
  {
    msg_.j6m_link_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_j6m_lane_ids
{
public:
  explicit Init_Link_j6m_lane_ids(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_j6m_link_ids j6m_lane_ids(::deva_gaode_routing_msgs::msg::Link::_j6m_lane_ids_type arg)
  {
    msg_.j6m_lane_ids = std::move(arg);
    return Init_Link_j6m_link_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_j6m_intersection_entry_infos
{
public:
  explicit Init_Link_j6m_intersection_entry_infos(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_j6m_lane_ids j6m_intersection_entry_infos(::deva_gaode_routing_msgs::msg::Link::_j6m_intersection_entry_infos_type arg)
  {
    msg_.j6m_intersection_entry_infos = std::move(arg);
    return Init_Link_j6m_lane_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_lanes
{
public:
  explicit Init_Link_lanes(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_j6m_intersection_entry_infos lanes(::deva_gaode_routing_msgs::msg::Link::_lanes_type arg)
  {
    msg_.lanes = std::move(arg);
    return Init_Link_j6m_intersection_entry_infos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_feature_points
{
public:
  explicit Init_Link_feature_points(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_lanes feature_points(::deva_gaode_routing_msgs::msg::Link::_feature_points_type arg)
  {
    msg_.feature_points = std::move(arg);
    return Init_Link_lanes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_end
{
public:
  explicit Init_Link_end(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_feature_points end(::deva_gaode_routing_msgs::msg::Link::_end_type arg)
  {
    msg_.end = std::move(arg);
    return Init_Link_feature_points(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_start
{
public:
  explicit Init_Link_start(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_end start(::deva_gaode_routing_msgs::msg::Link::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_Link_end(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_feature_point_ids
{
public:
  explicit Init_Link_feature_point_ids(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_start feature_point_ids(::deva_gaode_routing_msgs::msg::Link::_feature_point_ids_type arg)
  {
    msg_.feature_point_ids = std::move(arg);
    return Init_Link_start(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_end_id
{
public:
  explicit Init_Link_end_id(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_feature_point_ids end_id(::deva_gaode_routing_msgs::msg::Link::_end_id_type arg)
  {
    msg_.end_id = std::move(arg);
    return Init_Link_feature_point_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_start_id
{
public:
  explicit Init_Link_start_id(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_end_id start_id(::deva_gaode_routing_msgs::msg::Link::_start_id_type arg)
  {
    msg_.start_id = std::move(arg);
    return Init_Link_end_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_guidance
{
public:
  explicit Init_Link_guidance(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_start_id guidance(::deva_gaode_routing_msgs::msg::Link::_guidance_type arg)
  {
    msg_.guidance = std::move(arg);
    return Init_Link_start_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_link_curvature
{
public:
  explicit Init_Link_link_curvature(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_guidance link_curvature(::deva_gaode_routing_msgs::msg::Link::_link_curvature_type arg)
  {
    msg_.link_curvature = std::move(arg);
    return Init_Link_guidance(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_topology
{
public:
  explicit Init_Link_topology(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_link_curvature topology(::deva_gaode_routing_msgs::msg::Link::_topology_type arg)
  {
    msg_.topology = std::move(arg);
    return Init_Link_link_curvature(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_raw_id
{
public:
  explicit Init_Link_raw_id(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_topology raw_id(::deva_gaode_routing_msgs::msg::Link::_raw_id_type arg)
  {
    msg_.raw_id = std::move(arg);
    return Init_Link_topology(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_coordinate
{
public:
  explicit Init_Link_coordinate(::deva_gaode_routing_msgs::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_raw_id coordinate(::deva_gaode_routing_msgs::msg::Link::_coordinate_type arg)
  {
    msg_.coordinate = std::move(arg);
    return Init_Link_raw_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

class Init_Link_link_attribute
{
public:
  Init_Link_link_attribute()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Link_coordinate link_attribute(::deva_gaode_routing_msgs::msg::Link::_link_attribute_type arg)
  {
    msg_.link_attribute = std::move(arg);
    return Init_Link_coordinate(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Link msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::Link>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_Link_link_attribute();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__BUILDER_HPP_
