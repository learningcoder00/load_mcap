// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadEdgeEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFRoadEdgeEstimn_tracestatus
{
public:
  explicit Init_SFRoadEdgeEstimn_tracestatus(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn tracestatus(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_tracestatus_type arg)
  {
    msg_.tracestatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_parseconfi
{
public:
  explicit Init_SFRoadEdgeEstimn_parseconfi(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_tracestatus parseconfi(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_parseconfi_type arg)
  {
    msg_.parseconfi = std::move(arg);
    return Init_SFRoadEdgeEstimn_tracestatus(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_type
{
public:
  explicit Init_SFRoadEdgeEstimn_type(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_parseconfi type(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFRoadEdgeEstimn_parseconfi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_overrideflag
{
public:
  explicit Init_SFRoadEdgeEstimn_overrideflag(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_type overrideflag(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_overrideflag_type arg)
  {
    msg_.overrideflag = std::move(arg);
    return Init_SFRoadEdgeEstimn_type(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_extendendpointposy
{
public:
  explicit Init_SFRoadEdgeEstimn_extendendpointposy(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_overrideflag extendendpointposy(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_extendendpointposy_type arg)
  {
    msg_.extendendpointposy = std::move(arg);
    return Init_SFRoadEdgeEstimn_overrideflag(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_extendendpointposx
{
public:
  explicit Init_SFRoadEdgeEstimn_extendendpointposx(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_extendendpointposy extendendpointposx(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_extendendpointposx_type arg)
  {
    msg_.extendendpointposx = std::move(arg);
    return Init_SFRoadEdgeEstimn_extendendpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_endpointposy
{
public:
  explicit Init_SFRoadEdgeEstimn_endpointposy(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_extendendpointposx endpointposy(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_endpointposy_type arg)
  {
    msg_.endpointposy = std::move(arg);
    return Init_SFRoadEdgeEstimn_extendendpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_endpointposx
{
public:
  explicit Init_SFRoadEdgeEstimn_endpointposx(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_endpointposy endpointposx(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_endpointposx_type arg)
  {
    msg_.endpointposx = std::move(arg);
    return Init_SFRoadEdgeEstimn_endpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_startpointposy
{
public:
  explicit Init_SFRoadEdgeEstimn_startpointposy(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_endpointposx startpointposy(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_startpointposy_type arg)
  {
    msg_.startpointposy = std::move(arg);
    return Init_SFRoadEdgeEstimn_endpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_startpointposx
{
public:
  explicit Init_SFRoadEdgeEstimn_startpointposx(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_startpointposy startpointposx(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_startpointposx_type arg)
  {
    msg_.startpointposx = std::move(arg);
    return Init_SFRoadEdgeEstimn_startpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_dstlgttoend
{
public:
  explicit Init_SFRoadEdgeEstimn_dstlgttoend(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_startpointposx dstlgttoend(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_dstlgttoend_type arg)
  {
    msg_.dstlgttoend = std::move(arg);
    return Init_SFRoadEdgeEstimn_startpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_thirdordercoeff
{
public:
  explicit Init_SFRoadEdgeEstimn_thirdordercoeff(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_dstlgttoend thirdordercoeff(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_thirdordercoeff_type arg)
  {
    msg_.thirdordercoeff = std::move(arg);
    return Init_SFRoadEdgeEstimn_dstlgttoend(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_secondordercoeff
{
public:
  explicit Init_SFRoadEdgeEstimn_secondordercoeff(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_thirdordercoeff secondordercoeff(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_secondordercoeff_type arg)
  {
    msg_.secondordercoeff = std::move(arg);
    return Init_SFRoadEdgeEstimn_thirdordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_firstordercoeff
{
public:
  explicit Init_SFRoadEdgeEstimn_firstordercoeff(::deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
  : msg_(msg)
  {}
  Init_SFRoadEdgeEstimn_secondordercoeff firstordercoeff(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_firstordercoeff_type arg)
  {
    msg_.firstordercoeff = std::move(arg);
    return Init_SFRoadEdgeEstimn_secondordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

class Init_SFRoadEdgeEstimn_constcoeff
{
public:
  Init_SFRoadEdgeEstimn_constcoeff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFRoadEdgeEstimn_firstordercoeff constcoeff(::deva_aeb_msgs::msg::SFRoadEdgeEstimn::_constcoeff_type arg)
  {
    msg_.constcoeff = std::move(arg);
    return Init_SFRoadEdgeEstimn_firstordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadEdgeEstimn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFRoadEdgeEstimn>()
{
  return deva_aeb_msgs::msg::builder::Init_SFRoadEdgeEstimn_constcoeff();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__BUILDER_HPP_
