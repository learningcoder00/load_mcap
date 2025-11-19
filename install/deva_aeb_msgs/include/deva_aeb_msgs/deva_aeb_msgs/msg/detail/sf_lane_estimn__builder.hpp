// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFLaneEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_ESTIMN__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_ESTIMN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFLaneEstimn_dstlgttoend
{
public:
  explicit Init_SFLaneEstimn_dstlgttoend(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFLaneEstimn dstlgttoend(::deva_aeb_msgs::msg::SFLaneEstimn::_dstlgttoend_type arg)
  {
    msg_.dstlgttoend = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_endpointposy
{
public:
  explicit Init_SFLaneEstimn_endpointposy(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneEstimn_dstlgttoend endpointposy(::deva_aeb_msgs::msg::SFLaneEstimn::_endpointposy_type arg)
  {
    msg_.endpointposy = std::move(arg);
    return Init_SFLaneEstimn_dstlgttoend(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_endpointposx
{
public:
  explicit Init_SFLaneEstimn_endpointposx(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneEstimn_endpointposy endpointposx(::deva_aeb_msgs::msg::SFLaneEstimn::_endpointposx_type arg)
  {
    msg_.endpointposx = std::move(arg);
    return Init_SFLaneEstimn_endpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_startpointposy
{
public:
  explicit Init_SFLaneEstimn_startpointposy(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneEstimn_endpointposx startpointposy(::deva_aeb_msgs::msg::SFLaneEstimn::_startpointposy_type arg)
  {
    msg_.startpointposy = std::move(arg);
    return Init_SFLaneEstimn_endpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_startpointposx
{
public:
  explicit Init_SFLaneEstimn_startpointposx(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneEstimn_startpointposy startpointposx(::deva_aeb_msgs::msg::SFLaneEstimn::_startpointposx_type arg)
  {
    msg_.startpointposx = std::move(arg);
    return Init_SFLaneEstimn_startpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_thirdordercoeff
{
public:
  explicit Init_SFLaneEstimn_thirdordercoeff(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneEstimn_startpointposx thirdordercoeff(::deva_aeb_msgs::msg::SFLaneEstimn::_thirdordercoeff_type arg)
  {
    msg_.thirdordercoeff = std::move(arg);
    return Init_SFLaneEstimn_startpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_secondordercoeff
{
public:
  explicit Init_SFLaneEstimn_secondordercoeff(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneEstimn_thirdordercoeff secondordercoeff(::deva_aeb_msgs::msg::SFLaneEstimn::_secondordercoeff_type arg)
  {
    msg_.secondordercoeff = std::move(arg);
    return Init_SFLaneEstimn_thirdordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_firstordercoeff
{
public:
  explicit Init_SFLaneEstimn_firstordercoeff(::deva_aeb_msgs::msg::SFLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneEstimn_secondordercoeff firstordercoeff(::deva_aeb_msgs::msg::SFLaneEstimn::_firstordercoeff_type arg)
  {
    msg_.firstordercoeff = std::move(arg);
    return Init_SFLaneEstimn_secondordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

class Init_SFLaneEstimn_constcoeff
{
public:
  Init_SFLaneEstimn_constcoeff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFLaneEstimn_firstordercoeff constcoeff(::deva_aeb_msgs::msg::SFLaneEstimn::_constcoeff_type arg)
  {
    msg_.constcoeff = std::move(arg);
    return Init_SFLaneEstimn_firstordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneEstimn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFLaneEstimn>()
{
  return deva_aeb_msgs::msg::builder::Init_SFLaneEstimn_constcoeff();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_ESTIMN__BUILDER_HPP_
