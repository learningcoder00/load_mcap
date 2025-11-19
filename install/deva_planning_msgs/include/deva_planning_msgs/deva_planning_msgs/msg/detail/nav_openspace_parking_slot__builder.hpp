// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/NavOpenspaceParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/nav_openspace_parking_slot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_NavOpenspaceParkingSlot_occupied_confidence
{
public:
  explicit Init_NavOpenspaceParkingSlot_occupied_confidence(::deva_planning_msgs::msg::NavOpenspaceParkingSlot & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::NavOpenspaceParkingSlot occupied_confidence(::deva_planning_msgs::msg::NavOpenspaceParkingSlot::_occupied_confidence_type arg)
  {
    msg_.occupied_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceParkingSlot msg_;
};

class Init_NavOpenspaceParkingSlot_is_stable_tracked
{
public:
  explicit Init_NavOpenspaceParkingSlot_is_stable_tracked(::deva_planning_msgs::msg::NavOpenspaceParkingSlot & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceParkingSlot_occupied_confidence is_stable_tracked(::deva_planning_msgs::msg::NavOpenspaceParkingSlot::_is_stable_tracked_type arg)
  {
    msg_.is_stable_tracked = std::move(arg);
    return Init_NavOpenspaceParkingSlot_occupied_confidence(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceParkingSlot msg_;
};

class Init_NavOpenspaceParkingSlot_is_occupied
{
public:
  explicit Init_NavOpenspaceParkingSlot_is_occupied(::deva_planning_msgs::msg::NavOpenspaceParkingSlot & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceParkingSlot_is_stable_tracked is_occupied(::deva_planning_msgs::msg::NavOpenspaceParkingSlot::_is_occupied_type arg)
  {
    msg_.is_occupied = std::move(arg);
    return Init_NavOpenspaceParkingSlot_is_stable_tracked(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceParkingSlot msg_;
};

class Init_NavOpenspaceParkingSlot_xyz_vec
{
public:
  explicit Init_NavOpenspaceParkingSlot_xyz_vec(::deva_planning_msgs::msg::NavOpenspaceParkingSlot & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceParkingSlot_is_occupied xyz_vec(::deva_planning_msgs::msg::NavOpenspaceParkingSlot::_xyz_vec_type arg)
  {
    msg_.xyz_vec = std::move(arg);
    return Init_NavOpenspaceParkingSlot_is_occupied(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceParkingSlot msg_;
};

class Init_NavOpenspaceParkingSlot_type
{
public:
  explicit Init_NavOpenspaceParkingSlot_type(::deva_planning_msgs::msg::NavOpenspaceParkingSlot & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceParkingSlot_xyz_vec type(::deva_planning_msgs::msg::NavOpenspaceParkingSlot::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_NavOpenspaceParkingSlot_xyz_vec(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceParkingSlot msg_;
};

class Init_NavOpenspaceParkingSlot_id
{
public:
  Init_NavOpenspaceParkingSlot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavOpenspaceParkingSlot_type id(::deva_planning_msgs::msg::NavOpenspaceParkingSlot::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NavOpenspaceParkingSlot_type(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceParkingSlot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::NavOpenspaceParkingSlot>()
{
  return deva_planning_msgs::msg::builder::Init_NavOpenspaceParkingSlot_id();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__BUILDER_HPP_
