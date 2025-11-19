// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__BUILDER_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_plug_msg/msg/detail/freq_monitor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_plug_msg
{

namespace msg
{

namespace builder
{

class Init_FreqMonitor_max_thresholds
{
public:
  explicit Init_FreqMonitor_max_thresholds(::rviz_plug_msg::msg::FreqMonitor & msg)
  : msg_(msg)
  {}
  ::rviz_plug_msg::msg::FreqMonitor max_thresholds(::rviz_plug_msg::msg::FreqMonitor::_max_thresholds_type arg)
  {
    msg_.max_thresholds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_plug_msg::msg::FreqMonitor msg_;
};

class Init_FreqMonitor_min_thresholds
{
public:
  explicit Init_FreqMonitor_min_thresholds(::rviz_plug_msg::msg::FreqMonitor & msg)
  : msg_(msg)
  {}
  Init_FreqMonitor_max_thresholds min_thresholds(::rviz_plug_msg::msg::FreqMonitor::_min_thresholds_type arg)
  {
    msg_.min_thresholds = std::move(arg);
    return Init_FreqMonitor_max_thresholds(msg_);
  }

private:
  ::rviz_plug_msg::msg::FreqMonitor msg_;
};

class Init_FreqMonitor_freqs
{
public:
  explicit Init_FreqMonitor_freqs(::rviz_plug_msg::msg::FreqMonitor & msg)
  : msg_(msg)
  {}
  Init_FreqMonitor_min_thresholds freqs(::rviz_plug_msg::msg::FreqMonitor::_freqs_type arg)
  {
    msg_.freqs = std::move(arg);
    return Init_FreqMonitor_min_thresholds(msg_);
  }

private:
  ::rviz_plug_msg::msg::FreqMonitor msg_;
};

class Init_FreqMonitor_topic_names
{
public:
  explicit Init_FreqMonitor_topic_names(::rviz_plug_msg::msg::FreqMonitor & msg)
  : msg_(msg)
  {}
  Init_FreqMonitor_freqs topic_names(::rviz_plug_msg::msg::FreqMonitor::_topic_names_type arg)
  {
    msg_.topic_names = std::move(arg);
    return Init_FreqMonitor_freqs(msg_);
  }

private:
  ::rviz_plug_msg::msg::FreqMonitor msg_;
};

class Init_FreqMonitor_valid_length
{
public:
  explicit Init_FreqMonitor_valid_length(::rviz_plug_msg::msg::FreqMonitor & msg)
  : msg_(msg)
  {}
  Init_FreqMonitor_topic_names valid_length(::rviz_plug_msg::msg::FreqMonitor::_valid_length_type arg)
  {
    msg_.valid_length = std::move(arg);
    return Init_FreqMonitor_topic_names(msg_);
  }

private:
  ::rviz_plug_msg::msg::FreqMonitor msg_;
};

class Init_FreqMonitor_header
{
public:
  Init_FreqMonitor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FreqMonitor_valid_length header(::rviz_plug_msg::msg::FreqMonitor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FreqMonitor_valid_length(msg_);
  }

private:
  ::rviz_plug_msg::msg::FreqMonitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_plug_msg::msg::FreqMonitor>()
{
  return rviz_plug_msg::msg::builder::Init_FreqMonitor_header();
}

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__BUILDER_HPP_
