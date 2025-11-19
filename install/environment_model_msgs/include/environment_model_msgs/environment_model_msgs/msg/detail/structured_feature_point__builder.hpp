// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/structured_feature_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_StructuredFeaturePoint_lane_ids
{
public:
  explicit Init_StructuredFeaturePoint_lane_ids(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::StructuredFeaturePoint lane_ids(::environment_model_msgs::msg::StructuredFeaturePoint::_lane_ids_type arg)
  {
    msg_.lane_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_next_ids
{
public:
  explicit Init_StructuredFeaturePoint_next_ids(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  Init_StructuredFeaturePoint_lane_ids next_ids(::environment_model_msgs::msg::StructuredFeaturePoint::_next_ids_type arg)
  {
    msg_.next_ids = std::move(arg);
    return Init_StructuredFeaturePoint_lane_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_prev_ids
{
public:
  explicit Init_StructuredFeaturePoint_prev_ids(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  Init_StructuredFeaturePoint_next_ids prev_ids(::environment_model_msgs::msg::StructuredFeaturePoint::_prev_ids_type arg)
  {
    msg_.prev_ids = std::move(arg);
    return Init_StructuredFeaturePoint_next_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_project_percent
{
public:
  explicit Init_StructuredFeaturePoint_project_percent(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  Init_StructuredFeaturePoint_prev_ids project_percent(::environment_model_msgs::msg::StructuredFeaturePoint::_project_percent_type arg)
  {
    msg_.project_percent = std::move(arg);
    return Init_StructuredFeaturePoint_prev_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_position
{
public:
  explicit Init_StructuredFeaturePoint_position(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  Init_StructuredFeaturePoint_project_percent position(::environment_model_msgs::msg::StructuredFeaturePoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_StructuredFeaturePoint_project_percent(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_direction
{
public:
  explicit Init_StructuredFeaturePoint_direction(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  Init_StructuredFeaturePoint_position direction(::environment_model_msgs::msg::StructuredFeaturePoint::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_StructuredFeaturePoint_position(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_types
{
public:
  explicit Init_StructuredFeaturePoint_types(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  Init_StructuredFeaturePoint_direction types(::environment_model_msgs::msg::StructuredFeaturePoint::_types_type arg)
  {
    msg_.types = std::move(arg);
    return Init_StructuredFeaturePoint_direction(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_link_id
{
public:
  explicit Init_StructuredFeaturePoint_link_id(::environment_model_msgs::msg::StructuredFeaturePoint & msg)
  : msg_(msg)
  {}
  Init_StructuredFeaturePoint_types link_id(::environment_model_msgs::msg::StructuredFeaturePoint::_link_id_type arg)
  {
    msg_.link_id = std::move(arg);
    return Init_StructuredFeaturePoint_types(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

class Init_StructuredFeaturePoint_id
{
public:
  Init_StructuredFeaturePoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StructuredFeaturePoint_link_id id(::environment_model_msgs::msg::StructuredFeaturePoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_StructuredFeaturePoint_link_id(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredFeaturePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::StructuredFeaturePoint>()
{
  return environment_model_msgs::msg::builder::Init_StructuredFeaturePoint_id();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__BUILDER_HPP_
