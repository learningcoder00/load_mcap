// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVLight_extra_infos
{
public:
  explicit Init_RVLight_extra_infos(::deva_perception_msgs::msg::RVLight & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVLight extra_infos(::deva_perception_msgs::msg::RVLight::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLight msg_;
};

class Init_RVLight_sign_trun_type
{
public:
  explicit Init_RVLight_sign_trun_type(::deva_perception_msgs::msg::RVLight & msg)
  : msg_(msg)
  {}
  Init_RVLight_extra_infos sign_trun_type(::deva_perception_msgs::msg::RVLight::_sign_trun_type_type arg)
  {
    msg_.sign_trun_type = std::move(arg);
    return Init_RVLight_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLight msg_;
};

class Init_RVLight_sign_occ_type
{
public:
  explicit Init_RVLight_sign_occ_type(::deva_perception_msgs::msg::RVLight & msg)
  : msg_(msg)
  {}
  Init_RVLight_sign_trun_type sign_occ_type(::deva_perception_msgs::msg::RVLight::_sign_occ_type_type arg)
  {
    msg_.sign_occ_type = std::move(arg);
    return Init_RVLight_sign_trun_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLight msg_;
};

class Init_RVLight_depth
{
public:
  explicit Init_RVLight_depth(::deva_perception_msgs::msg::RVLight & msg)
  : msg_(msg)
  {}
  Init_RVLight_sign_occ_type depth(::deva_perception_msgs::msg::RVLight::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_RVLight_sign_occ_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLight msg_;
};

class Init_RVLight_heading_type
{
public:
  explicit Init_RVLight_heading_type(::deva_perception_msgs::msg::RVLight & msg)
  : msg_(msg)
  {}
  Init_RVLight_depth heading_type(::deva_perception_msgs::msg::RVLight::_heading_type_type arg)
  {
    msg_.heading_type = std::move(arg);
    return Init_RVLight_depth(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLight msg_;
};

class Init_RVLight_light_type
{
public:
  explicit Init_RVLight_light_type(::deva_perception_msgs::msg::RVLight & msg)
  : msg_(msg)
  {}
  Init_RVLight_heading_type light_type(::deva_perception_msgs::msg::RVLight::_light_type_type arg)
  {
    msg_.light_type = std::move(arg);
    return Init_RVLight_heading_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLight msg_;
};

class Init_RVLight_obstacle
{
public:
  Init_RVLight_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVLight_light_type obstacle(::deva_perception_msgs::msg::RVLight::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_RVLight_light_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVLight>()
{
  return deva_perception_msgs::msg::builder::Init_RVLight_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__BUILDER_HPP_
