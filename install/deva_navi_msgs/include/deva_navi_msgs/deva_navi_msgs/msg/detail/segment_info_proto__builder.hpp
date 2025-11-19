// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/segment_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_SegmentInfoProto_uturn_and_arrivedest
{
public:
  explicit Init_SegmentInfoProto_uturn_and_arrivedest(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::SegmentInfoProto uturn_and_arrivedest(::deva_navi_msgs::msg::SegmentInfoProto::_uturn_and_arrivedest_type arg)
  {
    msg_.uturn_and_arrivedest = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_maneuver_icons
{
public:
  explicit Init_SegmentInfoProto_maneuver_icons(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_uturn_and_arrivedest maneuver_icons(::deva_navi_msgs::msg::SegmentInfoProto::_maneuver_icons_type arg)
  {
    msg_.maneuver_icons = std::move(arg);
    return Init_SegmentInfoProto_uturn_and_arrivedest(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_crossing_name
{
public:
  explicit Init_SegmentInfoProto_crossing_name(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_maneuver_icons crossing_name(::deva_navi_msgs::msg::SegmentInfoProto::_crossing_name_type arg)
  {
    msg_.crossing_name = std::move(arg);
    return Init_SegmentInfoProto_maneuver_icons(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_exit_name
{
public:
  explicit Init_SegmentInfoProto_exit_name(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_crossing_name exit_name(::deva_navi_msgs::msg::SegmentInfoProto::_exit_name_type arg)
  {
    msg_.exit_name = std::move(arg);
    return Init_SegmentInfoProto_crossing_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_guideboard_name
{
public:
  explicit Init_SegmentInfoProto_guideboard_name(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_exit_name guideboard_name(::deva_navi_msgs::msg::SegmentInfoProto::_guideboard_name_type arg)
  {
    msg_.guideboard_name = std::move(arg);
    return Init_SegmentInfoProto_exit_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_toll_road_name
{
public:
  explicit Init_SegmentInfoProto_toll_road_name(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_guideboard_name toll_road_name(::deva_navi_msgs::msg::SegmentInfoProto::_toll_road_name_type arg)
  {
    msg_.toll_road_name = std::move(arg);
    return Init_SegmentInfoProto_guideboard_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_is_end_of_road
{
public:
  explicit Init_SegmentInfoProto_is_end_of_road(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_toll_road_name is_end_of_road(::deva_navi_msgs::msg::SegmentInfoProto::_is_end_of_road_type arg)
  {
    msg_.is_end_of_road = std::move(arg);
    return Init_SegmentInfoProto_toll_road_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_traffic_light_num
{
public:
  explicit Init_SegmentInfoProto_traffic_light_num(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_is_end_of_road traffic_light_num(::deva_navi_msgs::msg::SegmentInfoProto::_traffic_light_num_type arg)
  {
    msg_.traffic_light_num = std::move(arg);
    return Init_SegmentInfoProto_is_end_of_road(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_travel_time
{
public:
  explicit Init_SegmentInfoProto_travel_time(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_traffic_light_num travel_time(::deva_navi_msgs::msg::SegmentInfoProto::_travel_time_type arg)
  {
    msg_.travel_time = std::move(arg);
    return Init_SegmentInfoProto_traffic_light_num(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_toll_dist
{
public:
  explicit Init_SegmentInfoProto_toll_dist(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_travel_time toll_dist(::deva_navi_msgs::msg::SegmentInfoProto::_toll_dist_type arg)
  {
    msg_.toll_dist = std::move(arg);
    return Init_SegmentInfoProto_travel_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_toll_cost
{
public:
  explicit Init_SegmentInfoProto_toll_cost(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_toll_dist toll_cost(::deva_navi_msgs::msg::SegmentInfoProto::_toll_cost_type arg)
  {
    msg_.toll_cost = std::move(arg);
    return Init_SegmentInfoProto_toll_dist(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_length
{
public:
  explicit Init_SegmentInfoProto_length(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_toll_cost length(::deva_navi_msgs::msg::SegmentInfoProto::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_SegmentInfoProto_toll_cost(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_slope
{
public:
  explicit Init_SegmentInfoProto_slope(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_length slope(::deva_navi_msgs::msg::SegmentInfoProto::_slope_type arg)
  {
    msg_.slope = std::move(arg);
    return Init_SegmentInfoProto_length(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_assistant_action
{
public:
  explicit Init_SegmentInfoProto_assistant_action(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_slope assistant_action(::deva_navi_msgs::msg::SegmentInfoProto::_assistant_action_type arg)
  {
    msg_.assistant_action = std::move(arg);
    return Init_SegmentInfoProto_slope(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_main_action
{
public:
  explicit Init_SegmentInfoProto_main_action(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_assistant_action main_action(::deva_navi_msgs::msg::SegmentInfoProto::_main_action_type arg)
  {
    msg_.main_action = std::move(arg);
    return Init_SegmentInfoProto_assistant_action(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_segment_index
{
public:
  explicit Init_SegmentInfoProto_segment_index(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_main_action segment_index(::deva_navi_msgs::msg::SegmentInfoProto::_segment_index_type arg)
  {
    msg_.segment_index = std::move(arg);
    return Init_SegmentInfoProto_main_action(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_related_path_id
{
public:
  explicit Init_SegmentInfoProto_related_path_id(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_segment_index related_path_id(::deva_navi_msgs::msg::SegmentInfoProto::_related_path_id_type arg)
  {
    msg_.related_path_id = std::move(arg);
    return Init_SegmentInfoProto_segment_index(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_is_valid
{
public:
  explicit Init_SegmentInfoProto_is_valid(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_related_path_id is_valid(::deva_navi_msgs::msg::SegmentInfoProto::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_SegmentInfoProto_related_path_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_points
{
public:
  explicit Init_SegmentInfoProto_points(::deva_navi_msgs::msg::SegmentInfoProto & msg)
  : msg_(msg)
  {}
  Init_SegmentInfoProto_is_valid points(::deva_navi_msgs::msg::SegmentInfoProto::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_SegmentInfoProto_is_valid(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

class Init_SegmentInfoProto_link_infos
{
public:
  Init_SegmentInfoProto_link_infos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SegmentInfoProto_points link_infos(::deva_navi_msgs::msg::SegmentInfoProto::_link_infos_type arg)
  {
    msg_.link_infos = std::move(arg);
    return Init_SegmentInfoProto_points(msg_);
  }

private:
  ::deva_navi_msgs::msg::SegmentInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::SegmentInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_SegmentInfoProto_link_infos();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__BUILDER_HPP_
