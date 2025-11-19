// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/CurveCoef.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/curve_coef__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_CurveCoef_endpoint
{
public:
  explicit Init_CurveCoef_endpoint(::deva_perception_msgs::msg::CurveCoef & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::CurveCoef endpoint(::deva_perception_msgs::msg::CurveCoef::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::CurveCoef msg_;
};

class Init_CurveCoef_startpoint
{
public:
  explicit Init_CurveCoef_startpoint(::deva_perception_msgs::msg::CurveCoef & msg)
  : msg_(msg)
  {}
  Init_CurveCoef_endpoint startpoint(::deva_perception_msgs::msg::CurveCoef::_startpoint_type arg)
  {
    msg_.startpoint = std::move(arg);
    return Init_CurveCoef_endpoint(msg_);
  }

private:
  ::deva_perception_msgs::msg::CurveCoef msg_;
};

class Init_CurveCoef_c3
{
public:
  explicit Init_CurveCoef_c3(::deva_perception_msgs::msg::CurveCoef & msg)
  : msg_(msg)
  {}
  Init_CurveCoef_startpoint c3(::deva_perception_msgs::msg::CurveCoef::_c3_type arg)
  {
    msg_.c3 = std::move(arg);
    return Init_CurveCoef_startpoint(msg_);
  }

private:
  ::deva_perception_msgs::msg::CurveCoef msg_;
};

class Init_CurveCoef_c2
{
public:
  explicit Init_CurveCoef_c2(::deva_perception_msgs::msg::CurveCoef & msg)
  : msg_(msg)
  {}
  Init_CurveCoef_c3 c2(::deva_perception_msgs::msg::CurveCoef::_c2_type arg)
  {
    msg_.c2 = std::move(arg);
    return Init_CurveCoef_c3(msg_);
  }

private:
  ::deva_perception_msgs::msg::CurveCoef msg_;
};

class Init_CurveCoef_c1
{
public:
  explicit Init_CurveCoef_c1(::deva_perception_msgs::msg::CurveCoef & msg)
  : msg_(msg)
  {}
  Init_CurveCoef_c2 c1(::deva_perception_msgs::msg::CurveCoef::_c1_type arg)
  {
    msg_.c1 = std::move(arg);
    return Init_CurveCoef_c2(msg_);
  }

private:
  ::deva_perception_msgs::msg::CurveCoef msg_;
};

class Init_CurveCoef_c0
{
public:
  Init_CurveCoef_c0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurveCoef_c1 c0(::deva_perception_msgs::msg::CurveCoef::_c0_type arg)
  {
    msg_.c0 = std::move(arg);
    return Init_CurveCoef_c1(msg_);
  }

private:
  ::deva_perception_msgs::msg::CurveCoef msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::CurveCoef>()
{
  return deva_perception_msgs::msg::builder::Init_CurveCoef_c0();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__BUILDER_HPP_
