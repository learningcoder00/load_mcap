// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFVisionInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_vision_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFVisionInfo_unstable
{
public:
  explicit Init_SFVisionInfo_unstable(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFVisionInfo unstable(::deva_aeb_msgs::msg::SFVisionInfo::_unstable_type arg)
  {
    msg_.unstable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_coverdproperty
{
public:
  explicit Init_SFVisionInfo_coverdproperty(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_unstable coverdproperty(::deva_aeb_msgs::msg::SFVisionInfo::_coverdproperty_type arg)
  {
    msg_.coverdproperty = std::move(arg);
    return Init_SFVisionInfo_unstable(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_distconvergence
{
public:
  explicit Init_SFVisionInfo_distconvergence(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_coverdproperty distconvergence(::deva_aeb_msgs::msg::SFVisionInfo::_distconvergence_type arg)
  {
    msg_.distconvergence = std::move(arg);
    return Init_SFVisionInfo_coverdproperty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_mtnstatus
{
public:
  explicit Init_SFVisionInfo_mtnstatus(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_distconvergence mtnstatus(::deva_aeb_msgs::msg::SFVisionInfo::_mtnstatus_type arg)
  {
    msg_.mtnstatus = std::move(arg);
    return Init_SFVisionInfo_distconvergence(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_mtncatergory
{
public:
  explicit Init_SFVisionInfo_mtncatergory(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_mtnstatus mtncatergory(::deva_aeb_msgs::msg::SFVisionInfo::_mtncatergory_type arg)
  {
    msg_.mtncatergory = std::move(arg);
    return Init_SFVisionInfo_mtnstatus(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_iscipv
{
public:
  explicit Init_SFVisionInfo_iscipv(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_mtncatergory iscipv(::deva_aeb_msgs::msg::SFVisionInfo::_iscipv_type arg)
  {
    msg_.iscipv = std::move(arg);
    return Init_SFVisionInfo_mtncatergory(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_laneassignment
{
public:
  explicit Init_SFVisionInfo_laneassignment(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_iscipv laneassignment(::deva_aeb_msgs::msg::SFVisionInfo::_laneassignment_type arg)
  {
    msg_.laneassignment = std::move(arg);
    return Init_SFVisionInfo_iscipv(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_visionposy
{
public:
  explicit Init_SFVisionInfo_visionposy(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_laneassignment visionposy(::deva_aeb_msgs::msg::SFVisionInfo::_visionposy_type arg)
  {
    msg_.visionposy = std::move(arg);
    return Init_SFVisionInfo_laneassignment(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_visionposx
{
public:
  explicit Init_SFVisionInfo_visionposx(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_visionposy visionposx(::deva_aeb_msgs::msg::SFVisionInfo::_visionposx_type arg)
  {
    msg_.visionposx = std::move(arg);
    return Init_SFVisionInfo_visionposy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_reserved
{
public:
  explicit Init_SFVisionInfo_reserved(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_visionposx reserved(::deva_aeb_msgs::msg::SFVisionInfo::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFVisionInfo_visionposx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_objcutinlanetype
{
public:
  explicit Init_SFVisionInfo_objcutinlanetype(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_reserved objcutinlanetype(::deva_aeb_msgs::msg::SFVisionInfo::_objcutinlanetype_type arg)
  {
    msg_.objcutinlanetype = std::move(arg);
    return Init_SFVisionInfo_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_objcutinflag
{
public:
  explicit Init_SFVisionInfo_objcutinflag(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_objcutinlanetype objcutinflag(::deva_aeb_msgs::msg::SFVisionInfo::_objcutinflag_type arg)
  {
    msg_.objcutinflag = std::move(arg);
    return Init_SFVisionInfo_objcutinlanetype(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_distinlane
{
public:
  explicit Init_SFVisionInfo_distinlane(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_objcutinflag distinlane(::deva_aeb_msgs::msg::SFVisionInfo::_distinlane_type arg)
  {
    msg_.distinlane = std::move(arg);
    return Init_SFVisionInfo_objcutinflag(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_cornery
{
public:
  explicit Init_SFVisionInfo_cornery(::deva_aeb_msgs::msg::SFVisionInfo & msg)
  : msg_(msg)
  {}
  Init_SFVisionInfo_distinlane cornery(::deva_aeb_msgs::msg::SFVisionInfo::_cornery_type arg)
  {
    msg_.cornery = std::move(arg);
    return Init_SFVisionInfo_distinlane(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

class Init_SFVisionInfo_cornerx
{
public:
  Init_SFVisionInfo_cornerx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFVisionInfo_cornery cornerx(::deva_aeb_msgs::msg::SFVisionInfo::_cornerx_type arg)
  {
    msg_.cornerx = std::move(arg);
    return Init_SFVisionInfo_cornery(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVisionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFVisionInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_SFVisionInfo_cornerx();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__BUILDER_HPP_
