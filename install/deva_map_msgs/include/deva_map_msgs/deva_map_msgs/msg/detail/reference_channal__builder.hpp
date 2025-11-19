// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/reference_channal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ReferenceChannal_object_infos
{
public:
  explicit Init_ReferenceChannal_object_infos(::deva_map_msgs::msg::ReferenceChannal & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ReferenceChannal object_infos(::deva_map_msgs::msg::ReferenceChannal::_object_infos_type arg)
  {
    msg_.object_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ReferenceChannal msg_;
};

class Init_ReferenceChannal_right_marking
{
public:
  explicit Init_ReferenceChannal_right_marking(::deva_map_msgs::msg::ReferenceChannal & msg)
  : msg_(msg)
  {}
  Init_ReferenceChannal_object_infos right_marking(::deva_map_msgs::msg::ReferenceChannal::_right_marking_type arg)
  {
    msg_.right_marking = std::move(arg);
    return Init_ReferenceChannal_object_infos(msg_);
  }

private:
  ::deva_map_msgs::msg::ReferenceChannal msg_;
};

class Init_ReferenceChannal_left_marking
{
public:
  explicit Init_ReferenceChannal_left_marking(::deva_map_msgs::msg::ReferenceChannal & msg)
  : msg_(msg)
  {}
  Init_ReferenceChannal_right_marking left_marking(::deva_map_msgs::msg::ReferenceChannal::_left_marking_type arg)
  {
    msg_.left_marking = std::move(arg);
    return Init_ReferenceChannal_right_marking(msg_);
  }

private:
  ::deva_map_msgs::msg::ReferenceChannal msg_;
};

class Init_ReferenceChannal_middle_line
{
public:
  explicit Init_ReferenceChannal_middle_line(::deva_map_msgs::msg::ReferenceChannal & msg)
  : msg_(msg)
  {}
  Init_ReferenceChannal_left_marking middle_line(::deva_map_msgs::msg::ReferenceChannal::_middle_line_type arg)
  {
    msg_.middle_line = std::move(arg);
    return Init_ReferenceChannal_left_marking(msg_);
  }

private:
  ::deva_map_msgs::msg::ReferenceChannal msg_;
};

class Init_ReferenceChannal_channel_idx
{
public:
  explicit Init_ReferenceChannal_channel_idx(::deva_map_msgs::msg::ReferenceChannal & msg)
  : msg_(msg)
  {}
  Init_ReferenceChannal_middle_line channel_idx(::deva_map_msgs::msg::ReferenceChannal::_channel_idx_type arg)
  {
    msg_.channel_idx = std::move(arg);
    return Init_ReferenceChannal_middle_line(msg_);
  }

private:
  ::deva_map_msgs::msg::ReferenceChannal msg_;
};

class Init_ReferenceChannal_confidence_coefficient
{
public:
  explicit Init_ReferenceChannal_confidence_coefficient(::deva_map_msgs::msg::ReferenceChannal & msg)
  : msg_(msg)
  {}
  Init_ReferenceChannal_channel_idx confidence_coefficient(::deva_map_msgs::msg::ReferenceChannal::_confidence_coefficient_type arg)
  {
    msg_.confidence_coefficient = std::move(arg);
    return Init_ReferenceChannal_channel_idx(msg_);
  }

private:
  ::deva_map_msgs::msg::ReferenceChannal msg_;
};

class Init_ReferenceChannal_available
{
public:
  Init_ReferenceChannal_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceChannal_confidence_coefficient available(::deva_map_msgs::msg::ReferenceChannal::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_ReferenceChannal_confidence_coefficient(msg_);
  }

private:
  ::deva_map_msgs::msg::ReferenceChannal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ReferenceChannal>()
{
  return deva_map_msgs::msg::builder::Init_ReferenceChannal_available();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__BUILDER_HPP_
