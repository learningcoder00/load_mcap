// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFrontLinePpty_lifetime
{
public:
  explicit Init_SFFrontLinePpty_lifetime(::deva_aeb_msgs::msg::SFFrontLinePpty & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFrontLinePpty lifetime(::deva_aeb_msgs::msg::SFFrontLinePpty::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFrontLinePpty msg_;
};

class Init_SFFrontLinePpty_id
{
public:
  explicit Init_SFFrontLinePpty_id(::deva_aeb_msgs::msg::SFFrontLinePpty & msg)
  : msg_(msg)
  {}
  Init_SFFrontLinePpty_lifetime id(::deva_aeb_msgs::msg::SFFrontLinePpty::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFFrontLinePpty_lifetime(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFrontLinePpty msg_;
};

class Init_SFFrontLinePpty_tunqly
{
public:
  explicit Init_SFFrontLinePpty_tunqly(::deva_aeb_msgs::msg::SFFrontLinePpty & msg)
  : msg_(msg)
  {}
  Init_SFFrontLinePpty_id tunqly(::deva_aeb_msgs::msg::SFFrontLinePpty::_tunqly_type arg)
  {
    msg_.tunqly = std::move(arg);
    return Init_SFFrontLinePpty_id(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFrontLinePpty msg_;
};

class Init_SFFrontLinePpty_reserved
{
public:
  explicit Init_SFFrontLinePpty_reserved(::deva_aeb_msgs::msg::SFFrontLinePpty & msg)
  : msg_(msg)
  {}
  Init_SFFrontLinePpty_tunqly reserved(::deva_aeb_msgs::msg::SFFrontLinePpty::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFrontLinePpty_tunqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFrontLinePpty msg_;
};

class Init_SFFrontLinePpty_trfcjamassiqly
{
public:
  explicit Init_SFFrontLinePpty_trfcjamassiqly(::deva_aeb_msgs::msg::SFFrontLinePpty & msg)
  : msg_(msg)
  {}
  Init_SFFrontLinePpty_reserved trfcjamassiqly(::deva_aeb_msgs::msg::SFFrontLinePpty::_trfcjamassiqly_type arg)
  {
    msg_.trfcjamassiqly = std::move(arg);
    return Init_SFFrontLinePpty_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFrontLinePpty msg_;
};

class Init_SFFrontLinePpty_lanekeepaidqly
{
public:
  explicit Init_SFFrontLinePpty_lanekeepaidqly(::deva_aeb_msgs::msg::SFFrontLinePpty & msg)
  : msg_(msg)
  {}
  Init_SFFrontLinePpty_trfcjamassiqly lanekeepaidqly(::deva_aeb_msgs::msg::SFFrontLinePpty::_lanekeepaidqly_type arg)
  {
    msg_.lanekeepaidqly = std::move(arg);
    return Init_SFFrontLinePpty_trfcjamassiqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFrontLinePpty msg_;
};

class Init_SFFrontLinePpty_drvrpfmncmonqly
{
public:
  Init_SFFrontLinePpty_drvrpfmncmonqly()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFrontLinePpty_lanekeepaidqly drvrpfmncmonqly(::deva_aeb_msgs::msg::SFFrontLinePpty::_drvrpfmncmonqly_type arg)
  {
    msg_.drvrpfmncmonqly = std::move(arg);
    return Init_SFFrontLinePpty_lanekeepaidqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFrontLinePpty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFrontLinePpty>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFrontLinePpty_drvrpfmncmonqly();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__BUILDER_HPP_
