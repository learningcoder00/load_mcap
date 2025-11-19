// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/PartitionZone.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PARTITION_ZONE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PARTITION_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/partition_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PartitionZone_waypoints
{
public:
  Init_PartitionZone_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_perception_msgs::msg::PartitionZone waypoints(::deva_perception_msgs::msg::PartitionZone::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::PartitionZone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::PartitionZone>()
{
  return deva_perception_msgs::msg::builder::Init_PartitionZone_waypoints();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PARTITION_ZONE__BUILDER_HPP_
