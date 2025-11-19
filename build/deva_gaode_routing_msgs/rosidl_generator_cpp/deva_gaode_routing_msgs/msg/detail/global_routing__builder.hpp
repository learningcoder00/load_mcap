// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/GlobalRouting.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/global_routing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_GlobalRouting_speed
{
public:
  explicit Init_GlobalRouting_speed(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::GlobalRouting speed(::deva_gaode_routing_msgs::msg::GlobalRouting::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_orientation
{
public:
  explicit Init_GlobalRouting_orientation(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_speed orientation(::deva_gaode_routing_msgs::msg::GlobalRouting::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_GlobalRouting_speed(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_cur_point
{
public:
  explicit Init_GlobalRouting_cur_point(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_orientation cur_point(::deva_gaode_routing_msgs::msg::GlobalRouting::_cur_point_type arg)
  {
    msg_.cur_point = std::move(arg);
    return Init_GlobalRouting_orientation(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_global_path
{
public:
  explicit Init_GlobalRouting_global_path(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_cur_point global_path(::deva_gaode_routing_msgs::msg::GlobalRouting::_global_path_type arg)
  {
    msg_.global_path = std::move(arg);
    return Init_GlobalRouting_cur_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_vocal_info
{
public:
  explicit Init_GlobalRouting_vocal_info(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_global_path vocal_info(::deva_gaode_routing_msgs::msg::GlobalRouting::_vocal_info_type arg)
  {
    msg_.vocal_info = std::move(arg);
    return Init_GlobalRouting_global_path(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_call_back
{
public:
  explicit Init_GlobalRouting_call_back(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_vocal_info call_back(::deva_gaode_routing_msgs::msg::GlobalRouting::_call_back_type arg)
  {
    msg_.call_back = std::move(arg);
    return Init_GlobalRouting_vocal_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_traffic_light_count
{
public:
  explicit Init_GlobalRouting_traffic_light_count(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_call_back traffic_light_count(::deva_gaode_routing_msgs::msg::GlobalRouting::_traffic_light_count_type arg)
  {
    msg_.traffic_light_count = std::move(arg);
    return Init_GlobalRouting_call_back(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_forward_step
{
public:
  explicit Init_GlobalRouting_forward_step(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_traffic_light_count forward_step(::deva_gaode_routing_msgs::msg::GlobalRouting::_forward_step_type arg)
  {
    msg_.forward_step = std::move(arg);
    return Init_GlobalRouting_traffic_light_count(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_locate_step
{
public:
  explicit Init_GlobalRouting_locate_step(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_forward_step locate_step(::deva_gaode_routing_msgs::msg::GlobalRouting::_locate_step_type arg)
  {
    msg_.locate_step = std::move(arg);
    return Init_GlobalRouting_forward_step(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_step_num
{
public:
  explicit Init_GlobalRouting_step_num(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_locate_step step_num(::deva_gaode_routing_msgs::msg::GlobalRouting::_step_num_type arg)
  {
    msg_.step_num = std::move(arg);
    return Init_GlobalRouting_locate_step(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_time
{
public:
  explicit Init_GlobalRouting_time(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_step_num time(::deva_gaode_routing_msgs::msg::GlobalRouting::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_GlobalRouting_step_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_distance
{
public:
  explicit Init_GlobalRouting_distance(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_time distance(::deva_gaode_routing_msgs::msg::GlobalRouting::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_GlobalRouting_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_end_point
{
public:
  explicit Init_GlobalRouting_end_point(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_distance end_point(::deva_gaode_routing_msgs::msg::GlobalRouting::_end_point_type arg)
  {
    msg_.end_point = std::move(arg);
    return Init_GlobalRouting_distance(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_way_points
{
public:
  explicit Init_GlobalRouting_way_points(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_end_point way_points(::deva_gaode_routing_msgs::msg::GlobalRouting::_way_points_type arg)
  {
    msg_.way_points = std::move(arg);
    return Init_GlobalRouting_end_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_start_point
{
public:
  explicit Init_GlobalRouting_start_point(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_way_points start_point(::deva_gaode_routing_msgs::msg::GlobalRouting::_start_point_type arg)
  {
    msg_.start_point = std::move(arg);
    return Init_GlobalRouting_way_points(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_mode
{
public:
  explicit Init_GlobalRouting_mode(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_start_point mode(::deva_gaode_routing_msgs::msg::GlobalRouting::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_GlobalRouting_start_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_md5
{
public:
  explicit Init_GlobalRouting_md5(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_mode md5(::deva_gaode_routing_msgs::msg::GlobalRouting::_md5_type arg)
  {
    msg_.md5 = std::move(arg);
    return Init_GlobalRouting_mode(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_status
{
public:
  explicit Init_GlobalRouting_status(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_md5 status(::deva_gaode_routing_msgs::msg::GlobalRouting::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GlobalRouting_md5(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_version
{
public:
  explicit Init_GlobalRouting_version(::deva_gaode_routing_msgs::msg::GlobalRouting & msg)
  : msg_(msg)
  {}
  Init_GlobalRouting_status version(::deva_gaode_routing_msgs::msg::GlobalRouting::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_GlobalRouting_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

class Init_GlobalRouting_header
{
public:
  Init_GlobalRouting_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalRouting_version header(::deva_gaode_routing_msgs::msg::GlobalRouting::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GlobalRouting_version(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::GlobalRouting msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::GlobalRouting>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_GlobalRouting_header();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__BUILDER_HPP_
