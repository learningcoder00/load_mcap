// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGVTipsPointResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RGV_TIPS_POINT_RESULT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RGV_TIPS_POINT_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/rgv_tips_point_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RGVTipsPointResult_pos
{
public:
  explicit Init_RGVTipsPointResult_pos(::deva_gaode_routing_msgs::msg::RGVTipsPointResult & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RGVTipsPointResult pos(::deva_gaode_routing_msgs::msg::RGVTipsPointResult::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGVTipsPointResult msg_;
};

class Init_RGVTipsPointResult_tsection
{
public:
  explicit Init_RGVTipsPointResult_tsection(::deva_gaode_routing_msgs::msg::RGVTipsPointResult & msg)
  : msg_(msg)
  {}
  Init_RGVTipsPointResult_pos tsection(::deva_gaode_routing_msgs::msg::RGVTipsPointResult::_tsection_type arg)
  {
    msg_.tsection = std::move(arg);
    return Init_RGVTipsPointResult_pos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGVTipsPointResult msg_;
};

class Init_RGVTipsPointResult_raw_link_id
{
public:
  Init_RGVTipsPointResult_raw_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGVTipsPointResult_tsection raw_link_id(::deva_gaode_routing_msgs::msg::RGVTipsPointResult::_raw_link_id_type arg)
  {
    msg_.raw_link_id = std::move(arg);
    return Init_RGVTipsPointResult_tsection(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGVTipsPointResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RGVTipsPointResult>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RGVTipsPointResult_raw_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RGV_TIPS_POINT_RESULT__BUILDER_HPP_
