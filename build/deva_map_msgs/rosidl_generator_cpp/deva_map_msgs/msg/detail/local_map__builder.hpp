// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/local_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalMap_sensor_header
{
public:
  explicit Init_LocalMap_sensor_header(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::LocalMap sensor_header(::deva_map_msgs::msg::LocalMap::_sensor_header_type arg)
  {
    msg_.sensor_header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_avp_map
{
public:
  explicit Init_LocalMap_avp_map(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_sensor_header avp_map(::deva_map_msgs::msg::LocalMap::_avp_map_type arg)
  {
    msg_.avp_map = std::move(arg);
    return Init_LocalMap_sensor_header(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_ust_map
{
public:
  explicit Init_LocalMap_ust_map(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_avp_map ust_map(::deva_map_msgs::msg::LocalMap::_ust_map_type arg)
  {
    msg_.ust_map = std::move(arg);
    return Init_LocalMap_avp_map(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_st_map
{
public:
  explicit Init_LocalMap_st_map(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_ust_map st_map(::deva_map_msgs::msg::LocalMap::_st_map_type arg)
  {
    msg_.st_map = std::move(arg);
    return Init_LocalMap_ust_map(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_is_localization_mode
{
public:
  explicit Init_LocalMap_is_localization_mode(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_st_map is_localization_mode(::deva_map_msgs::msg::LocalMap::_is_localization_mode_type arg)
  {
    msg_.is_localization_mode = std::move(arg);
    return Init_LocalMap_st_map(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_map_mode
{
public:
  explicit Init_LocalMap_map_mode(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_is_localization_mode map_mode(::deva_map_msgs::msg::LocalMap::_map_mode_type arg)
  {
    msg_.map_mode = std::move(arg);
    return Init_LocalMap_is_localization_mode(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_error_message
{
public:
  explicit Init_LocalMap_error_message(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_map_mode error_message(::deva_map_msgs::msg::LocalMap::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_LocalMap_map_mode(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_error_code
{
public:
  explicit Init_LocalMap_error_code(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_error_message error_code(::deva_map_msgs::msg::LocalMap::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_LocalMap_error_message(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_map_version
{
public:
  explicit Init_LocalMap_map_version(::deva_map_msgs::msg::LocalMap & msg)
  : msg_(msg)
  {}
  Init_LocalMap_error_code map_version(::deva_map_msgs::msg::LocalMap::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_LocalMap_error_code(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

class Init_LocalMap_header
{
public:
  Init_LocalMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalMap_map_version header(::deva_map_msgs::msg::LocalMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalMap_map_version(msg_);
  }

private:
  ::deva_map_msgs::msg::LocalMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::LocalMap>()
{
  return deva_map_msgs::msg::builder::Init_LocalMap_header();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__BUILDER_HPP_
