// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/AvpLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/avp_local_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpLocalMap_avp_sub_map
{
public:
  explicit Init_AvpLocalMap_avp_sub_map(::deva_map_msgs::msg::AvpLocalMap & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::AvpLocalMap avp_sub_map(::deva_map_msgs::msg::AvpLocalMap::_avp_sub_map_type arg)
  {
    msg_.avp_sub_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpLocalMap msg_;
};

class Init_AvpLocalMap_expand_lane_center_border
{
public:
  explicit Init_AvpLocalMap_expand_lane_center_border(::deva_map_msgs::msg::AvpLocalMap & msg)
  : msg_(msg)
  {}
  Init_AvpLocalMap_avp_sub_map expand_lane_center_border(::deva_map_msgs::msg::AvpLocalMap::_expand_lane_center_border_type arg)
  {
    msg_.expand_lane_center_border = std::move(arg);
    return Init_AvpLocalMap_avp_sub_map(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpLocalMap msg_;
};

class Init_AvpLocalMap_drivable_boundary
{
public:
  explicit Init_AvpLocalMap_drivable_boundary(::deva_map_msgs::msg::AvpLocalMap & msg)
  : msg_(msg)
  {}
  Init_AvpLocalMap_expand_lane_center_border drivable_boundary(::deva_map_msgs::msg::AvpLocalMap::_drivable_boundary_type arg)
  {
    msg_.drivable_boundary = std::move(arg);
    return Init_AvpLocalMap_expand_lane_center_border(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpLocalMap msg_;
};

class Init_AvpLocalMap_ref_line
{
public:
  explicit Init_AvpLocalMap_ref_line(::deva_map_msgs::msg::AvpLocalMap & msg)
  : msg_(msg)
  {}
  Init_AvpLocalMap_drivable_boundary ref_line(::deva_map_msgs::msg::AvpLocalMap::_ref_line_type arg)
  {
    msg_.ref_line = std::move(arg);
    return Init_AvpLocalMap_drivable_boundary(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpLocalMap msg_;
};

class Init_AvpLocalMap_header
{
public:
  Init_AvpLocalMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvpLocalMap_ref_line header(::deva_map_msgs::msg::AvpLocalMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvpLocalMap_ref_line(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpLocalMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::AvpLocalMap>()
{
  return deva_map_msgs::msg::builder::Init_AvpLocalMap_header();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__BUILDER_HPP_
