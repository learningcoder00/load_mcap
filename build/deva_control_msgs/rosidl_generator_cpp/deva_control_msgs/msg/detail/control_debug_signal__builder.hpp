// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/control_debug_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlDebugSignal_debug_signal_9
{
public:
  explicit Init_ControlDebugSignal_debug_signal_9(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::ControlDebugSignal debug_signal_9(::deva_control_msgs::msg::ControlDebugSignal::_debug_signal_9_type arg)
  {
    msg_.debug_signal_9 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_debug_signal_8
{
public:
  explicit Init_ControlDebugSignal_debug_signal_8(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_debug_signal_9 debug_signal_8(::deva_control_msgs::msg::ControlDebugSignal::_debug_signal_8_type arg)
  {
    msg_.debug_signal_8 = std::move(arg);
    return Init_ControlDebugSignal_debug_signal_9(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_debug_signal_7
{
public:
  explicit Init_ControlDebugSignal_debug_signal_7(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_debug_signal_8 debug_signal_7(::deva_control_msgs::msg::ControlDebugSignal::_debug_signal_7_type arg)
  {
    msg_.debug_signal_7 = std::move(arg);
    return Init_ControlDebugSignal_debug_signal_8(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_debug_signal_6
{
public:
  explicit Init_ControlDebugSignal_debug_signal_6(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_debug_signal_7 debug_signal_6(::deva_control_msgs::msg::ControlDebugSignal::_debug_signal_6_type arg)
  {
    msg_.debug_signal_6 = std::move(arg);
    return Init_ControlDebugSignal_debug_signal_7(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_debug_signal_5
{
public:
  explicit Init_ControlDebugSignal_debug_signal_5(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_debug_signal_6 debug_signal_5(::deva_control_msgs::msg::ControlDebugSignal::_debug_signal_5_type arg)
  {
    msg_.debug_signal_5 = std::move(arg);
    return Init_ControlDebugSignal_debug_signal_6(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_debug_signal_4
{
public:
  explicit Init_ControlDebugSignal_debug_signal_4(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_debug_signal_5 debug_signal_4(::deva_control_msgs::msg::ControlDebugSignal::_debug_signal_4_type arg)
  {
    msg_.debug_signal_4 = std::move(arg);
    return Init_ControlDebugSignal_debug_signal_5(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_angle_error
{
public:
  explicit Init_ControlDebugSignal_angle_error(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_debug_signal_4 angle_error(::deva_control_msgs::msg::ControlDebugSignal::_angle_error_type arg)
  {
    msg_.angle_error = std::move(arg);
    return Init_ControlDebugSignal_debug_signal_4(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_distance_error
{
public:
  explicit Init_ControlDebugSignal_distance_error(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_angle_error distance_error(::deva_control_msgs::msg::ControlDebugSignal::_distance_error_type arg)
  {
    msg_.distance_error = std::move(arg);
    return Init_ControlDebugSignal_angle_error(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_preview_speed_target
{
public:
  explicit Init_ControlDebugSignal_preview_speed_target(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_distance_error preview_speed_target(::deva_control_msgs::msg::ControlDebugSignal::_preview_speed_target_type arg)
  {
    msg_.preview_speed_target = std::move(arg);
    return Init_ControlDebugSignal_distance_error(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_preview_steer_error
{
public:
  explicit Init_ControlDebugSignal_preview_steer_error(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_preview_speed_target preview_steer_error(::deva_control_msgs::msg::ControlDebugSignal::_preview_steer_error_type arg)
  {
    msg_.preview_steer_error = std::move(arg);
    return Init_ControlDebugSignal_preview_speed_target(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_speed_error
{
public:
  explicit Init_ControlDebugSignal_speed_error(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_preview_steer_error speed_error(::deva_control_msgs::msg::ControlDebugSignal::_speed_error_type arg)
  {
    msg_.speed_error = std::move(arg);
    return Init_ControlDebugSignal_preview_steer_error(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_speed_current
{
public:
  explicit Init_ControlDebugSignal_speed_current(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_speed_error speed_current(::deva_control_msgs::msg::ControlDebugSignal::_speed_current_type arg)
  {
    msg_.speed_current = std::move(arg);
    return Init_ControlDebugSignal_speed_error(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_speed_target
{
public:
  explicit Init_ControlDebugSignal_speed_target(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_speed_current speed_target(::deva_control_msgs::msg::ControlDebugSignal::_speed_target_type arg)
  {
    msg_.speed_target = std::move(arg);
    return Init_ControlDebugSignal_speed_current(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_speed_offset
{
public:
  explicit Init_ControlDebugSignal_speed_offset(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_speed_target speed_offset(::deva_control_msgs::msg::ControlDebugSignal::_speed_offset_type arg)
  {
    msg_.speed_offset = std::move(arg);
    return Init_ControlDebugSignal_speed_target(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_station_error
{
public:
  explicit Init_ControlDebugSignal_station_error(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_speed_offset station_error(::deva_control_msgs::msg::ControlDebugSignal::_station_error_type arg)
  {
    msg_.station_error = std::move(arg);
    return Init_ControlDebugSignal_speed_offset(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_c2_val
{
public:
  explicit Init_ControlDebugSignal_c2_val(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_station_error c2_val(::deva_control_msgs::msg::ControlDebugSignal::_c2_val_type arg)
  {
    msg_.c2_val = std::move(arg);
    return Init_ControlDebugSignal_station_error(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_c1_val
{
public:
  explicit Init_ControlDebugSignal_c1_val(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_c2_val c1_val(::deva_control_msgs::msg::ControlDebugSignal::_c1_val_type arg)
  {
    msg_.c1_val = std::move(arg);
    return Init_ControlDebugSignal_c2_val(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_c0_val
{
public:
  explicit Init_ControlDebugSignal_c0_val(::deva_control_msgs::msg::ControlDebugSignal & msg)
  : msg_(msg)
  {}
  Init_ControlDebugSignal_c1_val c0_val(::deva_control_msgs::msg::ControlDebugSignal::_c0_val_type arg)
  {
    msg_.c0_val = std::move(arg);
    return Init_ControlDebugSignal_c1_val(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

class Init_ControlDebugSignal_header
{
public:
  Init_ControlDebugSignal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlDebugSignal_c0_val header(::deva_control_msgs::msg::ControlDebugSignal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlDebugSignal_c0_val(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlDebugSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::ControlDebugSignal>()
{
  return deva_control_msgs::msg::builder::Init_ControlDebugSignal_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__BUILDER_HPP_
