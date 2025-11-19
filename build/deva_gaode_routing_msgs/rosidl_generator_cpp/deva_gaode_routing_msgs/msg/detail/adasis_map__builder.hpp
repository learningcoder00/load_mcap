// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/adasis_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_AdasisMap_j6m_data
{
public:
  explicit Init_AdasisMap_j6m_data(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::AdasisMap j6m_data(::deva_gaode_routing_msgs::msg::AdasisMap::_j6m_data_type arg)
  {
    msg_.j6m_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_route_guide_response
{
public:
  explicit Init_AdasisMap_route_guide_response(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_j6m_data route_guide_response(::deva_gaode_routing_msgs::msg::AdasisMap::_route_guide_response_type arg)
  {
    msg_.route_guide_response = std::move(arg);
    return Init_AdasisMap_j6m_data(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_heterogeneous_match_link
{
public:
  explicit Init_AdasisMap_heterogeneous_match_link(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_route_guide_response heterogeneous_match_link(::deva_gaode_routing_msgs::msg::AdasisMap::_heterogeneous_match_link_type arg)
  {
    msg_.heterogeneous_match_link = std::move(arg);
    return Init_AdasisMap_route_guide_response(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_position_match_link
{
public:
  explicit Init_AdasisMap_position_match_link(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_heterogeneous_match_link position_match_link(::deva_gaode_routing_msgs::msg::AdasisMap::_position_match_link_type arg)
  {
    msg_.position_match_link = std::move(arg);
    return Init_AdasisMap_heterogeneous_match_link(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_intersection_roads
{
public:
  explicit Init_AdasisMap_intersection_roads(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_position_match_link intersection_roads(::deva_gaode_routing_msgs::msg::AdasisMap::_intersection_roads_type arg)
  {
    msg_.intersection_roads = std::move(arg);
    return Init_AdasisMap_position_match_link(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_intersection_road_nodes
{
public:
  explicit Init_AdasisMap_intersection_road_nodes(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_intersection_roads intersection_road_nodes(::deva_gaode_routing_msgs::msg::AdasisMap::_intersection_road_nodes_type arg)
  {
    msg_.intersection_road_nodes = std::move(arg);
    return Init_AdasisMap_intersection_roads(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_stoplines
{
public:
  explicit Init_AdasisMap_stoplines(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_intersection_road_nodes stoplines(::deva_gaode_routing_msgs::msg::AdasisMap::_stoplines_type arg)
  {
    msg_.stoplines = std::move(arg);
    return Init_AdasisMap_intersection_road_nodes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_lanes
{
public:
  explicit Init_AdasisMap_lanes(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_stoplines lanes(::deva_gaode_routing_msgs::msg::AdasisMap::_lanes_type arg)
  {
    msg_.lanes = std::move(arg);
    return Init_AdasisMap_stoplines(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_feature_points
{
public:
  explicit Init_AdasisMap_feature_points(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_lanes feature_points(::deva_gaode_routing_msgs::msg::AdasisMap::_feature_points_type arg)
  {
    msg_.feature_points = std::move(arg);
    return Init_AdasisMap_lanes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_node
{
public:
  explicit Init_AdasisMap_node(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_feature_points node(::deva_gaode_routing_msgs::msg::AdasisMap::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_AdasisMap_feature_points(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_link
{
public:
  explicit Init_AdasisMap_link(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_node link(::deva_gaode_routing_msgs::msg::AdasisMap::_link_type arg)
  {
    msg_.link = std::move(arg);
    return Init_AdasisMap_node(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_ehp_profile_longs
{
public:
  explicit Init_AdasisMap_ehp_profile_longs(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_link ehp_profile_longs(::deva_gaode_routing_msgs::msg::AdasisMap::_ehp_profile_longs_type arg)
  {
    msg_.ehp_profile_longs = std::move(arg);
    return Init_AdasisMap_link(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_is_update_ehp_profile_longs
{
public:
  explicit Init_AdasisMap_is_update_ehp_profile_longs(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_ehp_profile_longs is_update_ehp_profile_longs(::deva_gaode_routing_msgs::msg::AdasisMap::_is_update_ehp_profile_longs_type arg)
  {
    msg_.is_update_ehp_profile_longs = std::move(arg);
    return Init_AdasisMap_ehp_profile_longs(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_ehp_profile_shorts
{
public:
  explicit Init_AdasisMap_ehp_profile_shorts(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_is_update_ehp_profile_longs ehp_profile_shorts(::deva_gaode_routing_msgs::msg::AdasisMap::_ehp_profile_shorts_type arg)
  {
    msg_.ehp_profile_shorts = std::move(arg);
    return Init_AdasisMap_is_update_ehp_profile_longs(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_is_update_ehp_profile_shorts
{
public:
  explicit Init_AdasisMap_is_update_ehp_profile_shorts(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_ehp_profile_shorts is_update_ehp_profile_shorts(::deva_gaode_routing_msgs::msg::AdasisMap::_is_update_ehp_profile_shorts_type arg)
  {
    msg_.is_update_ehp_profile_shorts = std::move(arg);
    return Init_AdasisMap_ehp_profile_shorts(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_ehp_stubs
{
public:
  explicit Init_AdasisMap_ehp_stubs(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_is_update_ehp_profile_shorts ehp_stubs(::deva_gaode_routing_msgs::msg::AdasisMap::_ehp_stubs_type arg)
  {
    msg_.ehp_stubs = std::move(arg);
    return Init_AdasisMap_is_update_ehp_profile_shorts(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_is_update_ehp_stubs
{
public:
  explicit Init_AdasisMap_is_update_ehp_stubs(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_ehp_stubs is_update_ehp_stubs(::deva_gaode_routing_msgs::msg::AdasisMap::_is_update_ehp_stubs_type arg)
  {
    msg_.is_update_ehp_stubs = std::move(arg);
    return Init_AdasisMap_ehp_stubs(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_ehp_segments
{
public:
  explicit Init_AdasisMap_ehp_segments(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_is_update_ehp_stubs ehp_segments(::deva_gaode_routing_msgs::msg::AdasisMap::_ehp_segments_type arg)
  {
    msg_.ehp_segments = std::move(arg);
    return Init_AdasisMap_is_update_ehp_stubs(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_is_update_ehp_segments
{
public:
  explicit Init_AdasisMap_is_update_ehp_segments(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_ehp_segments is_update_ehp_segments(::deva_gaode_routing_msgs::msg::AdasisMap::_is_update_ehp_segments_type arg)
  {
    msg_.is_update_ehp_segments = std::move(arg);
    return Init_AdasisMap_ehp_segments(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_ehp_meta_data
{
public:
  explicit Init_AdasisMap_ehp_meta_data(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_is_update_ehp_segments ehp_meta_data(::deva_gaode_routing_msgs::msg::AdasisMap::_ehp_meta_data_type arg)
  {
    msg_.ehp_meta_data = std::move(arg);
    return Init_AdasisMap_is_update_ehp_segments(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_is_update_ehp_meta_data
{
public:
  explicit Init_AdasisMap_is_update_ehp_meta_data(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_ehp_meta_data is_update_ehp_meta_data(::deva_gaode_routing_msgs::msg::AdasisMap::_is_update_ehp_meta_data_type arg)
  {
    msg_.is_update_ehp_meta_data = std::move(arg);
    return Init_AdasisMap_ehp_meta_data(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_ehp_position
{
public:
  explicit Init_AdasisMap_ehp_position(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_is_update_ehp_meta_data ehp_position(::deva_gaode_routing_msgs::msg::AdasisMap::_ehp_position_type arg)
  {
    msg_.ehp_position = std::move(arg);
    return Init_AdasisMap_is_update_ehp_meta_data(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_is_update_ehp_position
{
public:
  explicit Init_AdasisMap_is_update_ehp_position(::deva_gaode_routing_msgs::msg::AdasisMap & msg)
  : msg_(msg)
  {}
  Init_AdasisMap_ehp_position is_update_ehp_position(::deva_gaode_routing_msgs::msg::AdasisMap::_is_update_ehp_position_type arg)
  {
    msg_.is_update_ehp_position = std::move(arg);
    return Init_AdasisMap_ehp_position(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

class Init_AdasisMap_header
{
public:
  Init_AdasisMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdasisMap_is_update_ehp_position header(::deva_gaode_routing_msgs::msg::AdasisMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AdasisMap_is_update_ehp_position(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::AdasisMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::AdasisMap>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_AdasisMap_header();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__BUILDER_HPP_
