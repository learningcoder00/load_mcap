// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/polygon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Polygon_points
{
public:
  explicit Init_Polygon_points(::deva_perception_msgs::msg::Polygon & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Polygon points(::deva_perception_msgs::msg::Polygon::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Polygon msg_;
};

class Init_Polygon_num_points
{
public:
  Init_Polygon_num_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Polygon_points num_points(::deva_perception_msgs::msg::Polygon::_num_points_type arg)
  {
    msg_.num_points = std::move(arg);
    return Init_Polygon_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::Polygon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Polygon>()
{
  return deva_perception_msgs::msg::builder::Init_Polygon_num_points();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_
