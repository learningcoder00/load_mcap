// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_AmapPathInfoProto_main_route_remain_toll_cost
{
public:
  explicit Init_AmapPathInfoProto_main_route_remain_toll_cost(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::AmapPathInfoProto main_route_remain_toll_cost(::deva_navi_msgs::msg::AmapPathInfoProto::_main_route_remain_toll_cost_type arg)
  {
    msg_.main_route_remain_toll_cost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_remain_toll_cost
{
public:
  explicit Init_AmapPathInfoProto_remain_toll_cost(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_main_route_remain_toll_cost remain_toll_cost(::deva_navi_msgs::msg::AmapPathInfoProto::_remain_toll_cost_type arg)
  {
    msg_.remain_toll_cost = std::move(arg);
    return Init_AmapPathInfoProto_main_route_remain_toll_cost(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_path_description_info
{
public:
  explicit Init_AmapPathInfoProto_path_description_info(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_remain_toll_cost path_description_info(::deva_navi_msgs::msg::AmapPathInfoProto::_path_description_info_type arg)
  {
    msg_.path_description_info = std::move(arg);
    return Init_AmapPathInfoProto_remain_toll_cost(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_elec_path_info
{
public:
  explicit Init_AmapPathInfoProto_elec_path_info(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_path_description_info elec_path_info(::deva_navi_msgs::msg::AmapPathInfoProto::_elec_path_info_type arg)
  {
    msg_.elec_path_info = std::move(arg);
    return Init_AmapPathInfoProto_path_description_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_route_type
{
public:
  explicit Init_AmapPathInfoProto_route_type(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_elec_path_info route_type(::deva_navi_msgs::msg::AmapPathInfoProto::_route_type_type arg)
  {
    msg_.route_type = std::move(arg);
    return Init_AmapPathInfoProto_elec_path_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_normal_plan_time
{
public:
  explicit Init_AmapPathInfoProto_normal_plan_time(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_route_type normal_plan_time(::deva_navi_msgs::msg::AmapPathInfoProto::_normal_plan_time_type arg)
  {
    msg_.normal_plan_time = std::move(arg);
    return Init_AmapPathInfoProto_route_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_data_version
{
public:
  explicit Init_AmapPathInfoProto_data_version(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_normal_plan_time data_version(::deva_navi_msgs::msg::AmapPathInfoProto::_data_version_type arg)
  {
    msg_.data_version = std::move(arg);
    return Init_AmapPathInfoProto_normal_plan_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_is_truck_path
{
public:
  explicit Init_AmapPathInfoProto_is_truck_path(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_data_version is_truck_path(::deva_navi_msgs::msg::AmapPathInfoProto::_is_truck_path_type arg)
  {
    msg_.is_truck_path = std::move(arg);
    return Init_AmapPathInfoProto_data_version(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_is_holiday_free
{
public:
  explicit Init_AmapPathInfoProto_is_holiday_free(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_is_truck_path is_holiday_free(::deva_navi_msgs::msg::AmapPathInfoProto::_is_holiday_free_type arg)
  {
    msg_.is_holiday_free = std::move(arg);
    return Init_AmapPathInfoProto_is_truck_path(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_end_direction
{
public:
  explicit Init_AmapPathInfoProto_end_direction(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_is_holiday_free end_direction(::deva_navi_msgs::msg::AmapPathInfoProto::_end_direction_type arg)
  {
    msg_.end_direction = std::move(arg);
    return Init_AmapPathInfoProto_is_holiday_free(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_tip
{
public:
  explicit Init_AmapPathInfoProto_tip(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_end_direction tip(::deva_navi_msgs::msg::AmapPathInfoProto::_tip_type arg)
  {
    msg_.tip = std::move(arg);
    return Init_AmapPathInfoProto_end_direction(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_end_poi
{
public:
  explicit Init_AmapPathInfoProto_end_poi(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_tip end_poi(::deva_navi_msgs::msg::AmapPathInfoProto::_end_poi_type arg)
  {
    msg_.end_poi = std::move(arg);
    return Init_AmapPathInfoProto_tip(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_restriction_info
{
public:
  explicit Init_AmapPathInfoProto_restriction_info(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_end_poi restriction_info(::deva_navi_msgs::msg::AmapPathInfoProto::_restriction_info_type arg)
  {
    msg_.restriction_info = std::move(arg);
    return Init_AmapPathInfoProto_end_poi(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_group_segments
{
public:
  explicit Init_AmapPathInfoProto_group_segments(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_restriction_info group_segments(::deva_navi_msgs::msg::AmapPathInfoProto::_group_segments_type arg)
  {
    msg_.group_segments = std::move(arg);
    return Init_AmapPathInfoProto_restriction_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_is_online
{
public:
  explicit Init_AmapPathInfoProto_is_online(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_group_segments is_online(::deva_navi_msgs::msg::AmapPathInfoProto::_is_online_type arg)
  {
    msg_.is_online = std::move(arg);
    return Init_AmapPathInfoProto_group_segments(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_navi_id
{
public:
  explicit Init_AmapPathInfoProto_navi_id(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_is_online navi_id(::deva_navi_msgs::msg::AmapPathInfoProto::_navi_id_type arg)
  {
    msg_.navi_id = std::move(arg);
    return Init_AmapPathInfoProto_is_online(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_toll_cost
{
public:
  explicit Init_AmapPathInfoProto_toll_cost(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_navi_id toll_cost(::deva_navi_msgs::msg::AmapPathInfoProto::_toll_cost_type arg)
  {
    msg_.toll_cost = std::move(arg);
    return Init_AmapPathInfoProto_navi_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_static_travel_time
{
public:
  explicit Init_AmapPathInfoProto_static_travel_time(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_toll_cost static_travel_time(::deva_navi_msgs::msg::AmapPathInfoProto::_static_travel_time_type arg)
  {
    msg_.static_travel_time = std::move(arg);
    return Init_AmapPathInfoProto_toll_cost(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_travel_time
{
public:
  explicit Init_AmapPathInfoProto_travel_time(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_static_travel_time travel_time(::deva_navi_msgs::msg::AmapPathInfoProto::_travel_time_type arg)
  {
    msg_.travel_time = std::move(arg);
    return Init_AmapPathInfoProto_static_travel_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_strategy
{
public:
  explicit Init_AmapPathInfoProto_strategy(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_travel_time strategy(::deva_navi_msgs::msg::AmapPathInfoProto::_strategy_type arg)
  {
    msg_.strategy = std::move(arg);
    return Init_AmapPathInfoProto_travel_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_length
{
public:
  explicit Init_AmapPathInfoProto_length(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_strategy length(::deva_navi_msgs::msg::AmapPathInfoProto::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_AmapPathInfoProto_strategy(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_type
{
public:
  explicit Init_AmapPathInfoProto_type(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_length type(::deva_navi_msgs::msg::AmapPathInfoProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AmapPathInfoProto_length(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_path_id
{
public:
  explicit Init_AmapPathInfoProto_path_id(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_type path_id(::deva_navi_msgs::msg::AmapPathInfoProto::_path_id_type arg)
  {
    msg_.path_id = std::move(arg);
    return Init_AmapPathInfoProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_is_valid
{
public:
  explicit Init_AmapPathInfoProto_is_valid(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_path_id is_valid(::deva_navi_msgs::msg::AmapPathInfoProto::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_AmapPathInfoProto_path_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_offline_req_custom_identity_id
{
public:
  explicit Init_AmapPathInfoProto_offline_req_custom_identity_id(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_is_valid offline_req_custom_identity_id(::deva_navi_msgs::msg::AmapPathInfoProto::_offline_req_custom_identity_id_type arg)
  {
    msg_.offline_req_custom_identity_id = std::move(arg);
    return Init_AmapPathInfoProto_is_valid(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_plan_channel_id
{
public:
  explicit Init_AmapPathInfoProto_plan_channel_id(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_offline_req_custom_identity_id plan_channel_id(::deva_navi_msgs::msg::AmapPathInfoProto::_plan_channel_id_type arg)
  {
    msg_.plan_channel_id = std::move(arg);
    return Init_AmapPathInfoProto_offline_req_custom_identity_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_odd_seg_infos
{
public:
  explicit Init_AmapPathInfoProto_odd_seg_infos(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_plan_channel_id odd_seg_infos(::deva_navi_msgs::msg::AmapPathInfoProto::_odd_seg_infos_type arg)
  {
    msg_.odd_seg_infos = std::move(arg);
    return Init_AmapPathInfoProto_plan_channel_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_charge_station_info
{
public:
  explicit Init_AmapPathInfoProto_charge_station_info(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_odd_seg_infos charge_station_info(::deva_navi_msgs::msg::AmapPathInfoProto::_charge_station_info_type arg)
  {
    msg_.charge_station_info = std::move(arg);
    return Init_AmapPathInfoProto_odd_seg_infos(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_via_point_info
{
public:
  explicit Init_AmapPathInfoProto_via_point_info(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_charge_station_info via_point_info(::deva_navi_msgs::msg::AmapPathInfoProto::_via_point_info_type arg)
  {
    msg_.via_point_info = std::move(arg);
    return Init_AmapPathInfoProto_charge_station_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_city_adcode_list
{
public:
  explicit Init_AmapPathInfoProto_city_adcode_list(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_via_point_info city_adcode_list(::deva_navi_msgs::msg::AmapPathInfoProto::_city_adcode_list_type arg)
  {
    msg_.city_adcode_list = std::move(arg);
    return Init_AmapPathInfoProto_via_point_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_line_icon_points
{
public:
  explicit Init_AmapPathInfoProto_line_icon_points(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_city_adcode_list line_icon_points(::deva_navi_msgs::msg::AmapPathInfoProto::_line_icon_points_type arg)
  {
    msg_.line_icon_points = std::move(arg);
    return Init_AmapPathInfoProto_city_adcode_list(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_segment_infos
{
public:
  explicit Init_AmapPathInfoProto_segment_infos(::deva_navi_msgs::msg::AmapPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapPathInfoProto_line_icon_points segment_infos(::deva_navi_msgs::msg::AmapPathInfoProto::_segment_infos_type arg)
  {
    msg_.segment_infos = std::move(arg);
    return Init_AmapPathInfoProto_line_icon_points(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

class Init_AmapPathInfoProto_all_3d_traffic_lights
{
public:
  Init_AmapPathInfoProto_all_3d_traffic_lights()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmapPathInfoProto_segment_infos all_3d_traffic_lights(::deva_navi_msgs::msg::AmapPathInfoProto::_all_3d_traffic_lights_type arg)
  {
    msg_.all_3d_traffic_lights = std::move(arg);
    return Init_AmapPathInfoProto_segment_infos(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapPathInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::AmapPathInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_AmapPathInfoProto_all_3d_traffic_lights();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__BUILDER_HPP_
