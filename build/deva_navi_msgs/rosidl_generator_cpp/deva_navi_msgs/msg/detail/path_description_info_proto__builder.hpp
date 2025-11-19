// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/PathDescriptionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/path_description_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_PathDescriptionInfoProto_flag2
{
public:
  explicit Init_PathDescriptionInfoProto_flag2(::deva_navi_msgs::msg::PathDescriptionInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::PathDescriptionInfoProto flag2(::deva_navi_msgs::msg::PathDescriptionInfoProto::_flag2_type arg)
  {
    msg_.flag2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::PathDescriptionInfoProto msg_;
};

class Init_PathDescriptionInfoProto_flag1
{
public:
  explicit Init_PathDescriptionInfoProto_flag1(::deva_navi_msgs::msg::PathDescriptionInfoProto & msg)
  : msg_(msg)
  {}
  Init_PathDescriptionInfoProto_flag2 flag1(::deva_navi_msgs::msg::PathDescriptionInfoProto::_flag1_type arg)
  {
    msg_.flag1 = std::move(arg);
    return Init_PathDescriptionInfoProto_flag2(msg_);
  }

private:
  ::deva_navi_msgs::msg::PathDescriptionInfoProto msg_;
};

class Init_PathDescriptionInfoProto_path_type
{
public:
  Init_PathDescriptionInfoProto_path_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathDescriptionInfoProto_flag1 path_type(::deva_navi_msgs::msg::PathDescriptionInfoProto::_path_type_type arg)
  {
    msg_.path_type = std::move(arg);
    return Init_PathDescriptionInfoProto_flag1(msg_);
  }

private:
  ::deva_navi_msgs::msg::PathDescriptionInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::PathDescriptionInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_PathDescriptionInfoProto_path_type();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__BUILDER_HPP_
