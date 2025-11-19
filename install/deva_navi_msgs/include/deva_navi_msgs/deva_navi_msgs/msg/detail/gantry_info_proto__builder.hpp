// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/GantryInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/gantry_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_GantryInfoProto_name
{
public:
  explicit Init_GantryInfoProto_name(::deva_navi_msgs::msg::GantryInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::GantryInfoProto name(::deva_navi_msgs::msg::GantryInfoProto::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::GantryInfoProto msg_;
};

class Init_GantryInfoProto_num
{
public:
  explicit Init_GantryInfoProto_num(::deva_navi_msgs::msg::GantryInfoProto & msg)
  : msg_(msg)
  {}
  Init_GantryInfoProto_name num(::deva_navi_msgs::msg::GantryInfoProto::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_GantryInfoProto_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::GantryInfoProto msg_;
};

class Init_GantryInfoProto_dist_end
{
public:
  explicit Init_GantryInfoProto_dist_end(::deva_navi_msgs::msg::GantryInfoProto & msg)
  : msg_(msg)
  {}
  Init_GantryInfoProto_num dist_end(::deva_navi_msgs::msg::GantryInfoProto::_dist_end_type arg)
  {
    msg_.dist_end = std::move(arg);
    return Init_GantryInfoProto_num(msg_);
  }

private:
  ::deva_navi_msgs::msg::GantryInfoProto msg_;
};

class Init_GantryInfoProto_type
{
public:
  explicit Init_GantryInfoProto_type(::deva_navi_msgs::msg::GantryInfoProto & msg)
  : msg_(msg)
  {}
  Init_GantryInfoProto_dist_end type(::deva_navi_msgs::msg::GantryInfoProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GantryInfoProto_dist_end(msg_);
  }

private:
  ::deva_navi_msgs::msg::GantryInfoProto msg_;
};

class Init_GantryInfoProto_flag
{
public:
  Init_GantryInfoProto_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GantryInfoProto_type flag(::deva_navi_msgs::msg::GantryInfoProto::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_GantryInfoProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::GantryInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::GantryInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_GantryInfoProto_flag();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__BUILDER_HPP_
