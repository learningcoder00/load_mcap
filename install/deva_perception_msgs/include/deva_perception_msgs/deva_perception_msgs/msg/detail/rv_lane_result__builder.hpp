// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RvLaneResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_lane_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RvLaneResult_crosswalk_2d_array
{
public:
  explicit Init_RvLaneResult_crosswalk_2d_array(::deva_perception_msgs::msg::RvLaneResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RvLaneResult crosswalk_2d_array(::deva_perception_msgs::msg::RvLaneResult::_crosswalk_2d_array_type arg)
  {
    msg_.crosswalk_2d_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvLaneResult msg_;
};

class Init_RvLaneResult_stopline_2d_array
{
public:
  explicit Init_RvLaneResult_stopline_2d_array(::deva_perception_msgs::msg::RvLaneResult & msg)
  : msg_(msg)
  {}
  Init_RvLaneResult_crosswalk_2d_array stopline_2d_array(::deva_perception_msgs::msg::RvLaneResult::_stopline_2d_array_type arg)
  {
    msg_.stopline_2d_array = std::move(arg);
    return Init_RvLaneResult_crosswalk_2d_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvLaneResult msg_;
};

class Init_RvLaneResult_laneline_2d_array
{
public:
  explicit Init_RvLaneResult_laneline_2d_array(::deva_perception_msgs::msg::RvLaneResult & msg)
  : msg_(msg)
  {}
  Init_RvLaneResult_stopline_2d_array laneline_2d_array(::deva_perception_msgs::msg::RvLaneResult::_laneline_2d_array_type arg)
  {
    msg_.laneline_2d_array = std::move(arg);
    return Init_RvLaneResult_stopline_2d_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvLaneResult msg_;
};

class Init_RvLaneResult_header
{
public:
  Init_RvLaneResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RvLaneResult_laneline_2d_array header(::deva_perception_msgs::msg::RvLaneResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RvLaneResult_laneline_2d_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvLaneResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RvLaneResult>()
{
  return deva_perception_msgs::msg::builder::Init_RvLaneResult_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__BUILDER_HPP_
