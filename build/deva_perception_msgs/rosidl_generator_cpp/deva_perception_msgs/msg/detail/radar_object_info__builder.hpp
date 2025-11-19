// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RadarObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/radar_object_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarObjectInfo_track_status
{
public:
  explicit Init_RadarObjectInfo_track_status(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RadarObjectInfo track_status(::deva_perception_msgs::msg::RadarObjectInfo::_track_status_type arg)
  {
    msg_.track_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_target_classification_confidence
{
public:
  explicit Init_RadarObjectInfo_target_classification_confidence(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_track_status target_classification_confidence(::deva_perception_msgs::msg::RadarObjectInfo::_target_classification_confidence_type arg)
  {
    msg_.target_classification_confidence = std::move(arg);
    return Init_RadarObjectInfo_track_status(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_rcs
{
public:
  explicit Init_RadarObjectInfo_rcs(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_target_classification_confidence rcs(::deva_perception_msgs::msg::RadarObjectInfo::_rcs_type arg)
  {
    msg_.rcs = std::move(arg);
    return Init_RadarObjectInfo_target_classification_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_not_real_probability
{
public:
  explicit Init_RadarObjectInfo_not_real_probability(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_rcs not_real_probability(::deva_perception_msgs::msg::RadarObjectInfo::_not_real_probability_type arg)
  {
    msg_.not_real_probability = std::move(arg);
    return Init_RadarObjectInfo_rcs(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_mirror_probability
{
public:
  explicit Init_RadarObjectInfo_mirror_probability(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_not_real_probability mirror_probability(::deva_perception_msgs::msg::RadarObjectInfo::_mirror_probability_type arg)
  {
    msg_.mirror_probability = std::move(arg);
    return Init_RadarObjectInfo_not_real_probability(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_probability_of_existence
{
public:
  explicit Init_RadarObjectInfo_probability_of_existence(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_mirror_probability probability_of_existence(::deva_perception_msgs::msg::RadarObjectInfo::_probability_of_existence_type arg)
  {
    msg_.probability_of_existence = std::move(arg);
    return Init_RadarObjectInfo_mirror_probability(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_obstacle_probability
{
public:
  explicit Init_RadarObjectInfo_obstacle_probability(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_probability_of_existence obstacle_probability(::deva_perception_msgs::msg::RadarObjectInfo::_obstacle_probability_type arg)
  {
    msg_.obstacle_probability = std::move(arg);
    return Init_RadarObjectInfo_probability_of_existence(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_classification
{
public:
  explicit Init_RadarObjectInfo_classification(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_obstacle_probability classification(::deva_perception_msgs::msg::RadarObjectInfo::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_RadarObjectInfo_obstacle_probability(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_snr
{
public:
  explicit Init_RadarObjectInfo_snr(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_classification snr(::deva_perception_msgs::msg::RadarObjectInfo::_snr_type arg)
  {
    msg_.snr = std::move(arg);
    return Init_RadarObjectInfo_classification(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_box_center_lgt
{
public:
  explicit Init_RadarObjectInfo_box_center_lgt(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_snr box_center_lgt(::deva_perception_msgs::msg::RadarObjectInfo::_box_center_lgt_type arg)
  {
    msg_.box_center_lgt = std::move(arg);
    return Init_RadarObjectInfo_snr(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_box_center_lat
{
public:
  explicit Init_RadarObjectInfo_box_center_lat(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_box_center_lgt box_center_lat(::deva_perception_msgs::msg::RadarObjectInfo::_box_center_lat_type arg)
  {
    msg_.box_center_lat = std::move(arg);
    return Init_RadarObjectInfo_box_center_lgt(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_box_lwh
{
public:
  explicit Init_RadarObjectInfo_box_lwh(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_box_center_lat box_lwh(::deva_perception_msgs::msg::RadarObjectInfo::_box_lwh_type arg)
  {
    msg_.box_lwh = std::move(arg);
    return Init_RadarObjectInfo_box_center_lat(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_life_cycles
{
public:
  explicit Init_RadarObjectInfo_life_cycles(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_box_lwh life_cycles(::deva_perception_msgs::msg::RadarObjectInfo::_life_cycles_type arg)
  {
    msg_.life_cycles = std::move(arg);
    return Init_RadarObjectInfo_box_lwh(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_heading_angle
{
public:
  explicit Init_RadarObjectInfo_heading_angle(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_life_cycles heading_angle(::deva_perception_msgs::msg::RadarObjectInfo::_heading_angle_type arg)
  {
    msg_.heading_angle = std::move(arg);
    return Init_RadarObjectInfo_life_cycles(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_dynamic_property
{
public:
  explicit Init_RadarObjectInfo_dynamic_property(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_heading_angle dynamic_property(::deva_perception_msgs::msg::RadarObjectInfo::_dynamic_property_type arg)
  {
    msg_.dynamic_property = std::move(arg);
    return Init_RadarObjectInfo_heading_angle(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_acceleration_abs
{
public:
  explicit Init_RadarObjectInfo_acceleration_abs(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_dynamic_property acceleration_abs(::deva_perception_msgs::msg::RadarObjectInfo::_acceleration_abs_type arg)
  {
    msg_.acceleration_abs = std::move(arg);
    return Init_RadarObjectInfo_dynamic_property(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_acceleration_rel
{
public:
  explicit Init_RadarObjectInfo_acceleration_rel(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_acceleration_abs acceleration_rel(::deva_perception_msgs::msg::RadarObjectInfo::_acceleration_rel_type arg)
  {
    msg_.acceleration_rel = std::move(arg);
    return Init_RadarObjectInfo_acceleration_abs(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_velocity_abs_std
{
public:
  explicit Init_RadarObjectInfo_velocity_abs_std(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_acceleration_rel velocity_abs_std(::deva_perception_msgs::msg::RadarObjectInfo::_velocity_abs_std_type arg)
  {
    msg_.velocity_abs_std = std::move(arg);
    return Init_RadarObjectInfo_acceleration_rel(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_velocity_abs
{
public:
  explicit Init_RadarObjectInfo_velocity_abs(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_velocity_abs_std velocity_abs(::deva_perception_msgs::msg::RadarObjectInfo::_velocity_abs_type arg)
  {
    msg_.velocity_abs = std::move(arg);
    return Init_RadarObjectInfo_velocity_abs_std(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_velocity_rel_std
{
public:
  explicit Init_RadarObjectInfo_velocity_rel_std(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_velocity_abs velocity_rel_std(::deva_perception_msgs::msg::RadarObjectInfo::_velocity_rel_std_type arg)
  {
    msg_.velocity_rel_std = std::move(arg);
    return Init_RadarObjectInfo_velocity_abs(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_velocity_rel
{
public:
  explicit Init_RadarObjectInfo_velocity_rel(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_velocity_rel_std velocity_rel(::deva_perception_msgs::msg::RadarObjectInfo::_velocity_rel_type arg)
  {
    msg_.velocity_rel = std::move(arg);
    return Init_RadarObjectInfo_velocity_rel_std(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_nearest_point_std
{
public:
  explicit Init_RadarObjectInfo_nearest_point_std(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_velocity_rel nearest_point_std(::deva_perception_msgs::msg::RadarObjectInfo::_nearest_point_std_type arg)
  {
    msg_.nearest_point_std = std::move(arg);
    return Init_RadarObjectInfo_velocity_rel(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_nearest_point
{
public:
  explicit Init_RadarObjectInfo_nearest_point(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_nearest_point_std nearest_point(::deva_perception_msgs::msg::RadarObjectInfo::_nearest_point_type arg)
  {
    msg_.nearest_point = std::move(arg);
    return Init_RadarObjectInfo_nearest_point_std(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_position_std
{
public:
  explicit Init_RadarObjectInfo_position_std(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_nearest_point position_std(::deva_perception_msgs::msg::RadarObjectInfo::_position_std_type arg)
  {
    msg_.position_std = std::move(arg);
    return Init_RadarObjectInfo_nearest_point(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_position
{
public:
  explicit Init_RadarObjectInfo_position(::deva_perception_msgs::msg::RadarObjectInfo & msg)
  : msg_(msg)
  {}
  Init_RadarObjectInfo_position_std position(::deva_perception_msgs::msg::RadarObjectInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RadarObjectInfo_position_std(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

class Init_RadarObjectInfo_id
{
public:
  Init_RadarObjectInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObjectInfo_position id(::deva_perception_msgs::msg::RadarObjectInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RadarObjectInfo_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RadarObjectInfo>()
{
  return deva_perception_msgs::msg::builder::Init_RadarObjectInfo_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__BUILDER_HPP_
