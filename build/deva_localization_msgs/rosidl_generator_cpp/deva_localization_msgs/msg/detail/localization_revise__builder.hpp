// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_localization_msgs:msg/LocalizationRevise.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__BUILDER_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_localization_msgs/msg/detail/localization_revise__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalizationRevise_state_message
{
public:
  explicit Init_LocalizationRevise_state_message(::deva_localization_msgs::msg::LocalizationRevise & msg)
  : msg_(msg)
  {}
  ::deva_localization_msgs::msg::LocalizationRevise state_message(::deva_localization_msgs::msg::LocalizationRevise::_state_message_type arg)
  {
    msg_.state_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationRevise msg_;
};

class Init_LocalizationRevise_orientation
{
public:
  explicit Init_LocalizationRevise_orientation(::deva_localization_msgs::msg::LocalizationRevise & msg)
  : msg_(msg)
  {}
  Init_LocalizationRevise_state_message orientation(::deva_localization_msgs::msg::LocalizationRevise::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_LocalizationRevise_state_message(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationRevise msg_;
};

class Init_LocalizationRevise_position
{
public:
  explicit Init_LocalizationRevise_position(::deva_localization_msgs::msg::LocalizationRevise & msg)
  : msg_(msg)
  {}
  Init_LocalizationRevise_orientation position(::deva_localization_msgs::msg::LocalizationRevise::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_LocalizationRevise_orientation(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationRevise msg_;
};

class Init_LocalizationRevise_header
{
public:
  Init_LocalizationRevise_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizationRevise_position header(::deva_localization_msgs::msg::LocalizationRevise::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalizationRevise_position(msg_);
  }

private:
  ::deva_localization_msgs::msg::LocalizationRevise msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_localization_msgs::msg::LocalizationRevise>()
{
  return deva_localization_msgs::msg::builder::Init_LocalizationRevise_header();
}

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__BUILDER_HPP_
