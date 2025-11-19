// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvLine_usemdriver
{
public:
  explicit Init_EnvLine_usemdriver(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvLine usemdriver(::environment_model_msgs::msg::EnvLine::_usemdriver_type arg)
  {
    msg_.usemdriver = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_overwide_pairs
{
public:
  explicit Init_EnvLine_overwide_pairs(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_usemdriver overwide_pairs(::environment_model_msgs::msg::EnvLine::_overwide_pairs_type arg)
  {
    msg_.overwide_pairs = std::move(arg);
    return Init_EnvLine_usemdriver(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_midd_line_id
{
public:
  explicit Init_EnvLine_midd_line_id(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_overwide_pairs midd_line_id(::environment_model_msgs::msg::EnvLine::_midd_line_id_type arg)
  {
    msg_.midd_line_id = std::move(arg);
    return Init_EnvLine_overwide_pairs(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_virtual_line_to
{
public:
  explicit Init_EnvLine_virtual_line_to(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_midd_line_id virtual_line_to(::environment_model_msgs::msg::EnvLine::_virtual_line_to_type arg)
  {
    msg_.virtual_line_to = std::move(arg);
    return Init_EnvLine_midd_line_id(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_channel_id
{
public:
  explicit Init_EnvLine_channel_id(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_virtual_line_to channel_id(::environment_model_msgs::msg::EnvLine::_channel_id_type arg)
  {
    msg_.channel_id = std::move(arg);
    return Init_EnvLine_virtual_line_to(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_lane_seq_id
{
public:
  explicit Init_EnvLine_lane_seq_id(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_channel_id lane_seq_id(::environment_model_msgs::msg::EnvLine::_lane_seq_id_type arg)
  {
    msg_.lane_seq_id = std::move(arg);
    return Init_EnvLine_channel_id(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_lane_sequence
{
public:
  explicit Init_EnvLine_lane_sequence(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_lane_seq_id lane_sequence(::environment_model_msgs::msg::EnvLine::_lane_sequence_type arg)
  {
    msg_.lane_sequence = std::move(arg);
    return Init_EnvLine_lane_seq_id(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_lane_id
{
public:
  explicit Init_EnvLine_lane_id(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_lane_sequence lane_id(::environment_model_msgs::msg::EnvLine::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_EnvLine_lane_sequence(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_lane_offset
{
public:
  explicit Init_EnvLine_lane_offset(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_lane_id lane_offset(::environment_model_msgs::msg::EnvLine::_lane_offset_type arg)
  {
    msg_.lane_offset = std::move(arg);
    return Init_EnvLine_lane_id(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_right_road_bound_line
{
public:
  explicit Init_EnvLine_right_road_bound_line(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_lane_offset right_road_bound_line(::environment_model_msgs::msg::EnvLine::_right_road_bound_line_type arg)
  {
    msg_.right_road_bound_line = std::move(arg);
    return Init_EnvLine_lane_offset(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_left_road_bound_line
{
public:
  explicit Init_EnvLine_left_road_bound_line(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_right_road_bound_line left_road_bound_line(::environment_model_msgs::msg::EnvLine::_left_road_bound_line_type arg)
  {
    msg_.left_road_bound_line = std::move(arg);
    return Init_EnvLine_right_road_bound_line(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_virtual_line_infos
{
public:
  explicit Init_EnvLine_virtual_line_infos(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_left_road_bound_line virtual_line_infos(::environment_model_msgs::msg::EnvLine::_virtual_line_infos_type arg)
  {
    msg_.virtual_line_infos = std::move(arg);
    return Init_EnvLine_left_road_bound_line(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_navi_score
{
public:
  explicit Init_EnvLine_navi_score(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_virtual_line_infos navi_score(::environment_model_msgs::msg::EnvLine::_navi_score_type arg)
  {
    msg_.navi_score = std::move(arg);
    return Init_EnvLine_virtual_line_infos(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_object_infos
{
public:
  explicit Init_EnvLine_object_infos(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_navi_score object_infos(::environment_model_msgs::msg::EnvLine::_object_infos_type arg)
  {
    msg_.object_infos = std::move(arg);
    return Init_EnvLine_navi_score(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_signal_infos
{
public:
  explicit Init_EnvLine_signal_infos(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_object_infos signal_infos(::environment_model_msgs::msg::EnvLine::_signal_infos_type arg)
  {
    msg_.signal_infos = std::move(arg);
    return Init_EnvLine_object_infos(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_road_struct_type
{
public:
  explicit Init_EnvLine_road_struct_type(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_signal_infos road_struct_type(::environment_model_msgs::msg::EnvLine::_road_struct_type_type arg)
  {
    msg_.road_struct_type = std::move(arg);
    return Init_EnvLine_signal_infos(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_enum_road_struct_type
{
public:
  explicit Init_EnvLine_enum_road_struct_type(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_road_struct_type enum_road_struct_type(::environment_model_msgs::msg::EnvLine::_enum_road_struct_type_type arg)
  {
    msg_.enum_road_struct_type = std::move(arg);
    return Init_EnvLine_road_struct_type(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_right_ids_map
{
public:
  explicit Init_EnvLine_right_ids_map(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_enum_road_struct_type right_ids_map(::environment_model_msgs::msg::EnvLine::_right_ids_map_type arg)
  {
    msg_.right_ids_map = std::move(arg);
    return Init_EnvLine_enum_road_struct_type(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_left_ids_map
{
public:
  explicit Init_EnvLine_left_ids_map(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_right_ids_map left_ids_map(::environment_model_msgs::msg::EnvLine::_left_ids_map_type arg)
  {
    msg_.left_ids_map = std::move(arg);
    return Init_EnvLine_right_ids_map(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_lk_lines
{
public:
  explicit Init_EnvLine_lk_lines(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_left_ids_map lk_lines(::environment_model_msgs::msg::EnvLine::_lk_lines_type arg)
  {
    msg_.lk_lines = std::move(arg);
    return Init_EnvLine_left_ids_map(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_merge_pos
{
public:
  explicit Init_EnvLine_merge_pos(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_lk_lines merge_pos(::environment_model_msgs::msg::EnvLine::_merge_pos_type arg)
  {
    msg_.merge_pos = std::move(arg);
    return Init_EnvLine_lk_lines(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_split_lines
{
public:
  explicit Init_EnvLine_split_lines(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_merge_pos split_lines(::environment_model_msgs::msg::EnvLine::_split_lines_type arg)
  {
    msg_.split_lines = std::move(arg);
    return Init_EnvLine_merge_pos(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_merge_lines
{
public:
  explicit Init_EnvLine_merge_lines(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_split_lines merge_lines(::environment_model_msgs::msg::EnvLine::_merge_lines_type arg)
  {
    msg_.merge_lines = std::move(arg);
    return Init_EnvLine_split_lines(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_enum_turn_scenario
{
public:
  explicit Init_EnvLine_enum_turn_scenario(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_merge_lines enum_turn_scenario(::environment_model_msgs::msg::EnvLine::_enum_turn_scenario_type arg)
  {
    msg_.enum_turn_scenario = std::move(arg);
    return Init_EnvLine_merge_lines(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_is_reverse
{
public:
  explicit Init_EnvLine_is_reverse(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_enum_turn_scenario is_reverse(::environment_model_msgs::msg::EnvLine::_is_reverse_type arg)
  {
    msg_.is_reverse = std::move(arg);
    return Init_EnvLine_enum_turn_scenario(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_routing_status
{
public:
  explicit Init_EnvLine_routing_status(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_is_reverse routing_status(::environment_model_msgs::msg::EnvLine::_routing_status_type arg)
  {
    msg_.routing_status = std::move(arg);
    return Init_EnvLine_is_reverse(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_is_on_road
{
public:
  explicit Init_EnvLine_is_on_road(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_routing_status is_on_road(::environment_model_msgs::msg::EnvLine::_is_on_road_type arg)
  {
    msg_.is_on_road = std::move(arg);
    return Init_EnvLine_routing_status(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_ego_l
{
public:
  explicit Init_EnvLine_ego_l(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_is_on_road ego_l(::environment_model_msgs::msg::EnvLine::_ego_l_type arg)
  {
    msg_.ego_l = std::move(arg);
    return Init_EnvLine_is_on_road(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_ego_s
{
public:
  explicit Init_EnvLine_ego_s(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_ego_l ego_s(::environment_model_msgs::msg::EnvLine::_ego_s_type arg)
  {
    msg_.ego_s = std::move(arg);
    return Init_EnvLine_ego_l(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_perception_ids
{
public:
  explicit Init_EnvLine_perception_ids(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_ego_s perception_ids(::environment_model_msgs::msg::EnvLine::_perception_ids_type arg)
  {
    msg_.perception_ids = std::move(arg);
    return Init_EnvLine_ego_s(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_last_ids
{
public:
  explicit Init_EnvLine_last_ids(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_perception_ids last_ids(::environment_model_msgs::msg::EnvLine::_last_ids_type arg)
  {
    msg_.last_ids = std::move(arg);
    return Init_EnvLine_perception_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_id
{
public:
  explicit Init_EnvLine_id(::environment_model_msgs::msg::EnvLine & msg)
  : msg_(msg)
  {}
  Init_EnvLine_last_ids id(::environment_model_msgs::msg::EnvLine::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EnvLine_last_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

class Init_EnvLine_env_points
{
public:
  Init_EnvLine_env_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvLine_id env_points(::environment_model_msgs::msg::EnvLine::_env_points_type arg)
  {
    msg_.env_points = std::move(arg);
    return Init_EnvLine_id(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvLine>()
{
  return environment_model_msgs::msg::builder::Init_EnvLine_env_points();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__BUILDER_HPP_
