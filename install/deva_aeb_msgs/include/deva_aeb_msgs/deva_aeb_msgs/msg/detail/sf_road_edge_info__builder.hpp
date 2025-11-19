// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadEdgeInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_road_edge_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFRoadEdgeInfo_reserved
{
public:
  explicit Init_SFRoadEdgeInfo_reserved(::deva_aeb_msgs::msg::SFRoadEdgeInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFRoadEdgeInfo reserved(::deva_aeb_msgs::msg::SFRoadEdgeInfo::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeInfo msg_;
};

class Init_SFRoadEdgeInfo_type
{
public:
  explicit Init_SFRoadEdgeInfo_type(::deva_aeb_msgs::msg::SFRoadEdgeInfo & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeInfo_reserved type(::deva_aeb_msgs::msg::SFRoadEdgeInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFRoadEdgeInfo_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeInfo msg_;
};

class Init_SFRoadEdgeInfo_overrideflag
{
public:
  Init_SFRoadEdgeInfo_overrideflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFRoadEdgeInfo_type overrideflag(::deva_aeb_msgs::msg::SFRoadEdgeInfo::_overrideflag_type arg)
  {
    msg_.overrideflag = std::move(arg);
    return Init_SFRoadEdgeInfo_type(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFRoadEdgeInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_SFRoadEdgeInfo_overrideflag();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_INFO__BUILDER_HPP_
