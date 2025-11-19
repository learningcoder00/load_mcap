// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/structured_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_StructuredLink_link_kinds
{
public:
  explicit Init_StructuredLink_link_kinds(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::StructuredLink link_kinds(::environment_model_msgs::msg::StructuredLink::_link_kinds_type arg)
  {
    msg_.link_kinds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_need_revert
{
public:
  explicit Init_StructuredLink_need_revert(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_link_kinds need_revert(::environment_model_msgs::msg::StructuredLink::_need_revert_type arg)
  {
    msg_.need_revert = std::move(arg);
    return Init_StructuredLink_link_kinds(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_is_on_routing
{
public:
  explicit Init_StructuredLink_is_on_routing(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_need_revert is_on_routing(::environment_model_msgs::msg::StructuredLink::_is_on_routing_type arg)
  {
    msg_.is_on_routing = std::move(arg);
    return Init_StructuredLink_need_revert(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_guidances
{
public:
  explicit Init_StructuredLink_guidances(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_is_on_routing guidances(::environment_model_msgs::msg::StructuredLink::_guidances_type arg)
  {
    msg_.guidances = std::move(arg);
    return Init_StructuredLink_is_on_routing(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_relationship_with_junction
{
public:
  explicit Init_StructuredLink_relationship_with_junction(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_guidances relationship_with_junction(::environment_model_msgs::msg::StructuredLink::_relationship_with_junction_type arg)
  {
    msg_.relationship_with_junction = std::move(arg);
    return Init_StructuredLink_guidances(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_lane_num_e2s
{
public:
  explicit Init_StructuredLink_lane_num_e2s(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_relationship_with_junction lane_num_e2s(::environment_model_msgs::msg::StructuredLink::_lane_num_e2s_type arg)
  {
    msg_.lane_num_e2s = std::move(arg);
    return Init_StructuredLink_relationship_with_junction(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_lane_num_s2e
{
public:
  explicit Init_StructuredLink_lane_num_s2e(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_lane_num_e2s lane_num_s2e(::environment_model_msgs::msg::StructuredLink::_lane_num_s2e_type arg)
  {
    msg_.lane_num_s2e = std::move(arg);
    return Init_StructuredLink_lane_num_e2s(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_lane_num
{
public:
  explicit Init_StructuredLink_lane_num(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_lane_num_s2e lane_num(::environment_model_msgs::msg::StructuredLink::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_StructuredLink_lane_num_s2e(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_coverage_status
{
public:
  explicit Init_StructuredLink_coverage_status(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_lane_num coverage_status(::environment_model_msgs::msg::StructuredLink::_coverage_status_type arg)
  {
    msg_.coverage_status = std::move(arg);
    return Init_StructuredLink_lane_num(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_speed_limit_e2s
{
public:
  explicit Init_StructuredLink_speed_limit_e2s(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_coverage_status speed_limit_e2s(::environment_model_msgs::msg::StructuredLink::_speed_limit_e2s_type arg)
  {
    msg_.speed_limit_e2s = std::move(arg);
    return Init_StructuredLink_coverage_status(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_speed_limit_s2e
{
public:
  explicit Init_StructuredLink_speed_limit_s2e(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_speed_limit_e2s speed_limit_s2e(::environment_model_msgs::msg::StructuredLink::_speed_limit_s2e_type arg)
  {
    msg_.speed_limit_s2e = std::move(arg);
    return Init_StructuredLink_speed_limit_e2s(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_length
{
public:
  explicit Init_StructuredLink_length(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_speed_limit_s2e length(::environment_model_msgs::msg::StructuredLink::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_StructuredLink_speed_limit_s2e(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_direction
{
public:
  explicit Init_StructuredLink_direction(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_length direction(::environment_model_msgs::msg::StructuredLink::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_StructuredLink_length(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_points
{
public:
  explicit Init_StructuredLink_points(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_direction points(::environment_model_msgs::msg::StructuredLink::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_StructuredLink_direction(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_feature_point_ids
{
public:
  explicit Init_StructuredLink_feature_point_ids(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_points feature_point_ids(::environment_model_msgs::msg::StructuredLink::_feature_point_ids_type arg)
  {
    msg_.feature_point_ids = std::move(arg);
    return Init_StructuredLink_points(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_succ_ids
{
public:
  explicit Init_StructuredLink_succ_ids(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_feature_point_ids succ_ids(::environment_model_msgs::msg::StructuredLink::_succ_ids_type arg)
  {
    msg_.succ_ids = std::move(arg);
    return Init_StructuredLink_feature_point_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_prev_ids
{
public:
  explicit Init_StructuredLink_prev_ids(::environment_model_msgs::msg::StructuredLink & msg)
  : msg_(msg)
  {}
  Init_StructuredLink_succ_ids prev_ids(::environment_model_msgs::msg::StructuredLink::_prev_ids_type arg)
  {
    msg_.prev_ids = std::move(arg);
    return Init_StructuredLink_succ_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

class Init_StructuredLink_id
{
public:
  Init_StructuredLink_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StructuredLink_prev_ids id(::environment_model_msgs::msg::StructuredLink::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_StructuredLink_prev_ids(msg_);
  }

private:
  ::environment_model_msgs::msg::StructuredLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::StructuredLink>()
{
  return environment_model_msgs::msg::builder::Init_StructuredLink_id();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__BUILDER_HPP_
