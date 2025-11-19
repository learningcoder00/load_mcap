// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/LanePropertySegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lane_property_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LanePropertySegment_segment_points
{
public:
  explicit Init_LanePropertySegment_segment_points(::deva_perception_msgs::msg::LanePropertySegment & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::LanePropertySegment segment_points(::deva_perception_msgs::msg::LanePropertySegment::_segment_points_type arg)
  {
    msg_.segment_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::LanePropertySegment msg_;
};

class Init_LanePropertySegment_segment_properties
{
public:
  explicit Init_LanePropertySegment_segment_properties(::deva_perception_msgs::msg::LanePropertySegment & msg)
  : msg_(msg)
  {}
  Init_LanePropertySegment_segment_points segment_properties(::deva_perception_msgs::msg::LanePropertySegment::_segment_properties_type arg)
  {
    msg_.segment_properties = std::move(arg);
    return Init_LanePropertySegment_segment_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::LanePropertySegment msg_;
};

class Init_LanePropertySegment_num_segment
{
public:
  Init_LanePropertySegment_num_segment()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LanePropertySegment_segment_properties num_segment(::deva_perception_msgs::msg::LanePropertySegment::_num_segment_type arg)
  {
    msg_.num_segment = std::move(arg);
    return Init_LanePropertySegment_segment_properties(msg_);
  }

private:
  ::deva_perception_msgs::msg::LanePropertySegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::LanePropertySegment>()
{
  return deva_perception_msgs::msg::builder::Init_LanePropertySegment_num_segment();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__BUILDER_HPP_
