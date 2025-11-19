// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FsmParkingState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fsm_parking_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FsmParkingState_fsm_apa_current_state
{
public:
  explicit Init_FsmParkingState_fsm_apa_current_state(::deva_function_msgs::msg::FsmParkingState & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FsmParkingState fsm_apa_current_state(::deva_function_msgs::msg::FsmParkingState::_fsm_apa_current_state_type arg)
  {
    msg_.fsm_apa_current_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmParkingState msg_;
};

class Init_FsmParkingState_publish_timestamp
{
public:
  Init_FsmParkingState_publish_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsmParkingState_fsm_apa_current_state publish_timestamp(::deva_function_msgs::msg::FsmParkingState::_publish_timestamp_type arg)
  {
    msg_.publish_timestamp = std::move(arg);
    return Init_FsmParkingState_fsm_apa_current_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmParkingState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FsmParkingState>()
{
  return deva_function_msgs::msg::builder::Init_FsmParkingState_publish_timestamp();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__BUILDER_HPP_
