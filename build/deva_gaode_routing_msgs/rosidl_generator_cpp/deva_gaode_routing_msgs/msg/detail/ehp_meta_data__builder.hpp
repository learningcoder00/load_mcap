// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_EhpMetaData_meta_spd_units
{
public:
  explicit Init_EhpMetaData_meta_spd_units(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::EhpMetaData meta_spd_units(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_spd_units_type arg)
  {
    msg_.meta_spd_units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_prot_ver_minor
{
public:
  explicit Init_EhpMetaData_meta_prot_ver_minor(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_spd_units meta_prot_ver_minor(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_prot_ver_minor_type arg)
  {
    msg_.meta_prot_ver_minor = std::move(arg);
    return Init_EhpMetaData_meta_spd_units(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_map_ver_qtr
{
public:
  explicit Init_EhpMetaData_meta_map_ver_qtr(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_prot_ver_minor meta_map_ver_qtr(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_map_ver_qtr_type arg)
  {
    msg_.meta_map_ver_qtr = std::move(arg);
    return Init_EhpMetaData_meta_prot_ver_minor(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_map_ver_year
{
public:
  explicit Init_EhpMetaData_meta_map_ver_year(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_map_ver_qtr meta_map_ver_year(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_map_ver_year_type arg)
  {
    msg_.meta_map_ver_year = std::move(arg);
    return Init_EhpMetaData_meta_map_ver_qtr(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_drv_side
{
public:
  explicit Init_EhpMetaData_meta_drv_side(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_map_ver_year meta_drv_side(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_drv_side_type arg)
  {
    msg_.meta_drv_side = std::move(arg);
    return Init_EhpMetaData_meta_map_ver_year(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_region_code
{
public:
  explicit Init_EhpMetaData_meta_region_code(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_drv_side meta_region_code(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_region_code_type arg)
  {
    msg_.meta_region_code = std::move(arg);
    return Init_EhpMetaData_meta_drv_side(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_cyc_cnt
{
public:
  explicit Init_EhpMetaData_meta_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_region_code meta_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_cyc_cnt_type arg)
  {
    msg_.meta_cyc_cnt = std::move(arg);
    return Init_EhpMetaData_meta_region_code(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_prot_ver_major
{
public:
  explicit Init_EhpMetaData_meta_prot_ver_major(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_cyc_cnt meta_prot_ver_major(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_prot_ver_major_type arg)
  {
    msg_.meta_prot_ver_major = std::move(arg);
    return Init_EhpMetaData_meta_cyc_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_prot_ver_minor_sub
{
public:
  explicit Init_EhpMetaData_meta_prot_ver_minor_sub(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_prot_ver_major meta_prot_ver_minor_sub(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_prot_ver_minor_sub_type arg)
  {
    msg_.meta_prot_ver_minor_sub = std::move(arg);
    return Init_EhpMetaData_meta_prot_ver_major(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_hw_ver
{
public:
  explicit Init_EhpMetaData_meta_hw_ver(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_prot_ver_minor_sub meta_hw_ver(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_hw_ver_type arg)
  {
    msg_.meta_hw_ver = std::move(arg);
    return Init_EhpMetaData_meta_prot_ver_minor_sub(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_msg_type
{
public:
  explicit Init_EhpMetaData_meta_msg_type(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_hw_ver meta_msg_type(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_msg_type_type arg)
  {
    msg_.meta_msg_type = std::move(arg);
    return Init_EhpMetaData_meta_hw_ver(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_map_provider
{
public:
  explicit Init_EhpMetaData_meta_map_provider(::deva_gaode_routing_msgs::msg::EhpMetaData & msg)
  : msg_(msg)
  {}
  Init_EhpMetaData_meta_msg_type meta_map_provider(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_map_provider_type arg)
  {
    msg_.meta_map_provider = std::move(arg);
    return Init_EhpMetaData_meta_msg_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

class Init_EhpMetaData_meta_country_code
{
public:
  Init_EhpMetaData_meta_country_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EhpMetaData_meta_map_provider meta_country_code(::deva_gaode_routing_msgs::msg::EhpMetaData::_meta_country_code_type arg)
  {
    msg_.meta_country_code = std::move(arg);
    return Init_EhpMetaData_meta_map_provider(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::EhpMetaData>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_EhpMetaData_meta_country_code();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__BUILDER_HPP_
