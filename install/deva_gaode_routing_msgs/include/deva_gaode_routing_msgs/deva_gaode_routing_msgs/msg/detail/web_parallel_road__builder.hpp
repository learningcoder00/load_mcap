// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebParallelRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebParallelRoad_parallel_road_list
{
public:
  explicit Init_WebParallelRoad_parallel_road_list(::deva_gaode_routing_msgs::msg::WebParallelRoad & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebParallelRoad parallel_road_list(::deva_gaode_routing_msgs::msg::WebParallelRoad::_parallel_road_list_type arg)
  {
    msg_.parallel_road_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebParallelRoad msg_;
};

class Init_WebParallelRoad_status
{
public:
  explicit Init_WebParallelRoad_status(::deva_gaode_routing_msgs::msg::WebParallelRoad & msg)
  : msg_(msg)
  {}
  Init_WebParallelRoad_parallel_road_list status(::deva_gaode_routing_msgs::msg::WebParallelRoad::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WebParallelRoad_parallel_road_list(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebParallelRoad msg_;
};

class Init_WebParallelRoad_hw_flag
{
public:
  explicit Init_WebParallelRoad_hw_flag(::deva_gaode_routing_msgs::msg::WebParallelRoad & msg)
  : msg_(msg)
  {}
  Init_WebParallelRoad_status hw_flag(::deva_gaode_routing_msgs::msg::WebParallelRoad::_hw_flag_type arg)
  {
    msg_.hw_flag = std::move(arg);
    return Init_WebParallelRoad_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebParallelRoad msg_;
};

class Init_WebParallelRoad_flag
{
public:
  explicit Init_WebParallelRoad_flag(::deva_gaode_routing_msgs::msg::WebParallelRoad & msg)
  : msg_(msg)
  {}
  Init_WebParallelRoad_hw_flag flag(::deva_gaode_routing_msgs::msg::WebParallelRoad::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_WebParallelRoad_hw_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebParallelRoad msg_;
};

class Init_WebParallelRoad_count
{
public:
  Init_WebParallelRoad_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebParallelRoad_flag count(::deva_gaode_routing_msgs::msg::WebParallelRoad::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_WebParallelRoad_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebParallelRoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebParallelRoad>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebParallelRoad_count();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__BUILDER_HPP_
