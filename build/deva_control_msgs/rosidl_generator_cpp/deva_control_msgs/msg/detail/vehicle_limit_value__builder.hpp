// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/VehicleLimitValue.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/vehicle_limit_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleLimitValue_value
{
public:
  explicit Init_VehicleLimitValue_value(::deva_control_msgs::msg::VehicleLimitValue & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::VehicleLimitValue value(::deva_control_msgs::msg::VehicleLimitValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleLimitValue msg_;
};

class Init_VehicleLimitValue_value_type
{
public:
  Init_VehicleLimitValue_value_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleLimitValue_value value_type(::deva_control_msgs::msg::VehicleLimitValue::_value_type_type arg)
  {
    msg_.value_type = std::move(arg);
    return Init_VehicleLimitValue_value(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleLimitValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::VehicleLimitValue>()
{
  return deva_control_msgs::msg::builder::Init_VehicleLimitValue_value_type();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__BUILDER_HPP_
