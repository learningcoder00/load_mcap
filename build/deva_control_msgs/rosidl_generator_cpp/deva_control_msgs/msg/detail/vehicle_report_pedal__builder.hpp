// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/VehicleReportPedal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/vehicle_report_pedal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleReportPedal_brk_pedal_pos
{
public:
  explicit Init_VehicleReportPedal_brk_pedal_pos(::deva_control_msgs::msg::VehicleReportPedal & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::VehicleReportPedal brk_pedal_pos(::deva_control_msgs::msg::VehicleReportPedal::_brk_pedal_pos_type arg)
  {
    msg_.brk_pedal_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportPedal msg_;
};

class Init_VehicleReportPedal_acc_pedal_pos
{
public:
  Init_VehicleReportPedal_acc_pedal_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleReportPedal_brk_pedal_pos acc_pedal_pos(::deva_control_msgs::msg::VehicleReportPedal::_acc_pedal_pos_type arg)
  {
    msg_.acc_pedal_pos = std::move(arg);
    return Init_VehicleReportPedal_brk_pedal_pos(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleReportPedal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::VehicleReportPedal>()
{
  return deva_control_msgs::msg::builder::Init_VehicleReportPedal_acc_pedal_pos();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__BUILDER_HPP_
