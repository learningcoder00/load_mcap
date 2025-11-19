// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/Coord3DDoubleProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_Coord3DDoubleProto_z
{
public:
  explicit Init_Coord3DDoubleProto_z(::deva_navi_msgs::msg::Coord3DDoubleProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::Coord3DDoubleProto z(::deva_navi_msgs::msg::Coord3DDoubleProto::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::Coord3DDoubleProto msg_;
};

class Init_Coord3DDoubleProto_lat
{
public:
  explicit Init_Coord3DDoubleProto_lat(::deva_navi_msgs::msg::Coord3DDoubleProto & msg)
  : msg_(msg)
  {}
  Init_Coord3DDoubleProto_z lat(::deva_navi_msgs::msg::Coord3DDoubleProto::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_Coord3DDoubleProto_z(msg_);
  }

private:
  ::deva_navi_msgs::msg::Coord3DDoubleProto msg_;
};

class Init_Coord3DDoubleProto_lon
{
public:
  Init_Coord3DDoubleProto_lon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coord3DDoubleProto_lat lon(::deva_navi_msgs::msg::Coord3DDoubleProto::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_Coord3DDoubleProto_lat(msg_);
  }

private:
  ::deva_navi_msgs::msg::Coord3DDoubleProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::Coord3DDoubleProto>()
{
  return deva_navi_msgs::msg::builder::Init_Coord3DDoubleProto_lon();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__BUILDER_HPP_
