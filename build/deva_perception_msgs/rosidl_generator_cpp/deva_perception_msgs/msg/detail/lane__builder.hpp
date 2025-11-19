// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Lane_lane_xz
{
public:
  explicit Init_Lane_lane_xz(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Lane lane_xz(::deva_perception_msgs::msg::Lane::_lane_xz_type arg)
  {
    msg_.lane_xz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_lane_xy
{
public:
  explicit Init_Lane_lane_xy(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_lane_xz lane_xy(::deva_perception_msgs::msg::Lane::_lane_xy_type arg)
  {
    msg_.lane_xy = std::move(arg);
    return Init_Lane_lane_xz(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_bev_fork_point
{
public:
  explicit Init_Lane_bev_fork_point(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_lane_xy bev_fork_point(::deva_perception_msgs::msg::Lane::_bev_fork_point_type arg)
  {
    msg_.bev_fork_point = std::move(arg);
    return Init_Lane_lane_xy(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_rv_fork_point
{
public:
  explicit Init_Lane_rv_fork_point(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_bev_fork_point rv_fork_point(::deva_perception_msgs::msg::Lane::_rv_fork_point_type arg)
  {
    msg_.rv_fork_point = std::move(arg);
    return Init_Lane_bev_fork_point(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_fork_property
{
public:
  explicit Init_Lane_fork_property(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_rv_fork_point fork_property(::deva_perception_msgs::msg::Lane::_fork_property_type arg)
  {
    msg_.fork_property = std::move(arg);
    return Init_Lane_rv_fork_point(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_lane_property
{
public:
  explicit Init_Lane_lane_property(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_fork_property lane_property(::deva_perception_msgs::msg::Lane::_lane_property_type arg)
  {
    msg_.lane_property = std::move(arg);
    return Init_Lane_fork_property(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_x_max_extend
{
public:
  explicit Init_Lane_x_max_extend(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_lane_property x_max_extend(::deva_perception_msgs::msg::Lane::_x_max_extend_type arg)
  {
    msg_.x_max_extend = std::move(arg);
    return Init_Lane_lane_property(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_x_min_extend
{
public:
  explicit Init_Lane_x_min_extend(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_x_max_extend x_min_extend(::deva_perception_msgs::msg::Lane::_x_min_extend_type arg)
  {
    msg_.x_min_extend = std::move(arg);
    return Init_Lane_x_max_extend(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_waypoints_extend
{
public:
  explicit Init_Lane_waypoints_extend(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_x_min_extend waypoints_extend(::deva_perception_msgs::msg::Lane::_waypoints_extend_type arg)
  {
    msg_.waypoints_extend = std::move(arg);
    return Init_Lane_x_min_extend(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_x_max
{
public:
  explicit Init_Lane_x_max(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_waypoints_extend x_max(::deva_perception_msgs::msg::Lane::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_Lane_waypoints_extend(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_x_min
{
public:
  explicit Init_Lane_x_min(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_x_max x_min(::deva_perception_msgs::msg::Lane::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_Lane_x_max(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_waypoints
{
public:
  explicit Init_Lane_waypoints(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_x_min waypoints(::deva_perception_msgs::msg::Lane::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_Lane_x_min(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_v_max
{
public:
  explicit Init_Lane_v_max(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_waypoints v_max(::deva_perception_msgs::msg::Lane::_v_max_type arg)
  {
    msg_.v_max = std::move(arg);
    return Init_Lane_waypoints(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_v_min
{
public:
  explicit Init_Lane_v_min(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_v_max v_min(::deva_perception_msgs::msg::Lane::_v_min_type arg)
  {
    msg_.v_min = std::move(arg);
    return Init_Lane_v_max(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_imagepoints
{
public:
  explicit Init_Lane_imagepoints(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_v_min imagepoints(::deva_perception_msgs::msg::Lane::_imagepoints_type arg)
  {
    msg_.imagepoints = std::move(arg);
    return Init_Lane_v_min(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_fork_lane_id
{
public:
  explicit Init_Lane_fork_lane_id(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_imagepoints fork_lane_id(::deva_perception_msgs::msg::Lane::_fork_lane_id_type arg)
  {
    msg_.fork_lane_id = std::move(arg);
    return Init_Lane_imagepoints(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_right_lane_id
{
public:
  explicit Init_Lane_right_lane_id(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_fork_lane_id right_lane_id(::deva_perception_msgs::msg::Lane::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_Lane_fork_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_left_lane_id
{
public:
  explicit Init_Lane_left_lane_id(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_right_lane_id left_lane_id(::deva_perception_msgs::msg::Lane::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_Lane_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_lane_id
{
public:
  explicit Init_Lane_lane_id(::deva_perception_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_left_lane_id lane_id(::deva_perception_msgs::msg::Lane::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_Lane_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

class Init_Lane_confidence
{
public:
  Init_Lane_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lane_lane_id confidence(::deva_perception_msgs::msg::Lane::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Lane_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::Lane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Lane>()
{
  return deva_perception_msgs::msg::builder::Init_Lane_confidence();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
