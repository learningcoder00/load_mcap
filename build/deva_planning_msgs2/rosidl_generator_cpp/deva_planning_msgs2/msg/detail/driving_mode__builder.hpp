// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/DrivingMode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__DRIVING_MODE__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__DRIVING_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/driving_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_DrivingMode_driving_mode_select
{
public:
  explicit Init_DrivingMode_driving_mode_select(::deva_planning_msgs2::msg::DrivingMode & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::DrivingMode driving_mode_select(::deva_planning_msgs2::msg::DrivingMode::_driving_mode_select_type arg)
  {
    msg_.driving_mode_select = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::DrivingMode msg_;
};

class Init_DrivingMode_header
{
public:
  Init_DrivingMode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingMode_driving_mode_select header(::deva_planning_msgs2::msg::DrivingMode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DrivingMode_driving_mode_select(msg_);
  }

private:
  ::deva_planning_msgs2::msg::DrivingMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::DrivingMode>()
{
  return deva_planning_msgs2::msg::builder::Init_DrivingMode_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__DRIVING_MODE__BUILDER_HPP_
