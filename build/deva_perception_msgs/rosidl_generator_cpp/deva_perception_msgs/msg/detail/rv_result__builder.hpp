// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVResult_extra_infos
{
public:
  explicit Init_RVResult_extra_infos(::deva_perception_msgs::msg::RVResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVResult extra_infos(::deva_perception_msgs::msg::RVResult::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVResult msg_;
};

class Init_RVResult_fixed_obs_list
{
public:
  explicit Init_RVResult_fixed_obs_list(::deva_perception_msgs::msg::RVResult & msg)
  : msg_(msg)
  {}
  Init_RVResult_extra_infos fixed_obs_list(::deva_perception_msgs::msg::RVResult::_fixed_obs_list_type arg)
  {
    msg_.fixed_obs_list = std::move(arg);
    return Init_RVResult_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVResult msg_;
};

class Init_RVResult_dynamic_obs_list
{
public:
  explicit Init_RVResult_dynamic_obs_list(::deva_perception_msgs::msg::RVResult & msg)
  : msg_(msg)
  {}
  Init_RVResult_fixed_obs_list dynamic_obs_list(::deva_perception_msgs::msg::RVResult::_dynamic_obs_list_type arg)
  {
    msg_.dynamic_obs_list = std::move(arg);
    return Init_RVResult_fixed_obs_list(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVResult msg_;
};

class Init_RVResult_orientation
{
public:
  explicit Init_RVResult_orientation(::deva_perception_msgs::msg::RVResult & msg)
  : msg_(msg)
  {}
  Init_RVResult_dynamic_obs_list orientation(::deva_perception_msgs::msg::RVResult::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RVResult_dynamic_obs_list(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVResult msg_;
};

class Init_RVResult_translation
{
public:
  explicit Init_RVResult_translation(::deva_perception_msgs::msg::RVResult & msg)
  : msg_(msg)
  {}
  Init_RVResult_orientation translation(::deva_perception_msgs::msg::RVResult::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_RVResult_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVResult msg_;
};

class Init_RVResult_header
{
public:
  Init_RVResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVResult_translation header(::deva_perception_msgs::msg::RVResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RVResult_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVResult>()
{
  return deva_perception_msgs::msg::builder::Init_RVResult_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_RESULT__BUILDER_HPP_
