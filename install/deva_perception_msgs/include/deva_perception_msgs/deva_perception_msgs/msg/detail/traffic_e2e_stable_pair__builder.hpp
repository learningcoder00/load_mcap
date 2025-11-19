// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficE2eStablePair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficE2eStablePair_is_stable
{
public:
  explicit Init_TrafficE2eStablePair_is_stable(::deva_perception_msgs::msg::TrafficE2eStablePair & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficE2eStablePair is_stable(::deva_perception_msgs::msg::TrafficE2eStablePair::_is_stable_type arg)
  {
    msg_.is_stable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficE2eStablePair msg_;
};

class Init_TrafficE2eStablePair_traffic_e2e_result
{
public:
  Init_TrafficE2eStablePair_traffic_e2e_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficE2eStablePair_is_stable traffic_e2e_result(::deva_perception_msgs::msg::TrafficE2eStablePair::_traffic_e2e_result_type arg)
  {
    msg_.traffic_e2e_result = std::move(arg);
    return Init_TrafficE2eStablePair_is_stable(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficE2eStablePair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficE2eStablePair>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficE2eStablePair_traffic_e2e_result();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__BUILDER_HPP_
