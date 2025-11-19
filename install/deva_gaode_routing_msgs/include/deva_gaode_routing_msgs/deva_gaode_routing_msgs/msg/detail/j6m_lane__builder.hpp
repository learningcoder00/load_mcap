// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_J6mLane_lane_coordinates
{
public:
  explicit Init_J6mLane_lane_coordinates(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::J6mLane lane_coordinates(::deva_gaode_routing_msgs::msg::J6mLane::_lane_coordinates_type arg)
  {
    msg_.lane_coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_referenced_roadobject_ids
{
public:
  explicit Init_J6mLane_lane_referenced_roadobject_ids(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_coordinates lane_referenced_roadobject_ids(::deva_gaode_routing_msgs::msg::J6mLane::_lane_referenced_roadobject_ids_type arg)
  {
    msg_.lane_referenced_roadobject_ids = std::move(arg);
    return Init_J6mLane_lane_coordinates(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_predecessor_lane_ids
{
public:
  explicit Init_J6mLane_lane_predecessor_lane_ids(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_referenced_roadobject_ids lane_predecessor_lane_ids(::deva_gaode_routing_msgs::msg::J6mLane::_lane_predecessor_lane_ids_type arg)
  {
    msg_.lane_predecessor_lane_ids = std::move(arg);
    return Init_J6mLane_lane_referenced_roadobject_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_successor_lane_ids
{
public:
  explicit Init_J6mLane_lane_successor_lane_ids(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_predecessor_lane_ids lane_successor_lane_ids(::deva_gaode_routing_msgs::msg::J6mLane::_lane_successor_lane_ids_type arg)
  {
    msg_.lane_successor_lane_ids = std::move(arg);
    return Init_J6mLane_lane_predecessor_lane_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_host_link_type
{
public:
  explicit Init_J6mLane_lane_host_link_type(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_successor_lane_ids lane_host_link_type(::deva_gaode_routing_msgs::msg::J6mLane::_lane_host_link_type_type arg)
  {
    msg_.lane_host_link_type = std::move(arg);
    return Init_J6mLane_lane_successor_lane_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_host_link_id
{
public:
  explicit Init_J6mLane_lane_host_link_id(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_host_link_type lane_host_link_id(::deva_gaode_routing_msgs::msg::J6mLane::_lane_host_link_id_type arg)
  {
    msg_.lane_host_link_id = std::move(arg);
    return Init_J6mLane_lane_host_link_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_empir_traj_count
{
public:
  explicit Init_J6mLane_lane_empir_traj_count(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_host_link_id lane_empir_traj_count(::deva_gaode_routing_msgs::msg::J6mLane::_lane_empir_traj_count_type arg)
  {
    msg_.lane_empir_traj_count = std::move(arg);
    return Init_J6mLane_lane_host_link_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_empir_speed
{
public:
  explicit Init_J6mLane_lane_empir_speed(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_empir_traj_count lane_empir_speed(::deva_gaode_routing_msgs::msg::J6mLane::_lane_empir_speed_type arg)
  {
    msg_.lane_empir_speed = std::move(arg);
    return Init_J6mLane_lane_empir_traj_count(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_travel_direction
{
public:
  explicit Init_J6mLane_lane_travel_direction(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_empir_speed lane_travel_direction(::deva_gaode_routing_msgs::msg::J6mLane::_lane_travel_direction_type arg)
  {
    msg_.lane_travel_direction = std::move(arg);
    return Init_J6mLane_lane_empir_speed(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_confidence
{
public:
  explicit Init_J6mLane_lane_confidence(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_travel_direction lane_confidence(::deva_gaode_routing_msgs::msg::J6mLane::_lane_confidence_type arg)
  {
    msg_.lane_confidence = std::move(arg);
    return Init_J6mLane_lane_travel_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_turn_direction
{
public:
  explicit Init_J6mLane_lane_turn_direction(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_confidence lane_turn_direction(::deva_gaode_routing_msgs::msg::J6mLane::_lane_turn_direction_type arg)
  {
    msg_.lane_turn_direction = std::move(arg);
    return Init_J6mLane_lane_confidence(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_length
{
public:
  explicit Init_J6mLane_lane_length(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_turn_direction lane_length(::deva_gaode_routing_msgs::msg::J6mLane::_lane_length_type arg)
  {
    msg_.lane_length = std::move(arg);
    return Init_J6mLane_lane_turn_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_adas
{
public:
  explicit Init_J6mLane_lane_adas(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_length lane_adas(::deva_gaode_routing_msgs::msg::J6mLane::_lane_adas_type arg)
  {
    msg_.lane_adas = std::move(arg);
    return Init_J6mLane_lane_length(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_right_lane_marking_ids
{
public:
  explicit Init_J6mLane_right_lane_marking_ids(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_adas right_lane_marking_ids(::deva_gaode_routing_msgs::msg::J6mLane::_right_lane_marking_ids_type arg)
  {
    msg_.right_lane_marking_ids = std::move(arg);
    return Init_J6mLane_lane_adas(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_left_lane_marking_ids
{
public:
  explicit Init_J6mLane_left_lane_marking_ids(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_right_lane_marking_ids left_lane_marking_ids(::deva_gaode_routing_msgs::msg::J6mLane::_left_lane_marking_ids_type arg)
  {
    msg_.left_lane_marking_ids = std::move(arg);
    return Init_J6mLane_right_lane_marking_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_min_width
{
public:
  explicit Init_J6mLane_lane_min_width(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_left_lane_marking_ids lane_min_width(::deva_gaode_routing_msgs::msg::J6mLane::_lane_min_width_type arg)
  {
    msg_.lane_min_width = std::move(arg);
    return Init_J6mLane_left_lane_marking_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_max_width
{
public:
  explicit Init_J6mLane_lane_max_width(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_min_width lane_max_width(::deva_gaode_routing_msgs::msg::J6mLane::_lane_max_width_type arg)
  {
    msg_.lane_max_width = std::move(arg);
    return Init_J6mLane_lane_min_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_speed_limit
{
public:
  explicit Init_J6mLane_lane_speed_limit(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_max_width lane_speed_limit(::deva_gaode_routing_msgs::msg::J6mLane::_lane_speed_limit_type arg)
  {
    msg_.lane_speed_limit = std::move(arg);
    return Init_J6mLane_lane_max_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_type
{
public:
  explicit Init_J6mLane_lane_type(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_speed_limit lane_type(::deva_gaode_routing_msgs::msg::J6mLane::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_J6mLane_lane_speed_limit(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_seq_num
{
public:
  explicit Init_J6mLane_lane_seq_num(::deva_gaode_routing_msgs::msg::J6mLane & msg)
  : msg_(msg)
  {}
  Init_J6mLane_lane_type lane_seq_num(::deva_gaode_routing_msgs::msg::J6mLane::_lane_seq_num_type arg)
  {
    msg_.lane_seq_num = std::move(arg);
    return Init_J6mLane_lane_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

class Init_J6mLane_lane_id
{
public:
  Init_J6mLane_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J6mLane_lane_seq_num lane_id(::deva_gaode_routing_msgs::msg::J6mLane::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_J6mLane_lane_seq_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::J6mLane>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_J6mLane_lane_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__BUILDER_HPP_
