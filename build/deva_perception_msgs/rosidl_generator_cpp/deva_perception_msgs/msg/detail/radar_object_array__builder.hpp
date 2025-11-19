// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RadarObjectArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/radar_object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarObjectArray_objects
{
public:
  explicit Init_RadarObjectArray_objects(::deva_perception_msgs::msg::RadarObjectArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RadarObjectArray objects(::deva_perception_msgs::msg::RadarObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectArray msg_;
};

class Init_RadarObjectArray_header
{
public:
  Init_RadarObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObjectArray_objects header(::deva_perception_msgs::msg::RadarObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarObjectArray_objects(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RadarObjectArray>()
{
  return deva_perception_msgs::msg::builder::Init_RadarObjectArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_ARRAY__BUILDER_HPP_
