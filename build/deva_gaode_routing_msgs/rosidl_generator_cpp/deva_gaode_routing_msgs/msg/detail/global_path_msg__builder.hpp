// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/GlobalPathMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/global_path_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_GlobalPathMsg_global_steps
{
public:
  explicit Init_GlobalPathMsg_global_steps(::deva_gaode_routing_msgs::msg::GlobalPathMsg & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::GlobalPathMsg global_steps(::deva_gaode_routing_msgs::msg::GlobalPathMsg::_global_steps_type arg)
  {
    msg_.global_steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalPathMsg msg_;
};

class Init_GlobalPathMsg_global_coords
{
public:
  Init_GlobalPathMsg_global_coords()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalPathMsg_global_steps global_coords(::deva_gaode_routing_msgs::msg::GlobalPathMsg::_global_coords_type arg)
  {
    msg_.global_coords = std::move(arg);
    return Init_GlobalPathMsg_global_steps(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalPathMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::GlobalPathMsg>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_GlobalPathMsg_global_coords();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__BUILDER_HPP_
