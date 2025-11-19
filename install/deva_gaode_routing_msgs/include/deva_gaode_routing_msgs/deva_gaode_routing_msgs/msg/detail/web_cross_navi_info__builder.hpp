// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebCrossNaviInfo_via_num
{
public:
  explicit Init_WebCrossNaviInfo_via_num(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo via_num(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_via_num_type arg)
  {
    msg_.via_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_tunnel_flag
{
public:
  explicit Init_WebCrossNaviInfo_tunnel_flag(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_via_num tunnel_flag(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_tunnel_flag_type arg)
  {
    msg_.tunnel_flag = std::move(arg);
    return Init_WebCrossNaviInfo_via_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_seg_idx
{
public:
  explicit Init_WebCrossNaviInfo_seg_idx(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_tunnel_flag seg_idx(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_seg_idx_type arg)
  {
    msg_.seg_idx = std::move(arg);
    return Init_WebCrossNaviInfo_tunnel_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_reversed
{
public:
  explicit Init_WebCrossNaviInfo_reversed(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_seg_idx reversed(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_reversed_type arg)
  {
    msg_.reversed = std::move(arg);
    return Init_WebCrossNaviInfo_seg_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_rev
{
public:
  explicit Init_WebCrossNaviInfo_rev(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_reversed rev(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_rev_type arg)
  {
    msg_.rev = std::move(arg);
    return Init_WebCrossNaviInfo_reversed(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_path_id
{
public:
  explicit Init_WebCrossNaviInfo_path_id(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_rev path_id(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_path_id_type arg)
  {
    msg_.path_id = std::move(arg);
    return Init_WebCrossNaviInfo_rev(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_out_cnt
{
public:
  explicit Init_WebCrossNaviInfo_out_cnt(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_path_id out_cnt(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_out_cnt_type arg)
  {
    msg_.out_cnt = std::move(arg);
    return Init_WebCrossNaviInfo_path_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_next_road_name
{
public:
  explicit Init_WebCrossNaviInfo_next_road_name(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_out_cnt next_road_name(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_next_road_name_type arg)
  {
    msg_.next_road_name = std::move(arg);
    return Init_WebCrossNaviInfo_out_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_maneuver_id
{
public:
  explicit Init_WebCrossNaviInfo_maneuver_id(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_next_road_name maneuver_id(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_maneuver_id_type arg)
  {
    msg_.maneuver_id = std::move(arg);
    return Init_WebCrossNaviInfo_next_road_name(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_main_action
{
public:
  explicit Init_WebCrossNaviInfo_main_action(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_maneuver_id main_action(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_main_action_type arg)
  {
    msg_.main_action = std::move(arg);
    return Init_WebCrossNaviInfo_maneuver_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_dest_direction
{
public:
  explicit Init_WebCrossNaviInfo_dest_direction(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_main_action dest_direction(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_dest_direction_type arg)
  {
    msg_.dest_direction = std::move(arg);
    return Init_WebCrossNaviInfo_main_action(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_cur_to_segment_time
{
public:
  explicit Init_WebCrossNaviInfo_cur_to_segment_time(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_dest_direction cur_to_segment_time(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_cur_to_segment_time_type arg)
  {
    msg_.cur_to_segment_time = std::move(arg);
    return Init_WebCrossNaviInfo_dest_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_cur_to_segment_dist
{
public:
  explicit Init_WebCrossNaviInfo_cur_to_segment_dist(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_cur_to_segment_time cur_to_segment_dist(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_cur_to_segment_dist_type arg)
  {
    msg_.cur_to_segment_dist = std::move(arg);
    return Init_WebCrossNaviInfo_cur_to_segment_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_cross_maneuver_id
{
public:
  explicit Init_WebCrossNaviInfo_cross_maneuver_id(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
  : msg_(msg)
  {}
  Init_WebCrossNaviInfo_cur_to_segment_dist cross_maneuver_id(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_cross_maneuver_id_type arg)
  {
    msg_.cross_maneuver_id = std::move(arg);
    return Init_WebCrossNaviInfo_cur_to_segment_dist(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

class Init_WebCrossNaviInfo_assist_action
{
public:
  Init_WebCrossNaviInfo_assist_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebCrossNaviInfo_cross_maneuver_id assist_action(::deva_gaode_routing_msgs::msg::WebCrossNaviInfo::_assist_action_type arg)
  {
    msg_.assist_action = std::move(arg);
    return Init_WebCrossNaviInfo_cross_maneuver_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossNaviInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebCrossNaviInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebCrossNaviInfo_assist_action();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__BUILDER_HPP_
