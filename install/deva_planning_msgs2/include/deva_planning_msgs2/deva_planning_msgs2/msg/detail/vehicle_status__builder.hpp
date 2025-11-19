// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_status
{
public:
  explicit Init_VehicleStatus_status(::deva_planning_msgs2::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::VehicleStatus status(::deva_planning_msgs2::msg::VehicleStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_header
{
public:
  Init_VehicleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_status header(::deva_planning_msgs2::msg::VehicleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStatus_status(msg_);
  }

private:
  ::deva_planning_msgs2::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::VehicleStatus>()
{
  return deva_planning_msgs2::msg::builder::Init_VehicleStatus_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
