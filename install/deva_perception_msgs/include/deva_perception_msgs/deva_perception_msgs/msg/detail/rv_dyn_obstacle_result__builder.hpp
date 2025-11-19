// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVDynObstacleResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVDynObstacleResult_extra_infos
{
public:
  explicit Init_RVDynObstacleResult_extra_infos(::deva_perception_msgs::msg::RVDynObstacleResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVDynObstacleResult extra_infos(::deva_perception_msgs::msg::RVDynObstacleResult::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacleResult msg_;
};

class Init_RVDynObstacleResult_dynamic_obs_list
{
public:
  explicit Init_RVDynObstacleResult_dynamic_obs_list(::deva_perception_msgs::msg::RVDynObstacleResult & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacleResult_extra_infos dynamic_obs_list(::deva_perception_msgs::msg::RVDynObstacleResult::_dynamic_obs_list_type arg)
  {
    msg_.dynamic_obs_list = std::move(arg);
    return Init_RVDynObstacleResult_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacleResult msg_;
};

class Init_RVDynObstacleResult_orientation
{
public:
  explicit Init_RVDynObstacleResult_orientation(::deva_perception_msgs::msg::RVDynObstacleResult & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacleResult_dynamic_obs_list orientation(::deva_perception_msgs::msg::RVDynObstacleResult::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RVDynObstacleResult_dynamic_obs_list(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacleResult msg_;
};

class Init_RVDynObstacleResult_translation
{
public:
  explicit Init_RVDynObstacleResult_translation(::deva_perception_msgs::msg::RVDynObstacleResult & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacleResult_orientation translation(::deva_perception_msgs::msg::RVDynObstacleResult::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_RVDynObstacleResult_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacleResult msg_;
};

class Init_RVDynObstacleResult_header
{
public:
  Init_RVDynObstacleResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVDynObstacleResult_translation header(::deva_perception_msgs::msg::RVDynObstacleResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RVDynObstacleResult_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacleResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVDynObstacleResult>()
{
  return deva_perception_msgs::msg::builder::Init_RVDynObstacleResult_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_RESULT__BUILDER_HPP_
