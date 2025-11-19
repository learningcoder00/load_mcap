// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/LaneBindInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/lane_bind_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_LaneBindInfo_scalable_multimap
{
public:
  explicit Init_LaneBindInfo_scalable_multimap(::deva_planning_msgs2::msg::LaneBindInfo & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::LaneBindInfo scalable_multimap(::deva_planning_msgs2::msg::LaneBindInfo::_scalable_multimap_type arg)
  {
    msg_.scalable_multimap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::LaneBindInfo msg_;
};

class Init_LaneBindInfo_scalable_flags
{
public:
  explicit Init_LaneBindInfo_scalable_flags(::deva_planning_msgs2::msg::LaneBindInfo & msg)
  : msg_(msg)
  {}
  Init_LaneBindInfo_scalable_multimap scalable_flags(::deva_planning_msgs2::msg::LaneBindInfo::_scalable_flags_type arg)
  {
    msg_.scalable_flags = std::move(arg);
    return Init_LaneBindInfo_scalable_multimap(msg_);
  }

private:
  ::deva_planning_msgs2::msg::LaneBindInfo msg_;
};

class Init_LaneBindInfo_sl_boundary
{
public:
  explicit Init_LaneBindInfo_sl_boundary(::deva_planning_msgs2::msg::LaneBindInfo & msg)
  : msg_(msg)
  {}
  Init_LaneBindInfo_scalable_flags sl_boundary(::deva_planning_msgs2::msg::LaneBindInfo::_sl_boundary_type arg)
  {
    msg_.sl_boundary = std::move(arg);
    return Init_LaneBindInfo_scalable_flags(msg_);
  }

private:
  ::deva_planning_msgs2::msg::LaneBindInfo msg_;
};

class Init_LaneBindInfo_binded_obs
{
public:
  explicit Init_LaneBindInfo_binded_obs(::deva_planning_msgs2::msg::LaneBindInfo & msg)
  : msg_(msg)
  {}
  Init_LaneBindInfo_sl_boundary binded_obs(::deva_planning_msgs2::msg::LaneBindInfo::_binded_obs_type arg)
  {
    msg_.binded_obs = std::move(arg);
    return Init_LaneBindInfo_sl_boundary(msg_);
  }

private:
  ::deva_planning_msgs2::msg::LaneBindInfo msg_;
};

class Init_LaneBindInfo_ref_id
{
public:
  Init_LaneBindInfo_ref_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneBindInfo_binded_obs ref_id(::deva_planning_msgs2::msg::LaneBindInfo::_ref_id_type arg)
  {
    msg_.ref_id = std::move(arg);
    return Init_LaneBindInfo_binded_obs(msg_);
  }

private:
  ::deva_planning_msgs2::msg::LaneBindInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::LaneBindInfo>()
{
  return deva_planning_msgs2::msg::builder::Init_LaneBindInfo_ref_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__BUILDER_HPP_
