// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/charge_station_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargeStationInfoProto_remaining_capacity
{
public:
  explicit Init_ChargeStationInfoProto_remaining_capacity(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::ChargeStationInfoProto remaining_capacity(::deva_navi_msgs::msg::ChargeStationInfoProto::_remaining_capacity_type arg)
  {
    msg_.remaining_capacity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_charge_time
{
public:
  explicit Init_ChargeStationInfoProto_charge_time(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_remaining_capacity charge_time(::deva_navi_msgs::msg::ChargeStationInfoProto::_charge_time_type arg)
  {
    msg_.charge_time = std::move(arg);
    return Init_ChargeStationInfoProto_remaining_capacity(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_charge_percent
{
public:
  explicit Init_ChargeStationInfoProto_charge_percent(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_charge_time charge_percent(::deva_navi_msgs::msg::ChargeStationInfoProto::_charge_percent_type arg)
  {
    msg_.charge_percent = std::move(arg);
    return Init_ChargeStationInfoProto_charge_time(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_max_power
{
public:
  explicit Init_ChargeStationInfoProto_max_power(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_charge_percent max_power(::deva_navi_msgs::msg::ChargeStationInfoProto::_max_power_type arg)
  {
    msg_.max_power = std::move(arg);
    return Init_ChargeStationInfoProto_charge_percent(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_brand_name
{
public:
  explicit Init_ChargeStationInfoProto_brand_name(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_max_power brand_name(::deva_navi_msgs::msg::ChargeStationInfoProto::_brand_name_type arg)
  {
    msg_.brand_name = std::move(arg);
    return Init_ChargeStationInfoProto_max_power(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_name
{
public:
  explicit Init_ChargeStationInfoProto_name(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_brand_name name(::deva_navi_msgs::msg::ChargeStationInfoProto::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ChargeStationInfoProto_brand_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_poi_id
{
public:
  explicit Init_ChargeStationInfoProto_poi_id(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_name poi_id(::deva_navi_msgs::msg::ChargeStationInfoProto::_poi_id_type arg)
  {
    msg_.poi_id = std::move(arg);
    return Init_ChargeStationInfoProto_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_projective
{
public:
  explicit Init_ChargeStationInfoProto_projective(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_poi_id projective(::deva_navi_msgs::msg::ChargeStationInfoProto::_projective_type arg)
  {
    msg_.projective = std::move(arg);
    return Init_ChargeStationInfoProto_poi_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_show
{
public:
  explicit Init_ChargeStationInfoProto_show(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_projective show(::deva_navi_msgs::msg::ChargeStationInfoProto::_show_type arg)
  {
    msg_.show = std::move(arg);
    return Init_ChargeStationInfoProto_projective(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_direction
{
public:
  explicit Init_ChargeStationInfoProto_direction(::deva_navi_msgs::msg::ChargeStationInfoProto & msg)
  : msg_(msg)
  {}
  Init_ChargeStationInfoProto_show direction(::deva_navi_msgs::msg::ChargeStationInfoProto::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_ChargeStationInfoProto_show(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

class Init_ChargeStationInfoProto_segment_idx
{
public:
  Init_ChargeStationInfoProto_segment_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeStationInfoProto_direction segment_idx(::deva_navi_msgs::msg::ChargeStationInfoProto::_segment_idx_type arg)
  {
    msg_.segment_idx = std::move(arg);
    return Init_ChargeStationInfoProto_direction(msg_);
  }

private:
  ::deva_navi_msgs::msg::ChargeStationInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::ChargeStationInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_ChargeStationInfoProto_segment_idx();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__BUILDER_HPP_
