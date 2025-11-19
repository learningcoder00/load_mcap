// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ChannelArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/channel_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelArray_state_message
{
public:
  explicit Init_ChannelArray_state_message(::deva_perception_msgs::msg::ChannelArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ChannelArray state_message(::deva_perception_msgs::msg::ChannelArray::_state_message_type arg)
  {
    msg_.state_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ChannelArray msg_;
};

class Init_ChannelArray_orientation
{
public:
  explicit Init_ChannelArray_orientation(::deva_perception_msgs::msg::ChannelArray & msg)
  : msg_(msg)
  {}
  Init_ChannelArray_state_message orientation(::deva_perception_msgs::msg::ChannelArray::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_ChannelArray_state_message(msg_);
  }

private:
  ::deva_perception_msgs::msg::ChannelArray msg_;
};

class Init_ChannelArray_position
{
public:
  explicit Init_ChannelArray_position(::deva_perception_msgs::msg::ChannelArray & msg)
  : msg_(msg)
  {}
  Init_ChannelArray_orientation position(::deva_perception_msgs::msg::ChannelArray::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ChannelArray_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::ChannelArray msg_;
};

class Init_ChannelArray_traffic_channel_array
{
public:
  explicit Init_ChannelArray_traffic_channel_array(::deva_perception_msgs::msg::ChannelArray & msg)
  : msg_(msg)
  {}
  Init_ChannelArray_position traffic_channel_array(::deva_perception_msgs::msg::ChannelArray::_traffic_channel_array_type arg)
  {
    msg_.traffic_channel_array = std::move(arg);
    return Init_ChannelArray_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::ChannelArray msg_;
};

class Init_ChannelArray_header
{
public:
  Init_ChannelArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelArray_traffic_channel_array header(::deva_perception_msgs::msg::ChannelArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChannelArray_traffic_channel_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::ChannelArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ChannelArray>()
{
  return deva_perception_msgs::msg::builder::Init_ChannelArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL_ARRAY__BUILDER_HPP_
