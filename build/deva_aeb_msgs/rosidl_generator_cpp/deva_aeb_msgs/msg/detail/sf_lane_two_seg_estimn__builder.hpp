// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFLaneTwoSegEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_TWO_SEG_ESTIMN__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_TWO_SEG_ESTIMN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFLaneTwoSegEstimn_secondsegthirdordercoeff
{
public:
  explicit Init_SFLaneTwoSegEstimn_secondsegthirdordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn secondsegthirdordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_secondsegthirdordercoeff_type arg)
  {
    msg_.secondsegthirdordercoeff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_secondsegpointdistance
{
public:
  explicit Init_SFLaneTwoSegEstimn_secondsegpointdistance(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_secondsegthirdordercoeff secondsegpointdistance(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_secondsegpointdistance_type arg)
  {
    msg_.secondsegpointdistance = std::move(arg);
    return Init_SFLaneTwoSegEstimn_secondsegthirdordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_extendendpointposy
{
public:
  explicit Init_SFLaneTwoSegEstimn_extendendpointposy(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_secondsegpointdistance extendendpointposy(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_extendendpointposy_type arg)
  {
    msg_.extendendpointposy = std::move(arg);
    return Init_SFLaneTwoSegEstimn_secondsegpointdistance(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_extendendpointposx
{
public:
  explicit Init_SFLaneTwoSegEstimn_extendendpointposx(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_extendendpointposy extendendpointposx(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_extendendpointposx_type arg)
  {
    msg_.extendendpointposx = std::move(arg);
    return Init_SFLaneTwoSegEstimn_extendendpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_endpointposy
{
public:
  explicit Init_SFLaneTwoSegEstimn_endpointposy(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_extendendpointposx endpointposy(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_endpointposy_type arg)
  {
    msg_.endpointposy = std::move(arg);
    return Init_SFLaneTwoSegEstimn_extendendpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_endpointposx
{
public:
  explicit Init_SFLaneTwoSegEstimn_endpointposx(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_endpointposy endpointposx(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_endpointposx_type arg)
  {
    msg_.endpointposx = std::move(arg);
    return Init_SFLaneTwoSegEstimn_endpointposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_poslat
{
public:
  explicit Init_SFLaneTwoSegEstimn_poslat(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_endpointposx poslat(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_poslat_type arg)
  {
    msg_.poslat = std::move(arg);
    return Init_SFLaneTwoSegEstimn_endpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_trackstatus
{
public:
  explicit Init_SFLaneTwoSegEstimn_trackstatus(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_poslat trackstatus(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_trackstatus_type arg)
  {
    msg_.trackstatus = std::move(arg);
    return Init_SFLaneTwoSegEstimn_poslat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_obstacleflag
{
public:
  explicit Init_SFLaneTwoSegEstimn_obstacleflag(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_trackstatus obstacleflag(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_obstacleflag_type arg)
  {
    msg_.obstacleflag = std::move(arg);
    return Init_SFLaneTwoSegEstimn_trackstatus(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_rmse
{
public:
  explicit Init_SFLaneTwoSegEstimn_rmse(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_obstacleflag rmse(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_rmse_type arg)
  {
    msg_.rmse = std::move(arg);
    return Init_SFLaneTwoSegEstimn_obstacleflag(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_parseconfi
{
public:
  explicit Init_SFLaneTwoSegEstimn_parseconfi(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_rmse parseconfi(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_parseconfi_type arg)
  {
    msg_.parseconfi = std::move(arg);
    return Init_SFLaneTwoSegEstimn_rmse(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_width
{
public:
  explicit Init_SFLaneTwoSegEstimn_width(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_parseconfi width(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SFLaneTwoSegEstimn_parseconfi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_startpointposx
{
public:
  explicit Init_SFLaneTwoSegEstimn_startpointposx(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_width startpointposx(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_startpointposx_type arg)
  {
    msg_.startpointposx = std::move(arg);
    return Init_SFLaneTwoSegEstimn_width(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_dstlgttoend
{
public:
  explicit Init_SFLaneTwoSegEstimn_dstlgttoend(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_startpointposx dstlgttoend(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_dstlgttoend_type arg)
  {
    msg_.dstlgttoend = std::move(arg);
    return Init_SFLaneTwoSegEstimn_startpointposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_thirdordercoeff
{
public:
  explicit Init_SFLaneTwoSegEstimn_thirdordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_dstlgttoend thirdordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_thirdordercoeff_type arg)
  {
    msg_.thirdordercoeff = std::move(arg);
    return Init_SFLaneTwoSegEstimn_dstlgttoend(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_secondordercoeff
{
public:
  explicit Init_SFLaneTwoSegEstimn_secondordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_thirdordercoeff secondordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_secondordercoeff_type arg)
  {
    msg_.secondordercoeff = std::move(arg);
    return Init_SFLaneTwoSegEstimn_thirdordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_firstordercoeff
{
public:
  explicit Init_SFLaneTwoSegEstimn_firstordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
  : msg_(msg)
  {}
  Init_SFLaneTwoSegEstimn_secondordercoeff firstordercoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_firstordercoeff_type arg)
  {
    msg_.firstordercoeff = std::move(arg);
    return Init_SFLaneTwoSegEstimn_secondordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

class Init_SFLaneTwoSegEstimn_constcoeff
{
public:
  Init_SFLaneTwoSegEstimn_constcoeff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFLaneTwoSegEstimn_firstordercoeff constcoeff(::deva_aeb_msgs::msg::SFLaneTwoSegEstimn::_constcoeff_type arg)
  {
    msg_.constcoeff = std::move(arg);
    return Init_SFLaneTwoSegEstimn_firstordercoeff(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneTwoSegEstimn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFLaneTwoSegEstimn>()
{
  return deva_aeb_msgs::msg::builder::Init_SFLaneTwoSegEstimn_constcoeff();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_TWO_SEG_ESTIMN__BUILDER_HPP_
