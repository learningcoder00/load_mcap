// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/EnergyEndPointProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/energy_end_point_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_EnergyEndPointProto_link_index
{
public:
  explicit Init_EnergyEndPointProto_link_index(::deva_navi_msgs::msg::EnergyEndPointProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::EnergyEndPointProto link_index(::deva_navi_msgs::msg::EnergyEndPointProto::_link_index_type arg)
  {
    msg_.link_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::EnergyEndPointProto msg_;
};

class Init_EnergyEndPointProto_segment_idx
{
public:
  explicit Init_EnergyEndPointProto_segment_idx(::deva_navi_msgs::msg::EnergyEndPointProto & msg)
  : msg_(msg)
  {}
  Init_EnergyEndPointProto_link_index segment_idx(::deva_navi_msgs::msg::EnergyEndPointProto::_segment_idx_type arg)
  {
    msg_.segment_idx = std::move(arg);
    return Init_EnergyEndPointProto_link_index(msg_);
  }

private:
  ::deva_navi_msgs::msg::EnergyEndPointProto msg_;
};

class Init_EnergyEndPointProto_show
{
public:
  Init_EnergyEndPointProto_show()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnergyEndPointProto_segment_idx show(::deva_navi_msgs::msg::EnergyEndPointProto::_show_type arg)
  {
    msg_.show = std::move(arg);
    return Init_EnergyEndPointProto_segment_idx(msg_);
  }

private:
  ::deva_navi_msgs::msg::EnergyEndPointProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::EnergyEndPointProto>()
{
  return deva_navi_msgs::msg::builder::Init_EnergyEndPointProto_show();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__BUILDER_HPP_
