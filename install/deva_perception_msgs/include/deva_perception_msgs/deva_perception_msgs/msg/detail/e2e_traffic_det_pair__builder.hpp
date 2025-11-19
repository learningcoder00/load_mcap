// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eTrafficDetPair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eTrafficDetPair_e2e_decode_result
{
public:
  explicit Init_E2eTrafficDetPair_e2e_decode_result(::deva_perception_msgs::msg::E2eTrafficDetPair & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eTrafficDetPair e2e_decode_result(::deva_perception_msgs::msg::E2eTrafficDetPair::_e2e_decode_result_type arg)
  {
    msg_.e2e_decode_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eTrafficDetPair msg_;
};

class Init_E2eTrafficDetPair_traffic_e2e_result
{
public:
  Init_E2eTrafficDetPair_traffic_e2e_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eTrafficDetPair_e2e_decode_result traffic_e2e_result(::deva_perception_msgs::msg::E2eTrafficDetPair::_traffic_e2e_result_type arg)
  {
    msg_.traffic_e2e_result = std::move(arg);
    return Init_E2eTrafficDetPair_e2e_decode_result(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eTrafficDetPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eTrafficDetPair>()
{
  return deva_perception_msgs::msg::builder::Init_E2eTrafficDetPair_traffic_e2e_result();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__BUILDER_HPP_
