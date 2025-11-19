// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_plug_msg:msg/Freq.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__BUILDER_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_plug_msg/msg/detail/freq__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_plug_msg
{

namespace msg
{

namespace builder
{

class Init_Freq_freqs
{
public:
  explicit Init_Freq_freqs(::rviz_plug_msg::msg::Freq & msg)
  : msg_(msg)
  {}
  ::rviz_plug_msg::msg::Freq freqs(::rviz_plug_msg::msg::Freq::_freqs_type arg)
  {
    msg_.freqs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_plug_msg::msg::Freq msg_;
};

class Init_Freq_header
{
public:
  Init_Freq_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Freq_freqs header(::rviz_plug_msg::msg::Freq::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Freq_freqs(msg_);
  }

private:
  ::rviz_plug_msg::msg::Freq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_plug_msg::msg::Freq>()
{
  return rviz_plug_msg::msg::builder::Init_Freq_header();
}

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__BUILDER_HPP_
