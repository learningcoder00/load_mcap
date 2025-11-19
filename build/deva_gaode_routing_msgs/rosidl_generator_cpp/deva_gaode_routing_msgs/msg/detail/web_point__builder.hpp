// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_POINT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebPoint_y
{
public:
  explicit Init_WebPoint_y(::deva_gaode_routing_msgs::msg::WebPoint & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebPoint y(::deva_gaode_routing_msgs::msg::WebPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebPoint msg_;
};

class Init_WebPoint_x
{
public:
  explicit Init_WebPoint_x(::deva_gaode_routing_msgs::msg::WebPoint & msg)
  : msg_(msg)
  {}
  Init_WebPoint_y x(::deva_gaode_routing_msgs::msg::WebPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_WebPoint_y(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebPoint msg_;
};

class Init_WebPoint_id
{
public:
  explicit Init_WebPoint_id(::deva_gaode_routing_msgs::msg::WebPoint & msg)
  : msg_(msg)
  {}
  Init_WebPoint_x id(::deva_gaode_routing_msgs::msg::WebPoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WebPoint_x(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebPoint msg_;
};

class Init_WebPoint_type
{
public:
  Init_WebPoint_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebPoint_id type(::deva_gaode_routing_msgs::msg::WebPoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_WebPoint_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebPoint>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebPoint_type();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_POINT__BUILDER_HPP_
