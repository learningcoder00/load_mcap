// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Crosswalk2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/crosswalk2d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Crosswalk2d_pixel_points
{
public:
  explicit Init_Crosswalk2d_pixel_points(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Crosswalk2d pixel_points(::deva_perception_msgs::msg::Crosswalk2d::_pixel_points_type arg)
  {
    msg_.pixel_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_ld_point_pos_lat
{
public:
  explicit Init_Crosswalk2d_ld_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_pixel_points ld_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d::_ld_point_pos_lat_type arg)
  {
    msg_.ld_point_pos_lat = std::move(arg);
    return Init_Crosswalk2d_pixel_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_ld_point_pos_lgt
{
public:
  explicit Init_Crosswalk2d_ld_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_ld_point_pos_lat ld_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d::_ld_point_pos_lgt_type arg)
  {
    msg_.ld_point_pos_lgt = std::move(arg);
    return Init_Crosswalk2d_ld_point_pos_lat(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_rd_point_pos_lat
{
public:
  explicit Init_Crosswalk2d_rd_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_ld_point_pos_lgt rd_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d::_rd_point_pos_lat_type arg)
  {
    msg_.rd_point_pos_lat = std::move(arg);
    return Init_Crosswalk2d_ld_point_pos_lgt(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_rd_point_pos_lgt
{
public:
  explicit Init_Crosswalk2d_rd_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_rd_point_pos_lat rd_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d::_rd_point_pos_lgt_type arg)
  {
    msg_.rd_point_pos_lgt = std::move(arg);
    return Init_Crosswalk2d_rd_point_pos_lat(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_ru_point_pos_lat
{
public:
  explicit Init_Crosswalk2d_ru_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_rd_point_pos_lgt ru_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d::_ru_point_pos_lat_type arg)
  {
    msg_.ru_point_pos_lat = std::move(arg);
    return Init_Crosswalk2d_rd_point_pos_lgt(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_ru_point_pos_lgt
{
public:
  explicit Init_Crosswalk2d_ru_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_ru_point_pos_lat ru_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d::_ru_point_pos_lgt_type arg)
  {
    msg_.ru_point_pos_lgt = std::move(arg);
    return Init_Crosswalk2d_ru_point_pos_lat(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_lu_point_pos_lat
{
public:
  explicit Init_Crosswalk2d_lu_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_ru_point_pos_lgt lu_point_pos_lat(::deva_perception_msgs::msg::Crosswalk2d::_lu_point_pos_lat_type arg)
  {
    msg_.lu_point_pos_lat = std::move(arg);
    return Init_Crosswalk2d_ru_point_pos_lgt(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_lu_point_pos_lgt
{
public:
  explicit Init_Crosswalk2d_lu_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_lu_point_pos_lat lu_point_pos_lgt(::deva_perception_msgs::msg::Crosswalk2d::_lu_point_pos_lgt_type arg)
  {
    msg_.lu_point_pos_lgt = std::move(arg);
    return Init_Crosswalk2d_lu_point_pos_lat(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_confidence
{
public:
  explicit Init_Crosswalk2d_confidence(::deva_perception_msgs::msg::Crosswalk2d & msg)
  : msg_(msg)
  {}
  Init_Crosswalk2d_lu_point_pos_lgt confidence(::deva_perception_msgs::msg::Crosswalk2d::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Crosswalk2d_lu_point_pos_lgt(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

class Init_Crosswalk2d_lane_id
{
public:
  Init_Crosswalk2d_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Crosswalk2d_confidence lane_id(::deva_perception_msgs::msg::Crosswalk2d::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_Crosswalk2d_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Crosswalk2d>()
{
  return deva_perception_msgs::msg::builder::Init_Crosswalk2d_lane_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D__BUILDER_HPP_
