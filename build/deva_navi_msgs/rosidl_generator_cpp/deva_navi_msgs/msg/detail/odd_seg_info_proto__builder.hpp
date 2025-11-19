// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/OddSegInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_OddSegInfoProto_m_end_off_set
{
public:
  explicit Init_OddSegInfoProto_m_end_off_set(::deva_navi_msgs::msg::OddSegInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::OddSegInfoProto m_end_off_set(::deva_navi_msgs::msg::OddSegInfoProto::_m_end_off_set_type arg)
  {
    msg_.m_end_off_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::OddSegInfoProto msg_;
};

class Init_OddSegInfoProto_m_end_link_idx
{
public:
  explicit Init_OddSegInfoProto_m_end_link_idx(::deva_navi_msgs::msg::OddSegInfoProto & msg)
  : msg_(msg)
  {}
  Init_OddSegInfoProto_m_end_off_set m_end_link_idx(::deva_navi_msgs::msg::OddSegInfoProto::_m_end_link_idx_type arg)
  {
    msg_.m_end_link_idx = std::move(arg);
    return Init_OddSegInfoProto_m_end_off_set(msg_);
  }

private:
  ::deva_navi_msgs::msg::OddSegInfoProto msg_;
};

class Init_OddSegInfoProto_m_end_seg_idx
{
public:
  explicit Init_OddSegInfoProto_m_end_seg_idx(::deva_navi_msgs::msg::OddSegInfoProto & msg)
  : msg_(msg)
  {}
  Init_OddSegInfoProto_m_end_link_idx m_end_seg_idx(::deva_navi_msgs::msg::OddSegInfoProto::_m_end_seg_idx_type arg)
  {
    msg_.m_end_seg_idx = std::move(arg);
    return Init_OddSegInfoProto_m_end_link_idx(msg_);
  }

private:
  ::deva_navi_msgs::msg::OddSegInfoProto msg_;
};

class Init_OddSegInfoProto_m_start_off_set
{
public:
  explicit Init_OddSegInfoProto_m_start_off_set(::deva_navi_msgs::msg::OddSegInfoProto & msg)
  : msg_(msg)
  {}
  Init_OddSegInfoProto_m_end_seg_idx m_start_off_set(::deva_navi_msgs::msg::OddSegInfoProto::_m_start_off_set_type arg)
  {
    msg_.m_start_off_set = std::move(arg);
    return Init_OddSegInfoProto_m_end_seg_idx(msg_);
  }

private:
  ::deva_navi_msgs::msg::OddSegInfoProto msg_;
};

class Init_OddSegInfoProto_m_start_link_idx
{
public:
  explicit Init_OddSegInfoProto_m_start_link_idx(::deva_navi_msgs::msg::OddSegInfoProto & msg)
  : msg_(msg)
  {}
  Init_OddSegInfoProto_m_start_off_set m_start_link_idx(::deva_navi_msgs::msg::OddSegInfoProto::_m_start_link_idx_type arg)
  {
    msg_.m_start_link_idx = std::move(arg);
    return Init_OddSegInfoProto_m_start_off_set(msg_);
  }

private:
  ::deva_navi_msgs::msg::OddSegInfoProto msg_;
};

class Init_OddSegInfoProto_m_start_seg_idx
{
public:
  explicit Init_OddSegInfoProto_m_start_seg_idx(::deva_navi_msgs::msg::OddSegInfoProto & msg)
  : msg_(msg)
  {}
  Init_OddSegInfoProto_m_start_link_idx m_start_seg_idx(::deva_navi_msgs::msg::OddSegInfoProto::_m_start_seg_idx_type arg)
  {
    msg_.m_start_seg_idx = std::move(arg);
    return Init_OddSegInfoProto_m_start_link_idx(msg_);
  }

private:
  ::deva_navi_msgs::msg::OddSegInfoProto msg_;
};

class Init_OddSegInfoProto_m_odd_len
{
public:
  Init_OddSegInfoProto_m_odd_len()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OddSegInfoProto_m_start_seg_idx m_odd_len(::deva_navi_msgs::msg::OddSegInfoProto::_m_odd_len_type arg)
  {
    msg_.m_odd_len = std::move(arg);
    return Init_OddSegInfoProto_m_start_seg_idx(msg_);
  }

private:
  ::deva_navi_msgs::msg::OddSegInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::OddSegInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_OddSegInfoProto_m_odd_len();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__BUILDER_HPP_
