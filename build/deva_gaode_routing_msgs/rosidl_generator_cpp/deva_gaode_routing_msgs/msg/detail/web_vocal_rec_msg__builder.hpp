// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebVocalRecMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebVocalRecMsg_voice_content
{
public:
  explicit Init_WebVocalRecMsg_voice_content(::deva_gaode_routing_msgs::msg::WebVocalRecMsg & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebVocalRecMsg voice_content(::deva_gaode_routing_msgs::msg::WebVocalRecMsg::_voice_content_type arg)
  {
    msg_.voice_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebVocalRecMsg msg_;
};

class Init_WebVocalRecMsg_distance
{
public:
  explicit Init_WebVocalRecMsg_distance(::deva_gaode_routing_msgs::msg::WebVocalRecMsg & msg)
  : msg_(msg)
  {}
  Init_WebVocalRecMsg_voice_content distance(::deva_gaode_routing_msgs::msg::WebVocalRecMsg::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_WebVocalRecMsg_voice_content(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebVocalRecMsg msg_;
};

class Init_WebVocalRecMsg_lane_num
{
public:
  explicit Init_WebVocalRecMsg_lane_num(::deva_gaode_routing_msgs::msg::WebVocalRecMsg & msg)
  : msg_(msg)
  {}
  Init_WebVocalRecMsg_distance lane_num(::deva_gaode_routing_msgs::msg::WebVocalRecMsg::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_WebVocalRecMsg_distance(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebVocalRecMsg msg_;
};

class Init_WebVocalRecMsg_conor_type
{
public:
  explicit Init_WebVocalRecMsg_conor_type(::deva_gaode_routing_msgs::msg::WebVocalRecMsg & msg)
  : msg_(msg)
  {}
  Init_WebVocalRecMsg_lane_num conor_type(::deva_gaode_routing_msgs::msg::WebVocalRecMsg::_conor_type_type arg)
  {
    msg_.conor_type = std::move(arg);
    return Init_WebVocalRecMsg_lane_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebVocalRecMsg msg_;
};

class Init_WebVocalRecMsg_road_type
{
public:
  explicit Init_WebVocalRecMsg_road_type(::deva_gaode_routing_msgs::msg::WebVocalRecMsg & msg)
  : msg_(msg)
  {}
  Init_WebVocalRecMsg_conor_type road_type(::deva_gaode_routing_msgs::msg::WebVocalRecMsg::_road_type_type arg)
  {
    msg_.road_type = std::move(arg);
    return Init_WebVocalRecMsg_conor_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebVocalRecMsg msg_;
};

class Init_WebVocalRecMsg_sequence_num
{
public:
  Init_WebVocalRecMsg_sequence_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebVocalRecMsg_road_type sequence_num(::deva_gaode_routing_msgs::msg::WebVocalRecMsg::_sequence_num_type arg)
  {
    msg_.sequence_num = std::move(arg);
    return Init_WebVocalRecMsg_road_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebVocalRecMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebVocalRecMsg>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebVocalRecMsg_sequence_num();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__BUILDER_HPP_
