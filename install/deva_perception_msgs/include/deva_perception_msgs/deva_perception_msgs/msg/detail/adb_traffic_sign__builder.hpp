// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/AdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/adb_traffic_sign__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_AdbTrafficSign_extra_infos
{
public:
  explicit Init_AdbTrafficSign_extra_infos(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::AdbTrafficSign extra_infos(::deva_perception_msgs::msg::AdbTrafficSign::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_vertical_top_angle
{
public:
  explicit Init_AdbTrafficSign_vertical_top_angle(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_extra_infos vertical_top_angle(::deva_perception_msgs::msg::AdbTrafficSign::_vertical_top_angle_type arg)
  {
    msg_.vertical_top_angle = std::move(arg);
    return Init_AdbTrafficSign_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_vertical_bottom_angle
{
public:
  explicit Init_AdbTrafficSign_vertical_bottom_angle(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_vertical_top_angle vertical_bottom_angle(::deva_perception_msgs::msg::AdbTrafficSign::_vertical_bottom_angle_type arg)
  {
    msg_.vertical_bottom_angle = std::move(arg);
    return Init_AdbTrafficSign_vertical_top_angle(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_horizon_right_angle
{
public:
  explicit Init_AdbTrafficSign_horizon_right_angle(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_vertical_bottom_angle horizon_right_angle(::deva_perception_msgs::msg::AdbTrafficSign::_horizon_right_angle_type arg)
  {
    msg_.horizon_right_angle = std::move(arg);
    return Init_AdbTrafficSign_vertical_bottom_angle(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_horizon_left_angle
{
public:
  explicit Init_AdbTrafficSign_horizon_left_angle(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_horizon_right_angle horizon_left_angle(::deva_perception_msgs::msg::AdbTrafficSign::_horizon_left_angle_type arg)
  {
    msg_.horizon_left_angle = std::move(arg);
    return Init_AdbTrafficSign_horizon_right_angle(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_distance
{
public:
  explicit Init_AdbTrafficSign_distance(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_horizon_left_angle distance(::deva_perception_msgs::msg::AdbTrafficSign::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_AdbTrafficSign_horizon_left_angle(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_life_time
{
public:
  explicit Init_AdbTrafficSign_life_time(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_distance life_time(::deva_perception_msgs::msg::AdbTrafficSign::_life_time_type arg)
  {
    msg_.life_time = std::move(arg);
    return Init_AdbTrafficSign_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_age
{
public:
  explicit Init_AdbTrafficSign_age(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_life_time age(::deva_perception_msgs::msg::AdbTrafficSign::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_AdbTrafficSign_life_time(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_track_info
{
public:
  explicit Init_AdbTrafficSign_track_info(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_age track_info(::deva_perception_msgs::msg::AdbTrafficSign::_track_info_type arg)
  {
    msg_.track_info = std::move(arg);
    return Init_AdbTrafficSign_age(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_parsing_conf
{
public:
  explicit Init_AdbTrafficSign_parsing_conf(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_track_info parsing_conf(::deva_perception_msgs::msg::AdbTrafficSign::_parsing_conf_type arg)
  {
    msg_.parsing_conf = std::move(arg);
    return Init_AdbTrafficSign_track_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_conf
{
public:
  explicit Init_AdbTrafficSign_conf(::deva_perception_msgs::msg::AdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_AdbTrafficSign_parsing_conf conf(::deva_perception_msgs::msg::AdbTrafficSign::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_AdbTrafficSign_parsing_conf(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

class Init_AdbTrafficSign_id
{
public:
  Init_AdbTrafficSign_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdbTrafficSign_conf id(::deva_perception_msgs::msg::AdbTrafficSign::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AdbTrafficSign_conf(msg_);
  }

private:
  ::deva_perception_msgs::msg::AdbTrafficSign msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::AdbTrafficSign>()
{
  return deva_perception_msgs::msg::builder::Init_AdbTrafficSign_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__BUILDER_HPP_
