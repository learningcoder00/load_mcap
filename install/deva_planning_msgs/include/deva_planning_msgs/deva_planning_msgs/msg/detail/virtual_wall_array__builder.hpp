// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/VirtualWallArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL_ARRAY__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/virtual_wall_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualWallArray_virtual_wall_array
{
public:
  explicit Init_VirtualWallArray_virtual_wall_array(::deva_planning_msgs::msg::VirtualWallArray & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::VirtualWallArray virtual_wall_array(::deva_planning_msgs::msg::VirtualWallArray::_virtual_wall_array_type arg)
  {
    msg_.virtual_wall_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::VirtualWallArray msg_;
};

class Init_VirtualWallArray_num
{
public:
  explicit Init_VirtualWallArray_num(::deva_planning_msgs::msg::VirtualWallArray & msg)
  : msg_(msg)
  {}
  Init_VirtualWallArray_virtual_wall_array num(::deva_planning_msgs::msg::VirtualWallArray::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_VirtualWallArray_virtual_wall_array(msg_);
  }

private:
  ::deva_planning_msgs::msg::VirtualWallArray msg_;
};

class Init_VirtualWallArray_header
{
public:
  Init_VirtualWallArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualWallArray_num header(::deva_planning_msgs::msg::VirtualWallArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VirtualWallArray_num(msg_);
  }

private:
  ::deva_planning_msgs::msg::VirtualWallArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::VirtualWallArray>()
{
  return deva_planning_msgs::msg::builder::Init_VirtualWallArray_header();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VIRTUAL_WALL_ARRAY__BUILDER_HPP_
