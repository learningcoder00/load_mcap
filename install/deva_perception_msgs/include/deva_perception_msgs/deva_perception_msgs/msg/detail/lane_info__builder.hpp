// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lane_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneInfo_md5
{
public:
  explicit Init_LaneInfo_md5(::deva_perception_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::LaneInfo md5(::deva_perception_msgs::msg::LaneInfo::_md5_type arg)
  {
    msg_.md5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_navi_turn
{
public:
  explicit Init_LaneInfo_navi_turn(::deva_perception_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_md5 navi_turn(::deva_perception_msgs::msg::LaneInfo::_navi_turn_type arg)
  {
    msg_.navi_turn = std::move(arg);
    return Init_LaneInfo_md5(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_actual_turn
{
public:
  explicit Init_LaneInfo_actual_turn(::deva_perception_msgs::msg::LaneInfo & msg)
  : msg_(msg)
  {}
  Init_LaneInfo_navi_turn actual_turn(::deva_perception_msgs::msg::LaneInfo::_actual_turn_type arg)
  {
    msg_.actual_turn = std::move(arg);
    return Init_LaneInfo_navi_turn(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneInfo msg_;
};

class Init_LaneInfo_lane_num
{
public:
  Init_LaneInfo_lane_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneInfo_actual_turn lane_num(::deva_perception_msgs::msg::LaneInfo::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_LaneInfo_actual_turn(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::LaneInfo>()
{
  return deva_perception_msgs::msg::builder::Init_LaneInfo_lane_num();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__BUILDER_HPP_
