// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/AvpNavigationPlanningDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/avp_navigation_planning_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpNavigationPlanningDebugInfo_nav_openspace_debug_info
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_nav_openspace_debug_info(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo nav_openspace_debug_info(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_nav_openspace_debug_info_type arg)
  {
    msg_.nav_openspace_debug_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_avp_debug_info
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_avp_debug_info(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpNavigationPlanningDebugInfo_nav_openspace_debug_info avp_debug_info(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_avp_debug_info_type arg)
  {
    msg_.avp_debug_info = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_nav_openspace_debug_info(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_perception_map_header
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_perception_map_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpNavigationPlanningDebugInfo_avp_debug_info perception_map_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_perception_map_header_type arg)
  {
    msg_.perception_map_header = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_avp_debug_info(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_avp_local_map_header
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_avp_local_map_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpNavigationPlanningDebugInfo_perception_map_header avp_local_map_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_avp_local_map_header_type arg)
  {
    msg_.avp_local_map_header = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_perception_map_header(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_chassis_header
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_chassis_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpNavigationPlanningDebugInfo_avp_local_map_header chassis_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_chassis_header_type arg)
  {
    msg_.chassis_header = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_avp_local_map_header(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_localization_header
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_localization_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpNavigationPlanningDebugInfo_chassis_header localization_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_localization_header_type arg)
  {
    msg_.localization_header = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_chassis_header(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_prediction_header
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_prediction_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpNavigationPlanningDebugInfo_localization_header prediction_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_prediction_header_type arg)
  {
    msg_.prediction_header = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_localization_header(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_planning_header
{
public:
  explicit Init_AvpNavigationPlanningDebugInfo_planning_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpNavigationPlanningDebugInfo_prediction_header planning_header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_planning_header_type arg)
  {
    msg_.planning_header = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_prediction_header(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

class Init_AvpNavigationPlanningDebugInfo_header
{
public:
  Init_AvpNavigationPlanningDebugInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvpNavigationPlanningDebugInfo_planning_header header(::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvpNavigationPlanningDebugInfo_planning_header(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo>()
{
  return deva_planning_msgs::msg::builder::Init_AvpNavigationPlanningDebugInfo_header();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__BUILDER_HPP_
