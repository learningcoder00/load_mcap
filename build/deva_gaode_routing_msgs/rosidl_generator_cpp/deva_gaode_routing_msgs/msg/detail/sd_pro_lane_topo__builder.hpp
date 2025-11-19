// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneTopo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProLaneTopo_lane_id
{
public:
  explicit Init_SdProLaneTopo_lane_id(::deva_gaode_routing_msgs::msg::SdProLaneTopo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProLaneTopo lane_id(::deva_gaode_routing_msgs::msg::SdProLaneTopo::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneTopo msg_;
};

class Init_SdProLaneTopo_lane_num
{
public:
  explicit Init_SdProLaneTopo_lane_num(::deva_gaode_routing_msgs::msg::SdProLaneTopo & msg)
  : msg_(msg)
  {}
  Init_SdProLaneTopo_lane_id lane_num(::deva_gaode_routing_msgs::msg::SdProLaneTopo::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_SdProLaneTopo_lane_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneTopo msg_;
};

class Init_SdProLaneTopo_road_id
{
public:
  Init_SdProLaneTopo_road_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProLaneTopo_lane_num road_id(::deva_gaode_routing_msgs::msg::SdProLaneTopo::_road_id_type arg)
  {
    msg_.road_id = std::move(arg);
    return Init_SdProLaneTopo_lane_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneTopo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProLaneTopo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProLaneTopo_road_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_TOPO__BUILDER_HPP_
