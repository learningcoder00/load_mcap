// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_localization_msgs:msg/Ins.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__BUILDER_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_localization_msgs/msg/detail/ins__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_Ins_true_north_heading
{
public:
  explicit Init_Ins_true_north_heading(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  ::deva_localization_msgs::msg::Ins true_north_heading(::deva_localization_msgs::msg::Ins::_true_north_heading_type arg)
  {
    msg_.true_north_heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_gcj_localization
{
public:
  explicit Init_Ins_gcj_localization(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_true_north_heading gcj_localization(::deva_localization_msgs::msg::Ins::_gcj_localization_type arg)
  {
    msg_.gcj_localization = std::move(arg);
    return Init_Ins_true_north_heading(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_gcj_lon
{
public:
  explicit Init_Ins_gcj_lon(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_gcj_localization gcj_lon(::deva_localization_msgs::msg::Ins::_gcj_lon_type arg)
  {
    msg_.gcj_lon = std::move(arg);
    return Init_Ins_gcj_localization(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_gcj_lat
{
public:
  explicit Init_Ins_gcj_lat(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_gcj_lon gcj_lat(::deva_localization_msgs::msg::Ins::_gcj_lat_type arg)
  {
    msg_.gcj_lat = std::move(arg);
    return Init_Ins_gcj_lon(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_localization
{
public:
  explicit Init_Ins_localization(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_gcj_lat localization(::deva_localization_msgs::msg::Ins::_localization_type arg)
  {
    msg_.localization = std::move(arg);
    return Init_Ins_gcj_lat(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_height
{
public:
  explicit Init_Ins_height(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_localization height(::deva_localization_msgs::msg::Ins::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Ins_localization(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_lon
{
public:
  explicit Init_Ins_lon(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_height lon(::deva_localization_msgs::msg::Ins::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_Ins_height(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_lat
{
public:
  explicit Init_Ins_lat(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_lon lat(::deva_localization_msgs::msg::Ins::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_Ins_lon(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_ins_status
{
public:
  explicit Init_Ins_ins_status(::deva_localization_msgs::msg::Ins & msg)
  : msg_(msg)
  {}
  Init_Ins_lat ins_status(::deva_localization_msgs::msg::Ins::_ins_status_type arg)
  {
    msg_.ins_status = std::move(arg);
    return Init_Ins_lat(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

class Init_Ins_header
{
public:
  Init_Ins_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ins_ins_status header(::deva_localization_msgs::msg::Ins::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ins_ins_status(msg_);
  }

private:
  ::deva_localization_msgs::msg::Ins msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_localization_msgs::msg::Ins>()
{
  return deva_localization_msgs::msg::builder::Init_Ins_header();
}

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__BUILDER_HPP_
