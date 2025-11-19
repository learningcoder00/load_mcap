// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/MpcPathData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__MPC_PATH_DATA__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__MPC_PATH_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/mpc_path_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcPathData_delta
{
public:
  explicit Init_MpcPathData_delta(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::MpcPathData delta(::deva_planning_msgs::msg::MpcPathData::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_v
{
public:
  explicit Init_MpcPathData_v(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_delta v(::deva_planning_msgs::msg::MpcPathData::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_MpcPathData_delta(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_alpha
{
public:
  explicit Init_MpcPathData_alpha(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_v alpha(::deva_planning_msgs::msg::MpcPathData::_alpha_type arg)
  {
    msg_.alpha = std::move(arg);
    return Init_MpcPathData_v(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_l
{
public:
  explicit Init_MpcPathData_l(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_alpha l(::deva_planning_msgs::msg::MpcPathData::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_MpcPathData_alpha(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_s
{
public:
  explicit Init_MpcPathData_s(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_l s(::deva_planning_msgs::msg::MpcPathData::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_MpcPathData_l(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_kappa
{
public:
  explicit Init_MpcPathData_kappa(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_s kappa(::deva_planning_msgs::msg::MpcPathData::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_MpcPathData_s(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_heading
{
public:
  explicit Init_MpcPathData_heading(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_kappa heading(::deva_planning_msgs::msg::MpcPathData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_MpcPathData_kappa(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_z
{
public:
  explicit Init_MpcPathData_z(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_heading z(::deva_planning_msgs::msg::MpcPathData::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MpcPathData_heading(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_y
{
public:
  explicit Init_MpcPathData_y(::deva_planning_msgs::msg::MpcPathData & msg)
  : msg_(msg)
  {}
  Init_MpcPathData_z y(::deva_planning_msgs::msg::MpcPathData::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MpcPathData_z(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

class Init_MpcPathData_x
{
public:
  Init_MpcPathData_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MpcPathData_y x(::deva_planning_msgs::msg::MpcPathData::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MpcPathData_y(msg_);
  }

private:
  ::deva_planning_msgs::msg::MpcPathData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::MpcPathData>()
{
  return deva_planning_msgs::msg::builder::Init_MpcPathData_x();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__MPC_PATH_DATA__BUILDER_HPP_
