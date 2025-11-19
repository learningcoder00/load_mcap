// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/OCCVisualization.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/occ_visualization__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_OCCVisualization_rfu_utm_matrix
{
public:
  explicit Init_OCCVisualization_rfu_utm_matrix(::deva_perception_msgs::msg::OCCVisualization & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::OCCVisualization rfu_utm_matrix(::deva_perception_msgs::msg::OCCVisualization::_rfu_utm_matrix_type arg)
  {
    msg_.rfu_utm_matrix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::OCCVisualization msg_;
};

class Init_OCCVisualization_rfu_pixel_matrix
{
public:
  explicit Init_OCCVisualization_rfu_pixel_matrix(::deva_perception_msgs::msg::OCCVisualization & msg)
  : msg_(msg)
  {}
  Init_OCCVisualization_rfu_utm_matrix rfu_pixel_matrix(::deva_perception_msgs::msg::OCCVisualization::_rfu_pixel_matrix_type arg)
  {
    msg_.rfu_pixel_matrix = std::move(arg);
    return Init_OCCVisualization_rfu_utm_matrix(msg_);
  }

private:
  ::deva_perception_msgs::msg::OCCVisualization msg_;
};

class Init_OCCVisualization_image_points_contours
{
public:
  explicit Init_OCCVisualization_image_points_contours(::deva_perception_msgs::msg::OCCVisualization & msg)
  : msg_(msg)
  {}
  Init_OCCVisualization_rfu_pixel_matrix image_points_contours(::deva_perception_msgs::msg::OCCVisualization::_image_points_contours_type arg)
  {
    msg_.image_points_contours = std::move(arg);
    return Init_OCCVisualization_rfu_pixel_matrix(msg_);
  }

private:
  ::deva_perception_msgs::msg::OCCVisualization msg_;
};

class Init_OCCVisualization_voxel_pc_params
{
public:
  explicit Init_OCCVisualization_voxel_pc_params(::deva_perception_msgs::msg::OCCVisualization & msg)
  : msg_(msg)
  {}
  Init_OCCVisualization_image_points_contours voxel_pc_params(::deva_perception_msgs::msg::OCCVisualization::_voxel_pc_params_type arg)
  {
    msg_.voxel_pc_params = std::move(arg);
    return Init_OCCVisualization_image_points_contours(msg_);
  }

private:
  ::deva_perception_msgs::msg::OCCVisualization msg_;
};

class Init_OCCVisualization_points_type
{
public:
  explicit Init_OCCVisualization_points_type(::deva_perception_msgs::msg::OCCVisualization & msg)
  : msg_(msg)
  {}
  Init_OCCVisualization_voxel_pc_params points_type(::deva_perception_msgs::msg::OCCVisualization::_points_type_type arg)
  {
    msg_.points_type = std::move(arg);
    return Init_OCCVisualization_voxel_pc_params(msg_);
  }

private:
  ::deva_perception_msgs::msg::OCCVisualization msg_;
};

class Init_OCCVisualization_lidar_header
{
public:
  explicit Init_OCCVisualization_lidar_header(::deva_perception_msgs::msg::OCCVisualization & msg)
  : msg_(msg)
  {}
  Init_OCCVisualization_points_type lidar_header(::deva_perception_msgs::msg::OCCVisualization::_lidar_header_type arg)
  {
    msg_.lidar_header = std::move(arg);
    return Init_OCCVisualization_points_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::OCCVisualization msg_;
};

class Init_OCCVisualization_header
{
public:
  Init_OCCVisualization_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OCCVisualization_lidar_header header(::deva_perception_msgs::msg::OCCVisualization::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OCCVisualization_lidar_header(msg_);
  }

private:
  ::deva_perception_msgs::msg::OCCVisualization msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::OCCVisualization>()
{
  return deva_perception_msgs::msg::builder::Init_OCCVisualization_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__BUILDER_HPP_
