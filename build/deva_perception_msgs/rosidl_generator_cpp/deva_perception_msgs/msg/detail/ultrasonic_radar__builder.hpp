// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/UltrasonicRadar.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/ultrasonic_radar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_UltrasonicRadar_radar_distance_vaild
{
public:
  explicit Init_UltrasonicRadar_radar_distance_vaild(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::UltrasonicRadar radar_distance_vaild(::deva_perception_msgs::msg::UltrasonicRadar::_radar_distance_vaild_type arg)
  {
    msg_.radar_distance_vaild = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_radar_distance
{
public:
  explicit Init_UltrasonicRadar_radar_distance(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_radar_distance_vaild radar_distance(::deva_perception_msgs::msg::UltrasonicRadar::_radar_distance_type arg)
  {
    msg_.radar_distance = std::move(arg);
    return Init_UltrasonicRadar_radar_distance_vaild(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_max_radar_distance
{
public:
  explicit Init_UltrasonicRadar_max_radar_distance(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_radar_distance max_radar_distance(::deva_perception_msgs::msg::UltrasonicRadar::_max_radar_distance_type arg)
  {
    msg_.max_radar_distance = std::move(arg);
    return Init_UltrasonicRadar_radar_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_range
{
public:
  explicit Init_UltrasonicRadar_range(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_max_radar_distance range(::deva_perception_msgs::msg::UltrasonicRadar::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_UltrasonicRadar_max_radar_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_radar_rx_status
{
public:
  explicit Init_UltrasonicRadar_radar_rx_status(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_range radar_rx_status(::deva_perception_msgs::msg::UltrasonicRadar::_radar_rx_status_type arg)
  {
    msg_.radar_rx_status = std::move(arg);
    return Init_UltrasonicRadar_range(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_radar_tx_status
{
public:
  explicit Init_UltrasonicRadar_radar_tx_status(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_radar_rx_status radar_tx_status(::deva_perception_msgs::msg::UltrasonicRadar::_radar_tx_status_type arg)
  {
    msg_.radar_tx_status = std::move(arg);
    return Init_UltrasonicRadar_radar_rx_status(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_radar_state
{
public:
  explicit Init_UltrasonicRadar_radar_state(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_radar_tx_status radar_state(::deva_perception_msgs::msg::UltrasonicRadar::_radar_state_type arg)
  {
    msg_.radar_state = std::move(arg);
    return Init_UltrasonicRadar_radar_tx_status(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_radar_type
{
public:
  explicit Init_UltrasonicRadar_radar_type(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_radar_state radar_type(::deva_perception_msgs::msg::UltrasonicRadar::_radar_type_type arg)
  {
    msg_.radar_type = std::move(arg);
    return Init_UltrasonicRadar_radar_state(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_radar_name
{
public:
  explicit Init_UltrasonicRadar_radar_name(::deva_perception_msgs::msg::UltrasonicRadar & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadar_radar_type radar_name(::deva_perception_msgs::msg::UltrasonicRadar::_radar_name_type arg)
  {
    msg_.radar_name = std::move(arg);
    return Init_UltrasonicRadar_radar_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

class Init_UltrasonicRadar_radar_identify_id
{
public:
  Init_UltrasonicRadar_radar_identify_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UltrasonicRadar_radar_name radar_identify_id(::deva_perception_msgs::msg::UltrasonicRadar::_radar_identify_id_type arg)
  {
    msg_.radar_identify_id = std::move(arg);
    return Init_UltrasonicRadar_radar_name(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::UltrasonicRadar>()
{
  return deva_perception_msgs::msg::builder::Init_UltrasonicRadar_radar_identify_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__BUILDER_HPP_
