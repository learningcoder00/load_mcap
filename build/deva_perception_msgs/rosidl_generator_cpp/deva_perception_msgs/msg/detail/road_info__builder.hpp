// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/road_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadInfo_road_class
{
public:
  explicit Init_RoadInfo_road_class(::deva_perception_msgs::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RoadInfo road_class(::deva_perception_msgs::msg::RoadInfo::_road_class_type arg)
  {
    msg_.road_class = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RoadInfo msg_;
};

class Init_RoadInfo_road_type
{
public:
  explicit Init_RoadInfo_road_type(::deva_perception_msgs::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  Init_RoadInfo_road_class road_type(::deva_perception_msgs::msg::RoadInfo::_road_type_type arg)
  {
    msg_.road_type = std::move(arg);
    return Init_RoadInfo_road_class(msg_);
  }

private:
  ::deva_perception_msgs::msg::RoadInfo msg_;
};

class Init_RoadInfo_has_traffic_light
{
public:
  Init_RoadInfo_has_traffic_light()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadInfo_road_type has_traffic_light(::deva_perception_msgs::msg::RoadInfo::_has_traffic_light_type arg)
  {
    msg_.has_traffic_light = std::move(arg);
    return Init_RoadInfo_road_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RoadInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RoadInfo>()
{
  return deva_perception_msgs::msg::builder::Init_RoadInfo_has_traffic_light();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
