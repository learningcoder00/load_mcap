// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTS.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTS_spplinfotype
{
public:
  explicit Init_SFFusionTS_spplinfotype(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionTS spplinfotype(::deva_aeb_msgs::msg::SFFusionTS::_spplinfotype_type arg)
  {
    msg_.spplinfotype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_spplinfoval
{
public:
  explicit Init_SFFusionTS_spplinfoval(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_spplinfotype spplinfoval(::deva_aeb_msgs::msg::SFFusionTS::_spplinfoval_type arg)
  {
    msg_.spplinfoval = std::move(arg);
    return Init_SFFusionTS_spplinfotype(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_reserved
{
public:
  explicit Init_SFFusionTS_reserved(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_spplinfoval reserved(::deva_aeb_msgs::msg::SFFusionTS::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionTS_spplinfoval(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_val
{
public:
  explicit Init_SFFusionTS_val(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_reserved val(::deva_aeb_msgs::msg::SFFusionTS::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_SFFusionTS_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_typ
{
public:
  explicit Init_SFFusionTS_typ(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_val typ(::deva_aeb_msgs::msg::SFFusionTS::_typ_type arg)
  {
    msg_.typ = std::move(arg);
    return Init_SFFusionTS_val(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_qly
{
public:
  explicit Init_SFFusionTS_qly(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_typ qly(::deva_aeb_msgs::msg::SFFusionTS::_qly_type arg)
  {
    msg_.qly = std::move(arg);
    return Init_SFFusionTS_typ(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_notrlvres
{
public:
  explicit Init_SFFusionTS_notrlvres(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_qly notrlvres(::deva_aeb_msgs::msg::SFFusionTS::_notrlvres_type arg)
  {
    msg_.notrlvres = std::move(arg);
    return Init_SFFusionTS_qly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_rlvc
{
public:
  explicit Init_SFFusionTS_rlvc(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_notrlvres rlvc(::deva_aeb_msgs::msg::SFFusionTS::_rlvc_type arg)
  {
    msg_.rlvc = std::move(arg);
    return Init_SFFusionTS_notrlvres(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_locn
{
public:
  explicit Init_SFFusionTS_locn(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_rlvc locn(::deva_aeb_msgs::msg::SFFusionTS::_locn_type arg)
  {
    msg_.locn = std::move(arg);
    return Init_SFFusionTS_rlvc(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_lanelocn
{
public:
  explicit Init_SFFusionTS_lanelocn(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_locn lanelocn(::deva_aeb_msgs::msg::SFFusionTS::_lanelocn_type arg)
  {
    msg_.lanelocn = std::move(arg);
    return Init_SFFusionTS_locn(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_electcsgn
{
public:
  explicit Init_SFFusionTS_electcsgn(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_lanelocn electcsgn(::deva_aeb_msgs::msg::SFFusionTS::_electcsgn_type arg)
  {
    msg_.electcsgn = std::move(arg);
    return Init_SFFusionTS_lanelocn(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_height
{
public:
  explicit Init_SFFusionTS_height(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_electcsgn height(::deva_aeb_msgs::msg::SFFusionTS::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_SFFusionTS_electcsgn(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_dstlattoeve
{
public:
  explicit Init_SFFusionTS_dstlattoeve(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_height dstlattoeve(::deva_aeb_msgs::msg::SFFusionTS::_dstlattoeve_type arg)
  {
    msg_.dstlattoeve = std::move(arg);
    return Init_SFFusionTS_height(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_dstlgttoeve
{
public:
  explicit Init_SFFusionTS_dstlgttoeve(::deva_aeb_msgs::msg::SFFusionTS & msg)
  : msg_(msg)
  {}
  Init_SFFusionTS_dstlattoeve dstlgttoeve(::deva_aeb_msgs::msg::SFFusionTS::_dstlgttoeve_type arg)
  {
    msg_.dstlgttoeve = std::move(arg);
    return Init_SFFusionTS_dstlattoeve(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

class Init_SFFusionTS_id
{
public:
  Init_SFFusionTS_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTS_dstlgttoeve id(::deva_aeb_msgs::msg::SFFusionTS::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFFusionTS_dstlgttoeve(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionTS>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionTS_id();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__BUILDER_HPP_
