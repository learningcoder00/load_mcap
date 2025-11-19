// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileShort.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_EhpProfileShort_prof_short_curve_road
{
public:
  explicit Init_EhpProfileShort_prof_short_curve_road(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::EhpProfileShort prof_short_curve_road(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_curve_road_type arg)
  {
    msg_.prof_short_curve_road = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_relative_offset
{
public:
  explicit Init_EhpProfileShort_prof_short_relative_offset(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_curve_road prof_short_relative_offset(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_relative_offset_type arg)
  {
    msg_.prof_short_relative_offset = std::move(arg);
    return Init_EhpProfileShort_prof_short_curve_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_value1
{
public:
  explicit Init_EhpProfileShort_prof_short_value1(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_relative_offset prof_short_value1(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_value1_type arg)
  {
    msg_.prof_short_value1 = std::move(arg);
    return Init_EhpProfileShort_prof_short_relative_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_value0
{
public:
  explicit Init_EhpProfileShort_prof_short_value0(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_value1 prof_short_value0(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_value0_type arg)
  {
    msg_.prof_short_value0 = std::move(arg);
    return Init_EhpProfileShort_prof_short_value1(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_accur_class
{
public:
  explicit Init_EhpProfileShort_prof_short_accur_class(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_value0 prof_short_accur_class(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_accur_class_type arg)
  {
    msg_.prof_short_accur_class = std::move(arg);
    return Init_EhpProfileShort_prof_short_value0(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_dist1
{
public:
  explicit Init_EhpProfileShort_prof_short_dist1(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_accur_class prof_short_dist1(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_dist1_type arg)
  {
    msg_.prof_short_dist1 = std::move(arg);
    return Init_EhpProfileShort_prof_short_accur_class(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_prof_type
{
public:
  explicit Init_EhpProfileShort_prof_short_prof_type(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_dist1 prof_short_prof_type(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_prof_type_type arg)
  {
    msg_.prof_short_prof_type = std::move(arg);
    return Init_EhpProfileShort_prof_short_dist1(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_ctrl_point
{
public:
  explicit Init_EhpProfileShort_prof_short_ctrl_point(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_prof_type prof_short_ctrl_point(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_ctrl_point_type arg)
  {
    msg_.prof_short_ctrl_point = std::move(arg);
    return Init_EhpProfileShort_prof_short_prof_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_retr
{
public:
  explicit Init_EhpProfileShort_prof_short_retr(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_ctrl_point prof_short_retr(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_retr_type arg)
  {
    msg_.prof_short_retr = std::move(arg);
    return Init_EhpProfileShort_prof_short_ctrl_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_update
{
public:
  explicit Init_EhpProfileShort_prof_short_update(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_retr prof_short_update(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_update_type arg)
  {
    msg_.prof_short_update = std::move(arg);
    return Init_EhpProfileShort_prof_short_retr(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_cyc_cnt
{
public:
  explicit Init_EhpProfileShort_prof_short_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_update prof_short_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_cyc_cnt_type arg)
  {
    msg_.prof_short_cyc_cnt = std::move(arg);
    return Init_EhpProfileShort_prof_short_update(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_path_idx
{
public:
  explicit Init_EhpProfileShort_prof_short_path_idx(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_cyc_cnt prof_short_path_idx(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_path_idx_type arg)
  {
    msg_.prof_short_path_idx = std::move(arg);
    return Init_EhpProfileShort_prof_short_cyc_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_msg_type
{
public:
  explicit Init_EhpProfileShort_prof_short_msg_type(::deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
  : msg_(msg)
  {}
  Init_EhpProfileShort_prof_short_path_idx prof_short_msg_type(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_msg_type_type arg)
  {
    msg_.prof_short_msg_type = std::move(arg);
    return Init_EhpProfileShort_prof_short_path_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

class Init_EhpProfileShort_prof_short_offset
{
public:
  Init_EhpProfileShort_prof_short_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EhpProfileShort_prof_short_msg_type prof_short_offset(::deva_gaode_routing_msgs::msg::EhpProfileShort::_prof_short_offset_type arg)
  {
    msg_.prof_short_offset = std::move(arg);
    return Init_EhpProfileShort_prof_short_msg_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpProfileShort msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::EhpProfileShort>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_EhpProfileShort_prof_short_offset();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__BUILDER_HPP_
