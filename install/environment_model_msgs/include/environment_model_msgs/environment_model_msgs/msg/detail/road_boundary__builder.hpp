// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/RoadBoundary.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/road_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadBoundary_isolated_obj_ids
{
public:
  explicit Init_RoadBoundary_isolated_obj_ids(::environment_model_msgs::msg::RoadBoundary & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::RoadBoundary isolated_obj_ids(::environment_model_msgs::msg::RoadBoundary::_isolated_obj_ids_type arg)
  {
    msg_.isolated_obj_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadBoundary msg_;
};

class Init_RoadBoundary_feature
{
public:
  explicit Init_RoadBoundary_feature(::environment_model_msgs::msg::RoadBoundary & msg)
  : msg_(msg)
  {}
  Init_RoadBoundary_isolated_obj_ids feature(::environment_model_msgs::msg::RoadBoundary::_feature_type arg)
  {
    msg_.feature = std::move(arg);
    return Init_RoadBoundary_isolated_obj_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadBoundary msg_;
};

class Init_RoadBoundary_right_law_bound_line
{
public:
  explicit Init_RoadBoundary_right_law_bound_line(::environment_model_msgs::msg::RoadBoundary & msg)
  : msg_(msg)
  {}
  Init_RoadBoundary_feature right_law_bound_line(::environment_model_msgs::msg::RoadBoundary::_right_law_bound_line_type arg)
  {
    msg_.right_law_bound_line = std::move(arg);
    return Init_RoadBoundary_feature(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadBoundary msg_;
};

class Init_RoadBoundary_left_law_bound_line
{
public:
  explicit Init_RoadBoundary_left_law_bound_line(::environment_model_msgs::msg::RoadBoundary & msg)
  : msg_(msg)
  {}
  Init_RoadBoundary_right_law_bound_line left_law_bound_line(::environment_model_msgs::msg::RoadBoundary::_left_law_bound_line_type arg)
  {
    msg_.left_law_bound_line = std::move(arg);
    return Init_RoadBoundary_right_law_bound_line(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadBoundary msg_;
};

class Init_RoadBoundary_right_physical_bound_line
{
public:
  explicit Init_RoadBoundary_right_physical_bound_line(::environment_model_msgs::msg::RoadBoundary & msg)
  : msg_(msg)
  {}
  Init_RoadBoundary_left_law_bound_line right_physical_bound_line(::environment_model_msgs::msg::RoadBoundary::_right_physical_bound_line_type arg)
  {
    msg_.right_physical_bound_line = std::move(arg);
    return Init_RoadBoundary_left_law_bound_line(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadBoundary msg_;
};

class Init_RoadBoundary_left_physical_bound_line
{
public:
  Init_RoadBoundary_left_physical_bound_line()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadBoundary_right_physical_bound_line left_physical_bound_line(::environment_model_msgs::msg::RoadBoundary::_left_physical_bound_line_type arg)
  {
    msg_.left_physical_bound_line = std::move(arg);
    return Init_RoadBoundary_right_physical_bound_line(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::RoadBoundary>()
{
  return environment_model_msgs::msg::builder::Init_RoadBoundary_left_physical_bound_line();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__BUILDER_HPP_
