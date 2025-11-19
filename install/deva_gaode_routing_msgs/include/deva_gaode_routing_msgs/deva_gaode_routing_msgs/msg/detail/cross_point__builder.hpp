// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/CrossPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/cross_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_CrossPoint_cross_id
{
public:
  explicit Init_CrossPoint_cross_id(::deva_gaode_routing_msgs::msg::CrossPoint & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::CrossPoint cross_id(::deva_gaode_routing_msgs::msg::CrossPoint::_cross_id_type arg)
  {
    msg_.cross_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CrossPoint msg_;
};

class Init_CrossPoint_type
{
public:
  explicit Init_CrossPoint_type(::deva_gaode_routing_msgs::msg::CrossPoint & msg)
  : msg_(msg)
  {}
  Init_CrossPoint_cross_id type(::deva_gaode_routing_msgs::msg::CrossPoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CrossPoint_cross_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CrossPoint msg_;
};

class Init_CrossPoint_geom
{
public:
  explicit Init_CrossPoint_geom(::deva_gaode_routing_msgs::msg::CrossPoint & msg)
  : msg_(msg)
  {}
  Init_CrossPoint_type geom(::deva_gaode_routing_msgs::msg::CrossPoint::_geom_type arg)
  {
    msg_.geom = std::move(arg);
    return Init_CrossPoint_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CrossPoint msg_;
};

class Init_CrossPoint_id
{
public:
  Init_CrossPoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CrossPoint_geom id(::deva_gaode_routing_msgs::msg::CrossPoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CrossPoint_geom(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CrossPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::CrossPoint>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_CrossPoint_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__BUILDER_HPP_
