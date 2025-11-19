// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/STLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/st_local_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_STLocalMap_signals
{
public:
  explicit Init_STLocalMap_signals(::deva_map_msgs::msg::STLocalMap & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::STLocalMap signals(::deva_map_msgs::msg::STLocalMap::_signals_type arg)
  {
    msg_.signals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::STLocalMap msg_;
};

class Init_STLocalMap_obstacles
{
public:
  explicit Init_STLocalMap_obstacles(::deva_map_msgs::msg::STLocalMap & msg)
  : msg_(msg)
  {}
  Init_STLocalMap_signals obstacles(::deva_map_msgs::msg::STLocalMap::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return Init_STLocalMap_signals(msg_);
  }

private:
  ::deva_map_msgs::msg::STLocalMap msg_;
};

class Init_STLocalMap_reference_channals
{
public:
  explicit Init_STLocalMap_reference_channals(::deva_map_msgs::msg::STLocalMap & msg)
  : msg_(msg)
  {}
  Init_STLocalMap_obstacles reference_channals(::deva_map_msgs::msg::STLocalMap::_reference_channals_type arg)
  {
    msg_.reference_channals = std::move(arg);
    return Init_STLocalMap_obstacles(msg_);
  }

private:
  ::deva_map_msgs::msg::STLocalMap msg_;
};

class Init_STLocalMap_channels
{
public:
  Init_STLocalMap_channels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_STLocalMap_reference_channals channels(::deva_map_msgs::msg::STLocalMap::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_STLocalMap_reference_channals(msg_);
  }

private:
  ::deva_map_msgs::msg::STLocalMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::STLocalMap>()
{
  return deva_map_msgs::msg::builder::Init_STLocalMap_channels();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__BUILDER_HPP_
