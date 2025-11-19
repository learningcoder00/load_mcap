// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVLightList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_light_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVLightList_source
{
public:
  explicit Init_RVLightList_source(::deva_perception_msgs::msg::RVLightList & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVLightList source(::deva_perception_msgs::msg::RVLightList::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLightList msg_;
};

class Init_RVLightList_lights
{
public:
  Init_RVLightList_lights()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVLightList_source lights(::deva_perception_msgs::msg::RVLightList::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return Init_RVLightList_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLightList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVLightList>()
{
  return deva_perception_msgs::msg::builder::Init_RVLightList_lights();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT_LIST__BUILDER_HPP_
