// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LANE.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LANE_lane_restricts
{
public:
  explicit Init_LANE_lane_restricts(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LANE lane_restricts(::deva_gaode_routing_msgs::msg::LANE::_lane_restricts_type arg)
  {
    msg_.lane_restricts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_arrows
{
public:
  explicit Init_LANE_arrows(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_lane_restricts arrows(::deva_gaode_routing_msgs::msg::LANE::_arrows_type arg)
  {
    msg_.arrows = std::move(arg);
    return Init_LANE_lane_restricts(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_lsl_type
{
public:
  explicit Init_LANE_lsl_type(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_arrows lsl_type(::deva_gaode_routing_msgs::msg::LANE::_lsl_type_type arg)
  {
    msg_.lsl_type = std::move(arg);
    return Init_LANE_arrows(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_next_id_s
{
public:
  explicit Init_LANE_next_id_s(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_lsl_type next_id_s(::deva_gaode_routing_msgs::msg::LANE::_next_id_s_type arg)
  {
    msg_.next_id_s = std::move(arg);
    return Init_LANE_lsl_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_previous_id_s
{
public:
  explicit Init_LANE_previous_id_s(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_next_id_s previous_id_s(::deva_gaode_routing_msgs::msg::LANE::_previous_id_s_type arg)
  {
    msg_.previous_id_s = std::move(arg);
    return Init_LANE_next_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_seq_num
{
public:
  explicit Init_LANE_seq_num(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_previous_id_s seq_num(::deva_gaode_routing_msgs::msg::LANE::_seq_num_type arg)
  {
    msg_.seq_num = std::move(arg);
    return Init_LANE_previous_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_lane_end_width
{
public:
  explicit Init_LANE_lane_end_width(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_seq_num lane_end_width(::deva_gaode_routing_msgs::msg::LANE::_lane_end_width_type arg)
  {
    msg_.lane_end_width = std::move(arg);
    return Init_LANE_seq_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_lane_start_width
{
public:
  explicit Init_LANE_lane_start_width(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_lane_end_width lane_start_width(::deva_gaode_routing_msgs::msg::LANE::_lane_start_width_type arg)
  {
    msg_.lane_start_width = std::move(arg);
    return Init_LANE_lane_end_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_lane_width
{
public:
  explicit Init_LANE_lane_width(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_lane_start_width lane_width(::deva_gaode_routing_msgs::msg::LANE::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_LANE_lane_start_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_change_type
{
public:
  explicit Init_LANE_change_type(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_lane_width change_type(::deva_gaode_routing_msgs::msg::LANE::_change_type_type arg)
  {
    msg_.change_type = std::move(arg);
    return Init_LANE_lane_width(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_right_border_colors
{
public:
  explicit Init_LANE_right_border_colors(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_change_type right_border_colors(::deva_gaode_routing_msgs::msg::LANE::_right_border_colors_type arg)
  {
    msg_.right_border_colors = std::move(arg);
    return Init_LANE_change_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_left_border_colors
{
public:
  explicit Init_LANE_left_border_colors(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_right_border_colors left_border_colors(::deva_gaode_routing_msgs::msg::LANE::_left_border_colors_type arg)
  {
    msg_.left_border_colors = std::move(arg);
    return Init_LANE_right_border_colors(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_right_border_types
{
public:
  explicit Init_LANE_right_border_types(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_left_border_colors right_border_types(::deva_gaode_routing_msgs::msg::LANE::_right_border_types_type arg)
  {
    msg_.right_border_types = std::move(arg);
    return Init_LANE_left_border_colors(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_left_border_types
{
public:
  explicit Init_LANE_left_border_types(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_right_border_types left_border_types(::deva_gaode_routing_msgs::msg::LANE::_left_border_types_type arg)
  {
    msg_.left_border_types = std::move(arg);
    return Init_LANE_right_border_types(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_lane_type
{
public:
  explicit Init_LANE_lane_type(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_left_border_types lane_type(::deva_gaode_routing_msgs::msg::LANE::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LANE_left_border_types(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_direction
{
public:
  explicit Init_LANE_direction(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_lane_type direction(::deva_gaode_routing_msgs::msg::LANE::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_LANE_lane_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_feature_point_id_s
{
public:
  explicit Init_LANE_feature_point_id_s(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_direction feature_point_id_s(::deva_gaode_routing_msgs::msg::LANE::_feature_point_id_s_type arg)
  {
    msg_.feature_point_id_s = std::move(arg);
    return Init_LANE_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_lane_group_id_type
{
public:
  explicit Init_LANE_lane_group_id_type(::deva_gaode_routing_msgs::msg::LANE & msg)
  : msg_(msg)
  {}
  Init_LANE_feature_point_id_s lane_group_id_type(::deva_gaode_routing_msgs::msg::LANE::_lane_group_id_type_type arg)
  {
    msg_.lane_group_id_type = std::move(arg);
    return Init_LANE_feature_point_id_s(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

class Init_LANE_id
{
public:
  Init_LANE_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LANE_lane_group_id_type id(::deva_gaode_routing_msgs::msg::LANE::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LANE_lane_group_id_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LANE msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LANE>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LANE_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
