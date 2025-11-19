// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGIntersectionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RGIntersectionResult_inter_raw_link_ids
{
public:
  explicit Init_RGIntersectionResult_inter_raw_link_ids(::deva_gaode_routing_msgs::msg::RGIntersectionResult & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RGIntersectionResult inter_raw_link_ids(::deva_gaode_routing_msgs::msg::RGIntersectionResult::_inter_raw_link_ids_type arg)
  {
    msg_.inter_raw_link_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGIntersectionResult msg_;
};

class Init_RGIntersectionResult_leave_pos
{
public:
  explicit Init_RGIntersectionResult_leave_pos(::deva_gaode_routing_msgs::msg::RGIntersectionResult & msg)
  : msg_(msg)
  {}
  Init_RGIntersectionResult_inter_raw_link_ids leave_pos(::deva_gaode_routing_msgs::msg::RGIntersectionResult::_leave_pos_type arg)
  {
    msg_.leave_pos = std::move(arg);
    return Init_RGIntersectionResult_inter_raw_link_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGIntersectionResult msg_;
};

class Init_RGIntersectionResult_enter_pos
{
public:
  explicit Init_RGIntersectionResult_enter_pos(::deva_gaode_routing_msgs::msg::RGIntersectionResult & msg)
  : msg_(msg)
  {}
  Init_RGIntersectionResult_leave_pos enter_pos(::deva_gaode_routing_msgs::msg::RGIntersectionResult::_enter_pos_type arg)
  {
    msg_.enter_pos = std::move(arg);
    return Init_RGIntersectionResult_leave_pos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGIntersectionResult msg_;
};

class Init_RGIntersectionResult_accessory_info
{
public:
  explicit Init_RGIntersectionResult_accessory_info(::deva_gaode_routing_msgs::msg::RGIntersectionResult & msg)
  : msg_(msg)
  {}
  Init_RGIntersectionResult_enter_pos accessory_info(::deva_gaode_routing_msgs::msg::RGIntersectionResult::_accessory_info_type arg)
  {
    msg_.accessory_info = std::move(arg);
    return Init_RGIntersectionResult_enter_pos(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGIntersectionResult msg_;
};

class Init_RGIntersectionResult_inter_type
{
public:
  explicit Init_RGIntersectionResult_inter_type(::deva_gaode_routing_msgs::msg::RGIntersectionResult & msg)
  : msg_(msg)
  {}
  Init_RGIntersectionResult_accessory_info inter_type(::deva_gaode_routing_msgs::msg::RGIntersectionResult::_inter_type_type arg)
  {
    msg_.inter_type = std::move(arg);
    return Init_RGIntersectionResult_accessory_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGIntersectionResult msg_;
};

class Init_RGIntersectionResult_raw_link_id
{
public:
  Init_RGIntersectionResult_raw_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGIntersectionResult_inter_type raw_link_id(::deva_gaode_routing_msgs::msg::RGIntersectionResult::_raw_link_id_type arg)
  {
    msg_.raw_link_id = std::move(arg);
    return Init_RGIntersectionResult_inter_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGIntersectionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RGIntersectionResult>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RGIntersectionResult_raw_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__BUILDER_HPP_
