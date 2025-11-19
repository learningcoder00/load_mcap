// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebNotAvoidInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebNotAvoidInfo_valid
{
public:
  explicit Init_WebNotAvoidInfo_valid(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebNotAvoidInfo valid(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebNotAvoidInfo msg_;
};

class Init_WebNotAvoidInfo_type
{
public:
  explicit Init_WebNotAvoidInfo_type(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo & msg)
  : msg_(msg)
  {}
  Init_WebNotAvoidInfo_valid type(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_WebNotAvoidInfo_valid(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebNotAvoidInfo msg_;
};

class Init_WebNotAvoidInfo_forbid_type
{
public:
  explicit Init_WebNotAvoidInfo_forbid_type(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo & msg)
  : msg_(msg)
  {}
  Init_WebNotAvoidInfo_type forbid_type(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo::_forbid_type_type arg)
  {
    msg_.forbid_type = std::move(arg);
    return Init_WebNotAvoidInfo_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebNotAvoidInfo msg_;
};

class Init_WebNotAvoidInfo_dist_to_car
{
public:
  explicit Init_WebNotAvoidInfo_dist_to_car(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo & msg)
  : msg_(msg)
  {}
  Init_WebNotAvoidInfo_forbid_type dist_to_car(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo::_dist_to_car_type arg)
  {
    msg_.dist_to_car = std::move(arg);
    return Init_WebNotAvoidInfo_forbid_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebNotAvoidInfo msg_;
};

class Init_WebNotAvoidInfo_coord_2d
{
public:
  Init_WebNotAvoidInfo_coord_2d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebNotAvoidInfo_dist_to_car coord_2d(::deva_gaode_routing_msgs::msg::WebNotAvoidInfo::_coord_2d_type arg)
  {
    msg_.coord_2d = std::move(arg);
    return Init_WebNotAvoidInfo_dist_to_car(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebNotAvoidInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebNotAvoidInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebNotAvoidInfo_coord_2d();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__BUILDER_HPP_
