// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/AdbEnv.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/adb_env__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_AdbEnv_extra_infos
{
public:
  explicit Init_AdbEnv_extra_infos(::deva_perception_msgs::msg::AdbEnv & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::AdbEnv extra_infos(::deva_perception_msgs::msg::AdbEnv::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbEnv msg_;
};

class Init_AdbEnv_sign_list
{
public:
  explicit Init_AdbEnv_sign_list(::deva_perception_msgs::msg::AdbEnv & msg)
  : msg_(msg)
  {}
  Init_AdbEnv_extra_infos sign_list(::deva_perception_msgs::msg::AdbEnv::_sign_list_type arg)
  {
    msg_.sign_list = std::move(arg);
    return Init_AdbEnv_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbEnv msg_;
};

class Init_AdbEnv_header
{
public:
  Init_AdbEnv_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdbEnv_sign_list header(::deva_perception_msgs::msg::AdbEnv::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AdbEnv_sign_list(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbEnv msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::AdbEnv>()
{
  return deva_perception_msgs::msg::builder::Init_AdbEnv_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__BUILDER_HPP_
