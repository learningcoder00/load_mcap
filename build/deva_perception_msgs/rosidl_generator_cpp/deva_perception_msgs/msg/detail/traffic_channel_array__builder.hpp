// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficChannelArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_channel_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficChannelArray_state_message
{
public:
  explicit Init_TrafficChannelArray_state_message(::deva_perception_msgs::msg::TrafficChannelArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficChannelArray state_message(::deva_perception_msgs::msg::TrafficChannelArray::_state_message_type arg)
  {
    msg_.state_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannelArray msg_;
};

class Init_TrafficChannelArray_orientation
{
public:
  explicit Init_TrafficChannelArray_orientation(::deva_perception_msgs::msg::TrafficChannelArray & msg)
  : msg_(msg)
  {}
  Init_TrafficChannelArray_state_message orientation(::deva_perception_msgs::msg::TrafficChannelArray::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_TrafficChannelArray_state_message(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannelArray msg_;
};

class Init_TrafficChannelArray_position
{
public:
  explicit Init_TrafficChannelArray_position(::deva_perception_msgs::msg::TrafficChannelArray & msg)
  : msg_(msg)
  {}
  Init_TrafficChannelArray_orientation position(::deva_perception_msgs::msg::TrafficChannelArray::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrafficChannelArray_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannelArray msg_;
};

class Init_TrafficChannelArray_traffic_channel_array
{
public:
  explicit Init_TrafficChannelArray_traffic_channel_array(::deva_perception_msgs::msg::TrafficChannelArray & msg)
  : msg_(msg)
  {}
  Init_TrafficChannelArray_position traffic_channel_array(::deva_perception_msgs::msg::TrafficChannelArray::_traffic_channel_array_type arg)
  {
    msg_.traffic_channel_array = std::move(arg);
    return Init_TrafficChannelArray_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannelArray msg_;
};

class Init_TrafficChannelArray_header
{
public:
  Init_TrafficChannelArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficChannelArray_traffic_channel_array header(::deva_perception_msgs::msg::TrafficChannelArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficChannelArray_traffic_channel_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficChannelArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficChannelArray>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficChannelArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_CHANNEL_ARRAY__BUILDER_HPP_
