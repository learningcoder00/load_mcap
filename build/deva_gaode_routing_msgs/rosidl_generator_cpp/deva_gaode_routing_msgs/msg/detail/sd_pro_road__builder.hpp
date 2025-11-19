// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProRoad_cross_point
{
public:
  explicit Init_SdProRoad_cross_point(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProRoad cross_point(::deva_gaode_routing_msgs::msg::SdProRoad::_cross_point_type arg)
  {
    msg_.cross_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_restriction
{
public:
  explicit Init_SdProRoad_restriction(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_cross_point restriction(::deva_gaode_routing_msgs::msg::SdProRoad::_restriction_type arg)
  {
    msg_.restriction = std::move(arg);
    return Init_SdProRoad_cross_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_road_name
{
public:
  explicit Init_SdProRoad_road_name(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_restriction road_name(::deva_gaode_routing_msgs::msg::SdProRoad::_road_name_type arg)
  {
    msg_.road_name = std::move(arg);
    return Init_SdProRoad_restriction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_joint_type
{
public:
  explicit Init_SdProRoad_joint_type(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_road_name joint_type(::deva_gaode_routing_msgs::msg::SdProRoad::_joint_type_type arg)
  {
    msg_.joint_type = std::move(arg);
    return Init_SdProRoad_road_name(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_e_node_id
{
public:
  explicit Init_SdProRoad_e_node_id(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_joint_type e_node_id(::deva_gaode_routing_msgs::msg::SdProRoad::_e_node_id_type arg)
  {
    msg_.e_node_id = std::move(arg);
    return Init_SdProRoad_joint_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_s_node_id
{
public:
  explicit Init_SdProRoad_s_node_id(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_e_node_id s_node_id(::deva_gaode_routing_msgs::msg::SdProRoad::_s_node_id_type arg)
  {
    msg_.s_node_id = std::move(arg);
    return Init_SdProRoad_e_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_trfc_signs
{
public:
  explicit Init_SdProRoad_trfc_signs(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_s_node_id trfc_signs(::deva_gaode_routing_msgs::msg::SdProRoad::_trfc_signs_type arg)
  {
    msg_.trfc_signs = std::move(arg);
    return Init_SdProRoad_s_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_lane_connect
{
public:
  explicit Init_SdProRoad_lane_connect(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_trfc_signs lane_connect(::deva_gaode_routing_msgs::msg::SdProRoad::_lane_connect_type arg)
  {
    msg_.lane_connect = std::move(arg);
    return Init_SdProRoad_trfc_signs(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_product_type
{
public:
  explicit Init_SdProRoad_product_type(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_lane_connect product_type(::deva_gaode_routing_msgs::msg::SdProRoad::_product_type_type arg)
  {
    msg_.product_type = std::move(arg);
    return Init_SdProRoad_lane_connect(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_pre_ids
{
public:
  explicit Init_SdProRoad_pre_ids(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_product_type pre_ids(::deva_gaode_routing_msgs::msg::SdProRoad::_pre_ids_type arg)
  {
    msg_.pre_ids = std::move(arg);
    return Init_SdProRoad_product_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_next_ids
{
public:
  explicit Init_SdProRoad_next_ids(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_pre_ids next_ids(::deva_gaode_routing_msgs::msg::SdProRoad::_next_ids_type arg)
  {
    msg_.next_ids = std::move(arg);
    return Init_SdProRoad_pre_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_lanes
{
public:
  explicit Init_SdProRoad_lanes(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_next_ids lanes(::deva_gaode_routing_msgs::msg::SdProRoad::_lanes_type arg)
  {
    msg_.lanes = std::move(arg);
    return Init_SdProRoad_next_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_geo
{
public:
  explicit Init_SdProRoad_geo(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_lanes geo(::deva_gaode_routing_msgs::msg::SdProRoad::_geo_type arg)
  {
    msg_.geo = std::move(arg);
    return Init_SdProRoad_lanes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_end_angle
{
public:
  explicit Init_SdProRoad_end_angle(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_geo end_angle(::deva_gaode_routing_msgs::msg::SdProRoad::_end_angle_type arg)
  {
    msg_.end_angle = std::move(arg);
    return Init_SdProRoad_geo(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_start_angle
{
public:
  explicit Init_SdProRoad_start_angle(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_end_angle start_angle(::deva_gaode_routing_msgs::msg::SdProRoad::_start_angle_type arg)
  {
    msg_.start_angle = std::move(arg);
    return Init_SdProRoad_end_angle(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_speed_limit_max
{
public:
  explicit Init_SdProRoad_speed_limit_max(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_start_angle speed_limit_max(::deva_gaode_routing_msgs::msg::SdProRoad::_speed_limit_max_type arg)
  {
    msg_.speed_limit_max = std::move(arg);
    return Init_SdProRoad_start_angle(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_speed_limit_min
{
public:
  explicit Init_SdProRoad_speed_limit_min(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_speed_limit_max speed_limit_min(::deva_gaode_routing_msgs::msg::SdProRoad::_speed_limit_min_type arg)
  {
    msg_.speed_limit_min = std::move(arg);
    return Init_SdProRoad_speed_limit_max(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_length
{
public:
  explicit Init_SdProRoad_length(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_speed_limit_min length(::deva_gaode_routing_msgs::msg::SdProRoad::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_SdProRoad_speed_limit_min(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_lane_count
{
public:
  explicit Init_SdProRoad_lane_count(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_length lane_count(::deva_gaode_routing_msgs::msg::SdProRoad::_lane_count_type arg)
  {
    msg_.lane_count = std::move(arg);
    return Init_SdProRoad_length(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_forms
{
public:
  explicit Init_SdProRoad_forms(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_lane_count forms(::deva_gaode_routing_msgs::msg::SdProRoad::_forms_type arg)
  {
    msg_.forms = std::move(arg);
    return Init_SdProRoad_lane_count(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_direction
{
public:
  explicit Init_SdProRoad_direction(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_forms direction(::deva_gaode_routing_msgs::msg::SdProRoad::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_SdProRoad_forms(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_road_kind
{
public:
  explicit Init_SdProRoad_road_kind(::deva_gaode_routing_msgs::msg::SdProRoad & msg)
  : msg_(msg)
  {}
  Init_SdProRoad_direction road_kind(::deva_gaode_routing_msgs::msg::SdProRoad::_road_kind_type arg)
  {
    msg_.road_kind = std::move(arg);
    return Init_SdProRoad_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

class Init_SdProRoad_id
{
public:
  Init_SdProRoad_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProRoad_road_kind id(::deva_gaode_routing_msgs::msg::SdProRoad::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SdProRoad_road_kind(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProRoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProRoad>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProRoad_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__BUILDER_HPP_
