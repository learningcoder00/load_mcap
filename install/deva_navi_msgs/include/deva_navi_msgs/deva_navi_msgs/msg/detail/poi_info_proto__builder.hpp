// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/POIInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/poi_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_POIInfoProto_charge_info
{
public:
  explicit Init_POIInfoProto_charge_info(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::POIInfoProto charge_info(::deva_navi_msgs::msg::POIInfoProto::_charge_info_type arg)
  {
    msg_.charge_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_src_app
{
public:
  explicit Init_POIInfoProto_src_app(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_charge_info src_app(::deva_navi_msgs::msg::POIInfoProto::_src_app_type arg)
  {
    msg_.src_app = std::move(arg);
    return Init_POIInfoProto_charge_info(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_extend_info_flag
{
public:
  explicit Init_POIInfoProto_extend_info_flag(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_src_app extend_info_flag(::deva_navi_msgs::msg::POIInfoProto::_extend_info_flag_type arg)
  {
    msg_.extend_info_flag = std::move(arg);
    return Init_POIInfoProto_src_app(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_floor
{
public:
  explicit Init_POIInfoProto_floor(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_extend_info_flag floor(::deva_navi_msgs::msg::POIInfoProto::_floor_type arg)
  {
    msg_.floor = std::move(arg);
    return Init_POIInfoProto_extend_info_flag(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_overhead_back_alt_diff
{
public:
  explicit Init_POIInfoProto_overhead_back_alt_diff(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_floor overhead_back_alt_diff(::deva_navi_msgs::msg::POIInfoProto::_overhead_back_alt_diff_type arg)
  {
    msg_.overhead_back_alt_diff = std::move(arg);
    return Init_POIInfoProto_floor(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_check_point_link_id
{
public:
  explicit Init_POIInfoProto_check_point_link_id(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_overhead_back_alt_diff check_point_link_id(::deva_navi_msgs::msg::POIInfoProto::_check_point_link_id_type arg)
  {
    msg_.check_point_link_id = std::move(arg);
    return Init_POIInfoProto_overhead_back_alt_diff(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_point_cnt
{
public:
  explicit Init_POIInfoProto_point_cnt(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_check_point_link_id point_cnt(::deva_navi_msgs::msg::POIInfoProto::_point_cnt_type arg)
  {
    msg_.point_cnt = std::move(arg);
    return Init_POIInfoProto_check_point_link_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_overhead
{
public:
  explicit Init_POIInfoProto_overhead(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_point_cnt overhead(::deva_navi_msgs::msg::POIInfoProto::_overhead_type arg)
  {
    msg_.overhead = std::move(arg);
    return Init_POIInfoProto_point_cnt(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_from_jump
{
public:
  explicit Init_POIInfoProto_from_jump(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_overhead from_jump(::deva_navi_msgs::msg::POIInfoProto::_from_jump_type arg)
  {
    msg_.from_jump = std::move(arg);
    return Init_POIInfoProto_overhead(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_type_code
{
public:
  explicit Init_POIInfoProto_type_code(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_from_jump type_code(::deva_navi_msgs::msg::POIInfoProto::_type_code_type arg)
  {
    msg_.type_code = std::move(arg);
    return Init_POIInfoProto_from_jump(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_parent_rel
{
public:
  explicit Init_POIInfoProto_parent_rel(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_type_code parent_rel(::deva_navi_msgs::msg::POIInfoProto::_parent_rel_type arg)
  {
    msg_.parent_rel = std::move(arg);
    return Init_POIInfoProto_type_code(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_parent_id
{
public:
  explicit Init_POIInfoProto_parent_id(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_parent_rel parent_id(::deva_navi_msgs::msg::POIInfoProto::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_POIInfoProto_parent_rel(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_points
{
public:
  explicit Init_POIInfoProto_points(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_parent_id points(::deva_navi_msgs::msg::POIInfoProto::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_POIInfoProto_parent_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_angel
{
public:
  explicit Init_POIInfoProto_angel(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_points angel(::deva_navi_msgs::msg::POIInfoProto::_angel_type arg)
  {
    msg_.angel = std::move(arg);
    return Init_POIInfoProto_points(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_parent_simple_name
{
public:
  explicit Init_POIInfoProto_parent_simple_name(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_angel parent_simple_name(::deva_navi_msgs::msg::POIInfoProto::_parent_simple_name_type arg)
  {
    msg_.parent_simple_name = std::move(arg);
    return Init_POIInfoProto_angel(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_parent_name
{
public:
  explicit Init_POIInfoProto_parent_name(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_parent_simple_name parent_name(::deva_navi_msgs::msg::POIInfoProto::_parent_name_type arg)
  {
    msg_.parent_name = std::move(arg);
    return Init_POIInfoProto_parent_simple_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_floor_name
{
public:
  explicit Init_POIInfoProto_floor_name(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_parent_name floor_name(::deva_navi_msgs::msg::POIInfoProto::_floor_name_type arg)
  {
    msg_.floor_name = std::move(arg);
    return Init_POIInfoProto_parent_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_name
{
public:
  explicit Init_POIInfoProto_name(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_floor_name name(::deva_navi_msgs::msg::POIInfoProto::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_POIInfoProto_floor_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_poi_id
{
public:
  explicit Init_POIInfoProto_poi_id(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_name poi_id(::deva_navi_msgs::msg::POIInfoProto::_poi_id_type arg)
  {
    msg_.poi_id = std::move(arg);
    return Init_POIInfoProto_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_road_id
{
public:
  explicit Init_POIInfoProto_road_id(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_poi_id road_id(::deva_navi_msgs::msg::POIInfoProto::_road_id_type arg)
  {
    msg_.road_id = std::move(arg);
    return Init_POIInfoProto_poi_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_type
{
public:
  explicit Init_POIInfoProto_type(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_road_id type(::deva_navi_msgs::msg::POIInfoProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_POIInfoProto_road_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_sigshelter
{
public:
  explicit Init_POIInfoProto_sigshelter(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_type sigshelter(::deva_navi_msgs::msg::POIInfoProto::_sigshelter_type arg)
  {
    msg_.sigshelter = std::move(arg);
    return Init_POIInfoProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_navi_pos
{
public:
  explicit Init_POIInfoProto_navi_pos(::deva_navi_msgs::msg::POIInfoProto & msg)
  : msg_(msg)
  {}
  Init_POIInfoProto_sigshelter navi_pos(::deva_navi_msgs::msg::POIInfoProto::_navi_pos_type arg)
  {
    msg_.navi_pos = std::move(arg);
    return Init_POIInfoProto_sigshelter(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

class Init_POIInfoProto_real_pos
{
public:
  Init_POIInfoProto_real_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_POIInfoProto_navi_pos real_pos(::deva_navi_msgs::msg::POIInfoProto::_real_pos_type arg)
  {
    msg_.real_pos = std::move(arg);
    return Init_POIInfoProto_navi_pos(msg_);
  }

private:
  ::deva_navi_msgs::msg::POIInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::POIInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_POIInfoProto_real_pos();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__BUILDER_HPP_
