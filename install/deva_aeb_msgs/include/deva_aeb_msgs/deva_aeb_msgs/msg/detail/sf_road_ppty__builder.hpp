// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFRoadPpty_distancewithhiahconfidence
{
public:
  explicit Init_SFRoadPpty_distancewithhiahconfidence(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFRoadPpty distancewithhiahconfidence(::deva_aeb_msgs::msg::SFRoadPpty::_distancewithhiahconfidence_type arg)
  {
    msg_.distancewithhiahconfidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_distancewithlowconfidence
{
public:
  explicit Init_SFRoadPpty_distancewithlowconfidence(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_distancewithhiahconfidence distancewithlowconfidence(::deva_aeb_msgs::msg::SFRoadPpty::_distancewithlowconfidence_type arg)
  {
    msg_.distancewithlowconfidence = std::move(arg);
    return Init_SFRoadPpty_distancewithhiahconfidence(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_objidtitohiqlyvalidsize
{
public:
  explicit Init_SFRoadPpty_objidtitohiqlyvalidsize(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_distancewithlowconfidence objidtitohiqlyvalidsize(::deva_aeb_msgs::msg::SFRoadPpty::_objidtitohiqlyvalidsize_type arg)
  {
    msg_.objidtitohiqlyvalidsize = std::move(arg);
    return Init_SFRoadPpty_distancewithlowconfidence(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_objidtitohiqly
{
public:
  explicit Init_SFRoadPpty_objidtitohiqly(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_objidtitohiqlyvalidsize objidtitohiqly(::deva_aeb_msgs::msg::SFRoadPpty::_objidtitohiqly_type arg)
  {
    msg_.objidtitohiqly = std::move(arg);
    return Init_SFRoadPpty_objidtitohiqlyvalidsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_titohiqlyvalidsize
{
public:
  explicit Init_SFRoadPpty_titohiqlyvalidsize(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_objidtitohiqly titohiqlyvalidsize(::deva_aeb_msgs::msg::SFRoadPpty::_titohiqlyvalidsize_type arg)
  {
    msg_.titohiqlyvalidsize = std::move(arg);
    return Init_SFRoadPpty_objidtitohiqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_titohiqly
{
public:
  explicit Init_SFRoadPpty_titohiqly(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_titohiqlyvalidsize titohiqly(::deva_aeb_msgs::msg::SFRoadPpty::_titohiqly_type arg)
  {
    msg_.titohiqly = std::move(arg);
    return Init_SFRoadPpty_titohiqlyvalidsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_reserved
{
public:
  explicit Init_SFRoadPpty_reserved(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_titohiqly reserved(::deva_aeb_msgs::msg::SFRoadPpty::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFRoadPpty_titohiqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_vld
{
public:
  explicit Init_SFRoadPpty_vld(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_reserved vld(::deva_aeb_msgs::msg::SFRoadPpty::_vld_type arg)
  {
    msg_.vld = std::move(arg);
    return Init_SFRoadPpty_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_strtd
{
public:
  explicit Init_SFRoadPpty_strtd(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_vld strtd(::deva_aeb_msgs::msg::SFRoadPpty::_strtd_type arg)
  {
    msg_.strtd = std::move(arg);
    return Init_SFRoadPpty_vld(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_seglenvalidsize
{
public:
  explicit Init_SFRoadPpty_seglenvalidsize(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_strtd seglenvalidsize(::deva_aeb_msgs::msg::SFRoadPpty::_seglenvalidsize_type arg)
  {
    msg_.seglenvalidsize = std::move(arg);
    return Init_SFRoadPpty_strtd(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_seglen
{
public:
  explicit Init_SFRoadPpty_seglen(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_seglenvalidsize seglen(::deva_aeb_msgs::msg::SFRoadPpty::_seglen_type arg)
  {
    msg_.seglen = std::move(arg);
    return Init_SFRoadPpty_seglenvalidsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_crvtratevalidsize
{
public:
  explicit Init_SFRoadPpty_crvtratevalidsize(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_seglen crvtratevalidsize(::deva_aeb_msgs::msg::SFRoadPpty::_crvtratevalidsize_type arg)
  {
    msg_.crvtratevalidsize = std::move(arg);
    return Init_SFRoadPpty_seglen(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_crvtrate
{
public:
  explicit Init_SFRoadPpty_crvtrate(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_crvtratevalidsize crvtrate(::deva_aeb_msgs::msg::SFRoadPpty::_crvtrate_type arg)
  {
    msg_.crvtrate = std::move(arg);
    return Init_SFRoadPpty_crvtratevalidsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_crvt
{
public:
  explicit Init_SFRoadPpty_crvt(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_crvtrate crvt(::deva_aeb_msgs::msg::SFRoadPpty::_crvt_type arg)
  {
    msg_.crvt = std::move(arg);
    return Init_SFRoadPpty_crvtrate(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_agdir
{
public:
  explicit Init_SFRoadPpty_agdir(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_crvt agdir(::deva_aeb_msgs::msg::SFRoadPpty::_agdir_type arg)
  {
    msg_.agdir = std::move(arg);
    return Init_SFRoadPpty_crvt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_offslat
{
public:
  explicit Init_SFRoadPpty_offslat(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_agdir offslat(::deva_aeb_msgs::msg::SFRoadPpty::_offslat_type arg)
  {
    msg_.offslat = std::move(arg);
    return Init_SFRoadPpty_agdir(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_lanewidth
{
public:
  explicit Init_SFRoadPpty_lanewidth(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_offslat lanewidth(::deva_aeb_msgs::msg::SFRoadPpty::_lanewidth_type arg)
  {
    msg_.lanewidth = std::move(arg);
    return Init_SFRoadPpty_offslat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_framenum
{
public:
  explicit Init_SFRoadPpty_framenum(::deva_aeb_msgs::msg::SFRoadPpty & msg)
  : msg_(msg)
  {}
  Init_SFRoadPpty_lanewidth framenum(::deva_aeb_msgs::msg::SFRoadPpty::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFRoadPpty_lanewidth(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

class Init_SFRoadPpty_timestamp
{
public:
  Init_SFRoadPpty_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFRoadPpty_framenum timestamp(::deva_aeb_msgs::msg::SFRoadPpty::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFRoadPpty_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRoadPpty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFRoadPpty>()
{
  return deva_aeb_msgs::msg::builder::Init_SFRoadPpty_timestamp();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__BUILDER_HPP_
