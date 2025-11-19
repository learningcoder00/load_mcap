// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvInfo_highway_scene
{
public:
  explicit Init_EnvInfo_highway_scene(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvInfo highway_scene(::environment_model_msgs::msg::EnvInfo::_highway_scene_type arg)
  {
    msg_.highway_scene = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_scenario_info
{
public:
  explicit Init_EnvInfo_scenario_info(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_highway_scene scenario_info(::environment_model_msgs::msg::EnvInfo::_scenario_info_type arg)
  {
    msg_.scenario_info = std::move(arg);
    return Init_EnvInfo_highway_scene(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_road_boundaries
{
public:
  explicit Init_EnvInfo_road_boundaries(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_scenario_info road_boundaries(::environment_model_msgs::msg::EnvInfo::_road_boundaries_type arg)
  {
    msg_.road_boundaries = std::move(arg);
    return Init_EnvInfo_scenario_info(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_ownership
{
public:
  explicit Init_EnvInfo_ownership(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_road_boundaries ownership(::environment_model_msgs::msg::EnvInfo::_ownership_type arg)
  {
    msg_.ownership = std::move(arg);
    return Init_EnvInfo_road_boundaries(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_links
{
public:
  explicit Init_EnvInfo_links(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_ownership links(::environment_model_msgs::msg::EnvInfo::_links_type arg)
  {
    msg_.links = std::move(arg);
    return Init_EnvInfo_ownership(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_hdair_driveline
{
public:
  explicit Init_EnvInfo_hdair_driveline(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_links hdair_driveline(::environment_model_msgs::msg::EnvInfo::_hdair_driveline_type arg)
  {
    msg_.hdair_driveline = std::move(arg);
    return Init_EnvInfo_links(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_dist_sd_junction
{
public:
  explicit Init_EnvInfo_dist_sd_junction(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_hdair_driveline dist_sd_junction(::environment_model_msgs::msg::EnvInfo::_dist_sd_junction_type arg)
  {
    msg_.dist_sd_junction = std::move(arg);
    return Init_EnvInfo_hdair_driveline(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_channel_valid
{
public:
  explicit Init_EnvInfo_channel_valid(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_dist_sd_junction channel_valid(::environment_model_msgs::msg::EnvInfo::_channel_valid_type arg)
  {
    msg_.channel_valid = std::move(arg);
    return Init_EnvInfo_dist_sd_junction(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_meg_map_mode
{
public:
  explicit Init_EnvInfo_meg_map_mode(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_channel_valid meg_map_mode(::environment_model_msgs::msg::EnvInfo::_meg_map_mode_type arg)
  {
    msg_.meg_map_mode = std::move(arg);
    return Init_EnvInfo_channel_valid(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_law_space_merged
{
public:
  explicit Init_EnvInfo_law_space_merged(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_meg_map_mode law_space_merged(::environment_model_msgs::msg::EnvInfo::_law_space_merged_type arg)
  {
    msg_.law_space_merged = std::move(arg);
    return Init_EnvInfo_meg_map_mode(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_roadline
{
public:
  explicit Init_EnvInfo_roadline(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_law_space_merged roadline(::environment_model_msgs::msg::EnvInfo::_roadline_type arg)
  {
    msg_.roadline = std::move(arg);
    return Init_EnvInfo_law_space_merged(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_roadline_final
{
public:
  explicit Init_EnvInfo_roadline_final(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_roadline roadline_final(::environment_model_msgs::msg::EnvInfo::_roadline_final_type arg)
  {
    msg_.roadline_final = std::move(arg);
    return Init_EnvInfo_roadline(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_law_space
{
public:
  explicit Init_EnvInfo_law_space(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_roadline_final law_space(::environment_model_msgs::msg::EnvInfo::_law_space_type arg)
  {
    msg_.law_space = std::move(arg);
    return Init_EnvInfo_roadline_final(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_passable_space
{
public:
  explicit Init_EnvInfo_passable_space(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_law_space passable_space(::environment_model_msgs::msg::EnvInfo::_passable_space_type arg)
  {
    msg_.passable_space = std::move(arg);
    return Init_EnvInfo_law_space(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_has_map
{
public:
  explicit Init_EnvInfo_has_map(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_passable_space has_map(::environment_model_msgs::msg::EnvInfo::_has_map_type arg)
  {
    msg_.has_map = std::move(arg);
    return Init_EnvInfo_passable_space(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_navi_index
{
public:
  explicit Init_EnvInfo_navi_index(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_has_map navi_index(::environment_model_msgs::msg::EnvInfo::_navi_index_type arg)
  {
    msg_.navi_index = std::move(arg);
    return Init_EnvInfo_has_map(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_routing_mode
{
public:
  explicit Init_EnvInfo_routing_mode(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_navi_index routing_mode(::environment_model_msgs::msg::EnvInfo::_routing_mode_type arg)
  {
    msg_.routing_mode = std::move(arg);
    return Init_EnvInfo_navi_index(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_map_mode
{
public:
  explicit Init_EnvInfo_map_mode(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_routing_mode map_mode(::environment_model_msgs::msg::EnvInfo::_map_mode_type arg)
  {
    msg_.map_mode = std::move(arg);
    return Init_EnvInfo_routing_mode(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_map_header
{
public:
  explicit Init_EnvInfo_map_header(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_map_mode map_header(::environment_model_msgs::msg::EnvInfo::_map_header_type arg)
  {
    msg_.map_header = std::move(arg);
    return Init_EnvInfo_map_mode(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_env_start_header
{
public:
  explicit Init_EnvInfo_env_start_header(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_map_header env_start_header(::environment_model_msgs::msg::EnvInfo::_env_start_header_type arg)
  {
    msg_.env_start_header = std::move(arg);
    return Init_EnvInfo_map_header(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_junction_box
{
public:
  explicit Init_EnvInfo_junction_box(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_env_start_header junction_box(::environment_model_msgs::msg::EnvInfo::_junction_box_type arg)
  {
    msg_.junction_box = std::move(arg);
    return Init_EnvInfo_env_start_header(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_env_signals
{
public:
  explicit Init_EnvInfo_env_signals(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_junction_box env_signals(::environment_model_msgs::msg::EnvInfo::_env_signals_type arg)
  {
    msg_.env_signals = std::move(arg);
    return Init_EnvInfo_junction_box(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_env_objects
{
public:
  explicit Init_EnvInfo_env_objects(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_env_signals env_objects(::environment_model_msgs::msg::EnvInfo::_env_objects_type arg)
  {
    msg_.env_objects = std::move(arg);
    return Init_EnvInfo_env_signals(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_env_lines
{
public:
  explicit Init_EnvInfo_env_lines(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_env_objects env_lines(::environment_model_msgs::msg::EnvInfo::_env_lines_type arg)
  {
    msg_.env_lines = std::move(arg);
    return Init_EnvInfo_env_objects(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_index
{
public:
  explicit Init_EnvInfo_index(::environment_model_msgs::msg::EnvInfo & msg)
  : msg_(msg)
  {}
  Init_EnvInfo_env_lines index(::environment_model_msgs::msg::EnvInfo::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_EnvInfo_env_lines(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

class Init_EnvInfo_header
{
public:
  Init_EnvInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvInfo_index header(::environment_model_msgs::msg::EnvInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnvInfo_index(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvInfo>()
{
  return environment_model_msgs::msg::builder::Init_EnvInfo_header();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__BUILDER_HPP_
