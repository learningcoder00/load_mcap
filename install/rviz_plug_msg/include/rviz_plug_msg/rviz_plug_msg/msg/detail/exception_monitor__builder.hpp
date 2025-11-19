// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__BUILDER_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_plug_msg/msg/detail/exception_monitor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_plug_msg
{

namespace msg
{

namespace builder
{

class Init_ExceptionMonitor_exception_content
{
public:
  Init_ExceptionMonitor_exception_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rviz_plug_msg::msg::ExceptionMonitor exception_content(::rviz_plug_msg::msg::ExceptionMonitor::_exception_content_type arg)
  {
    msg_.exception_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_plug_msg::msg::ExceptionMonitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_plug_msg::msg::ExceptionMonitor>()
{
  return rviz_plug_msg::msg::builder::Init_ExceptionMonitor_exception_content();
}

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__BUILDER_HPP_
