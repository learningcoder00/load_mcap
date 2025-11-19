// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/j6m_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_J6mLink_referenced_lanemarking_id_s
{
public:
  explicit Init_J6mLink_referenced_lanemarking_id_s(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::J6mLink referenced_lanemarking_id_s(::deva_gaode_routing_msgs::msg::J6mLink::_referenced_lanemarking_id_s_type arg)
  {
    msg_.referenced_lanemarking_id_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_referenced_intersection_id_s
{
public:
  explicit Init_J6mLink_referenced_intersection_id_s(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_referenced_lanemarking_id_s referenced_intersection_id_s(::deva_gaode_routing_msgs::msg::J6mLink::_referenced_intersection_id_s_type arg)
  {
    msg_.referenced_intersection_id_s = std::move(arg);
    return Init_J6mLink_referenced_lanemarking_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_referenced_lane_id_s
{
public:
  explicit Init_J6mLink_referenced_lane_id_s(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_referenced_intersection_id_s referenced_lane_id_s(::deva_gaode_routing_msgs::msg::J6mLink::_referenced_lane_id_s_type arg)
  {
    msg_.referenced_lane_id_s = std::move(arg);
    return Init_J6mLink_referenced_intersection_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_predecessor_linkid_s
{
public:
  explicit Init_J6mLink_predecessor_linkid_s(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_referenced_lane_id_s predecessor_linkid_s(::deva_gaode_routing_msgs::msg::J6mLink::_predecessor_linkid_s_type arg)
  {
    msg_.predecessor_linkid_s = std::move(arg);
    return Init_J6mLink_referenced_lane_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_successor_linkid_s
{
public:
  explicit Init_J6mLink_successor_linkid_s(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_predecessor_linkid_s successor_linkid_s(::deva_gaode_routing_msgs::msg::J6mLink::_successor_linkid_s_type arg)
  {
    msg_.successor_linkid_s = std::move(arg);
    return Init_J6mLink_predecessor_linkid_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_coordinates
{
public:
  explicit Init_J6mLink_coordinates(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_successor_linkid_s coordinates(::deva_gaode_routing_msgs::msg::J6mLink::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_J6mLink_successor_linkid_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_travel_direction
{
public:
  explicit Init_J6mLink_travel_direction(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_coordinates travel_direction(::deva_gaode_routing_msgs::msg::J6mLink::_travel_direction_type arg)
  {
    msg_.travel_direction = std::move(arg);
    return Init_J6mLink_coordinates(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_confidence
{
public:
  explicit Init_J6mLink_confidence(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_travel_direction confidence(::deva_gaode_routing_msgs::msg::J6mLink::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_J6mLink_travel_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_length
{
public:
  explicit Init_J6mLink_length(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_confidence length(::deva_gaode_routing_msgs::msg::J6mLink::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_J6mLink_confidence(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_road_type
{
public:
  explicit Init_J6mLink_road_type(::deva_gaode_routing_msgs::msg::J6mLink & msg)
  : msg_(msg)
  {}
  Init_J6mLink_length road_type(::deva_gaode_routing_msgs::msg::J6mLink::_road_type_type arg)
  {
    msg_.road_type = std::move(arg);
    return Init_J6mLink_length(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

class Init_J6mLink_id
{
public:
  Init_J6mLink_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J6mLink_road_type id(::deva_gaode_routing_msgs::msg::J6mLink::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_J6mLink_road_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::J6mLink>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_J6mLink_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__BUILDER_HPP_
