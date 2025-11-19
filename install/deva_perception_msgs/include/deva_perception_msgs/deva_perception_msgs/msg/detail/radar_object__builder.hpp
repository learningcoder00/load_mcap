// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/radar_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarObject_class_type
{
public:
  explicit Init_RadarObject_class_type(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RadarObject class_type(::deva_perception_msgs::msg::RadarObject::_class_type_type arg)
  {
    msg_.class_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_orientation_angle
{
public:
  explicit Init_RadarObject_orientation_angle(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_class_type orientation_angle(::deva_perception_msgs::msg::RadarObject::_orientation_angle_type arg)
  {
    msg_.orientation_angle = std::move(arg);
    return Init_RadarObject_class_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_center_longitude
{
public:
  explicit Init_RadarObject_center_longitude(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_orientation_angle center_longitude(::deva_perception_msgs::msg::RadarObject::_center_longitude_type arg)
  {
    msg_.center_longitude = std::move(arg);
    return Init_RadarObject_orientation_angle(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_center_latitude
{
public:
  explicit Init_RadarObject_center_latitude(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_center_longitude center_latitude(::deva_perception_msgs::msg::RadarObject::_center_latitude_type arg)
  {
    msg_.center_latitude = std::move(arg);
    return Init_RadarObject_center_longitude(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_width
{
public:
  explicit Init_RadarObject_width(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_center_latitude width(::deva_perception_msgs::msg::RadarObject::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RadarObject_center_latitude(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_length
{
public:
  explicit Init_RadarObject_length(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_width length(::deva_perception_msgs::msg::RadarObject::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_RadarObject_width(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_extended_valid
{
public:
  explicit Init_RadarObject_extended_valid(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_length extended_valid(::deva_perception_msgs::msg::RadarObject::_extended_valid_type arg)
  {
    msg_.extended_valid = std::move(arg);
    return Init_RadarObject_length(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_prob_of_exist
{
public:
  explicit Init_RadarObject_prob_of_exist(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_extended_valid prob_of_exist(::deva_perception_msgs::msg::RadarObject::_prob_of_exist_type arg)
  {
    msg_.prob_of_exist = std::move(arg);
    return Init_RadarObject_extended_valid(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_meas_state
{
public:
  explicit Init_RadarObject_meas_state(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_prob_of_exist meas_state(::deva_perception_msgs::msg::RadarObject::_meas_state_type arg)
  {
    msg_.meas_state = std::move(arg);
    return Init_RadarObject_prob_of_exist(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_quality_valid
{
public:
  explicit Init_RadarObject_quality_valid(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_meas_state quality_valid(::deva_perception_msgs::msg::RadarObject::_quality_valid_type arg)
  {
    msg_.quality_valid = std::move(arg);
    return Init_RadarObject_meas_state(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_dynamic_property
{
public:
  explicit Init_RadarObject_dynamic_property(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_quality_valid dynamic_property(::deva_perception_msgs::msg::RadarObject::_dynamic_property_type arg)
  {
    msg_.dynamic_property = std::move(arg);
    return Init_RadarObject_quality_valid(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_rcs
{
public:
  explicit Init_RadarObject_rcs(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_dynamic_property rcs(::deva_perception_msgs::msg::RadarObject::_rcs_type arg)
  {
    msg_.rcs = std::move(arg);
    return Init_RadarObject_dynamic_property(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_relative_acceleration
{
public:
  explicit Init_RadarObject_relative_acceleration(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_rcs relative_acceleration(::deva_perception_msgs::msg::RadarObject::_relative_acceleration_type arg)
  {
    msg_.relative_acceleration = std::move(arg);
    return Init_RadarObject_rcs(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_relative_velocity
{
public:
  explicit Init_RadarObject_relative_velocity(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_relative_acceleration relative_velocity(::deva_perception_msgs::msg::RadarObject::_relative_velocity_type arg)
  {
    msg_.relative_velocity = std::move(arg);
    return Init_RadarObject_relative_acceleration(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_position
{
public:
  explicit Init_RadarObject_position(::deva_perception_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_relative_velocity position(::deva_perception_msgs::msg::RadarObject::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RadarObject_relative_velocity(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_id
{
public:
  Init_RadarObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObject_position id(::deva_perception_msgs::msg::RadarObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RadarObject_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RadarObject>()
{
  return deva_perception_msgs::msg::builder::Init_RadarObject_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_
