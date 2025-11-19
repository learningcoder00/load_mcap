// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFVehSelf.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFVehSelf_agdirdelta
{
public:
  explicit Init_SFVehSelf_agdirdelta(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFVehSelf agdirdelta(::deva_aeb_msgs::msg::SFVehSelf::_agdirdelta_type arg)
  {
    msg_.agdirdelta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_posnlatdelta
{
public:
  explicit Init_SFVehSelf_posnlatdelta(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_agdirdelta posnlatdelta(::deva_aeb_msgs::msg::SFVehSelf::_posnlatdelta_type arg)
  {
    msg_.posnlatdelta = std::move(arg);
    return Init_SFVehSelf_agdirdelta(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_posnlgtdelta
{
public:
  explicit Init_SFVehSelf_posnlgtdelta(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_posnlatdelta posnlgtdelta(::deva_aeb_msgs::msg::SFVehSelf::_posnlgtdelta_type arg)
  {
    msg_.posnlgtdelta = std::move(arg);
    return Init_SFVehSelf_posnlatdelta(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_yawrateraw
{
public:
  explicit Init_SFVehSelf_yawrateraw(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_posnlgtdelta yawrateraw(::deva_aeb_msgs::msg::SFVehSelf::_yawrateraw_type arg)
  {
    msg_.yawrateraw = std::move(arg);
    return Init_SFVehSelf_posnlgtdelta(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_yawrate
{
public:
  explicit Init_SFVehSelf_yawrate(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_yawrateraw yawrate(::deva_aeb_msgs::msg::SFVehSelf::_yawrate_type arg)
  {
    msg_.yawrate = std::move(arg);
    return Init_SFVehSelf_yawrateraw(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_alatraw
{
public:
  explicit Init_SFVehSelf_alatraw(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_yawrate alatraw(::deva_aeb_msgs::msg::SFVehSelf::_alatraw_type arg)
  {
    msg_.alatraw = std::move(arg);
    return Init_SFVehSelf_yawrate(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_algtraw
{
public:
  explicit Init_SFVehSelf_algtraw(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_alatraw algtraw(::deva_aeb_msgs::msg::SFVehSelf::_algtraw_type arg)
  {
    msg_.algtraw = std::move(arg);
    return Init_SFVehSelf_alatraw(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_algt
{
public:
  explicit Init_SFVehSelf_algt(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_algtraw algt(::deva_aeb_msgs::msg::SFVehSelf::_algt_type arg)
  {
    msg_.algt = std::move(arg);
    return Init_SFVehSelf_algtraw(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_vlgtcmpfac
{
public:
  explicit Init_SFVehSelf_vlgtcmpfac(::deva_aeb_msgs::msg::SFVehSelf & msg)
  : msg_(msg)
  {}
  Init_SFVehSelf_algt vlgtcmpfac(::deva_aeb_msgs::msg::SFVehSelf::_vlgtcmpfac_type arg)
  {
    msg_.vlgtcmpfac = std::move(arg);
    return Init_SFVehSelf_algt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

class Init_SFVehSelf_vlgt
{
public:
  Init_SFVehSelf_vlgt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFVehSelf_vlgtcmpfac vlgt(::deva_aeb_msgs::msg::SFVehSelf::_vlgt_type arg)
  {
    msg_.vlgt = std::move(arg);
    return Init_SFVehSelf_vlgtcmpfac(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFVehSelf msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFVehSelf>()
{
  return deva_aeb_msgs::msg::builder::Init_SFVehSelf_vlgt();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__BUILDER_HPP_
