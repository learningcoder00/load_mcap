// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_EhpSegment_seg_relative_offset
{
public:
  explicit Init_EhpSegment_seg_relative_offset(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::EhpSegment seg_relative_offset(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_relative_offset_type arg)
  {
    msg_.seg_relative_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_divide_road
{
public:
  explicit Init_EhpSegment_seg_divide_road(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_relative_offset seg_divide_road(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_divide_road_type arg)
  {
    msg_.seg_divide_road = std::move(arg);
    return Init_EhpSegment_seg_relative_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_num_of_lane_opp_dir
{
public:
  explicit Init_EhpSegment_seg_num_of_lane_opp_dir(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_divide_road seg_num_of_lane_opp_dir(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_num_of_lane_opp_dir_type arg)
  {
    msg_.seg_num_of_lane_opp_dir = std::move(arg);
    return Init_EhpSegment_seg_divide_road(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_num_of_lane_drv_dir
{
public:
  explicit Init_EhpSegment_seg_num_of_lane_drv_dir(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_num_of_lane_opp_dir seg_num_of_lane_drv_dir(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_num_of_lane_drv_dir_type arg)
  {
    msg_.seg_num_of_lane_drv_dir = std::move(arg);
    return Init_EhpSegment_seg_num_of_lane_opp_dir(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_eff_spd_lmt
{
public:
  explicit Init_EhpSegment_seg_eff_spd_lmt(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_num_of_lane_drv_dir seg_eff_spd_lmt(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_eff_spd_lmt_type arg)
  {
    msg_.seg_eff_spd_lmt = std::move(arg);
    return Init_EhpSegment_seg_num_of_lane_drv_dir(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_eff_spd_lmt_type
{
public:
  explicit Init_EhpSegment_seg_eff_spd_lmt_type(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_eff_spd_lmt seg_eff_spd_lmt_type(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_eff_spd_lmt_type_type arg)
  {
    msg_.seg_eff_spd_lmt_type = std::move(arg);
    return Init_EhpSegment_seg_eff_spd_lmt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_part_of_calc_route
{
public:
  explicit Init_EhpSegment_seg_part_of_calc_route(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_eff_spd_lmt_type seg_part_of_calc_route(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_part_of_calc_route_type arg)
  {
    msg_.seg_part_of_calc_route = std::move(arg);
    return Init_EhpSegment_seg_eff_spd_lmt_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_cmplx_insct
{
public:
  explicit Init_EhpSegment_seg_cmplx_insct(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_part_of_calc_route seg_cmplx_insct(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_cmplx_insct_type arg)
  {
    msg_.seg_cmplx_insct = std::move(arg);
    return Init_EhpSegment_seg_part_of_calc_route(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_form_of_way
{
public:
  explicit Init_EhpSegment_seg_form_of_way(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_cmplx_insct seg_form_of_way(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_form_of_way_type arg)
  {
    msg_.seg_form_of_way = std::move(arg);
    return Init_EhpSegment_seg_cmplx_insct(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_rel_probb
{
public:
  explicit Init_EhpSegment_seg_rel_probb(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_form_of_way seg_rel_probb(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_rel_probb_type arg)
  {
    msg_.seg_rel_probb = std::move(arg);
    return Init_EhpSegment_seg_form_of_way(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_func_road_class
{
public:
  explicit Init_EhpSegment_seg_func_road_class(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_rel_probb seg_func_road_class(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_func_road_class_type arg)
  {
    msg_.seg_func_road_class = std::move(arg);
    return Init_EhpSegment_seg_rel_probb(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_tunnel
{
public:
  explicit Init_EhpSegment_seg_tunnel(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_func_road_class seg_tunnel(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_tunnel_type arg)
  {
    msg_.seg_tunnel = std::move(arg);
    return Init_EhpSegment_seg_func_road_class(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_bridge
{
public:
  explicit Init_EhpSegment_seg_bridge(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_tunnel seg_bridge(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_bridge_type arg)
  {
    msg_.seg_bridge = std::move(arg);
    return Init_EhpSegment_seg_tunnel(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_build_up_area
{
public:
  explicit Init_EhpSegment_seg_build_up_area(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_bridge seg_build_up_area(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_build_up_area_type arg)
  {
    msg_.seg_build_up_area = std::move(arg);
    return Init_EhpSegment_seg_bridge(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_retr
{
public:
  explicit Init_EhpSegment_seg_retr(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_build_up_area seg_retr(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_retr_type arg)
  {
    msg_.seg_retr = std::move(arg);
    return Init_EhpSegment_seg_build_up_area(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_update
{
public:
  explicit Init_EhpSegment_seg_update(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_retr seg_update(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_update_type arg)
  {
    msg_.seg_update = std::move(arg);
    return Init_EhpSegment_seg_retr(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_cyc_cnt
{
public:
  explicit Init_EhpSegment_seg_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_update seg_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_cyc_cnt_type arg)
  {
    msg_.seg_cyc_cnt = std::move(arg);
    return Init_EhpSegment_seg_update(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_path_idx
{
public:
  explicit Init_EhpSegment_seg_path_idx(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_cyc_cnt seg_path_idx(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_path_idx_type arg)
  {
    msg_.seg_path_idx = std::move(arg);
    return Init_EhpSegment_seg_cyc_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_msg_type
{
public:
  explicit Init_EhpSegment_seg_msg_type(::deva_gaode_routing_msgs::msg::EhpSegment & msg)
  : msg_(msg)
  {}
  Init_EhpSegment_seg_path_idx seg_msg_type(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_msg_type_type arg)
  {
    msg_.seg_msg_type = std::move(arg);
    return Init_EhpSegment_seg_path_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

class Init_EhpSegment_seg_offset
{
public:
  Init_EhpSegment_seg_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EhpSegment_seg_msg_type seg_offset(::deva_gaode_routing_msgs::msg::EhpSegment::_seg_offset_type arg)
  {
    msg_.seg_offset = std::move(arg);
    return Init_EhpSegment_seg_msg_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::EhpSegment>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_EhpSegment_seg_offset();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__BUILDER_HPP_
