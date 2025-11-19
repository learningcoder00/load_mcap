// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/AvpBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/avp_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpBoundary_right_region_width
{
public:
  explicit Init_AvpBoundary_right_region_width(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::AvpBoundary right_region_width(::deva_map_msgs::msg::AvpBoundary::_right_region_width_type arg)
  {
    msg_.right_region_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_right_z
{
public:
  explicit Init_AvpBoundary_right_z(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  Init_AvpBoundary_right_region_width right_z(::deva_map_msgs::msg::AvpBoundary::_right_z_type arg)
  {
    msg_.right_z = std::move(arg);
    return Init_AvpBoundary_right_region_width(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_right_y
{
public:
  explicit Init_AvpBoundary_right_y(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  Init_AvpBoundary_right_z right_y(::deva_map_msgs::msg::AvpBoundary::_right_y_type arg)
  {
    msg_.right_y = std::move(arg);
    return Init_AvpBoundary_right_z(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_right_x
{
public:
  explicit Init_AvpBoundary_right_x(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  Init_AvpBoundary_right_y right_x(::deva_map_msgs::msg::AvpBoundary::_right_x_type arg)
  {
    msg_.right_x = std::move(arg);
    return Init_AvpBoundary_right_y(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_left_region_width
{
public:
  explicit Init_AvpBoundary_left_region_width(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  Init_AvpBoundary_right_x left_region_width(::deva_map_msgs::msg::AvpBoundary::_left_region_width_type arg)
  {
    msg_.left_region_width = std::move(arg);
    return Init_AvpBoundary_right_x(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_left_z
{
public:
  explicit Init_AvpBoundary_left_z(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  Init_AvpBoundary_left_region_width left_z(::deva_map_msgs::msg::AvpBoundary::_left_z_type arg)
  {
    msg_.left_z = std::move(arg);
    return Init_AvpBoundary_left_region_width(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_left_y
{
public:
  explicit Init_AvpBoundary_left_y(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  Init_AvpBoundary_left_z left_y(::deva_map_msgs::msg::AvpBoundary::_left_y_type arg)
  {
    msg_.left_y = std::move(arg);
    return Init_AvpBoundary_left_z(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_left_x
{
public:
  explicit Init_AvpBoundary_left_x(::deva_map_msgs::msg::AvpBoundary & msg)
  : msg_(msg)
  {}
  Init_AvpBoundary_left_y left_x(::deva_map_msgs::msg::AvpBoundary::_left_x_type arg)
  {
    msg_.left_x = std::move(arg);
    return Init_AvpBoundary_left_y(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

class Init_AvpBoundary_s
{
public:
  Init_AvpBoundary_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvpBoundary_left_x s(::deva_map_msgs::msg::AvpBoundary::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_AvpBoundary_left_x(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::AvpBoundary>()
{
  return deva_map_msgs::msg::builder::Init_AvpBoundary_s();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__BUILDER_HPP_
