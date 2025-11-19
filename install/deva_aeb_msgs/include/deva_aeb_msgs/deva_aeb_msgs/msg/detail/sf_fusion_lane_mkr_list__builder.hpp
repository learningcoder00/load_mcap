// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionLaneMkrList_cmpforvisnyaw
{
public:
  explicit Init_SFFusionLaneMkrList_cmpforvisnyaw(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList cmpforvisnyaw(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_cmpforvisnyaw_type arg)
  {
    msg_.cmpforvisnyaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_isambiguouslinepatternright
{
public:
  explicit Init_SFFusionLaneMkrList_isambiguouslinepatternright(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_cmpforvisnyaw isambiguouslinepatternright(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_isambiguouslinepatternright_type arg)
  {
    msg_.isambiguouslinepatternright = std::move(arg);
    return Init_SFFusionLaneMkrList_cmpforvisnyaw(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_isambiguouslinepatternleft
{
public:
  explicit Init_SFFusionLaneMkrList_isambiguouslinepatternleft(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_isambiguouslinepatternright isambiguouslinepatternleft(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_isambiguouslinepatternleft_type arg)
  {
    msg_.isambiguouslinepatternleft = std::move(arg);
    return Init_SFFusionLaneMkrList_isambiguouslinepatternright(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_rearthiclsri
{
public:
  explicit Init_SFFusionLaneMkrList_rearthiclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_isambiguouslinepatternleft rearthiclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_rearthiclsri_type arg)
  {
    msg_.rearthiclsri = std::move(arg);
    return Init_SFFusionLaneMkrList_isambiguouslinepatternleft(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_rearthiclsle
{
public:
  explicit Init_SFFusionLaneMkrList_rearthiclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_rearthiclsri rearthiclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_rearthiclsle_type arg)
  {
    msg_.rearthiclsle = std::move(arg);
    return Init_SFFusionLaneMkrList_rearthiclsri(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_rearsecclsri
{
public:
  explicit Init_SFFusionLaneMkrList_rearsecclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_rearthiclsle rearsecclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_rearsecclsri_type arg)
  {
    msg_.rearsecclsri = std::move(arg);
    return Init_SFFusionLaneMkrList_rearthiclsle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_rearsecclsle
{
public:
  explicit Init_SFFusionLaneMkrList_rearsecclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_rearsecclsri rearsecclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_rearsecclsle_type arg)
  {
    msg_.rearsecclsle = std::move(arg);
    return Init_SFFusionLaneMkrList_rearsecclsri(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_rearclsri
{
public:
  explicit Init_SFFusionLaneMkrList_rearclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_rearsecclsle rearclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_rearclsri_type arg)
  {
    msg_.rearclsri = std::move(arg);
    return Init_SFFusionLaneMkrList_rearsecclsle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_rearclsle
{
public:
  explicit Init_SFFusionLaneMkrList_rearclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_rearclsri rearclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_rearclsle_type arg)
  {
    msg_.rearclsle = std::move(arg);
    return Init_SFFusionLaneMkrList_rearclsri(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_thiclsri
{
public:
  explicit Init_SFFusionLaneMkrList_thiclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_rearclsle thiclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_thiclsri_type arg)
  {
    msg_.thiclsri = std::move(arg);
    return Init_SFFusionLaneMkrList_rearclsle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_thiclsle
{
public:
  explicit Init_SFFusionLaneMkrList_thiclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_thiclsri thiclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_thiclsle_type arg)
  {
    msg_.thiclsle = std::move(arg);
    return Init_SFFusionLaneMkrList_thiclsri(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_secclsri
{
public:
  explicit Init_SFFusionLaneMkrList_secclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_thiclsle secclsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_secclsri_type arg)
  {
    msg_.secclsri = std::move(arg);
    return Init_SFFusionLaneMkrList_thiclsle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_secclsle
{
public:
  explicit Init_SFFusionLaneMkrList_secclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_secclsri secclsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_secclsle_type arg)
  {
    msg_.secclsle = std::move(arg);
    return Init_SFFusionLaneMkrList_secclsri(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_clsri
{
public:
  explicit Init_SFFusionLaneMkrList_clsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_secclsle clsri(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_clsri_type arg)
  {
    msg_.clsri = std::move(arg);
    return Init_SFFusionLaneMkrList_secclsle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_clsle
{
public:
  explicit Init_SFFusionLaneMkrList_clsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_clsri clsle(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_clsle_type arg)
  {
    msg_.clsle = std::move(arg);
    return Init_SFFusionLaneMkrList_clsri(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_distostopline
{
public:
  explicit Init_SFFusionLaneMkrList_distostopline(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_clsle distostopline(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_distostopline_type arg)
  {
    msg_.distostopline = std::move(arg);
    return Init_SFFusionLaneMkrList_clsle(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_reserved
{
public:
  explicit Init_SFFusionLaneMkrList_reserved(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_distostopline reserved(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionLaneMkrList_distostopline(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_lanechg
{
public:
  explicit Init_SFFusionLaneMkrList_lanechg(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_reserved lanechg(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_lanechg_type arg)
  {
    msg_.lanechg = std::move(arg);
    return Init_SFFusionLaneMkrList_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_framenum
{
public:
  explicit Init_SFFusionLaneMkrList_framenum(::deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
  : msg_(msg)
  {}
  Init_SFFusionLaneMkrList_lanechg framenum(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionLaneMkrList_lanechg(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

class Init_SFFusionLaneMkrList_timestamp
{
public:
  Init_SFFusionLaneMkrList_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionLaneMkrList_framenum timestamp(::deva_aeb_msgs::msg::SFFusionLaneMkrList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionLaneMkrList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionLaneMkrList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionLaneMkrList>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionLaneMkrList_timestamp();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__BUILDER_HPP_
