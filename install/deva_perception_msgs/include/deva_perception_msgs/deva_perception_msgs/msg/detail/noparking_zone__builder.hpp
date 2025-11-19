// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/NoparkingZone.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__NOPARKING_ZONE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__NOPARKING_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/noparking_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_NoparkingZone_vertices
{
public:
  explicit Init_NoparkingZone_vertices(::deva_perception_msgs::msg::NoparkingZone & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::NoparkingZone vertices(::deva_perception_msgs::msg::NoparkingZone::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::NoparkingZone msg_;
};

class Init_NoparkingZone_confidence
{
public:
  explicit Init_NoparkingZone_confidence(::deva_perception_msgs::msg::NoparkingZone & msg)
  : msg_(msg)
  {}
  Init_NoparkingZone_vertices confidence(::deva_perception_msgs::msg::NoparkingZone::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_NoparkingZone_vertices(msg_);
  }

private:
  ::deva_perception_msgs::msg::NoparkingZone msg_;
};

class Init_NoparkingZone_id
{
public:
  Init_NoparkingZone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NoparkingZone_confidence id(::deva_perception_msgs::msg::NoparkingZone::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NoparkingZone_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::NoparkingZone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::NoparkingZone>()
{
  return deva_perception_msgs::msg::builder::Init_NoparkingZone_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__NOPARKING_ZONE__BUILDER_HPP_
