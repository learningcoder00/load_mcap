// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_plug_msg:msg/BywireDiag.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__BUILDER_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_plug_msg/msg/detail/bywire_diag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_plug_msg
{

namespace msg
{

namespace builder
{

class Init_BywireDiag_detail
{
public:
  explicit Init_BywireDiag_detail(::rviz_plug_msg::msg::BywireDiag & msg)
  : msg_(msg)
  {}
  ::rviz_plug_msg::msg::BywireDiag detail(::rviz_plug_msg::msg::BywireDiag::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_plug_msg::msg::BywireDiag msg_;
};

class Init_BywireDiag_code
{
public:
  explicit Init_BywireDiag_code(::rviz_plug_msg::msg::BywireDiag & msg)
  : msg_(msg)
  {}
  Init_BywireDiag_detail code(::rviz_plug_msg::msg::BywireDiag::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_BywireDiag_detail(msg_);
  }

private:
  ::rviz_plug_msg::msg::BywireDiag msg_;
};

class Init_BywireDiag_type
{
public:
  explicit Init_BywireDiag_type(::rviz_plug_msg::msg::BywireDiag & msg)
  : msg_(msg)
  {}
  Init_BywireDiag_code type(::rviz_plug_msg::msg::BywireDiag::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_BywireDiag_code(msg_);
  }

private:
  ::rviz_plug_msg::msg::BywireDiag msg_;
};

class Init_BywireDiag_node_name
{
public:
  explicit Init_BywireDiag_node_name(::rviz_plug_msg::msg::BywireDiag & msg)
  : msg_(msg)
  {}
  Init_BywireDiag_type node_name(::rviz_plug_msg::msg::BywireDiag::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_BywireDiag_type(msg_);
  }

private:
  ::rviz_plug_msg::msg::BywireDiag msg_;
};

class Init_BywireDiag_header
{
public:
  Init_BywireDiag_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BywireDiag_node_name header(::rviz_plug_msg::msg::BywireDiag::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BywireDiag_node_name(msg_);
  }

private:
  ::rviz_plug_msg::msg::BywireDiag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_plug_msg::msg::BywireDiag>()
{
  return rviz_plug_msg::msg::builder::Init_BywireDiag_header();
}

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__BUILDER_HPP_
