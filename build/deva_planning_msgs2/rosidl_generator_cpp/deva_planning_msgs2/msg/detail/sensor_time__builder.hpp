// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/SensorTime.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/sensor_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_SensorTime_navigator_end_header
{
public:
  explicit Init_SensorTime_navigator_end_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::SensorTime navigator_end_header(::deva_planning_msgs2::msg::SensorTime::_navigator_end_header_type arg)
  {
    msg_.navigator_end_header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_navigator_start_header
{
public:
  explicit Init_SensorTime_navigator_start_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_navigator_end_header navigator_start_header(::deva_planning_msgs2::msg::SensorTime::_navigator_start_header_type arg)
  {
    msg_.navigator_start_header = std::move(arg);
    return Init_SensorTime_navigator_end_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_finish_planning_header
{
public:
  explicit Init_SensorTime_finish_planning_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_navigator_start_header finish_planning_header(::deva_planning_msgs2::msg::SensorTime::_finish_planning_header_type arg)
  {
    msg_.finish_planning_header = std::move(arg);
    return Init_SensorTime_navigator_start_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_start_planning_header
{
public:
  explicit Init_SensorTime_start_planning_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_finish_planning_header start_planning_header(::deva_planning_msgs2::msg::SensorTime::_start_planning_header_type arg)
  {
    msg_.start_planning_header = std::move(arg);
    return Init_SensorTime_finish_planning_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_routing_header
{
public:
  explicit Init_SensorTime_routing_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_start_planning_header routing_header(::deva_planning_msgs2::msg::SensorTime::_routing_header_type arg)
  {
    msg_.routing_header = std::move(arg);
    return Init_SensorTime_start_planning_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_pull_over_header
{
public:
  explicit Init_SensorTime_pull_over_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_routing_header pull_over_header(::deva_planning_msgs2::msg::SensorTime::_pull_over_header_type arg)
  {
    msg_.pull_over_header = std::move(arg);
    return Init_SensorTime_routing_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_padmsg_header
{
public:
  explicit Init_SensorTime_padmsg_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_pull_over_header padmsg_header(::deva_planning_msgs2::msg::SensorTime::_padmsg_header_type arg)
  {
    msg_.padmsg_header = std::move(arg);
    return Init_SensorTime_pull_over_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_map_header
{
public:
  explicit Init_SensorTime_map_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_padmsg_header map_header(::deva_planning_msgs2::msg::SensorTime::_map_header_type arg)
  {
    msg_.map_header = std::move(arg);
    return Init_SensorTime_padmsg_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_cone_header
{
public:
  explicit Init_SensorTime_cone_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_map_header cone_header(::deva_planning_msgs2::msg::SensorTime::_cone_header_type arg)
  {
    msg_.cone_header = std::move(arg);
    return Init_SensorTime_map_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_traffic_pole_header
{
public:
  explicit Init_SensorTime_traffic_pole_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_cone_header traffic_pole_header(::deva_planning_msgs2::msg::SensorTime::_traffic_pole_header_type arg)
  {
    msg_.traffic_pole_header = std::move(arg);
    return Init_SensorTime_cone_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_traffic_light_header
{
public:
  explicit Init_SensorTime_traffic_light_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_traffic_pole_header traffic_light_header(::deva_planning_msgs2::msg::SensorTime::_traffic_light_header_type arg)
  {
    msg_.traffic_light_header = std::move(arg);
    return Init_SensorTime_traffic_pole_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_chassis_header
{
public:
  explicit Init_SensorTime_chassis_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_traffic_light_header chassis_header(::deva_planning_msgs2::msg::SensorTime::_chassis_header_type arg)
  {
    msg_.chassis_header = std::move(arg);
    return Init_SensorTime_traffic_light_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_decision_header
{
public:
  explicit Init_SensorTime_decision_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_chassis_header decision_header(::deva_planning_msgs2::msg::SensorTime::_decision_header_type arg)
  {
    msg_.decision_header = std::move(arg);
    return Init_SensorTime_chassis_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_prediction_header
{
public:
  explicit Init_SensorTime_prediction_header(::deva_planning_msgs2::msg::SensorTime & msg)
  : msg_(msg)
  {}
  Init_SensorTime_decision_header prediction_header(::deva_planning_msgs2::msg::SensorTime::_prediction_header_type arg)
  {
    msg_.prediction_header = std::move(arg);
    return Init_SensorTime_decision_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

class Init_SensorTime_localization_header
{
public:
  Init_SensorTime_localization_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorTime_prediction_header localization_header(::deva_planning_msgs2::msg::SensorTime::_localization_header_type arg)
  {
    msg_.localization_header = std::move(arg);
    return Init_SensorTime_prediction_header(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SensorTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::SensorTime>()
{
  return deva_planning_msgs2::msg::builder::Init_SensorTime_localization_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__BUILDER_HPP_
