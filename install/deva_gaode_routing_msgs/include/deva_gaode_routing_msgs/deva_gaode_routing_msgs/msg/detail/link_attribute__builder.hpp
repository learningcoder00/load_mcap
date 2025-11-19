// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/link_attribute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkAttribute_is_cross_tile
{
public:
  explicit Init_LinkAttribute_is_cross_tile(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LinkAttribute is_cross_tile(::deva_gaode_routing_msgs::msg::LinkAttribute::_is_cross_tile_type arg)
  {
    msg_.is_cross_tile = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_is_in_city
{
public:
  explicit Init_LinkAttribute_is_in_city(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_is_cross_tile is_in_city(::deva_gaode_routing_msgs::msg::LinkAttribute::_is_in_city_type arg)
  {
    msg_.is_in_city = std::move(arg);
    return Init_LinkAttribute_is_cross_tile(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_is_special
{
public:
  explicit Init_LinkAttribute_is_special(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_is_in_city is_special(::deva_gaode_routing_msgs::msg::LinkAttribute::_is_special_type arg)
  {
    msg_.is_special = std::move(arg);
    return Init_LinkAttribute_is_in_city(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_compacity
{
public:
  explicit Init_LinkAttribute_compacity(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_is_special compacity(::deva_gaode_routing_msgs::msg::LinkAttribute::_compacity_type arg)
  {
    msg_.compacity = std::move(arg);
    return Init_LinkAttribute_is_special(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_vehicle_types
{
public:
  explicit Init_LinkAttribute_vehicle_types(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_compacity vehicle_types(::deva_gaode_routing_msgs::msg::LinkAttribute::_vehicle_types_type arg)
  {
    msg_.vehicle_types = std::move(arg);
    return Init_LinkAttribute_compacity(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_admin_code
{
public:
  explicit Init_LinkAttribute_admin_code(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_vehicle_types admin_code(::deva_gaode_routing_msgs::msg::LinkAttribute::_admin_code_type arg)
  {
    msg_.admin_code = std::move(arg);
    return Init_LinkAttribute_vehicle_types(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_speed_class
{
public:
  explicit Init_LinkAttribute_speed_class(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_admin_code speed_class(::deva_gaode_routing_msgs::msg::LinkAttribute::_speed_class_type arg)
  {
    msg_.speed_class = std::move(arg);
    return Init_LinkAttribute_admin_code(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_condition_type
{
public:
  explicit Init_LinkAttribute_condition_type(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_speed_class condition_type(::deva_gaode_routing_msgs::msg::LinkAttribute::_condition_type_type arg)
  {
    msg_.condition_type = std::move(arg);
    return Init_LinkAttribute_speed_class(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_construction_type
{
public:
  explicit Init_LinkAttribute_construction_type(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_condition_type construction_type(::deva_gaode_routing_msgs::msg::LinkAttribute::_construction_type_type arg)
  {
    msg_.construction_type = std::move(arg);
    return Init_LinkAttribute_condition_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_function_class
{
public:
  explicit Init_LinkAttribute_function_class(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_construction_type function_class(::deva_gaode_routing_msgs::msg::LinkAttribute::_function_class_type arg)
  {
    msg_.function_class = std::move(arg);
    return Init_LinkAttribute_construction_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_coverage_status
{
public:
  explicit Init_LinkAttribute_coverage_status(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_function_class coverage_status(::deva_gaode_routing_msgs::msg::LinkAttribute::_coverage_status_type arg)
  {
    msg_.coverage_status = std::move(arg);
    return Init_LinkAttribute_function_class(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_road_kinds
{
public:
  explicit Init_LinkAttribute_road_kinds(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_coverage_status road_kinds(::deva_gaode_routing_msgs::msg::LinkAttribute::_road_kinds_type arg)
  {
    msg_.road_kinds = std::move(arg);
    return Init_LinkAttribute_coverage_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_toll_type
{
public:
  explicit Init_LinkAttribute_toll_type(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_road_kinds toll_type(::deva_gaode_routing_msgs::msg::LinkAttribute::_toll_type_type arg)
  {
    msg_.toll_type = std::move(arg);
    return Init_LinkAttribute_road_kinds(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_road_class
{
public:
  explicit Init_LinkAttribute_road_class(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_toll_type road_class(::deva_gaode_routing_msgs::msg::LinkAttribute::_road_class_type arg)
  {
    msg_.road_class = std::move(arg);
    return Init_LinkAttribute_toll_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_speed_limit_e2s
{
public:
  explicit Init_LinkAttribute_speed_limit_e2s(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_road_class speed_limit_e2s(::deva_gaode_routing_msgs::msg::LinkAttribute::_speed_limit_e2s_type arg)
  {
    msg_.speed_limit_e2s = std::move(arg);
    return Init_LinkAttribute_road_class(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_speed_limit_s2e
{
public:
  explicit Init_LinkAttribute_speed_limit_s2e(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_speed_limit_e2s speed_limit_s2e(::deva_gaode_routing_msgs::msg::LinkAttribute::_speed_limit_s2e_type arg)
  {
    msg_.speed_limit_s2e = std::move(arg);
    return Init_LinkAttribute_speed_limit_e2s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_lane_num_e2s
{
public:
  explicit Init_LinkAttribute_lane_num_e2s(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_speed_limit_s2e lane_num_e2s(::deva_gaode_routing_msgs::msg::LinkAttribute::_lane_num_e2s_type arg)
  {
    msg_.lane_num_e2s = std::move(arg);
    return Init_LinkAttribute_speed_limit_s2e(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_lane_num_s2e
{
public:
  explicit Init_LinkAttribute_lane_num_s2e(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_lane_num_e2s lane_num_s2e(::deva_gaode_routing_msgs::msg::LinkAttribute::_lane_num_s2e_type arg)
  {
    msg_.lane_num_s2e = std::move(arg);
    return Init_LinkAttribute_lane_num_e2s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_lane_num_sum
{
public:
  explicit Init_LinkAttribute_lane_num_sum(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_lane_num_s2e lane_num_sum(::deva_gaode_routing_msgs::msg::LinkAttribute::_lane_num_sum_type arg)
  {
    msg_.lane_num_sum = std::move(arg);
    return Init_LinkAttribute_lane_num_s2e(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_link_direction
{
public:
  explicit Init_LinkAttribute_link_direction(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_lane_num_sum link_direction(::deva_gaode_routing_msgs::msg::LinkAttribute::_link_direction_type arg)
  {
    msg_.link_direction = std::move(arg);
    return Init_LinkAttribute_lane_num_sum(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_length
{
public:
  explicit Init_LinkAttribute_length(::deva_gaode_routing_msgs::msg::LinkAttribute & msg)
  : msg_(msg)
  {}
  Init_LinkAttribute_link_direction length(::deva_gaode_routing_msgs::msg::LinkAttribute::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_LinkAttribute_link_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

class Init_LinkAttribute_link_id
{
public:
  Init_LinkAttribute_link_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkAttribute_length link_id(::deva_gaode_routing_msgs::msg::LinkAttribute::_link_id_type arg)
  {
    msg_.link_id = std::move(arg);
    return Init_LinkAttribute_length(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkAttribute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LinkAttribute>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LinkAttribute_link_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__BUILDER_HPP_
