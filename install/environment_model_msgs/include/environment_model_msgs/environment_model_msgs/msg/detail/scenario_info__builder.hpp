// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/ScenarioInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/scenario_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_ScenarioInfo_distance
{
public:
  explicit Init_ScenarioInfo_distance(::environment_model_msgs::msg::ScenarioInfo & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::ScenarioInfo distance(::environment_model_msgs::msg::ScenarioInfo::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::ScenarioInfo msg_;
};

class Init_ScenarioInfo_scenario
{
public:
  Init_ScenarioInfo_scenario()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScenarioInfo_distance scenario(::environment_model_msgs::msg::ScenarioInfo::_scenario_type arg)
  {
    msg_.scenario = std::move(arg);
    return Init_ScenarioInfo_distance(msg_);
  }

private:
  ::environment_model_msgs::msg::ScenarioInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::ScenarioInfo>()
{
  return environment_model_msgs::msg::builder::Init_ScenarioInfo_scenario();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__BUILDER_HPP_
