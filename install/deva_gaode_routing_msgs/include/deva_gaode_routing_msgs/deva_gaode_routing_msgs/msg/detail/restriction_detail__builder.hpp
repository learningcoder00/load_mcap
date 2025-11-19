// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RestrictionDetail.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RestrictionDetail_time_type
{
public:
  explicit Init_RestrictionDetail_time_type(::deva_gaode_routing_msgs::msg::RestrictionDetail & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RestrictionDetail time_type(::deva_gaode_routing_msgs::msg::RestrictionDetail::_time_type_type arg)
  {
    msg_.time_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RestrictionDetail msg_;
};

class Init_RestrictionDetail_valid_period
{
public:
  explicit Init_RestrictionDetail_valid_period(::deva_gaode_routing_msgs::msg::RestrictionDetail & msg)
  : msg_(msg)
  {}
  Init_RestrictionDetail_time_type valid_period(::deva_gaode_routing_msgs::msg::RestrictionDetail::_valid_period_type arg)
  {
    msg_.valid_period = std::move(arg);
    return Init_RestrictionDetail_time_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RestrictionDetail msg_;
};

class Init_RestrictionDetail_period_approx
{
public:
  explicit Init_RestrictionDetail_period_approx(::deva_gaode_routing_msgs::msg::RestrictionDetail & msg)
  : msg_(msg)
  {}
  Init_RestrictionDetail_valid_period period_approx(::deva_gaode_routing_msgs::msg::RestrictionDetail::_period_approx_type arg)
  {
    msg_.period_approx = std::move(arg);
    return Init_RestrictionDetail_valid_period(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RestrictionDetail msg_;
};

class Init_RestrictionDetail_vehicle_limit
{
public:
  explicit Init_RestrictionDetail_vehicle_limit(::deva_gaode_routing_msgs::msg::RestrictionDetail & msg)
  : msg_(msg)
  {}
  Init_RestrictionDetail_period_approx vehicle_limit(::deva_gaode_routing_msgs::msg::RestrictionDetail::_vehicle_limit_type arg)
  {
    msg_.vehicle_limit = std::move(arg);
    return Init_RestrictionDetail_period_approx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RestrictionDetail msg_;
};

class Init_RestrictionDetail_direction
{
public:
  explicit Init_RestrictionDetail_direction(::deva_gaode_routing_msgs::msg::RestrictionDetail & msg)
  : msg_(msg)
  {}
  Init_RestrictionDetail_vehicle_limit direction(::deva_gaode_routing_msgs::msg::RestrictionDetail::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_RestrictionDetail_vehicle_limit(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RestrictionDetail msg_;
};

class Init_RestrictionDetail_id
{
public:
  Init_RestrictionDetail_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RestrictionDetail_direction id(::deva_gaode_routing_msgs::msg::RestrictionDetail::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RestrictionDetail_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RestrictionDetail msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RestrictionDetail>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RestrictionDetail_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__BUILDER_HPP_
