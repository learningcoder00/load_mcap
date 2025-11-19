// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/link_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkInfoProto_traffic_status
{
public:
  explicit Init_LinkInfoProto_traffic_status(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::LinkInfoProto traffic_status(::deva_navi_msgs::msg::LinkInfoProto::_traffic_status_type arg)
  {
    msg_.traffic_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_is_parking_road
{
public:
  explicit Init_LinkInfoProto_is_parking_road(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_traffic_status is_parking_road(::deva_navi_msgs::msg::LinkInfoProto::_is_parking_road_type arg)
  {
    msg_.is_parking_road = std::move(arg);
    return Init_LinkInfoProto_traffic_status(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_inner_road
{
public:
  explicit Init_LinkInfoProto_inner_road(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_is_parking_road inner_road(::deva_navi_msgs::msg::LinkInfoProto::_inner_road_type arg)
  {
    msg_.inner_road = std::move(arg);
    return Init_LinkInfoProto_is_parking_road(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_service_name
{
public:
  explicit Init_LinkInfoProto_service_name(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_inner_road service_name(::deva_navi_msgs::msg::LinkInfoProto::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_LinkInfoProto_inner_road(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_turn_infos
{
public:
  explicit Init_LinkInfoProto_turn_infos(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_service_name turn_infos(::deva_navi_msgs::msg::LinkInfoProto::_turn_infos_type arg)
  {
    msg_.turn_infos = std::move(arg);
    return Init_LinkInfoProto_service_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_speed
{
public:
  explicit Init_LinkInfoProto_speed(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_turn_infos speed(::deva_navi_msgs::msg::LinkInfoProto::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_LinkInfoProto_turn_infos(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_limit_flag
{
public:
  explicit Init_LinkInfoProto_limit_flag(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_speed limit_flag(::deva_navi_msgs::msg::LinkInfoProto::_limit_flag_type arg)
  {
    msg_.limit_flag = std::move(arg);
    return Init_LinkInfoProto_speed(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_is_restricting
{
public:
  explicit Init_LinkInfoProto_is_restricting(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_limit_flag is_restricting(::deva_navi_msgs::msg::LinkInfoProto::_is_restricting_type arg)
  {
    msg_.is_restricting = std::move(arg);
    return Init_LinkInfoProto_limit_flag(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_is_at_service
{
public:
  explicit Init_LinkInfoProto_is_at_service(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_is_restricting is_at_service(::deva_navi_msgs::msg::LinkInfoProto::_is_at_service_type arg)
  {
    msg_.is_at_service = std::move(arg);
    return Init_LinkInfoProto_is_restricting(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_has_mix_fork
{
public:
  explicit Init_LinkInfoProto_has_mix_fork(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_is_at_service has_mix_fork(::deva_navi_msgs::msg::LinkInfoProto::_has_mix_fork_type arg)
  {
    msg_.has_mix_fork = std::move(arg);
    return Init_LinkInfoProto_is_at_service(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_has_traffic_light
{
public:
  explicit Init_LinkInfoProto_has_traffic_light(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_has_mix_fork has_traffic_light(::deva_navi_msgs::msg::LinkInfoProto::_has_traffic_light_type arg)
  {
    msg_.has_traffic_light = std::move(arg);
    return Init_LinkInfoProto_has_mix_fork(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_has_multi_out
{
public:
  explicit Init_LinkInfoProto_has_multi_out(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_has_traffic_light has_multi_out(::deva_navi_msgs::msg::LinkInfoProto::_has_multi_out_type arg)
  {
    msg_.has_multi_out = std::move(arg);
    return Init_LinkInfoProto_has_traffic_light(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_has_parallel_road
{
public:
  explicit Init_LinkInfoProto_has_parallel_road(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_has_multi_out has_parallel_road(::deva_navi_msgs::msg::LinkInfoProto::_has_parallel_road_type arg)
  {
    msg_.has_parallel_road = std::move(arg);
    return Init_LinkInfoProto_has_multi_out(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_is_over_head
{
public:
  explicit Init_LinkInfoProto_is_over_head(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_has_parallel_road is_over_head(::deva_navi_msgs::msg::LinkInfoProto::_is_over_head_type arg)
  {
    msg_.is_over_head = std::move(arg);
    return Init_LinkInfoProto_has_parallel_road(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_is_toll
{
public:
  explicit Init_LinkInfoProto_is_toll(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_is_over_head is_toll(::deva_navi_msgs::msg::LinkInfoProto::_is_toll_type arg)
  {
    msg_.is_toll = std::move(arg);
    return Init_LinkInfoProto_is_over_head(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_ownership
{
public:
  explicit Init_LinkInfoProto_ownership(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_is_toll ownership(::deva_navi_msgs::msg::LinkInfoProto::_ownership_type arg)
  {
    msg_.ownership = std::move(arg);
    return Init_LinkInfoProto_is_toll(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_road_direction
{
public:
  explicit Init_LinkInfoProto_road_direction(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_ownership road_direction(::deva_navi_msgs::msg::LinkInfoProto::_road_direction_type arg)
  {
    msg_.road_direction = std::move(arg);
    return Init_LinkInfoProto_ownership(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_road_class
{
public:
  explicit Init_LinkInfoProto_road_class(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_road_direction road_class(::deva_navi_msgs::msg::LinkInfoProto::_road_class_type arg)
  {
    msg_.road_class = std::move(arg);
    return Init_LinkInfoProto_road_direction(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_formway
{
public:
  explicit Init_LinkInfoProto_formway(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_road_class formway(::deva_navi_msgs::msg::LinkInfoProto::_formway_type arg)
  {
    msg_.formway = std::move(arg);
    return Init_LinkInfoProto_road_class(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_link_type
{
public:
  explicit Init_LinkInfoProto_link_type(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_formway link_type(::deva_navi_msgs::msg::LinkInfoProto::_link_type_type arg)
  {
    msg_.link_type = std::move(arg);
    return Init_LinkInfoProto_formway(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_adcode
{
public:
  explicit Init_LinkInfoProto_adcode(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_link_type adcode(::deva_navi_msgs::msg::LinkInfoProto::_adcode_type arg)
  {
    msg_.adcode = std::move(arg);
    return Init_LinkInfoProto_link_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_assistant_action
{
public:
  explicit Init_LinkInfoProto_assistant_action(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_adcode assistant_action(::deva_navi_msgs::msg::LinkInfoProto::_assistant_action_type arg)
  {
    msg_.assistant_action = std::move(arg);
    return Init_LinkInfoProto_adcode(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_main_action
{
public:
  explicit Init_LinkInfoProto_main_action(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_assistant_action main_action(::deva_navi_msgs::msg::LinkInfoProto::_main_action_type arg)
  {
    msg_.main_action = std::move(arg);
    return Init_LinkInfoProto_assistant_action(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_link_direction
{
public:
  explicit Init_LinkInfoProto_link_direction(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_main_action link_direction(::deva_navi_msgs::msg::LinkInfoProto::_link_direction_type arg)
  {
    msg_.link_direction = std::move(arg);
    return Init_LinkInfoProto_main_action(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_urid
{
public:
  explicit Init_LinkInfoProto_urid(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_link_direction urid(::deva_navi_msgs::msg::LinkInfoProto::_urid_type arg)
  {
    msg_.urid = std::move(arg);
    return Init_LinkInfoProto_link_direction(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_topo_id_64
{
public:
  explicit Init_LinkInfoProto_topo_id_64(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_urid topo_id_64(::deva_navi_msgs::msg::LinkInfoProto::_topo_id_64_type arg)
  {
    msg_.topo_id_64 = std::move(arg);
    return Init_LinkInfoProto_urid(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_road_facilities
{
public:
  explicit Init_LinkInfoProto_road_facilities(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_topo_id_64 road_facilities(::deva_navi_msgs::msg::LinkInfoProto::_road_facilities_type arg)
  {
    msg_.road_facilities = std::move(arg);
    return Init_LinkInfoProto_topo_id_64(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_road_name
{
public:
  explicit Init_LinkInfoProto_road_name(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_road_facilities road_name(::deva_navi_msgs::msg::LinkInfoProto::_road_name_type arg)
  {
    msg_.road_name = std::move(arg);
    return Init_LinkInfoProto_road_facilities(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_static_travel_time
{
public:
  explicit Init_LinkInfoProto_static_travel_time(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_road_name static_travel_time(::deva_navi_msgs::msg::LinkInfoProto::_static_travel_time_type arg)
  {
    msg_.static_travel_time = std::move(arg);
    return Init_LinkInfoProto_road_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_travel_time
{
public:
  explicit Init_LinkInfoProto_travel_time(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_static_travel_time travel_time(::deva_navi_msgs::msg::LinkInfoProto::_travel_time_type arg)
  {
    msg_.travel_time = std::move(arg);
    return Init_LinkInfoProto_static_travel_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_length
{
public:
  explicit Init_LinkInfoProto_length(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_travel_time length(::deva_navi_msgs::msg::LinkInfoProto::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_LinkInfoProto_travel_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_link_index
{
public:
  explicit Init_LinkInfoProto_link_index(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_length link_index(::deva_navi_msgs::msg::LinkInfoProto::_link_index_type arg)
  {
    msg_.link_index = std::move(arg);
    return Init_LinkInfoProto_length(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_related_segment_index
{
public:
  explicit Init_LinkInfoProto_related_segment_index(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_link_index related_segment_index(::deva_navi_msgs::msg::LinkInfoProto::_related_segment_index_type arg)
  {
    msg_.related_segment_index = std::move(arg);
    return Init_LinkInfoProto_link_index(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_related_path_id
{
public:
  explicit Init_LinkInfoProto_related_path_id(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_related_segment_index related_path_id(::deva_navi_msgs::msg::LinkInfoProto::_related_path_id_type arg)
  {
    msg_.related_path_id = std::move(arg);
    return Init_LinkInfoProto_related_segment_index(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_is_valid
{
public:
  explicit Init_LinkInfoProto_is_valid(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_related_path_id is_valid(::deva_navi_msgs::msg::LinkInfoProto::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_LinkInfoProto_related_path_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_cameras
{
public:
  explicit Init_LinkInfoProto_cameras(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_is_valid cameras(::deva_navi_msgs::msg::LinkInfoProto::_cameras_type arg)
  {
    msg_.cameras = std::move(arg);
    return Init_LinkInfoProto_is_valid(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_gantry_infos
{
public:
  explicit Init_LinkInfoProto_gantry_infos(::deva_navi_msgs::msg::LinkInfoProto & msg)
  : msg_(msg)
  {}
  Init_LinkInfoProto_cameras gantry_infos(::deva_navi_msgs::msg::LinkInfoProto::_gantry_infos_type arg)
  {
    msg_.gantry_infos = std::move(arg);
    return Init_LinkInfoProto_cameras(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

class Init_LinkInfoProto_points
{
public:
  Init_LinkInfoProto_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkInfoProto_gantry_infos points(::deva_navi_msgs::msg::LinkInfoProto::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_LinkInfoProto_gantry_infos(msg_);
  }

private:
  ::deva_navi_msgs::msg::LinkInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::LinkInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_LinkInfoProto_points();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__BUILDER_HPP_
