// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RadarVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/radar_vehicle_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarVehicleInfo_vehicle_time
{
public:
  explicit Init_RadarVehicleInfo_vehicle_time(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RadarVehicleInfo vehicle_time(::deva_perception_msgs::msg::RadarVehicleInfo::_vehicle_time_type arg)
  {
    msg_.vehicle_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_radar_time
{
public:
  explicit Init_RadarVehicleInfo_radar_time(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_vehicle_time radar_time(::deva_perception_msgs::msg::RadarVehicleInfo::_radar_time_type arg)
  {
    msg_.radar_time = std::move(arg);
    return Init_RadarVehicleInfo_vehicle_time(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_yaw_rate
{
public:
  explicit Init_RadarVehicleInfo_yaw_rate(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_radar_time yaw_rate(::deva_perception_msgs::msg::RadarVehicleInfo::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_RadarVehicleInfo_radar_time(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_speed
{
public:
  explicit Init_RadarVehicleInfo_speed(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_yaw_rate speed(::deva_perception_msgs::msg::RadarVehicleInfo::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RadarVehicleInfo_yaw_rate(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_abs_acc_y
{
public:
  explicit Init_RadarVehicleInfo_abs_acc_y(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_speed abs_acc_y(::deva_perception_msgs::msg::RadarVehicleInfo::_abs_acc_y_type arg)
  {
    msg_.abs_acc_y = std::move(arg);
    return Init_RadarVehicleInfo_speed(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_abs_acc_x
{
public:
  explicit Init_RadarVehicleInfo_abs_acc_x(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_abs_acc_y abs_acc_x(::deva_perception_msgs::msg::RadarVehicleInfo::_abs_acc_x_type arg)
  {
    msg_.abs_acc_x = std::move(arg);
    return Init_RadarVehicleInfo_abs_acc_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_rel_acc_y
{
public:
  explicit Init_RadarVehicleInfo_rel_acc_y(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_abs_acc_x rel_acc_y(::deva_perception_msgs::msg::RadarVehicleInfo::_rel_acc_y_type arg)
  {
    msg_.rel_acc_y = std::move(arg);
    return Init_RadarVehicleInfo_abs_acc_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_rel_acc_x
{
public:
  explicit Init_RadarVehicleInfo_rel_acc_x(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_rel_acc_y rel_acc_x(::deva_perception_msgs::msg::RadarVehicleInfo::_rel_acc_x_type arg)
  {
    msg_.rel_acc_x = std::move(arg);
    return Init_RadarVehicleInfo_rel_acc_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_abs_vel_y
{
public:
  explicit Init_RadarVehicleInfo_abs_vel_y(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_rel_acc_x abs_vel_y(::deva_perception_msgs::msg::RadarVehicleInfo::_abs_vel_y_type arg)
  {
    msg_.abs_vel_y = std::move(arg);
    return Init_RadarVehicleInfo_rel_acc_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_abs_vel_x
{
public:
  explicit Init_RadarVehicleInfo_abs_vel_x(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_abs_vel_y abs_vel_x(::deva_perception_msgs::msg::RadarVehicleInfo::_abs_vel_x_type arg)
  {
    msg_.abs_vel_x = std::move(arg);
    return Init_RadarVehicleInfo_abs_vel_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_rel_vel_y
{
public:
  explicit Init_RadarVehicleInfo_rel_vel_y(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_abs_vel_x rel_vel_y(::deva_perception_msgs::msg::RadarVehicleInfo::_rel_vel_y_type arg)
  {
    msg_.rel_vel_y = std::move(arg);
    return Init_RadarVehicleInfo_abs_vel_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_rel_vel_x
{
public:
  explicit Init_RadarVehicleInfo_rel_vel_x(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_rel_vel_y rel_vel_x(::deva_perception_msgs::msg::RadarVehicleInfo::_rel_vel_x_type arg)
  {
    msg_.rel_vel_x = std::move(arg);
    return Init_RadarVehicleInfo_rel_vel_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_position_y
{
public:
  explicit Init_RadarVehicleInfo_position_y(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_rel_vel_x position_y(::deva_perception_msgs::msg::RadarVehicleInfo::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_RadarVehicleInfo_rel_vel_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_position_x
{
public:
  explicit Init_RadarVehicleInfo_position_x(::deva_perception_msgs::msg::RadarVehicleInfo & msg)
  : msg_(msg)
  {}
  Init_RadarVehicleInfo_position_y position_x(::deva_perception_msgs::msg::RadarVehicleInfo::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_RadarVehicleInfo_position_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

class Init_RadarVehicleInfo_id
{
public:
  Init_RadarVehicleInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarVehicleInfo_position_x id(::deva_perception_msgs::msg::RadarVehicleInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RadarVehicleInfo_position_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RadarVehicleInfo>()
{
  return deva_perception_msgs::msg::builder::Init_RadarVehicleInfo_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__BUILDER_HPP_
