// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SDCross.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_cross__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SDCross_out_roads
{
public:
  explicit Init_SDCross_out_roads(::deva_gaode_routing_msgs::msg::SDCross & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SDCross out_roads(::deva_gaode_routing_msgs::msg::SDCross::_out_roads_type arg)
  {
    msg_.out_roads = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDCross msg_;
};

class Init_SDCross_in_roads
{
public:
  explicit Init_SDCross_in_roads(::deva_gaode_routing_msgs::msg::SDCross & msg)
  : msg_(msg)
  {}
  Init_SDCross_out_roads in_roads(::deva_gaode_routing_msgs::msg::SDCross::_in_roads_type arg)
  {
    msg_.in_roads = std::move(arg);
    return Init_SDCross_out_roads(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDCross msg_;
};

class Init_SDCross_inner_roads
{
public:
  explicit Init_SDCross_inner_roads(::deva_gaode_routing_msgs::msg::SDCross & msg)
  : msg_(msg)
  {}
  Init_SDCross_in_roads inner_roads(::deva_gaode_routing_msgs::msg::SDCross::_inner_roads_type arg)
  {
    msg_.inner_roads = std::move(arg);
    return Init_SDCross_in_roads(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDCross msg_;
};

class Init_SDCross_sub_node
{
public:
  explicit Init_SDCross_sub_node(::deva_gaode_routing_msgs::msg::SDCross & msg)
  : msg_(msg)
  {}
  Init_SDCross_inner_roads sub_node(::deva_gaode_routing_msgs::msg::SDCross::_sub_node_type arg)
  {
    msg_.sub_node = std::move(arg);
    return Init_SDCross_inner_roads(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDCross msg_;
};

class Init_SDCross_main_node
{
public:
  explicit Init_SDCross_main_node(::deva_gaode_routing_msgs::msg::SDCross & msg)
  : msg_(msg)
  {}
  Init_SDCross_sub_node main_node(::deva_gaode_routing_msgs::msg::SDCross::_main_node_type arg)
  {
    msg_.main_node = std::move(arg);
    return Init_SDCross_sub_node(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDCross msg_;
};

class Init_SDCross_type
{
public:
  explicit Init_SDCross_type(::deva_gaode_routing_msgs::msg::SDCross & msg)
  : msg_(msg)
  {}
  Init_SDCross_main_node type(::deva_gaode_routing_msgs::msg::SDCross::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SDCross_main_node(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDCross msg_;
};

class Init_SDCross_id
{
public:
  Init_SDCross_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SDCross_type id(::deva_gaode_routing_msgs::msg::SDCross::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SDCross_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SDCross msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SDCross>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SDCross_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__BUILDER_HPP_
