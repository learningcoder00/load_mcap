// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_detect_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficDetectData_reserved
{
public:
  explicit Init_TrafficDetectData_reserved(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficDetectData reserved(::deva_perception_msgs::msg::TrafficDetectData::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_time_of_day
{
public:
  explicit Init_TrafficDetectData_time_of_day(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_reserved time_of_day(::deva_perception_msgs::msg::TrafficDetectData::_time_of_day_type arg)
  {
    msg_.time_of_day = std::move(arg);
    return Init_TrafficDetectData_reserved(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_e2eobjects
{
public:
  explicit Init_TrafficDetectData_e2eobjects(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_time_of_day e2eobjects(::deva_perception_msgs::msg::TrafficDetectData::_e2eobjects_type arg)
  {
    msg_.e2eobjects = std::move(arg);
    return Init_TrafficDetectData_time_of_day(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_f30trafficobjects
{
public:
  explicit Init_TrafficDetectData_f30trafficobjects(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_e2eobjects f30trafficobjects(::deva_perception_msgs::msg::TrafficDetectData::_f30trafficobjects_type arg)
  {
    msg_.f30trafficobjects = std::move(arg);
    return Init_TrafficDetectData_e2eobjects(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_f120trafficobjects
{
public:
  explicit Init_TrafficDetectData_f120trafficobjects(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_f30trafficobjects f120trafficobjects(::deva_perception_msgs::msg::TrafficDetectData::_f120trafficobjects_type arg)
  {
    msg_.f120trafficobjects = std::move(arg);
    return Init_TrafficDetectData_f30trafficobjects(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_f30_object_num
{
public:
  explicit Init_TrafficDetectData_f30_object_num(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_f120trafficobjects f30_object_num(::deva_perception_msgs::msg::TrafficDetectData::_f30_object_num_type arg)
  {
    msg_.f30_object_num = std::move(arg);
    return Init_TrafficDetectData_f120trafficobjects(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_f120_object_num
{
public:
  explicit Init_TrafficDetectData_f120_object_num(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_f30_object_num f120_object_num(::deva_perception_msgs::msg::TrafficDetectData::_f120_object_num_type arg)
  {
    msg_.f120_object_num = std::move(arg);
    return Init_TrafficDetectData_f30_object_num(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_acc_motion
{
public:
  explicit Init_TrafficDetectData_acc_motion(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_f120_object_num acc_motion(::deva_perception_msgs::msg::TrafficDetectData::_acc_motion_type arg)
  {
    msg_.acc_motion = std::move(arg);
    return Init_TrafficDetectData_f120_object_num(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_vel_motion
{
public:
  explicit Init_TrafficDetectData_vel_motion(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_acc_motion vel_motion(::deva_perception_msgs::msg::TrafficDetectData::_vel_motion_type arg)
  {
    msg_.vel_motion = std::move(arg);
    return Init_TrafficDetectData_acc_motion(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_abs_acc_x
{
public:
  explicit Init_TrafficDetectData_abs_acc_x(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_vel_motion abs_acc_x(::deva_perception_msgs::msg::TrafficDetectData::_abs_acc_x_type arg)
  {
    msg_.abs_acc_x = std::move(arg);
    return Init_TrafficDetectData_vel_motion(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_abs_vel_x
{
public:
  explicit Init_TrafficDetectData_abs_vel_x(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_abs_acc_x abs_vel_x(::deva_perception_msgs::msg::TrafficDetectData::_abs_vel_x_type arg)
  {
    msg_.abs_vel_x = std::move(arg);
    return Init_TrafficDetectData_abs_acc_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_timestamp
{
public:
  explicit Init_TrafficDetectData_timestamp(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_abs_vel_x timestamp(::deva_perception_msgs::msg::TrafficDetectData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrafficDetectData_abs_vel_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_framenum
{
public:
  explicit Init_TrafficDetectData_framenum(::deva_perception_msgs::msg::TrafficDetectData & msg)
  : msg_(msg)
  {}
  Init_TrafficDetectData_timestamp framenum(::deva_perception_msgs::msg::TrafficDetectData::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_TrafficDetectData_timestamp(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

class Init_TrafficDetectData_header
{
public:
  Init_TrafficDetectData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficDetectData_framenum header(::deva_perception_msgs::msg::TrafficDetectData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficDetectData_framenum(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficDetectData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficDetectData>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficDetectData_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__BUILDER_HPP_
