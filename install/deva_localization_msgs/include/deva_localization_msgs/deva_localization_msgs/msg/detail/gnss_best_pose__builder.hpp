// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__BUILDER_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_localization_msgs/msg/detail/gnss_best_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_GnssBestPose_velocity_latency
{
public:
  explicit Init_GnssBestPose_velocity_latency(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  ::deva_localization_msgs::msg::GnssBestPose velocity_latency(::deva_localization_msgs::msg::GnssBestPose::_velocity_latency_type arg)
  {
    msg_.velocity_latency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_linear_velocity
{
public:
  explicit Init_GnssBestPose_linear_velocity(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_velocity_latency linear_velocity(::deva_localization_msgs::msg::GnssBestPose::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_GnssBestPose_velocity_latency(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_galileo_beidou_used_mask
{
public:
  explicit Init_GnssBestPose_galileo_beidou_used_mask(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_linear_velocity galileo_beidou_used_mask(::deva_localization_msgs::msg::GnssBestPose::_galileo_beidou_used_mask_type arg)
  {
    msg_.galileo_beidou_used_mask = std::move(arg);
    return Init_GnssBestPose_linear_velocity(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_gps_glonass_used_mask
{
public:
  explicit Init_GnssBestPose_gps_glonass_used_mask(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_galileo_beidou_used_mask gps_glonass_used_mask(::deva_localization_msgs::msg::GnssBestPose::_gps_glonass_used_mask_type arg)
  {
    msg_.gps_glonass_used_mask = std::move(arg);
    return Init_GnssBestPose_galileo_beidou_used_mask(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_extended_solution_status
{
public:
  explicit Init_GnssBestPose_extended_solution_status(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_gps_glonass_used_mask extended_solution_status(::deva_localization_msgs::msg::GnssBestPose::_extended_solution_status_type arg)
  {
    msg_.extended_solution_status = std::move(arg);
    return Init_GnssBestPose_gps_glonass_used_mask(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_num_gps_and_glonass_l1_and_l2_used_in_solution
{
public:
  explicit Init_GnssBestPose_num_gps_and_glonass_l1_and_l2_used_in_solution(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_extended_solution_status num_gps_and_glonass_l1_and_l2_used_in_solution(::deva_localization_msgs::msg::GnssBestPose::_num_gps_and_glonass_l1_and_l2_used_in_solution_type arg)
  {
    msg_.num_gps_and_glonass_l1_and_l2_used_in_solution = std::move(arg);
    return Init_GnssBestPose_extended_solution_status(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_num_gps_and_glonass_l1_used_in_solution
{
public:
  explicit Init_GnssBestPose_num_gps_and_glonass_l1_used_in_solution(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_num_gps_and_glonass_l1_and_l2_used_in_solution num_gps_and_glonass_l1_used_in_solution(::deva_localization_msgs::msg::GnssBestPose::_num_gps_and_glonass_l1_used_in_solution_type arg)
  {
    msg_.num_gps_and_glonass_l1_used_in_solution = std::move(arg);
    return Init_GnssBestPose_num_gps_and_glonass_l1_and_l2_used_in_solution(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_num_satellites_used_in_solution
{
public:
  explicit Init_GnssBestPose_num_satellites_used_in_solution(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_num_gps_and_glonass_l1_used_in_solution num_satellites_used_in_solution(::deva_localization_msgs::msg::GnssBestPose::_num_satellites_used_in_solution_type arg)
  {
    msg_.num_satellites_used_in_solution = std::move(arg);
    return Init_GnssBestPose_num_gps_and_glonass_l1_used_in_solution(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_num_satellites_tracked
{
public:
  explicit Init_GnssBestPose_num_satellites_tracked(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_num_satellites_used_in_solution num_satellites_tracked(::deva_localization_msgs::msg::GnssBestPose::_num_satellites_tracked_type arg)
  {
    msg_.num_satellites_tracked = std::move(arg);
    return Init_GnssBestPose_num_satellites_used_in_solution(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_solution_age
{
public:
  explicit Init_GnssBestPose_solution_age(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_num_satellites_tracked solution_age(::deva_localization_msgs::msg::GnssBestPose::_solution_age_type arg)
  {
    msg_.solution_age = std::move(arg);
    return Init_GnssBestPose_num_satellites_tracked(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_diff_age
{
public:
  explicit Init_GnssBestPose_diff_age(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_solution_age diff_age(::deva_localization_msgs::msg::GnssBestPose::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_GnssBestPose_solution_age(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_height_sigma
{
public:
  explicit Init_GnssBestPose_height_sigma(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_diff_age height_sigma(::deva_localization_msgs::msg::GnssBestPose::_height_sigma_type arg)
  {
    msg_.height_sigma = std::move(arg);
    return Init_GnssBestPose_diff_age(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_lon_sigma
{
public:
  explicit Init_GnssBestPose_lon_sigma(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_height_sigma lon_sigma(::deva_localization_msgs::msg::GnssBestPose::_lon_sigma_type arg)
  {
    msg_.lon_sigma = std::move(arg);
    return Init_GnssBestPose_height_sigma(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_lat_sigma
{
public:
  explicit Init_GnssBestPose_lat_sigma(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_lon_sigma lat_sigma(::deva_localization_msgs::msg::GnssBestPose::_lat_sigma_type arg)
  {
    msg_.lat_sigma = std::move(arg);
    return Init_GnssBestPose_lon_sigma(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_datum_id
{
public:
  explicit Init_GnssBestPose_datum_id(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_lat_sigma datum_id(::deva_localization_msgs::msg::GnssBestPose::_datum_id_type arg)
  {
    msg_.datum_id = std::move(arg);
    return Init_GnssBestPose_lat_sigma(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_undulation
{
public:
  explicit Init_GnssBestPose_undulation(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_datum_id undulation(::deva_localization_msgs::msg::GnssBestPose::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_GnssBestPose_datum_id(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_height_msl
{
public:
  explicit Init_GnssBestPose_height_msl(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_undulation height_msl(::deva_localization_msgs::msg::GnssBestPose::_height_msl_type arg)
  {
    msg_.height_msl = std::move(arg);
    return Init_GnssBestPose_undulation(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_lon
{
public:
  explicit Init_GnssBestPose_lon(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_height_msl lon(::deva_localization_msgs::msg::GnssBestPose::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_GnssBestPose_height_msl(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_lat
{
public:
  explicit Init_GnssBestPose_lat(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_lon lat(::deva_localization_msgs::msg::GnssBestPose::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_GnssBestPose_lon(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_position_type
{
public:
  explicit Init_GnssBestPose_position_type(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_lat position_type(::deva_localization_msgs::msg::GnssBestPose::_position_type_type arg)
  {
    msg_.position_type = std::move(arg);
    return Init_GnssBestPose_lat(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_solution_status
{
public:
  explicit Init_GnssBestPose_solution_status(::deva_localization_msgs::msg::GnssBestPose & msg)
  : msg_(msg)
  {}
  Init_GnssBestPose_position_type solution_status(::deva_localization_msgs::msg::GnssBestPose::_solution_status_type arg)
  {
    msg_.solution_status = std::move(arg);
    return Init_GnssBestPose_position_type(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

class Init_GnssBestPose_header
{
public:
  Init_GnssBestPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssBestPose_solution_status header(::deva_localization_msgs::msg::GnssBestPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GnssBestPose_solution_status(msg_);
  }

private:
  ::deva_localization_msgs::msg::GnssBestPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_localization_msgs::msg::GnssBestPose>()
{
  return deva_localization_msgs::msg::builder::Init_GnssBestPose_header();
}

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__BUILDER_HPP_
