// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SolidLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/solid_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SolidLine_type
{
public:
  explicit Init_SolidLine_type(::deva_gaode_routing_msgs::msg::SolidLine & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SolidLine type(::deva_gaode_routing_msgs::msg::SolidLine::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

class Init_SolidLine_lane_list
{
public:
  explicit Init_SolidLine_lane_list(::deva_gaode_routing_msgs::msg::SolidLine & msg)
  : msg_(msg)
  {}
  Init_SolidLine_type lane_list(::deva_gaode_routing_msgs::msg::SolidLine::_lane_list_type arg)
  {
    msg_.lane_list = std::move(arg);
    return Init_SolidLine_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

class Init_SolidLine_seq_num
{
public:
  explicit Init_SolidLine_seq_num(::deva_gaode_routing_msgs::msg::SolidLine & msg)
  : msg_(msg)
  {}
  Init_SolidLine_lane_list seq_num(::deva_gaode_routing_msgs::msg::SolidLine::_seq_num_type arg)
  {
    msg_.seq_num = std::move(arg);
    return Init_SolidLine_lane_list(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

class Init_SolidLine_lane_num
{
public:
  explicit Init_SolidLine_lane_num(::deva_gaode_routing_msgs::msg::SolidLine & msg)
  : msg_(msg)
  {}
  Init_SolidLine_seq_num lane_num(::deva_gaode_routing_msgs::msg::SolidLine::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_SolidLine_seq_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

class Init_SolidLine_out_road
{
public:
  explicit Init_SolidLine_out_road(::deva_gaode_routing_msgs::msg::SolidLine & msg)
  : msg_(msg)
  {}
  Init_SolidLine_lane_num out_road(::deva_gaode_routing_msgs::msg::SolidLine::_out_road_type arg)
  {
    msg_.out_road = std::move(arg);
    return Init_SolidLine_lane_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

class Init_SolidLine_pass_list
{
public:
  explicit Init_SolidLine_pass_list(::deva_gaode_routing_msgs::msg::SolidLine & msg)
  : msg_(msg)
  {}
  Init_SolidLine_out_road pass_list(::deva_gaode_routing_msgs::msg::SolidLine::_pass_list_type arg)
  {
    msg_.pass_list = std::move(arg);
    return Init_SolidLine_out_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

class Init_SolidLine_in_road
{
public:
  explicit Init_SolidLine_in_road(::deva_gaode_routing_msgs::msg::SolidLine & msg)
  : msg_(msg)
  {}
  Init_SolidLine_pass_list in_road(::deva_gaode_routing_msgs::msg::SolidLine::_in_road_type arg)
  {
    msg_.in_road = std::move(arg);
    return Init_SolidLine_pass_list(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

class Init_SolidLine_id
{
public:
  Init_SolidLine_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolidLine_in_road id(::deva_gaode_routing_msgs::msg::SolidLine::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SolidLine_in_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SolidLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SolidLine>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SolidLine_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__BUILDER_HPP_
