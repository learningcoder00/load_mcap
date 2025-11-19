// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RadarObjectMessage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_MESSAGE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/radar_object_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarObjectMessage_objects
{
public:
  explicit Init_RadarObjectMessage_objects(::deva_perception_msgs::msg::RadarObjectMessage & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RadarObjectMessage objects(::deva_perception_msgs::msg::RadarObjectMessage::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectMessage msg_;
};

class Init_RadarObjectMessage_status
{
public:
  explicit Init_RadarObjectMessage_status(::deva_perception_msgs::msg::RadarObjectMessage & msg)
  : msg_(msg)
  {}
  Init_RadarObjectMessage_objects status(::deva_perception_msgs::msg::RadarObjectMessage::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RadarObjectMessage_objects(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectMessage msg_;
};

class Init_RadarObjectMessage_header
{
public:
  Init_RadarObjectMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObjectMessage_status header(::deva_perception_msgs::msg::RadarObjectMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarObjectMessage_status(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RadarObjectMessage>()
{
  return deva_perception_msgs::msg::builder::Init_RadarObjectMessage_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_MESSAGE__BUILDER_HPP_
