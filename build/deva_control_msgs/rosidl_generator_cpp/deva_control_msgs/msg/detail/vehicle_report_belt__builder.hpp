// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/VehicleReportBelt.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/vehicle_report_belt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleReportBelt_rr_belt
{
public:
  explicit Init_VehicleReportBelt_rr_belt(::deva_control_msgs::msg::VehicleReportBelt & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::VehicleReportBelt rr_belt(::deva_control_msgs::msg::VehicleReportBelt::_rr_belt_type arg)
  {
    msg_.rr_belt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportBelt msg_;
};

class Init_VehicleReportBelt_rm_belt
{
public:
  explicit Init_VehicleReportBelt_rm_belt(::deva_control_msgs::msg::VehicleReportBelt & msg)
  : msg_(msg)
  {}
  Init_VehicleReportBelt_rr_belt rm_belt(::deva_control_msgs::msg::VehicleReportBelt::_rm_belt_type arg)
  {
    msg_.rm_belt = std::move(arg);
    return Init_VehicleReportBelt_rr_belt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportBelt msg_;
};

class Init_VehicleReportBelt_rl_belt
{
public:
  explicit Init_VehicleReportBelt_rl_belt(::deva_control_msgs::msg::VehicleReportBelt & msg)
  : msg_(msg)
  {}
  Init_VehicleReportBelt_rm_belt rl_belt(::deva_control_msgs::msg::VehicleReportBelt::_rl_belt_type arg)
  {
    msg_.rl_belt = std::move(arg);
    return Init_VehicleReportBelt_rm_belt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportBelt msg_;
};

class Init_VehicleReportBelt_pass_belt
{
public:
  explicit Init_VehicleReportBelt_pass_belt(::deva_control_msgs::msg::VehicleReportBelt & msg)
  : msg_(msg)
  {}
  Init_VehicleReportBelt_rl_belt pass_belt(::deva_control_msgs::msg::VehicleReportBelt::_pass_belt_type arg)
  {
    msg_.pass_belt = std::move(arg);
    return Init_VehicleReportBelt_rl_belt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportBelt msg_;
};

class Init_VehicleReportBelt_drv_belt
{
public:
  Init_VehicleReportBelt_drv_belt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleReportBelt_pass_belt drv_belt(::deva_control_msgs::msg::VehicleReportBelt::_drv_belt_type arg)
  {
    msg_.drv_belt = std::move(arg);
    return Init_VehicleReportBelt_pass_belt(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportBelt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::VehicleReportBelt>()
{
  return deva_control_msgs::msg::builder::Init_VehicleReportBelt_drv_belt();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__BUILDER_HPP_
