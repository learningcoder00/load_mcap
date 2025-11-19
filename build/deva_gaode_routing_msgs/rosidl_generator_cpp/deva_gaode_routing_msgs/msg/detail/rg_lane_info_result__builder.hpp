// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RGLaneInfoResult_pos
{
public:
  explicit Init_RGLaneInfoResult_pos(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult pos(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_lane_info_raw_link_ids
{
public:
  explicit Init_RGLaneInfoResult_lane_info_raw_link_ids(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  Init_RGLaneInfoResult_pos lane_info_raw_link_ids(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_lane_info_raw_link_ids_type arg)
  {
    msg_.lane_info_raw_link_ids = std::move(arg);
    return Init_RGLaneInfoResult_pos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_additional_lane_info
{
public:
  explicit Init_RGLaneInfoResult_additional_lane_info(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  Init_RGLaneInfoResult_lane_info_raw_link_ids additional_lane_info(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_additional_lane_info_type arg)
  {
    msg_.additional_lane_info = std::move(arg);
    return Init_RGLaneInfoResult_lane_info_raw_link_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_active_time
{
public:
  explicit Init_RGLaneInfoResult_active_time(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  Init_RGLaneInfoResult_additional_lane_info active_time(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_active_time_type arg)
  {
    msg_.active_time = std::move(arg);
    return Init_RGLaneInfoResult_additional_lane_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_recommend
{
public:
  explicit Init_RGLaneInfoResult_recommend(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  Init_RGLaneInfoResult_active_time recommend(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_recommend_type arg)
  {
    msg_.recommend = std::move(arg);
    return Init_RGLaneInfoResult_active_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_rg_lane_result_property
{
public:
  explicit Init_RGLaneInfoResult_rg_lane_result_property(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  Init_RGLaneInfoResult_recommend rg_lane_result_property(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_rg_lane_result_property_type arg)
  {
    msg_.rg_lane_result_property = std::move(arg);
    return Init_RGLaneInfoResult_recommend(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_flag
{
public:
  explicit Init_RGLaneInfoResult_flag(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  Init_RGLaneInfoResult_rg_lane_result_property flag(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_RGLaneInfoResult_rg_lane_result_property(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_arrow
{
public:
  explicit Init_RGLaneInfoResult_arrow(::deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
  : msg_(msg)
  {}
  Init_RGLaneInfoResult_flag arrow(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_arrow_type arg)
  {
    msg_.arrow = std::move(arg);
    return Init_RGLaneInfoResult_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

class Init_RGLaneInfoResult_raw_link_id
{
public:
  Init_RGLaneInfoResult_raw_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGLaneInfoResult_arrow raw_link_id(::deva_gaode_routing_msgs::msg::RGLaneInfoResult::_raw_link_id_type arg)
  {
    msg_.raw_link_id = std::move(arg);
    return Init_RGLaneInfoResult_arrow(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGLaneInfoResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RGLaneInfoResult>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RGLaneInfoResult_raw_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__BUILDER_HPP_
