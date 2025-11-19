// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFDiagInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_diag_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFDiagInfo_framenum
{
public:
  explicit Init_SFDiagInfo_framenum(::deva_aeb_msgs::msg::SFDiagInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFDiagInfo framenum(::deva_aeb_msgs::msg::SFDiagInfo::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagInfo msg_;
};

class Init_SFDiagInfo_timestamp
{
public:
  explicit Init_SFDiagInfo_timestamp(::deva_aeb_msgs::msg::SFDiagInfo & msg)
  : msg_(msg)
  {}
  Init_SFDiagInfo_framenum timestamp(::deva_aeb_msgs::msg::SFDiagInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFDiagInfo_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagInfo msg_;
};

class Init_SFDiagInfo_reserved
{
public:
  explicit Init_SFDiagInfo_reserved(::deva_aeb_msgs::msg::SFDiagInfo & msg)
  : msg_(msg)
  {}
  Init_SFDiagInfo_timestamp reserved(::deva_aeb_msgs::msg::SFDiagInfo::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFDiagInfo_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagInfo msg_;
};

class Init_SFDiagInfo_confi
{
public:
  explicit Init_SFDiagInfo_confi(::deva_aeb_msgs::msg::SFDiagInfo & msg)
  : msg_(msg)
  {}
  Init_SFDiagInfo_reserved confi(::deva_aeb_msgs::msg::SFDiagInfo::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFDiagInfo_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagInfo msg_;
};

class Init_SFDiagInfo_type
{
public:
  Init_SFDiagInfo_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFDiagInfo_confi type(::deva_aeb_msgs::msg::SFDiagInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFDiagInfo_confi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFDiagInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_SFDiagInfo_type();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_INFO__BUILDER_HPP_
