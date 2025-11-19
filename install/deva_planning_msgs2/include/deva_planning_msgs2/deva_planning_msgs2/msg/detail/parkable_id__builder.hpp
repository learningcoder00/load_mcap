// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/ParkableID.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PARKABLE_ID__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PARKABLE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/parkable_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_ParkableID_parkable_ids
{
public:
  Init_ParkableID_parkable_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_planning_msgs2::msg::ParkableID parkable_ids(::deva_planning_msgs2::msg::ParkableID::_parkable_ids_type arg)
  {
    msg_.parkable_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ParkableID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::ParkableID>()
{
  return deva_planning_msgs2::msg::builder::Init_ParkableID_parkable_ids();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PARKABLE_ID__BUILDER_HPP_
