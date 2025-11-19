// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionObstacleList_reserved
{
public:
  explicit Init_SFFusionObstacleList_reserved(::deva_aeb_msgs::msg::SFFusionObstacleList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionObstacleList reserved(::deva_aeb_msgs::msg::SFFusionObstacleList::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacleList msg_;
};

class Init_SFFusionObstacleList_validsize
{
public:
  explicit Init_SFFusionObstacleList_validsize(::deva_aeb_msgs::msg::SFFusionObstacleList & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacleList_reserved validsize(::deva_aeb_msgs::msg::SFFusionObstacleList::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return Init_SFFusionObstacleList_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacleList msg_;
};

class Init_SFFusionObstacleList_framenum
{
public:
  explicit Init_SFFusionObstacleList_framenum(::deva_aeb_msgs::msg::SFFusionObstacleList & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacleList_validsize framenum(::deva_aeb_msgs::msg::SFFusionObstacleList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionObstacleList_validsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacleList msg_;
};

class Init_SFFusionObstacleList_timestamp
{
public:
  explicit Init_SFFusionObstacleList_timestamp(::deva_aeb_msgs::msg::SFFusionObstacleList & msg)
  : msg_(msg)
  {}
  Init_SFFusionObstacleList_framenum timestamp(::deva_aeb_msgs::msg::SFFusionObstacleList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionObstacleList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacleList msg_;
};

class Init_SFFusionObstacleList_obslist
{
public:
  Init_SFFusionObstacleList_obslist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionObstacleList_timestamp obslist(::deva_aeb_msgs::msg::SFFusionObstacleList::_obslist_type arg)
  {
    msg_.obslist = std::move(arg);
    return Init_SFFusionObstacleList_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionObstacleList>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionObstacleList_obslist();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__BUILDER_HPP_
