// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/PathData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PATH_DATA__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PATH_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/path_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_PathData_speedlimit
{
public:
  explicit Init_PathData_speedlimit(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::PathData speedlimit(::deva_planning_msgs2::msg::PathData::_speedlimit_type arg)
  {
    msg_.speedlimit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_is_junction
{
public:
  explicit Init_PathData_is_junction(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_speedlimit is_junction(::deva_planning_msgs2::msg::PathData::_is_junction_type arg)
  {
    msg_.is_junction = std::move(arg);
    return Init_PathData_speedlimit(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_ddkappa
{
public:
  explicit Init_PathData_ddkappa(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_is_junction ddkappa(::deva_planning_msgs2::msg::PathData::_ddkappa_type arg)
  {
    msg_.ddkappa = std::move(arg);
    return Init_PathData_is_junction(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_dkappa
{
public:
  explicit Init_PathData_dkappa(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_ddkappa dkappa(::deva_planning_msgs2::msg::PathData::_dkappa_type arg)
  {
    msg_.dkappa = std::move(arg);
    return Init_PathData_ddkappa(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_kappa
{
public:
  explicit Init_PathData_kappa(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_dkappa kappa(::deva_planning_msgs2::msg::PathData::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_PathData_dkappa(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_theta
{
public:
  explicit Init_PathData_theta(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_kappa theta(::deva_planning_msgs2::msg::PathData::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_PathData_kappa(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_s
{
public:
  explicit Init_PathData_s(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_theta s(::deva_planning_msgs2::msg::PathData::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_PathData_theta(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_z
{
public:
  explicit Init_PathData_z(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_s z(::deva_planning_msgs2::msg::PathData::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PathData_s(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_y
{
public:
  explicit Init_PathData_y(::deva_planning_msgs2::msg::PathData & msg)
  : msg_(msg)
  {}
  Init_PathData_z y(::deva_planning_msgs2::msg::PathData::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PathData_z(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

class Init_PathData_x
{
public:
  Init_PathData_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathData_y x(::deva_planning_msgs2::msg::PathData::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PathData_y(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PathData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::PathData>()
{
  return deva_planning_msgs2::msg::builder::Init_PathData_x();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PATH_DATA__BUILDER_HPP_
