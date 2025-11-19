// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Signal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Signal_state_type
{
public:
  explicit Init_Signal_state_type(::deva_perception_msgs::msg::Signal & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Signal state_type(::deva_perception_msgs::msg::Signal::_state_type_type arg)
  {
    msg_.state_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Signal msg_;
};

class Init_Signal_geometry_type
{
public:
  explicit Init_Signal_geometry_type(::deva_perception_msgs::msg::Signal & msg)
  : msg_(msg)
  {}
  Init_Signal_state_type geometry_type(::deva_perception_msgs::msg::Signal::_geometry_type_type arg)
  {
    msg_.geometry_type = std::move(arg);
    return Init_Signal_state_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Signal msg_;
};

class Init_Signal_signal_type
{
public:
  explicit Init_Signal_signal_type(::deva_perception_msgs::msg::Signal & msg)
  : msg_(msg)
  {}
  Init_Signal_geometry_type signal_type(::deva_perception_msgs::msg::Signal::_signal_type_type arg)
  {
    msg_.signal_type = std::move(arg);
    return Init_Signal_geometry_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Signal msg_;
};

class Init_Signal_so
{
public:
  Init_Signal_so()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Signal_signal_type so(::deva_perception_msgs::msg::Signal::_so_type arg)
  {
    msg_.so = std::move(arg);
    return Init_Signal_signal_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Signal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Signal>()
{
  return deva_perception_msgs::msg::builder::Init_Signal_so();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__BUILDER_HPP_
