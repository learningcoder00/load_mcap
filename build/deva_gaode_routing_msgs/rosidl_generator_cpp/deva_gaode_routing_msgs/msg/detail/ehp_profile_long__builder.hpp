// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileLong.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_EhpProfileLong_prof_long_relative_offset
{
public:
  explicit Init_EhpProfileLong_prof_long_relative_offset(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::EhpProfileLong prof_long_relative_offset(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_relative_offset_type arg)
  {
    msg_.prof_long_relative_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_value
{
public:
  explicit Init_EhpProfileLong_prof_long_value(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_relative_offset prof_long_value(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_value_type arg)
  {
    msg_.prof_long_value = std::move(arg);
    return Init_EhpProfileLong_prof_long_relative_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_prof_type
{
public:
  explicit Init_EhpProfileLong_prof_long_prof_type(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_value prof_long_prof_type(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_prof_type_type arg)
  {
    msg_.prof_long_prof_type = std::move(arg);
    return Init_EhpProfileLong_prof_long_value(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_ctrl_point
{
public:
  explicit Init_EhpProfileLong_prof_long_ctrl_point(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_prof_type prof_long_ctrl_point(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_ctrl_point_type arg)
  {
    msg_.prof_long_ctrl_point = std::move(arg);
    return Init_EhpProfileLong_prof_long_prof_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_retr
{
public:
  explicit Init_EhpProfileLong_prof_long_retr(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_ctrl_point prof_long_retr(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_retr_type arg)
  {
    msg_.prof_long_retr = std::move(arg);
    return Init_EhpProfileLong_prof_long_ctrl_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_update
{
public:
  explicit Init_EhpProfileLong_prof_long_update(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_retr prof_long_update(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_update_type arg)
  {
    msg_.prof_long_update = std::move(arg);
    return Init_EhpProfileLong_prof_long_retr(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_cyc_cnt
{
public:
  explicit Init_EhpProfileLong_prof_long_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_update prof_long_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_cyc_cnt_type arg)
  {
    msg_.prof_long_cyc_cnt = std::move(arg);
    return Init_EhpProfileLong_prof_long_update(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_path_idx
{
public:
  explicit Init_EhpProfileLong_prof_long_path_idx(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_cyc_cnt prof_long_path_idx(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_path_idx_type arg)
  {
    msg_.prof_long_path_idx = std::move(arg);
    return Init_EhpProfileLong_prof_long_cyc_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_msg_type
{
public:
  explicit Init_EhpProfileLong_prof_long_msg_type(::deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
  : msg_(msg)
  {}
  Init_EhpProfileLong_prof_long_path_idx prof_long_msg_type(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_msg_type_type arg)
  {
    msg_.prof_long_msg_type = std::move(arg);
    return Init_EhpProfileLong_prof_long_path_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

class Init_EhpProfileLong_prof_long_offset
{
public:
  Init_EhpProfileLong_prof_long_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EhpProfileLong_prof_long_msg_type prof_long_offset(::deva_gaode_routing_msgs::msg::EhpProfileLong::_prof_long_offset_type arg)
  {
    msg_.prof_long_offset = std::move(arg);
    return Init_EhpProfileLong_prof_long_msg_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileLong msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::EhpProfileLong>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_EhpProfileLong_prof_long_offset();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__BUILDER_HPP_
