// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_plug_msg:msg/BywireMsgType.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__BUILDER_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_plug_msg/msg/detail/bywire_msg_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_plug_msg
{

namespace msg
{

namespace builder
{

class Init_BywireMsgType_val
{
public:
  Init_BywireMsgType_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rviz_plug_msg::msg::BywireMsgType val(::rviz_plug_msg::msg::BywireMsgType::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_plug_msg::msg::BywireMsgType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_plug_msg::msg::BywireMsgType>()
{
  return rviz_plug_msg::msg::builder::Init_BywireMsgType_val();
}

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__BUILDER_HPP_
