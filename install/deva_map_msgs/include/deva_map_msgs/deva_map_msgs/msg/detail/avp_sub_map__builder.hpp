// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/AvpSubMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/avp_sub_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpSubMap_avp_sub_lanes
{
public:
  Init_AvpSubMap_avp_sub_lanes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_map_msgs::msg::AvpSubMap avp_sub_lanes(::deva_map_msgs::msg::AvpSubMap::_avp_sub_lanes_type arg)
  {
    msg_.avp_sub_lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpSubMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::AvpSubMap>()
{
  return deva_map_msgs::msg::builder::Init_AvpSubMap_avp_sub_lanes();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__BUILDER_HPP_
