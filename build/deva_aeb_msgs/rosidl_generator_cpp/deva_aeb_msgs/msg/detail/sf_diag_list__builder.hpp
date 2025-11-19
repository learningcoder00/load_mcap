// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFDiagList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_diag_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFDiagList_time
{
public:
  explicit Init_SFDiagList_time(::deva_aeb_msgs::msg::SFDiagList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFDiagList time(::deva_aeb_msgs::msg::SFDiagList::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagList msg_;
};

class Init_SFDiagList_light
{
public:
  explicit Init_SFDiagList_light(::deva_aeb_msgs::msg::SFDiagList & msg)
  : msg_(msg)
  {}
  Init_SFDiagList_time light(::deva_aeb_msgs::msg::SFDiagList::_light_type arg)
  {
    msg_.light = std::move(arg);
    return Init_SFDiagList_time(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagList msg_;
};

class Init_SFDiagList_rdsuf
{
public:
  explicit Init_SFDiagList_rdsuf(::deva_aeb_msgs::msg::SFDiagList & msg)
  : msg_(msg)
  {}
  Init_SFDiagList_light rdsuf(::deva_aeb_msgs::msg::SFDiagList::_rdsuf_type arg)
  {
    msg_.rdsuf = std::move(arg);
    return Init_SFDiagList_light(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagList msg_;
};

class Init_SFDiagList_scene
{
public:
  explicit Init_SFDiagList_scene(::deva_aeb_msgs::msg::SFDiagList & msg)
  : msg_(msg)
  {}
  Init_SFDiagList_rdsuf scene(::deva_aeb_msgs::msg::SFDiagList::_scene_type arg)
  {
    msg_.scene = std::move(arg);
    return Init_SFDiagList_rdsuf(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagList msg_;
};

class Init_SFDiagList_weather
{
public:
  explicit Init_SFDiagList_weather(::deva_aeb_msgs::msg::SFDiagList & msg)
  : msg_(msg)
  {}
  Init_SFDiagList_scene weather(::deva_aeb_msgs::msg::SFDiagList::_weather_type arg)
  {
    msg_.weather = std::move(arg);
    return Init_SFDiagList_scene(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagList msg_;
};

class Init_SFDiagList_framenum
{
public:
  explicit Init_SFDiagList_framenum(::deva_aeb_msgs::msg::SFDiagList & msg)
  : msg_(msg)
  {}
  Init_SFDiagList_weather framenum(::deva_aeb_msgs::msg::SFDiagList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFDiagList_weather(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagList msg_;
};

class Init_SFDiagList_timestamp
{
public:
  Init_SFDiagList_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFDiagList_framenum timestamp(::deva_aeb_msgs::msg::SFDiagList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFDiagList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFDiagList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFDiagList>()
{
  return deva_aeb_msgs::msg::builder::Init_SFDiagList_timestamp();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__BUILDER_HPP_
