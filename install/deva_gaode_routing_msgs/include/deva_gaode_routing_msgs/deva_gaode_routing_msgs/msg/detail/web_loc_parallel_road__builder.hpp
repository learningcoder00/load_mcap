// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLocParallelRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebLocParallelRoad_type
{
public:
  explicit Init_WebLocParallelRoad_type(::deva_gaode_routing_msgs::msg::WebLocParallelRoad & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebLocParallelRoad type(::deva_gaode_routing_msgs::msg::WebLocParallelRoad::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLocParallelRoad msg_;
};

class Init_WebLocParallelRoad_road_id
{
public:
  explicit Init_WebLocParallelRoad_road_id(::deva_gaode_routing_msgs::msg::WebLocParallelRoad & msg)
  : msg_(msg)
  {}
  Init_WebLocParallelRoad_type road_id(::deva_gaode_routing_msgs::msg::WebLocParallelRoad::_road_id_type arg)
  {
    msg_.road_id = std::move(arg);
    return Init_WebLocParallelRoad_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLocParallelRoad msg_;
};

class Init_WebLocParallelRoad_road_type
{
public:
  explicit Init_WebLocParallelRoad_road_type(::deva_gaode_routing_msgs::msg::WebLocParallelRoad & msg)
  : msg_(msg)
  {}
  Init_WebLocParallelRoad_road_id road_type(::deva_gaode_routing_msgs::msg::WebLocParallelRoad::_road_type_type arg)
  {
    msg_.road_type = std::move(arg);
    return Init_WebLocParallelRoad_road_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLocParallelRoad msg_;
};

class Init_WebLocParallelRoad_formway
{
public:
  Init_WebLocParallelRoad_formway()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebLocParallelRoad_road_type formway(::deva_gaode_routing_msgs::msg::WebLocParallelRoad::_formway_type arg)
  {
    msg_.formway = std::move(arg);
    return Init_WebLocParallelRoad_road_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebLocParallelRoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebLocParallelRoad>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebLocParallelRoad_formway();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__BUILDER_HPP_
