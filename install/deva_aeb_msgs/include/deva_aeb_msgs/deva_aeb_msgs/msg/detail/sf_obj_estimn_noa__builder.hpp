// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFObjEstimnNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN_NOA__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN_NOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_obj_estimn_noa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFObjEstimnNOA_agdirstd
{
public:
  explicit Init_SFObjEstimnNOA_agdirstd(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFObjEstimnNOA agdirstd(::deva_aeb_msgs::msg::SFObjEstimnNOA::_agdirstd_type arg)
  {
    msg_.agdirstd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_crvt
{
public:
  explicit Init_SFObjEstimnNOA_crvt(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_agdirstd crvt(::deva_aeb_msgs::msg::SFObjEstimnNOA::_crvt_type arg)
  {
    msg_.crvt = std::move(arg);
    return Init_SFObjEstimnNOA_agdirstd(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_agdir
{
public:
  explicit Init_SFObjEstimnNOA_agdir(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_crvt agdir(::deva_aeb_msgs::msg::SFObjEstimnNOA::_agdir_type arg)
  {
    msg_.agdir = std::move(arg);
    return Init_SFObjEstimnNOA_crvt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_alat
{
public:
  explicit Init_SFObjEstimnNOA_alat(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_agdir alat(::deva_aeb_msgs::msg::SFObjEstimnNOA::_alat_type arg)
  {
    msg_.alat = std::move(arg);
    return Init_SFObjEstimnNOA_agdir(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_algt
{
public:
  explicit Init_SFObjEstimnNOA_algt(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_alat algt(::deva_aeb_msgs::msg::SFObjEstimnNOA::_algt_type arg)
  {
    msg_.algt = std::move(arg);
    return Init_SFObjEstimnNOA_alat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_a
{
public:
  explicit Init_SFObjEstimnNOA_a(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_algt a(::deva_aeb_msgs::msg::SFObjEstimnNOA::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SFObjEstimnNOA_algt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_vlat
{
public:
  explicit Init_SFObjEstimnNOA_vlat(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_a vlat(::deva_aeb_msgs::msg::SFObjEstimnNOA::_vlat_type arg)
  {
    msg_.vlat = std::move(arg);
    return Init_SFObjEstimnNOA_a(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_vlgt
{
public:
  explicit Init_SFObjEstimnNOA_vlgt(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_vlat vlgt(::deva_aeb_msgs::msg::SFObjEstimnNOA::_vlgt_type arg)
  {
    msg_.vlgt = std::move(arg);
    return Init_SFObjEstimnNOA_vlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_spd
{
public:
  explicit Init_SFObjEstimnNOA_spd(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_vlgt spd(::deva_aeb_msgs::msg::SFObjEstimnNOA::_spd_type arg)
  {
    msg_.spd = std::move(arg);
    return Init_SFObjEstimnNOA_vlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_posnlat
{
public:
  explicit Init_SFObjEstimnNOA_posnlat(::deva_aeb_msgs::msg::SFObjEstimnNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimnNOA_spd posnlat(::deva_aeb_msgs::msg::SFObjEstimnNOA::_posnlat_type arg)
  {
    msg_.posnlat = std::move(arg);
    return Init_SFObjEstimnNOA_spd(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

class Init_SFObjEstimnNOA_posnlgt
{
public:
  Init_SFObjEstimnNOA_posnlgt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFObjEstimnNOA_posnlat posnlgt(::deva_aeb_msgs::msg::SFObjEstimnNOA::_posnlgt_type arg)
  {
    msg_.posnlgt = std::move(arg);
    return Init_SFObjEstimnNOA_posnlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimnNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFObjEstimnNOA>()
{
  return deva_aeb_msgs::msg::builder::Init_SFObjEstimnNOA_posnlgt();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN_NOA__BUILDER_HPP_
