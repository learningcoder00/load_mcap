// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/WayLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/way_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_WayLink_pixel_points
{
public:
  explicit Init_WayLink_pixel_points(::deva_perception_msgs::msg::WayLink & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::WayLink pixel_points(::deva_perception_msgs::msg::WayLink::_pixel_points_type arg)
  {
    msg_.pixel_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::WayLink msg_;
};

class Init_WayLink_corner_confidences
{
public:
  explicit Init_WayLink_corner_confidences(::deva_perception_msgs::msg::WayLink & msg)
  : msg_(msg)
  {}
  Init_WayLink_pixel_points corner_confidences(::deva_perception_msgs::msg::WayLink::_corner_confidences_type arg)
  {
    msg_.corner_confidences = std::move(arg);
    return Init_WayLink_pixel_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::WayLink msg_;
};

class Init_WayLink_point_confidences
{
public:
  explicit Init_WayLink_point_confidences(::deva_perception_msgs::msg::WayLink & msg)
  : msg_(msg)
  {}
  Init_WayLink_corner_confidences point_confidences(::deva_perception_msgs::msg::WayLink::_point_confidences_type arg)
  {
    msg_.point_confidences = std::move(arg);
    return Init_WayLink_corner_confidences(msg_);
  }

private:
  ::deva_perception_msgs::msg::WayLink msg_;
};

class Init_WayLink_corner_points_idx
{
public:
  explicit Init_WayLink_corner_points_idx(::deva_perception_msgs::msg::WayLink & msg)
  : msg_(msg)
  {}
  Init_WayLink_point_confidences corner_points_idx(::deva_perception_msgs::msg::WayLink::_corner_points_idx_type arg)
  {
    msg_.corner_points_idx = std::move(arg);
    return Init_WayLink_point_confidences(msg_);
  }

private:
  ::deva_perception_msgs::msg::WayLink msg_;
};

class Init_WayLink_car_coord_points
{
public:
  Init_WayLink_car_coord_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WayLink_corner_points_idx car_coord_points(::deva_perception_msgs::msg::WayLink::_car_coord_points_type arg)
  {
    msg_.car_coord_points = std::move(arg);
    return Init_WayLink_corner_points_idx(msg_);
  }

private:
  ::deva_perception_msgs::msg::WayLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::WayLink>()
{
  return deva_perception_msgs::msg::builder::Init_WayLink_car_coord_points();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__BUILDER_HPP_
