// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFObjEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFObjEstimn_crvt
{
public:
  explicit Init_SFObjEstimn_crvt(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFObjEstimn crvt(::deva_aeb_msgs::msg::SFObjEstimn::_crvt_type arg)
  {
    msg_.crvt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_agdir
{
public:
  explicit Init_SFObjEstimn_agdir(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_crvt agdir(::deva_aeb_msgs::msg::SFObjEstimn::_agdir_type arg)
  {
    msg_.agdir = std::move(arg);
    return Init_SFObjEstimn_crvt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_alat
{
public:
  explicit Init_SFObjEstimn_alat(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_agdir alat(::deva_aeb_msgs::msg::SFObjEstimn::_alat_type arg)
  {
    msg_.alat = std::move(arg);
    return Init_SFObjEstimn_agdir(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_algt
{
public:
  explicit Init_SFObjEstimn_algt(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_alat algt(::deva_aeb_msgs::msg::SFObjEstimn::_algt_type arg)
  {
    msg_.algt = std::move(arg);
    return Init_SFObjEstimn_alat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_a
{
public:
  explicit Init_SFObjEstimn_a(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_algt a(::deva_aeb_msgs::msg::SFObjEstimn::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SFObjEstimn_algt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_vlat
{
public:
  explicit Init_SFObjEstimn_vlat(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_a vlat(::deva_aeb_msgs::msg::SFObjEstimn::_vlat_type arg)
  {
    msg_.vlat = std::move(arg);
    return Init_SFObjEstimn_a(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_vlgt
{
public:
  explicit Init_SFObjEstimn_vlgt(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_vlat vlgt(::deva_aeb_msgs::msg::SFObjEstimn::_vlgt_type arg)
  {
    msg_.vlgt = std::move(arg);
    return Init_SFObjEstimn_vlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_spd
{
public:
  explicit Init_SFObjEstimn_spd(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_vlgt spd(::deva_aeb_msgs::msg::SFObjEstimn::_spd_type arg)
  {
    msg_.spd = std::move(arg);
    return Init_SFObjEstimn_vlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_posnlat
{
public:
  explicit Init_SFObjEstimn_posnlat(::deva_aeb_msgs::msg::SFObjEstimn & msg)
  : msg_(msg)
  {}
  Init_SFObjEstimn_spd posnlat(::deva_aeb_msgs::msg::SFObjEstimn::_posnlat_type arg)
  {
    msg_.posnlat = std::move(arg);
    return Init_SFObjEstimn_spd(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

class Init_SFObjEstimn_posnlgt
{
public:
  Init_SFObjEstimn_posnlgt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFObjEstimn_posnlat posnlgt(::deva_aeb_msgs::msg::SFObjEstimn::_posnlgt_type arg)
  {
    msg_.posnlgt = std::move(arg);
    return Init_SFObjEstimn_posnlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjEstimn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFObjEstimn>()
{
  return deva_aeb_msgs::msg::builder::Init_SFObjEstimn_posnlgt();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__BUILDER_HPP_
