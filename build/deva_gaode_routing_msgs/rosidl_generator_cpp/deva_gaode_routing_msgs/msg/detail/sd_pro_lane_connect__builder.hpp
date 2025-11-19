// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProLaneConnect_connect_restriction
{
public:
  explicit Init_SdProLaneConnect_connect_restriction(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect connect_restriction(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_connect_restriction_type arg)
  {
    msg_.connect_restriction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_limit_lane
{
public:
  explicit Init_SdProLaneConnect_limit_lane(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_connect_restriction limit_lane(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_limit_lane_type arg)
  {
    msg_.limit_lane = std::move(arg);
    return Init_SdProLaneConnect_connect_restriction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_node_id
{
public:
  explicit Init_SdProLaneConnect_node_id(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_limit_lane node_id(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_SdProLaneConnect_limit_lane(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_lane_right
{
public:
  explicit Init_SdProLaneConnect_lane_right(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_node_id lane_right(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_lane_right_type arg)
  {
    msg_.lane_right = std::move(arg);
    return Init_SdProLaneConnect_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_lane_left
{
public:
  explicit Init_SdProLaneConnect_lane_left(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_lane_right lane_left(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_lane_left_type arg)
  {
    msg_.lane_left = std::move(arg);
    return Init_SdProLaneConnect_lane_right(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_lane_num
{
public:
  explicit Init_SdProLaneConnect_lane_num(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_lane_left lane_num(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_SdProLaneConnect_lane_left(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_bus_lane
{
public:
  explicit Init_SdProLaneConnect_bus_lane(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_lane_num bus_lane(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_bus_lane_type arg)
  {
    msg_.bus_lane = std::move(arg);
    return Init_SdProLaneConnect_lane_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_lane_info
{
public:
  explicit Init_SdProLaneConnect_lane_info(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_bus_lane lane_info(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_lane_info_type arg)
  {
    msg_.lane_info = std::move(arg);
    return Init_SdProLaneConnect_bus_lane(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_arrow_info
{
public:
  explicit Init_SdProLaneConnect_arrow_info(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_lane_info arrow_info(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_arrow_info_type arg)
  {
    msg_.arrow_info = std::move(arg);
    return Init_SdProLaneConnect_lane_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_pass_road_ids
{
public:
  explicit Init_SdProLaneConnect_pass_road_ids(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_arrow_info pass_road_ids(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_pass_road_ids_type arg)
  {
    msg_.pass_road_ids = std::move(arg);
    return Init_SdProLaneConnect_arrow_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_out_road
{
public:
  explicit Init_SdProLaneConnect_out_road(::deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
  : msg_(msg)
  {}
  Init_SdProLaneConnect_pass_road_ids out_road(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_out_road_type arg)
  {
    msg_.out_road = std::move(arg);
    return Init_SdProLaneConnect_pass_road_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

class Init_SdProLaneConnect_id
{
public:
  Init_SdProLaneConnect_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProLaneConnect_out_road id(::deva_gaode_routing_msgs::msg::SdProLaneConnect::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SdProLaneConnect_out_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProLaneConnect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProLaneConnect>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProLaneConnect_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__BUILDER_HPP_
