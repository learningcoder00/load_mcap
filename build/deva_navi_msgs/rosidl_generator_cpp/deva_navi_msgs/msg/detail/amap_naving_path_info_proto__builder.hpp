// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/AmapNavingPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/amap_naving_path_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_AmapNavingPathInfoProto_timestamp
{
public:
  explicit Init_AmapNavingPathInfoProto_timestamp(::deva_navi_msgs::msg::AmapNavingPathInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::AmapNavingPathInfoProto timestamp(::deva_navi_msgs::msg::AmapNavingPathInfoProto::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapNavingPathInfoProto msg_;
};

class Init_AmapNavingPathInfoProto_amap_path_info
{
public:
  explicit Init_AmapNavingPathInfoProto_amap_path_info(::deva_navi_msgs::msg::AmapNavingPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_AmapNavingPathInfoProto_timestamp amap_path_info(::deva_navi_msgs::msg::AmapNavingPathInfoProto::_amap_path_info_type arg)
  {
    msg_.amap_path_info = std::move(arg);
    return Init_AmapNavingPathInfoProto_timestamp(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapNavingPathInfoProto msg_;
};

class Init_AmapNavingPathInfoProto_id
{
public:
  Init_AmapNavingPathInfoProto_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmapNavingPathInfoProto_amap_path_info id(::deva_navi_msgs::msg::AmapNavingPathInfoProto::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AmapNavingPathInfoProto_amap_path_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::AmapNavingPathInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::AmapNavingPathInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_AmapNavingPathInfoProto_id();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__BUILDER_HPP_
