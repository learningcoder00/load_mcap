// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFStopline.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_STOPLINE__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_STOPLINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_stopline__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFStopline_reserved
{
public:
  explicit Init_SFStopline_reserved(::deva_aeb_msgs::msg::SFStopline & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFStopline reserved(::deva_aeb_msgs::msg::SFStopline::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFStopline msg_;
};

class Init_SFStopline_confi
{
public:
  explicit Init_SFStopline_confi(::deva_aeb_msgs::msg::SFStopline & msg)
  : msg_(msg)
  {}
  Init_SFStopline_reserved confi(::deva_aeb_msgs::msg::SFStopline::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFStopline_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFStopline msg_;
};

class Init_SFStopline_rightpointposlat
{
public:
  explicit Init_SFStopline_rightpointposlat(::deva_aeb_msgs::msg::SFStopline & msg)
  : msg_(msg)
  {}
  Init_SFStopline_confi rightpointposlat(::deva_aeb_msgs::msg::SFStopline::_rightpointposlat_type arg)
  {
    msg_.rightpointposlat = std::move(arg);
    return Init_SFStopline_confi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFStopline msg_;
};

class Init_SFStopline_rightpointposlgt
{
public:
  explicit Init_SFStopline_rightpointposlgt(::deva_aeb_msgs::msg::SFStopline & msg)
  : msg_(msg)
  {}
  Init_SFStopline_rightpointposlat rightpointposlgt(::deva_aeb_msgs::msg::SFStopline::_rightpointposlgt_type arg)
  {
    msg_.rightpointposlgt = std::move(arg);
    return Init_SFStopline_rightpointposlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFStopline msg_;
};

class Init_SFStopline_leftpointposlat
{
public:
  explicit Init_SFStopline_leftpointposlat(::deva_aeb_msgs::msg::SFStopline & msg)
  : msg_(msg)
  {}
  Init_SFStopline_rightpointposlgt leftpointposlat(::deva_aeb_msgs::msg::SFStopline::_leftpointposlat_type arg)
  {
    msg_.leftpointposlat = std::move(arg);
    return Init_SFStopline_rightpointposlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFStopline msg_;
};

class Init_SFStopline_leftpointposlgt
{
public:
  explicit Init_SFStopline_leftpointposlgt(::deva_aeb_msgs::msg::SFStopline & msg)
  : msg_(msg)
  {}
  Init_SFStopline_leftpointposlat leftpointposlgt(::deva_aeb_msgs::msg::SFStopline::_leftpointposlgt_type arg)
  {
    msg_.leftpointposlgt = std::move(arg);
    return Init_SFStopline_leftpointposlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFStopline msg_;
};

class Init_SFStopline_id
{
public:
  Init_SFStopline_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFStopline_leftpointposlgt id(::deva_aeb_msgs::msg::SFStopline::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFStopline_leftpointposlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFStopline msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFStopline>()
{
  return deva_aeb_msgs::msg::builder::Init_SFStopline_id();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_STOPLINE__BUILDER_HPP_
