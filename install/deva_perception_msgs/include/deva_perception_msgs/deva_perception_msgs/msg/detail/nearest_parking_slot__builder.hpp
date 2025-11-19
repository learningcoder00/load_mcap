// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/NearestParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/nearest_parking_slot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_NearestParkingSlot_nearest_parking_slot_id
{
public:
  Init_NearestParkingSlot_nearest_parking_slot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_perception_msgs::msg::NearestParkingSlot nearest_parking_slot_id(::deva_perception_msgs::msg::NearestParkingSlot::_nearest_parking_slot_id_type arg)
  {
    msg_.nearest_parking_slot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::NearestParkingSlot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::NearestParkingSlot>()
{
  return deva_perception_msgs::msg::builder::Init_NearestParkingSlot_nearest_parking_slot_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__BUILDER_HPP_
