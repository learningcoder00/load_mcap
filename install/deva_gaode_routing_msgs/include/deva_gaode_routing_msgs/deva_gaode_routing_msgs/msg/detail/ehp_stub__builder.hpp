// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_EhpStub_stub_relative_offset
{
public:
  explicit Init_EhpStub_stub_relative_offset(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::EhpStub stub_relative_offset(::deva_gaode_routing_msgs::msg::EhpStub::_stub_relative_offset_type arg)
  {
    msg_.stub_relative_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_last_stub
{
public:
  explicit Init_EhpStub_stub_last_stub(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_relative_offset stub_last_stub(::deva_gaode_routing_msgs::msg::EhpStub::_stub_last_stub_type arg)
  {
    msg_.stub_last_stub = std::move(arg);
    return Init_EhpStub_stub_relative_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_rt_of_way
{
public:
  explicit Init_EhpStub_stub_rt_of_way(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_last_stub stub_rt_of_way(::deva_gaode_routing_msgs::msg::EhpStub::_stub_rt_of_way_type arg)
  {
    msg_.stub_rt_of_way = std::move(arg);
    return Init_EhpStub_stub_last_stub(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_num_of_lane_opp_dir
{
public:
  explicit Init_EhpStub_stub_num_of_lane_opp_dir(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_rt_of_way stub_num_of_lane_opp_dir(::deva_gaode_routing_msgs::msg::EhpStub::_stub_num_of_lane_opp_dir_type arg)
  {
    msg_.stub_num_of_lane_opp_dir = std::move(arg);
    return Init_EhpStub_stub_rt_of_way(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_num_of_lane_drv_dir
{
public:
  explicit Init_EhpStub_stub_num_of_lane_drv_dir(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_num_of_lane_opp_dir stub_num_of_lane_drv_dir(::deva_gaode_routing_msgs::msg::EhpStub::_stub_num_of_lane_drv_dir_type arg)
  {
    msg_.stub_num_of_lane_drv_dir = std::move(arg);
    return Init_EhpStub_stub_num_of_lane_opp_dir(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_turn_angl
{
public:
  explicit Init_EhpStub_stub_turn_angl(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_num_of_lane_drv_dir stub_turn_angl(::deva_gaode_routing_msgs::msg::EhpStub::_stub_turn_angl_type arg)
  {
    msg_.stub_turn_angl = std::move(arg);
    return Init_EhpStub_stub_num_of_lane_drv_dir(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_part_of_calc_route
{
public:
  explicit Init_EhpStub_stub_part_of_calc_route(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_turn_angl stub_part_of_calc_route(::deva_gaode_routing_msgs::msg::EhpStub::_stub_part_of_calc_route_type arg)
  {
    msg_.stub_part_of_calc_route = std::move(arg);
    return Init_EhpStub_stub_turn_angl(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_cmplx_insct
{
public:
  explicit Init_EhpStub_stub_cmplx_insct(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_part_of_calc_route stub_cmplx_insct(::deva_gaode_routing_msgs::msg::EhpStub::_stub_cmplx_insct_type arg)
  {
    msg_.stub_cmplx_insct = std::move(arg);
    return Init_EhpStub_stub_part_of_calc_route(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_form_of_way
{
public:
  explicit Init_EhpStub_stub_form_of_way(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_cmplx_insct stub_form_of_way(::deva_gaode_routing_msgs::msg::EhpStub::_stub_form_of_way_type arg)
  {
    msg_.stub_form_of_way = std::move(arg);
    return Init_EhpStub_stub_cmplx_insct(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_rel_probb
{
public:
  explicit Init_EhpStub_stub_rel_probb(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_form_of_way stub_rel_probb(::deva_gaode_routing_msgs::msg::EhpStub::_stub_rel_probb_type arg)
  {
    msg_.stub_rel_probb = std::move(arg);
    return Init_EhpStub_stub_form_of_way(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_func_road_class
{
public:
  explicit Init_EhpStub_stub_func_road_class(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_rel_probb stub_func_road_class(::deva_gaode_routing_msgs::msg::EhpStub::_stub_func_road_class_type arg)
  {
    msg_.stub_func_road_class = std::move(arg);
    return Init_EhpStub_stub_rel_probb(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_stub_path_idx
{
public:
  explicit Init_EhpStub_stub_stub_path_idx(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_func_road_class stub_stub_path_idx(::deva_gaode_routing_msgs::msg::EhpStub::_stub_stub_path_idx_type arg)
  {
    msg_.stub_stub_path_idx = std::move(arg);
    return Init_EhpStub_stub_func_road_class(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_retr
{
public:
  explicit Init_EhpStub_stub_retr(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_stub_path_idx stub_retr(::deva_gaode_routing_msgs::msg::EhpStub::_stub_retr_type arg)
  {
    msg_.stub_retr = std::move(arg);
    return Init_EhpStub_stub_stub_path_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_update
{
public:
  explicit Init_EhpStub_stub_update(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_retr stub_update(::deva_gaode_routing_msgs::msg::EhpStub::_stub_update_type arg)
  {
    msg_.stub_update = std::move(arg);
    return Init_EhpStub_stub_retr(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_cyc_cnt
{
public:
  explicit Init_EhpStub_stub_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_update stub_cyc_cnt(::deva_gaode_routing_msgs::msg::EhpStub::_stub_cyc_cnt_type arg)
  {
    msg_.stub_cyc_cnt = std::move(arg);
    return Init_EhpStub_stub_update(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_path_idx
{
public:
  explicit Init_EhpStub_stub_path_idx(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_cyc_cnt stub_path_idx(::deva_gaode_routing_msgs::msg::EhpStub::_stub_path_idx_type arg)
  {
    msg_.stub_path_idx = std::move(arg);
    return Init_EhpStub_stub_cyc_cnt(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_msg_type
{
public:
  explicit Init_EhpStub_stub_msg_type(::deva_gaode_routing_msgs::msg::EhpStub & msg)
  : msg_(msg)
  {}
  Init_EhpStub_stub_path_idx stub_msg_type(::deva_gaode_routing_msgs::msg::EhpStub::_stub_msg_type_type arg)
  {
    msg_.stub_msg_type = std::move(arg);
    return Init_EhpStub_stub_path_idx(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

class Init_EhpStub_stub_offset
{
public:
  Init_EhpStub_stub_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EhpStub_stub_msg_type stub_offset(::deva_gaode_routing_msgs::msg::EhpStub::_stub_offset_type arg)
  {
    msg_.stub_offset = std::move(arg);
    return Init_EhpStub_stub_msg_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::EhpStub msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::EhpStub>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_EhpStub_stub_offset();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__BUILDER_HPP_
