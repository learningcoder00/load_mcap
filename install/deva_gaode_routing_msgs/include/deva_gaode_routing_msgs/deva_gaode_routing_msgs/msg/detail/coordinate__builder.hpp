// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/Coordinate.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__COORDINATE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__COORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_Coordinate_relative_z
{
public:
  explicit Init_Coordinate_relative_z(::deva_gaode_routing_msgs::msg::Coordinate & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::Coordinate relative_z(::deva_gaode_routing_msgs::msg::Coordinate::_relative_z_type arg)
  {
    msg_.relative_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Coordinate msg_;
};

class Init_Coordinate_y
{
public:
  explicit Init_Coordinate_y(::deva_gaode_routing_msgs::msg::Coordinate & msg)
  : msg_(msg)
  {}
  Init_Coordinate_relative_z y(::deva_gaode_routing_msgs::msg::Coordinate::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Coordinate_relative_z(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Coordinate msg_;
};

class Init_Coordinate_x
{
public:
  Init_Coordinate_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_y x(::deva_gaode_routing_msgs::msg::Coordinate::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Coordinate_y(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::Coordinate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::Coordinate>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_Coordinate_x();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__COORDINATE__BUILDER_HPP_
