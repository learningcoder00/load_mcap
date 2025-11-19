// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFCurveFunctionExtra.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFCurveFunctionExtra_reserved
{
public:
  explicit Init_SFCurveFunctionExtra_reserved(::deva_aeb_msgs::msg::SFCurveFunctionExtra & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra reserved(::deva_aeb_msgs::msg::SFCurveFunctionExtra::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra msg_;
};

class Init_SFCurveFunctionExtra_confi
{
public:
  explicit Init_SFCurveFunctionExtra_confi(::deva_aeb_msgs::msg::SFCurveFunctionExtra & msg)
  : msg_(msg)
  {}
  Init_SFCurveFunctionExtra_reserved confi(::deva_aeb_msgs::msg::SFCurveFunctionExtra::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFCurveFunctionExtra_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra msg_;
};

class Init_SFCurveFunctionExtra_lanemkrtype
{
public:
  explicit Init_SFCurveFunctionExtra_lanemkrtype(::deva_aeb_msgs::msg::SFCurveFunctionExtra & msg)
  : msg_(msg)
  {}
  Init_SFCurveFunctionExtra_confi lanemkrtype(::deva_aeb_msgs::msg::SFCurveFunctionExtra::_lanemkrtype_type arg)
  {
    msg_.lanemkrtype = std::move(arg);
    return Init_SFCurveFunctionExtra_confi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra msg_;
};

class Init_SFCurveFunctionExtra_extrapointtype
{
public:
  explicit Init_SFCurveFunctionExtra_extrapointtype(::deva_aeb_msgs::msg::SFCurveFunctionExtra & msg)
  : msg_(msg)
  {}
  Init_SFCurveFunctionExtra_lanemkrtype extrapointtype(::deva_aeb_msgs::msg::SFCurveFunctionExtra::_extrapointtype_type arg)
  {
    msg_.extrapointtype = std::move(arg);
    return Init_SFCurveFunctionExtra_lanemkrtype(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra msg_;
};

class Init_SFCurveFunctionExtra_estimn
{
public:
  explicit Init_SFCurveFunctionExtra_estimn(::deva_aeb_msgs::msg::SFCurveFunctionExtra & msg)
  : msg_(msg)
  {}
  Init_SFCurveFunctionExtra_extrapointtype estimn(::deva_aeb_msgs::msg::SFCurveFunctionExtra::_estimn_type arg)
  {
    msg_.estimn = std::move(arg);
    return Init_SFCurveFunctionExtra_extrapointtype(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra msg_;
};

class Init_SFCurveFunctionExtra_poslat
{
public:
  explicit Init_SFCurveFunctionExtra_poslat(::deva_aeb_msgs::msg::SFCurveFunctionExtra & msg)
  : msg_(msg)
  {}
  Init_SFCurveFunctionExtra_estimn poslat(::deva_aeb_msgs::msg::SFCurveFunctionExtra::_poslat_type arg)
  {
    msg_.poslat = std::move(arg);
    return Init_SFCurveFunctionExtra_estimn(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra msg_;
};

class Init_SFCurveFunctionExtra_poslgt
{
public:
  Init_SFCurveFunctionExtra_poslgt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFCurveFunctionExtra_poslat poslgt(::deva_aeb_msgs::msg::SFCurveFunctionExtra::_poslgt_type arg)
  {
    msg_.poslgt = std::move(arg);
    return Init_SFCurveFunctionExtra_poslat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCurveFunctionExtra msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFCurveFunctionExtra>()
{
  return deva_aeb_msgs::msg::builder::Init_SFCurveFunctionExtra_poslgt();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__BUILDER_HPP_
