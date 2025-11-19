// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RadarVehicleInfoArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/radar_vehicle_info_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarVehicleInfoArray_info_array
{
public:
  explicit Init_RadarVehicleInfoArray_info_array(::deva_perception_msgs::msg::RadarVehicleInfoArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RadarVehicleInfoArray info_array(::deva_perception_msgs::msg::RadarVehicleInfoArray::_info_array_type arg)
  {
    msg_.info_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfoArray msg_;
};

class Init_RadarVehicleInfoArray_header
{
public:
  Init_RadarVehicleInfoArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarVehicleInfoArray_info_array header(::deva_perception_msgs::msg::RadarVehicleInfoArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarVehicleInfoArray_info_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarVehicleInfoArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RadarVehicleInfoArray>()
{
  return deva_perception_msgs::msg::builder::Init_RadarVehicleInfoArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO_ARRAY__BUILDER_HPP_
