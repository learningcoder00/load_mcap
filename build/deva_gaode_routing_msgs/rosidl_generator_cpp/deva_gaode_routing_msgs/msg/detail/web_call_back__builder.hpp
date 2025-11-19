// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_call_back__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebCallBack_cur_cross_dist
{
public:
  explicit Init_WebCallBack_cur_cross_dist(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebCallBack cur_cross_dist(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_cross_dist_type arg)
  {
    msg_.cur_cross_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_cross_dir
{
public:
  explicit Init_WebCallBack_cur_cross_dir(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_cross_dist cur_cross_dir(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_cross_dir_type arg)
  {
    msg_.cur_cross_dir = std::move(arg);
    return Init_WebCallBack_cur_cross_dist(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cross_image
{
public:
  explicit Init_WebCallBack_cross_image(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_cross_dir cross_image(::deva_gaode_routing_msgs::msg::WebCallBack::_cross_image_type arg)
  {
    msg_.cross_image = std::move(arg);
    return Init_WebCallBack_cur_cross_dir(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_road_limit_speed
{
public:
  explicit Init_WebCallBack_cur_road_limit_speed(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cross_image cur_road_limit_speed(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_road_limit_speed_type arg)
  {
    msg_.cur_road_limit_speed = std::move(arg);
    return Init_WebCallBack_cross_image(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_ownership
{
public:
  explicit Init_WebCallBack_ownership(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_road_limit_speed ownership(::deva_gaode_routing_msgs::msg::WebCallBack::_ownership_type arg)
  {
    msg_.ownership = std::move(arg);
    return Init_WebCallBack_cur_road_limit_speed(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_parallel_road
{
public:
  explicit Init_WebCallBack_parallel_road(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_ownership parallel_road(::deva_gaode_routing_msgs::msg::WebCallBack::_parallel_road_type arg)
  {
    msg_.parallel_road = std::move(arg);
    return Init_WebCallBack_ownership(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_traffic_light_cd
{
public:
  explicit Init_WebCallBack_traffic_light_cd(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_parallel_road traffic_light_cd(::deva_gaode_routing_msgs::msg::WebCallBack::_traffic_light_cd_type arg)
  {
    msg_.traffic_light_cd = std::move(arg);
    return Init_WebCallBack_parallel_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_next_cross_info
{
public:
  explicit Init_WebCallBack_next_cross_info(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_traffic_light_cd next_cross_info(::deva_gaode_routing_msgs::msg::WebCallBack::_next_cross_info_type arg)
  {
    msg_.next_cross_info = std::move(arg);
    return Init_WebCallBack_traffic_light_cd(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cross_maneuver_id
{
public:
  explicit Init_WebCallBack_cross_maneuver_id(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_next_cross_info cross_maneuver_id(::deva_gaode_routing_msgs::msg::WebCallBack::_cross_maneuver_id_type arg)
  {
    msg_.cross_maneuver_id = std::move(arg);
    return Init_WebCallBack_next_cross_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_not_avoid_info
{
public:
  explicit Init_WebCallBack_not_avoid_info(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cross_maneuver_id not_avoid_info(::deva_gaode_routing_msgs::msg::WebCallBack::_not_avoid_info_type arg)
  {
    msg_.not_avoid_info = std::move(arg);
    return Init_WebCallBack_cross_maneuver_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_link_speed
{
public:
  explicit Init_WebCallBack_cur_link_speed(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_not_avoid_info cur_link_speed(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_link_speed_type arg)
  {
    msg_.cur_link_speed = std::move(arg);
    return Init_WebCallBack_not_avoid_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_roundabout_out_angle
{
public:
  explicit Init_WebCallBack_roundabout_out_angle(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_link_speed roundabout_out_angle(::deva_gaode_routing_msgs::msg::WebCallBack::_roundabout_out_angle_type arg)
  {
    msg_.roundabout_out_angle = std::move(arg);
    return Init_WebCallBack_cur_link_speed(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_ring_out_cnt
{
public:
  explicit Init_WebCallBack_ring_out_cnt(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_roundabout_out_angle ring_out_cnt(::deva_gaode_routing_msgs::msg::WebCallBack::_ring_out_cnt_type arg)
  {
    msg_.ring_out_cnt = std::move(arg);
    return Init_WebCallBack_roundabout_out_angle(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_camera_callback
{
public:
  explicit Init_WebCallBack_camera_callback(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_ring_out_cnt camera_callback(::deva_gaode_routing_msgs::msg::WebCallBack::_camera_callback_type arg)
  {
    msg_.camera_callback = std::move(arg);
    return Init_WebCallBack_ring_out_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_lane_info
{
public:
  explicit Init_WebCallBack_lane_info(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_camera_callback lane_info(::deva_gaode_routing_msgs::msg::WebCallBack::_lane_info_type arg)
  {
    msg_.lane_info = std::move(arg);
    return Init_WebCallBack_camera_callback(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_trun_icon_retain_dis
{
public:
  explicit Init_WebCallBack_trun_icon_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_lane_info trun_icon_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack::_trun_icon_retain_dis_type arg)
  {
    msg_.trun_icon_retain_dis = std::move(arg);
    return Init_WebCallBack_lane_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_trun_icon
{
public:
  explicit Init_WebCallBack_trun_icon(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_trun_icon_retain_dis trun_icon(::deva_gaode_routing_msgs::msg::WebCallBack::_trun_icon_type arg)
  {
    msg_.trun_icon = std::move(arg);
    return Init_WebCallBack_trun_icon_retain_dis(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_path_retain_time
{
public:
  explicit Init_WebCallBack_path_retain_time(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_trun_icon path_retain_time(::deva_gaode_routing_msgs::msg::WebCallBack::_path_retain_time_type arg)
  {
    msg_.path_retain_time = std::move(arg);
    return Init_WebCallBack_trun_icon(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_path_retain_dis
{
public:
  explicit Init_WebCallBack_path_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_path_retain_time path_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack::_path_retain_dis_type arg)
  {
    msg_.path_retain_dis = std::move(arg);
    return Init_WebCallBack_path_retain_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_via_retain_dis
{
public:
  explicit Init_WebCallBack_via_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_path_retain_dis via_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack::_via_retain_dis_type arg)
  {
    msg_.via_retain_dis = std::move(arg);
    return Init_WebCallBack_path_retain_dis(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_step_retain_time
{
public:
  explicit Init_WebCallBack_cur_step_retain_time(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_via_retain_dis cur_step_retain_time(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_step_retain_time_type arg)
  {
    msg_.cur_step_retain_time = std::move(arg);
    return Init_WebCallBack_via_retain_dis(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_step_retain_dis
{
public:
  explicit Init_WebCallBack_cur_step_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_step_retain_time cur_step_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_step_retain_dis_type arg)
  {
    msg_.cur_step_retain_dis = std::move(arg);
    return Init_WebCallBack_cur_step_retain_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_road_retain_dis
{
public:
  explicit Init_WebCallBack_cur_road_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_step_retain_dis cur_road_retain_dis(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_road_retain_dis_type arg)
  {
    msg_.cur_road_retain_dis = std::move(arg);
    return Init_WebCallBack_cur_step_retain_dis(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_point
{
public:
  explicit Init_WebCallBack_cur_point(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_road_retain_dis cur_point(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_point_type arg)
  {
    msg_.cur_point = std::move(arg);
    return Init_WebCallBack_cur_road_retain_dis(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_road
{
public:
  explicit Init_WebCallBack_cur_road(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_point cur_road(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_road_type arg)
  {
    msg_.cur_road = std::move(arg);
    return Init_WebCallBack_cur_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_cur_step
{
public:
  explicit Init_WebCallBack_cur_step(::deva_gaode_routing_msgs::msg::WebCallBack & msg)
  : msg_(msg)
  {}
  Init_WebCallBack_cur_road cur_step(::deva_gaode_routing_msgs::msg::WebCallBack::_cur_step_type arg)
  {
    msg_.cur_step = std::move(arg);
    return Init_WebCallBack_cur_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

class Init_WebCallBack_index
{
public:
  Init_WebCallBack_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebCallBack_cur_step index(::deva_gaode_routing_msgs::msg::WebCallBack::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_WebCallBack_cur_step(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCallBack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebCallBack>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebCallBack_index();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__BUILDER_HPP_
