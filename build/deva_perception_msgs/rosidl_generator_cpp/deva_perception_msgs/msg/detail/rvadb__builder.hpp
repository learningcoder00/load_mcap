// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVADB.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RVADB__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RVADB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rvadb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVADB_extra_infos
{
public:
  explicit Init_RVADB_extra_infos(::deva_perception_msgs::msg::RVADB & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVADB extra_infos(::deva_perception_msgs::msg::RVADB::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVADB msg_;
};

class Init_RVADB_lights_list
{
public:
  explicit Init_RVADB_lights_list(::deva_perception_msgs::msg::RVADB & msg)
  : msg_(msg)
  {}
  Init_RVADB_extra_infos lights_list(::deva_perception_msgs::msg::RVADB::_lights_list_type arg)
  {
    msg_.lights_list = std::move(arg);
    return Init_RVADB_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVADB msg_;
};

class Init_RVADB_orientation
{
public:
  explicit Init_RVADB_orientation(::deva_perception_msgs::msg::RVADB & msg)
  : msg_(msg)
  {}
  Init_RVADB_lights_list orientation(::deva_perception_msgs::msg::RVADB::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RVADB_lights_list(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVADB msg_;
};

class Init_RVADB_translation
{
public:
  explicit Init_RVADB_translation(::deva_perception_msgs::msg::RVADB & msg)
  : msg_(msg)
  {}
  Init_RVADB_orientation translation(::deva_perception_msgs::msg::RVADB::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_RVADB_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVADB msg_;
};

class Init_RVADB_header
{
public:
  Init_RVADB_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVADB_translation header(::deva_perception_msgs::msg::RVADB::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RVADB_translation(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVADB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVADB>()
{
  return deva_perception_msgs::msg::builder::Init_RVADB_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RVADB__BUILDER_HPP_
