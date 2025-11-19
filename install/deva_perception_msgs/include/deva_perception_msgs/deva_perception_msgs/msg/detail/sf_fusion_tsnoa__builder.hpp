// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTSNOA_pole
{
public:
  explicit Init_SFFusionTSNOA_pole(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::SFFusionTSNOA pole(::deva_perception_msgs::msg::SFFusionTSNOA::_pole_type arg)
  {
    msg_.pole = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_utmz
{
public:
  explicit Init_SFFusionTSNOA_utmz(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_pole utmz(::deva_perception_msgs::msg::SFFusionTSNOA::_utmz_type arg)
  {
    msg_.utmz = std::move(arg);
    return Init_SFFusionTSNOA_pole(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_utmy
{
public:
  explicit Init_SFFusionTSNOA_utmy(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_utmz utmy(::deva_perception_msgs::msg::SFFusionTSNOA::_utmy_type arg)
  {
    msg_.utmy = std::move(arg);
    return Init_SFFusionTSNOA_utmz(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_utmx
{
public:
  explicit Init_SFFusionTSNOA_utmx(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_utmy utmx(::deva_perception_msgs::msg::SFFusionTSNOA::_utmx_type arg)
  {
    msg_.utmx = std::move(arg);
    return Init_SFFusionTSNOA_utmy(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_tsquadrangleimg
{
public:
  explicit Init_SFFusionTSNOA_tsquadrangleimg(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_utmx tsquadrangleimg(::deva_perception_msgs::msg::SFFusionTSNOA::_tsquadrangleimg_type arg)
  {
    msg_.tsquadrangleimg = std::move(arg);
    return Init_SFFusionTSNOA_utmx(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_tsquadranglevcs
{
public:
  explicit Init_SFFusionTSNOA_tsquadranglevcs(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_tsquadrangleimg tsquadranglevcs(::deva_perception_msgs::msg::SFFusionTSNOA::_tsquadranglevcs_type arg)
  {
    msg_.tsquadranglevcs = std::move(arg);
    return Init_SFFusionTSNOA_tsquadrangleimg(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_spplinfotype
{
public:
  explicit Init_SFFusionTSNOA_spplinfotype(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_tsquadranglevcs spplinfotype(::deva_perception_msgs::msg::SFFusionTSNOA::_spplinfotype_type arg)
  {
    msg_.spplinfotype = std::move(arg);
    return Init_SFFusionTSNOA_tsquadranglevcs(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_spplinfoval
{
public:
  explicit Init_SFFusionTSNOA_spplinfoval(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_spplinfotype spplinfoval(::deva_perception_msgs::msg::SFFusionTSNOA::_spplinfoval_type arg)
  {
    msg_.spplinfoval = std::move(arg);
    return Init_SFFusionTSNOA_spplinfotype(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_reserved
{
public:
  explicit Init_SFFusionTSNOA_reserved(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_spplinfoval reserved(::deva_perception_msgs::msg::SFFusionTSNOA::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionTSNOA_spplinfoval(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_region
{
public:
  explicit Init_SFFusionTSNOA_region(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_reserved region(::deva_perception_msgs::msg::SFFusionTSNOA::_region_type arg)
  {
    msg_.region = std::move(arg);
    return Init_SFFusionTSNOA_reserved(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_is_ramp
{
public:
  explicit Init_SFFusionTSNOA_is_ramp(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_region is_ramp(::deva_perception_msgs::msg::SFFusionTSNOA::_is_ramp_type arg)
  {
    msg_.is_ramp = std::move(arg);
    return Init_SFFusionTSNOA_region(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_val
{
public:
  explicit Init_SFFusionTSNOA_val(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_is_ramp val(::deva_perception_msgs::msg::SFFusionTSNOA::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_SFFusionTSNOA_is_ramp(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_typ
{
public:
  explicit Init_SFFusionTSNOA_typ(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_val typ(::deva_perception_msgs::msg::SFFusionTSNOA::_typ_type arg)
  {
    msg_.typ = std::move(arg);
    return Init_SFFusionTSNOA_val(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_qly
{
public:
  explicit Init_SFFusionTSNOA_qly(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_typ qly(::deva_perception_msgs::msg::SFFusionTSNOA::_qly_type arg)
  {
    msg_.qly = std::move(arg);
    return Init_SFFusionTSNOA_typ(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_notrlvres
{
public:
  explicit Init_SFFusionTSNOA_notrlvres(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_qly notrlvres(::deva_perception_msgs::msg::SFFusionTSNOA::_notrlvres_type arg)
  {
    msg_.notrlvres = std::move(arg);
    return Init_SFFusionTSNOA_qly(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_rlvc
{
public:
  explicit Init_SFFusionTSNOA_rlvc(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_notrlvres rlvc(::deva_perception_msgs::msg::SFFusionTSNOA::_rlvc_type arg)
  {
    msg_.rlvc = std::move(arg);
    return Init_SFFusionTSNOA_notrlvres(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_locn
{
public:
  explicit Init_SFFusionTSNOA_locn(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_rlvc locn(::deva_perception_msgs::msg::SFFusionTSNOA::_locn_type arg)
  {
    msg_.locn = std::move(arg);
    return Init_SFFusionTSNOA_rlvc(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_lanelocn
{
public:
  explicit Init_SFFusionTSNOA_lanelocn(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_locn lanelocn(::deva_perception_msgs::msg::SFFusionTSNOA::_lanelocn_type arg)
  {
    msg_.lanelocn = std::move(arg);
    return Init_SFFusionTSNOA_locn(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_electcsgn
{
public:
  explicit Init_SFFusionTSNOA_electcsgn(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_lanelocn electcsgn(::deva_perception_msgs::msg::SFFusionTSNOA::_electcsgn_type arg)
  {
    msg_.electcsgn = std::move(arg);
    return Init_SFFusionTSNOA_lanelocn(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_direction
{
public:
  explicit Init_SFFusionTSNOA_direction(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_electcsgn direction(::deva_perception_msgs::msg::SFFusionTSNOA::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_SFFusionTSNOA_electcsgn(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_height
{
public:
  explicit Init_SFFusionTSNOA_height(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_direction height(::deva_perception_msgs::msg::SFFusionTSNOA::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_SFFusionTSNOA_direction(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_dstlattoeve
{
public:
  explicit Init_SFFusionTSNOA_dstlattoeve(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_height dstlattoeve(::deva_perception_msgs::msg::SFFusionTSNOA::_dstlattoeve_type arg)
  {
    msg_.dstlattoeve = std::move(arg);
    return Init_SFFusionTSNOA_height(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_dstlgttoeve
{
public:
  explicit Init_SFFusionTSNOA_dstlgttoeve(::deva_perception_msgs::msg::SFFusionTSNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSNOA_dstlattoeve dstlgttoeve(::deva_perception_msgs::msg::SFFusionTSNOA::_dstlgttoeve_type arg)
  {
    msg_.dstlgttoeve = std::move(arg);
    return Init_SFFusionTSNOA_dstlattoeve(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

class Init_SFFusionTSNOA_id
{
public:
  Init_SFFusionTSNOA_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTSNOA_dstlgttoeve id(::deva_perception_msgs::msg::SFFusionTSNOA::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFFusionTSNOA_dstlgttoeve(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::SFFusionTSNOA>()
{
  return deva_perception_msgs::msg::builder::Init_SFFusionTSNOA_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__BUILDER_HPP_
