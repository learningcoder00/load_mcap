// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionRoadEdge_rearright
{
public:
  explicit Init_SFFusionRoadEdge_rearright(::deva_aeb_msgs::msg::SFFusionRoadEdge & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionRoadEdge rearright(::deva_aeb_msgs::msg::SFFusionRoadEdge::_rearright_type arg)
  {
    msg_.rearright = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadEdge msg_;
};

class Init_SFFusionRoadEdge_rearleft
{
public:
  explicit Init_SFFusionRoadEdge_rearleft(::deva_aeb_msgs::msg::SFFusionRoadEdge & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadEdge_rearright rearleft(::deva_aeb_msgs::msg::SFFusionRoadEdge::_rearleft_type arg)
  {
    msg_.rearleft = std::move(arg);
    return Init_SFFusionRoadEdge_rearright(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadEdge msg_;
};

class Init_SFFusionRoadEdge_frontright
{
public:
  explicit Init_SFFusionRoadEdge_frontright(::deva_aeb_msgs::msg::SFFusionRoadEdge & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadEdge_rearleft frontright(::deva_aeb_msgs::msg::SFFusionRoadEdge::_frontright_type arg)
  {
    msg_.frontright = std::move(arg);
    return Init_SFFusionRoadEdge_rearleft(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadEdge msg_;
};

class Init_SFFusionRoadEdge_frontleft
{
public:
  explicit Init_SFFusionRoadEdge_frontleft(::deva_aeb_msgs::msg::SFFusionRoadEdge & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadEdge_frontright frontleft(::deva_aeb_msgs::msg::SFFusionRoadEdge::_frontleft_type arg)
  {
    msg_.frontleft = std::move(arg);
    return Init_SFFusionRoadEdge_frontright(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadEdge msg_;
};

class Init_SFFusionRoadEdge_framenum
{
public:
  explicit Init_SFFusionRoadEdge_framenum(::deva_aeb_msgs::msg::SFFusionRoadEdge & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadEdge_frontleft framenum(::deva_aeb_msgs::msg::SFFusionRoadEdge::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionRoadEdge_frontleft(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadEdge msg_;
};

class Init_SFFusionRoadEdge_timestamp
{
public:
  Init_SFFusionRoadEdge_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionRoadEdge_framenum timestamp(::deva_aeb_msgs::msg::SFFusionRoadEdge::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionRoadEdge_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionRoadEdge>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionRoadEdge_timestamp();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__BUILDER_HPP_
