// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_adb_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eAdbArray_e2e_adb_traffic_sign
{
public:
  explicit Init_E2eAdbArray_e2e_adb_traffic_sign(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eAdbArray e2e_adb_traffic_sign(::deva_perception_msgs::msg::E2eAdbArray::_e2e_adb_traffic_sign_type arg)
  {
    msg_.e2e_adb_traffic_sign = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_e2e_adb_veh_obj
{
public:
  explicit Init_E2eAdbArray_e2e_adb_veh_obj(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_e2e_adb_traffic_sign e2e_adb_veh_obj(::deva_perception_msgs::msg::E2eAdbArray::_e2e_adb_veh_obj_type arg)
  {
    msg_.e2e_adb_veh_obj = std::move(arg);
    return Init_E2eAdbArray_e2e_adb_traffic_sign(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_too_many_cars
{
public:
  explicit Init_E2eAdbArray_too_many_cars(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_e2e_adb_veh_obj too_many_cars(::deva_perception_msgs::msg::E2eAdbArray::_too_many_cars_type arg)
  {
    msg_.too_many_cars = std::move(arg);
    return Init_E2eAdbArray_e2e_adb_veh_obj(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_camera_sts_for_ahbc
{
public:
  explicit Init_E2eAdbArray_camera_sts_for_ahbc(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_too_many_cars camera_sts_for_ahbc(::deva_perception_msgs::msg::E2eAdbArray::_camera_sts_for_ahbc_type arg)
  {
    msg_.camera_sts_for_ahbc = std::move(arg);
    return Init_E2eAdbArray_too_many_cars(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_lit_area
{
public:
  explicit Init_E2eAdbArray_lit_area(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_camera_sts_for_ahbc lit_area(::deva_perception_msgs::msg::E2eAdbArray::_lit_area_type arg)
  {
    msg_.lit_area = std::move(arg);
    return Init_E2eAdbArray_camera_sts_for_ahbc(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_pre_crash_front_data_time_to_impact
{
public:
  explicit Init_E2eAdbArray_pre_crash_front_data_time_to_impact(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_lit_area pre_crash_front_data_time_to_impact(::deva_perception_msgs::msg::E2eAdbArray::_pre_crash_front_data_time_to_impact_type arg)
  {
    msg_.pre_crash_front_data_time_to_impact = std::move(arg);
    return Init_E2eAdbArray_lit_area(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_pre_crash_front_data_overlap
{
public:
  explicit Init_E2eAdbArray_pre_crash_front_data_overlap(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_pre_crash_front_data_time_to_impact pre_crash_front_data_overlap(::deva_perception_msgs::msg::E2eAdbArray::_pre_crash_front_data_overlap_type arg)
  {
    msg_.pre_crash_front_data_overlap = std::move(arg);
    return Init_E2eAdbArray_pre_crash_front_data_time_to_impact(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_pre_crash_front_data_object_class
{
public:
  explicit Init_E2eAdbArray_pre_crash_front_data_object_class(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_pre_crash_front_data_overlap pre_crash_front_data_object_class(::deva_perception_msgs::msg::E2eAdbArray::_pre_crash_front_data_object_class_type arg)
  {
    msg_.pre_crash_front_data_object_class = std::move(arg);
    return Init_E2eAdbArray_pre_crash_front_data_overlap(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_pre_crash_front_data_closing_velocity
{
public:
  explicit Init_E2eAdbArray_pre_crash_front_data_closing_velocity(::deva_perception_msgs::msg::E2eAdbArray & msg)
  : msg_(msg)
  {}
  Init_E2eAdbArray_pre_crash_front_data_object_class pre_crash_front_data_closing_velocity(::deva_perception_msgs::msg::E2eAdbArray::_pre_crash_front_data_closing_velocity_type arg)
  {
    msg_.pre_crash_front_data_closing_velocity = std::move(arg);
    return Init_E2eAdbArray_pre_crash_front_data_object_class(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

class Init_E2eAdbArray_header
{
public:
  Init_E2eAdbArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eAdbArray_pre_crash_front_data_closing_velocity header(::deva_perception_msgs::msg::E2eAdbArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_E2eAdbArray_pre_crash_front_data_closing_velocity(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eAdbArray>()
{
  return deva_perception_msgs::msg::builder::Init_E2eAdbArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__BUILDER_HPP_
