// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_ElecPathInfoProto_m_energy_consume
{
public:
  explicit Init_ElecPathInfoProto_m_energy_consume(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::ElecPathInfoProto m_energy_consume(::deva_navi_msgs::msg::ElecPathInfoProto::_m_energy_consume_type arg)
  {
    msg_.m_energy_consume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_via_info
{
public:
  explicit Init_ElecPathInfoProto_m_via_info(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_energy_consume m_via_info(::deva_navi_msgs::msg::ElecPathInfoProto::_m_via_info_type arg)
  {
    msg_.m_via_info = std::move(arg);
    return Init_ElecPathInfoProto_m_energy_consume(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_link_distance
{
public:
  explicit Init_ElecPathInfoProto_m_link_distance(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_via_info m_link_distance(::deva_navi_msgs::msg::ElecPathInfoProto::_m_link_distance_type arg)
  {
    msg_.m_link_distance = std::move(arg);
    return Init_ElecPathInfoProto_m_via_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_link_consume
{
public:
  explicit Init_ElecPathInfoProto_m_link_consume(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_link_distance m_link_consume(::deva_navi_msgs::msg::ElecPathInfoProto::_m_link_consume_type arg)
  {
    msg_.m_link_consume = std::move(arg);
    return Init_ElecPathInfoProto_m_link_distance(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_link_num
{
public:
  explicit Init_ElecPathInfoProto_m_link_num(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_link_consume m_link_num(::deva_navi_msgs::msg::ElecPathInfoProto::_m_link_num_type arg)
  {
    msg_.m_link_num = std::move(arg);
    return Init_ElecPathInfoProto_m_link_consume(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_energy_sum
{
public:
  explicit Init_ElecPathInfoProto_m_energy_sum(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_link_num m_energy_sum(::deva_navi_msgs::msg::ElecPathInfoProto::_m_energy_sum_type arg)
  {
    msg_.m_energy_sum = std::move(arg);
    return Init_ElecPathInfoProto_m_link_num(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_path_flag
{
public:
  explicit Init_ElecPathInfoProto_m_path_flag(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_energy_sum m_path_flag(::deva_navi_msgs::msg::ElecPathInfoProto::_m_path_flag_type arg)
  {
    msg_.m_path_flag = std::move(arg);
    return Init_ElecPathInfoProto_m_energy_sum(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_energy_unit
{
public:
  explicit Init_ElecPathInfoProto_m_energy_unit(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_path_flag m_energy_unit(::deva_navi_msgs::msg::ElecPathInfoProto::_m_energy_unit_type arg)
  {
    msg_.m_energy_unit = std::move(arg);
    return Init_ElecPathInfoProto_m_path_flag(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_traffic_info
{
public:
  explicit Init_ElecPathInfoProto_m_traffic_info(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_energy_unit m_traffic_info(::deva_navi_msgs::msg::ElecPathInfoProto::_m_traffic_info_type arg)
  {
    msg_.m_traffic_info = std::move(arg);
    return Init_ElecPathInfoProto_m_energy_unit(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_link_consume_size_word
{
public:
  explicit Init_ElecPathInfoProto_m_link_consume_size_word(::deva_navi_msgs::msg::ElecPathInfoProto & msg)
  : msg_(msg)
  {}
  Init_ElecPathInfoProto_m_traffic_info m_link_consume_size_word(::deva_navi_msgs::msg::ElecPathInfoProto::_m_link_consume_size_word_type arg)
  {
    msg_.m_link_consume_size_word = std::move(arg);
    return Init_ElecPathInfoProto_m_traffic_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

class Init_ElecPathInfoProto_m_is_elec_route
{
public:
  Init_ElecPathInfoProto_m_is_elec_route()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElecPathInfoProto_m_link_consume_size_word m_is_elec_route(::deva_navi_msgs::msg::ElecPathInfoProto::_m_is_elec_route_type arg)
  {
    msg_.m_is_elec_route = std::move(arg);
    return Init_ElecPathInfoProto_m_link_consume_size_word(msg_);
  }

private:
  ::deva_navi_msgs::msg::ElecPathInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::ElecPathInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_ElecPathInfoProto_m_is_elec_route();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__BUILDER_HPP_
