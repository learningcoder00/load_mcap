// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFSecLaneEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_ESTIMN__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_ESTIMN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_sec_lane_estimn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFSecLaneEstimn_trackstatus
{
public:
  explicit Init_SFSecLaneEstimn_trackstatus(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFSecLaneEstimn trackstatus(::deva_aeb_msgs::msg::SFSecLaneEstimn::_trackstatus_type arg)
  {
    msg_.trackstatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_obstacleflag
{
public:
  explicit Init_SFSecLaneEstimn_obstacleflag(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_trackstatus obstacleflag(::deva_aeb_msgs::msg::SFSecLaneEstimn::_obstacleflag_type arg)
  {
    msg_.obstacleflag = std::move(arg);
    return Init_SFSecLaneEstimn_trackstatus(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_rmse
{
public:
  explicit Init_SFSecLaneEstimn_rmse(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_obstacleflag rmse(::deva_aeb_msgs::msg::SFSecLaneEstimn::_rmse_type arg)
  {
    msg_.rmse = std::move(arg);
    return Init_SFSecLaneEstimn_obstacleflag(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_parseconfi
{
public:
  explicit Init_SFSecLaneEstimn_parseconfi(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_rmse parseconfi(::deva_aeb_msgs::msg::SFSecLaneEstimn::_parseconfi_type arg)
  {
    msg_.parseconfi = std::move(arg);
    return Init_SFSecLaneEstimn_rmse(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_extendendpointposy
{
public:
  explicit Init_SFSecLaneEstimn_extendendpointposy(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_parseconfi extendendpointposy(::deva_aeb_msgs::msg::SFSecLaneEstimn::_extendendpointposy_type arg)
  {
    msg_.extendendpointposy = std::move(arg);
    return Init_SFSecLaneEstimn_parseconfi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_extendendpointposx
{
public:
  explicit Init_SFSecLaneEstimn_extendendpointposx(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_extendendpointposy extendendpointposx(::deva_aeb_msgs::msg::SFSecLaneEstimn::_extendendpointposx_type arg)
  {
    msg_.extendendpointposx = std::move(arg);
    return Init_SFSecLaneEstimn_extendendpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_endpointposy
{
public:
  explicit Init_SFSecLaneEstimn_endpointposy(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_extendendpointposx endpointposy(::deva_aeb_msgs::msg::SFSecLaneEstimn::_endpointposy_type arg)
  {
    msg_.endpointposy = std::move(arg);
    return Init_SFSecLaneEstimn_extendendpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_endpointposx
{
public:
  explicit Init_SFSecLaneEstimn_endpointposx(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_endpointposy endpointposx(::deva_aeb_msgs::msg::SFSecLaneEstimn::_endpointposx_type arg)
  {
    msg_.endpointposx = std::move(arg);
    return Init_SFSecLaneEstimn_endpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_startpointposy
{
public:
  explicit Init_SFSecLaneEstimn_startpointposy(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_endpointposx startpointposy(::deva_aeb_msgs::msg::SFSecLaneEstimn::_startpointposy_type arg)
  {
    msg_.startpointposy = std::move(arg);
    return Init_SFSecLaneEstimn_endpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_startpointposx
{
public:
  explicit Init_SFSecLaneEstimn_startpointposx(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_startpointposy startpointposx(::deva_aeb_msgs::msg::SFSecLaneEstimn::_startpointposx_type arg)
  {
    msg_.startpointposx = std::move(arg);
    return Init_SFSecLaneEstimn_startpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_width
{
public:
  explicit Init_SFSecLaneEstimn_width(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_startpointposx width(::deva_aeb_msgs::msg::SFSecLaneEstimn::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SFSecLaneEstimn_startpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_thirdordercoeff
{
public:
  explicit Init_SFSecLaneEstimn_thirdordercoeff(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_width thirdordercoeff(::deva_aeb_msgs::msg::SFSecLaneEstimn::_thirdordercoeff_type arg)
  {
    msg_.thirdordercoeff = std::move(arg);
    return Init_SFSecLaneEstimn_width(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_secondordercoeff
{
public:
  explicit Init_SFSecLaneEstimn_secondordercoeff(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_thirdordercoeff secondordercoeff(::deva_aeb_msgs::msg::SFSecLaneEstimn::_secondordercoeff_type arg)
  {
    msg_.secondordercoeff = std::move(arg);
    return Init_SFSecLaneEstimn_thirdordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_firstordercoeff
{
public:
  explicit Init_SFSecLaneEstimn_firstordercoeff(::deva_aeb_msgs::msg::SFSecLaneEstimn & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneEstimn_secondordercoeff firstordercoeff(::deva_aeb_msgs::msg::SFSecLaneEstimn::_firstordercoeff_type arg)
  {
    msg_.firstordercoeff = std::move(arg);
    return Init_SFSecLaneEstimn_secondordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

class Init_SFSecLaneEstimn_constcoeff
{
public:
  Init_SFSecLaneEstimn_constcoeff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFSecLaneEstimn_firstordercoeff constcoeff(::deva_aeb_msgs::msg::SFSecLaneEstimn::_constcoeff_type arg)
  {
    msg_.constcoeff = std::move(arg);
    return Init_SFSecLaneEstimn_firstordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneEstimn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFSecLaneEstimn>()
{
  return deva_aeb_msgs::msg::builder::Init_SFSecLaneEstimn_constcoeff();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_ESTIMN__BUILDER_HPP_
