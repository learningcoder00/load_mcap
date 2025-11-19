// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/StitchData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/stitch_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_StitchData_stitch_steer
{
public:
  explicit Init_StitchData_stitch_steer(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::StitchData stitch_steer(::deva_planning_msgs2::msg::StitchData::_stitch_steer_type arg)
  {
    msg_.stitch_steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_v
{
public:
  explicit Init_StitchData_stitch_v(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_steer stitch_v(::deva_planning_msgs2::msg::StitchData::_stitch_v_type arg)
  {
    msg_.stitch_v = std::move(arg);
    return Init_StitchData_stitch_steer(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_alpha
{
public:
  explicit Init_StitchData_stitch_alpha(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_v stitch_alpha(::deva_planning_msgs2::msg::StitchData::_stitch_alpha_type arg)
  {
    msg_.stitch_alpha = std::move(arg);
    return Init_StitchData_stitch_v(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_heading
{
public:
  explicit Init_StitchData_stitch_heading(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_alpha stitch_heading(::deva_planning_msgs2::msg::StitchData::_stitch_heading_type arg)
  {
    msg_.stitch_heading = std::move(arg);
    return Init_StitchData_stitch_alpha(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_z
{
public:
  explicit Init_StitchData_stitch_z(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_heading stitch_z(::deva_planning_msgs2::msg::StitchData::_stitch_z_type arg)
  {
    msg_.stitch_z = std::move(arg);
    return Init_StitchData_stitch_heading(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_y
{
public:
  explicit Init_StitchData_stitch_y(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_z stitch_y(::deva_planning_msgs2::msg::StitchData::_stitch_y_type arg)
  {
    msg_.stitch_y = std::move(arg);
    return Init_StitchData_stitch_z(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_x
{
public:
  explicit Init_StitchData_stitch_x(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_y stitch_x(::deva_planning_msgs2::msg::StitchData::_stitch_x_type arg)
  {
    msg_.stitch_x = std::move(arg);
    return Init_StitchData_stitch_y(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_l
{
public:
  explicit Init_StitchData_stitch_l(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_x stitch_l(::deva_planning_msgs2::msg::StitchData::_stitch_l_type arg)
  {
    msg_.stitch_l = std::move(arg);
    return Init_StitchData_stitch_x(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_s
{
public:
  explicit Init_StitchData_stitch_s(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_l stitch_s(::deva_planning_msgs2::msg::StitchData::_stitch_s_type arg)
  {
    msg_.stitch_s = std::move(arg);
    return Init_StitchData_stitch_l(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_current_y
{
public:
  explicit Init_StitchData_current_y(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_stitch_s current_y(::deva_planning_msgs2::msg::StitchData::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_StitchData_stitch_s(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_current_x
{
public:
  explicit Init_StitchData_current_x(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_current_y current_x(::deva_planning_msgs2::msg::StitchData::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_StitchData_current_y(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_actual_planner_mode
{
public:
  explicit Init_StitchData_actual_planner_mode(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_current_x actual_planner_mode(::deva_planning_msgs2::msg::StitchData::_actual_planner_mode_type arg)
  {
    msg_.actual_planner_mode = std::move(arg);
    return Init_StitchData_current_x(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_planner_mode
{
public:
  explicit Init_StitchData_planner_mode(::deva_planning_msgs2::msg::StitchData & msg)
  : msg_(msg)
  {}
  Init_StitchData_actual_planner_mode planner_mode(::deva_planning_msgs2::msg::StitchData::_planner_mode_type arg)
  {
    msg_.planner_mode = std::move(arg);
    return Init_StitchData_actual_planner_mode(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

class Init_StitchData_stitch_mode
{
public:
  Init_StitchData_stitch_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StitchData_planner_mode stitch_mode(::deva_planning_msgs2::msg::StitchData::_stitch_mode_type arg)
  {
    msg_.stitch_mode = std::move(arg);
    return Init_StitchData_planner_mode(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StitchData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::StitchData>()
{
  return deva_planning_msgs2::msg::builder::Init_StitchData_stitch_mode();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__BUILDER_HPP_
