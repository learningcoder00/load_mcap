// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/road_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadInfo_info
{
public:
  explicit Init_RoadInfo_info(::deva_aeb_msgs::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::RoadInfo info(::deva_aeb_msgs::msg::RoadInfo::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::RoadInfo msg_;
};

class Init_RoadInfo_ppty
{
public:
  explicit Init_RoadInfo_ppty(::deva_aeb_msgs::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  Init_RoadInfo_info ppty(::deva_aeb_msgs::msg::RoadInfo::_ppty_type arg)
  {
    msg_.ppty = std::move(arg);
    return Init_RoadInfo_info(msg_);
  }

private:
  ::deva_aeb_msgs::msg::RoadInfo msg_;
};

class Init_RoadInfo_estimn
{
public:
  Init_RoadInfo_estimn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadInfo_ppty estimn(::deva_aeb_msgs::msg::RoadInfo::_estimn_type arg)
  {
    msg_.estimn = std::move(arg);
    return Init_RoadInfo_ppty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::RoadInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::RoadInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_RoadInfo_estimn();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
