// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionRoadSignList_reserved
{
public:
  explicit Init_SFFusionRoadSignList_reserved(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionRoadSignList reserved(::deva_aeb_msgs::msg::SFFusionRoadSignList::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_ravalidsize
{
public:
  explicit Init_SFFusionRoadSignList_ravalidsize(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_reserved ravalidsize(::deva_aeb_msgs::msg::SFFusionRoadSignList::_ravalidsize_type arg)
  {
    msg_.ravalidsize = std::move(arg);
    return Init_SFFusionRoadSignList_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_cwvalidsize
{
public:
  explicit Init_SFFusionRoadSignList_cwvalidsize(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_ravalidsize cwvalidsize(::deva_aeb_msgs::msg::SFFusionRoadSignList::_cwvalidsize_type arg)
  {
    msg_.cwvalidsize = std::move(arg);
    return Init_SFFusionRoadSignList_ravalidsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_slvalidsize
{
public:
  explicit Init_SFFusionRoadSignList_slvalidsize(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_cwvalidsize slvalidsize(::deva_aeb_msgs::msg::SFFusionRoadSignList::_slvalidsize_type arg)
  {
    msg_.slvalidsize = std::move(arg);
    return Init_SFFusionRoadSignList_cwvalidsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_racount
{
public:
  explicit Init_SFFusionRoadSignList_racount(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_slvalidsize racount(::deva_aeb_msgs::msg::SFFusionRoadSignList::_racount_type arg)
  {
    msg_.racount = std::move(arg);
    return Init_SFFusionRoadSignList_slvalidsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_cwcount
{
public:
  explicit Init_SFFusionRoadSignList_cwcount(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_racount cwcount(::deva_aeb_msgs::msg::SFFusionRoadSignList::_cwcount_type arg)
  {
    msg_.cwcount = std::move(arg);
    return Init_SFFusionRoadSignList_racount(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_framenum
{
public:
  explicit Init_SFFusionRoadSignList_framenum(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_cwcount framenum(::deva_aeb_msgs::msg::SFFusionRoadSignList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionRoadSignList_cwcount(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_timestamp
{
public:
  explicit Init_SFFusionRoadSignList_timestamp(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_framenum timestamp(::deva_aeb_msgs::msg::SFFusionRoadSignList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionRoadSignList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_ralist
{
public:
  explicit Init_SFFusionRoadSignList_ralist(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_timestamp ralist(::deva_aeb_msgs::msg::SFFusionRoadSignList::_ralist_type arg)
  {
    msg_.ralist = std::move(arg);
    return Init_SFFusionRoadSignList_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_cwlist
{
public:
  explicit Init_SFFusionRoadSignList_cwlist(::deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
  : msg_(msg)
  {}
  Init_SFFusionRoadSignList_ralist cwlist(::deva_aeb_msgs::msg::SFFusionRoadSignList::_cwlist_type arg)
  {
    msg_.cwlist = std::move(arg);
    return Init_SFFusionRoadSignList_ralist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

class Init_SFFusionRoadSignList_sllist
{
public:
  Init_SFFusionRoadSignList_sllist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionRoadSignList_cwlist sllist(::deva_aeb_msgs::msg::SFFusionRoadSignList::_sllist_type arg)
  {
    msg_.sllist = std::move(arg);
    return Init_SFFusionRoadSignList_cwlist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionRoadSignList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionRoadSignList>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionRoadSignList_sllist();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__BUILDER_HPP_
