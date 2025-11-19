// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/OddParkingVehicleState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/odd_parking_vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_OddParkingVehicleState_odd_apa_standby_hu_speed_pass_flag
{
public:
  explicit Init_OddParkingVehicleState_odd_apa_standby_hu_speed_pass_flag(::deva_function_msgs::msg::OddParkingVehicleState & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::OddParkingVehicleState odd_apa_standby_hu_speed_pass_flag(::deva_function_msgs::msg::OddParkingVehicleState::_odd_apa_standby_hu_speed_pass_flag_type arg)
  {
    msg_.odd_apa_standby_hu_speed_pass_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::OddParkingVehicleState msg_;
};

class Init_OddParkingVehicleState_odd_apa_gradient_pass_flag
{
public:
  explicit Init_OddParkingVehicleState_odd_apa_gradient_pass_flag(::deva_function_msgs::msg::OddParkingVehicleState & msg)
  : msg_(msg)
  {}
  Init_OddParkingVehicleState_odd_apa_standby_hu_speed_pass_flag odd_apa_gradient_pass_flag(::deva_function_msgs::msg::OddParkingVehicleState::_odd_apa_gradient_pass_flag_type arg)
  {
    msg_.odd_apa_gradient_pass_flag = std::move(arg);
    return Init_OddParkingVehicleState_odd_apa_standby_hu_speed_pass_flag(msg_);
  }

private:
  ::deva_function_msgs::msg::OddParkingVehicleState msg_;
};

class Init_OddParkingVehicleState_odd_apa_illumination_pass_flag
{
public:
  explicit Init_OddParkingVehicleState_odd_apa_illumination_pass_flag(::deva_function_msgs::msg::OddParkingVehicleState & msg)
  : msg_(msg)
  {}
  Init_OddParkingVehicleState_odd_apa_gradient_pass_flag odd_apa_illumination_pass_flag(::deva_function_msgs::msg::OddParkingVehicleState::_odd_apa_illumination_pass_flag_type arg)
  {
    msg_.odd_apa_illumination_pass_flag = std::move(arg);
    return Init_OddParkingVehicleState_odd_apa_gradient_pass_flag(msg_);
  }

private:
  ::deva_function_msgs::msg::OddParkingVehicleState msg_;
};

class Init_OddParkingVehicleState_publish_timestamp
{
public:
  Init_OddParkingVehicleState_publish_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OddParkingVehicleState_odd_apa_illumination_pass_flag publish_timestamp(::deva_function_msgs::msg::OddParkingVehicleState::_publish_timestamp_type arg)
  {
    msg_.publish_timestamp = std::move(arg);
    return Init_OddParkingVehicleState_odd_apa_illumination_pass_flag(msg_);
  }

private:
  ::deva_function_msgs::msg::OddParkingVehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::OddParkingVehicleState>()
{
  return deva_function_msgs::msg::builder::Init_OddParkingVehicleState_publish_timestamp();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__BUILDER_HPP_
