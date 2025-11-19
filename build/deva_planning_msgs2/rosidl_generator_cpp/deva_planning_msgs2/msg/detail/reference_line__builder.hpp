// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/ReferenceLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINE__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/reference_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_ReferenceLine_turn_scenario
{
public:
  explicit Init_ReferenceLine_turn_scenario(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::ReferenceLine turn_scenario(::deva_planning_msgs2::msg::ReferenceLine::_turn_scenario_type arg)
  {
    msg_.turn_scenario = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_effic_score
{
public:
  explicit Init_ReferenceLine_effic_score(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_turn_scenario effic_score(::deva_planning_msgs2::msg::ReferenceLine::_effic_score_type arg)
  {
    msg_.effic_score = std::move(arg);
    return Init_ReferenceLine_turn_scenario(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_navi_score
{
public:
  explicit Init_ReferenceLine_navi_score(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_effic_score navi_score(::deva_planning_msgs2::msg::ReferenceLine::_navi_score_type arg)
  {
    msg_.navi_score = std::move(arg);
    return Init_ReferenceLine_effic_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_nearest_cipv_ids
{
public:
  explicit Init_ReferenceLine_nearest_cipv_ids(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_navi_score nearest_cipv_ids(::deva_planning_msgs2::msg::ReferenceLine::_nearest_cipv_ids_type arg)
  {
    msg_.nearest_cipv_ids = std::move(arg);
    return Init_ReferenceLine_navi_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_cutin_cipv_ids
{
public:
  explicit Init_ReferenceLine_cutin_cipv_ids(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_nearest_cipv_ids cutin_cipv_ids(::deva_planning_msgs2::msg::ReferenceLine::_cutin_cipv_ids_type arg)
  {
    msg_.cutin_cipv_ids = std::move(arg);
    return Init_ReferenceLine_nearest_cipv_ids(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_cipv_ids
{
public:
  explicit Init_ReferenceLine_cipv_ids(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_cutin_cipv_ids cipv_ids(::deva_planning_msgs2::msg::ReferenceLine::_cipv_ids_type arg)
  {
    msg_.cipv_ids = std::move(arg);
    return Init_ReferenceLine_cutin_cipv_ids(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_right_line_nums
{
public:
  explicit Init_ReferenceLine_right_line_nums(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_cipv_ids right_line_nums(::deva_planning_msgs2::msg::ReferenceLine::_right_line_nums_type arg)
  {
    msg_.right_line_nums = std::move(arg);
    return Init_ReferenceLine_cipv_ids(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_left_line_nums
{
public:
  explicit Init_ReferenceLine_left_line_nums(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_right_line_nums left_line_nums(::deva_planning_msgs2::msg::ReferenceLine::_left_line_nums_type arg)
  {
    msg_.left_line_nums = std::move(arg);
    return Init_ReferenceLine_right_line_nums(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_line_is_virtual
{
public:
  explicit Init_ReferenceLine_line_is_virtual(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_left_line_nums line_is_virtual(::deva_planning_msgs2::msg::ReferenceLine::_line_is_virtual_type arg)
  {
    msg_.line_is_virtual = std::move(arg);
    return Init_ReferenceLine_left_line_nums(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_line_is_model
{
public:
  explicit Init_ReferenceLine_line_is_model(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_line_is_virtual line_is_model(::deva_planning_msgs2::msg::ReferenceLine::_line_is_model_type arg)
  {
    msg_.line_is_model = std::move(arg);
    return Init_ReferenceLine_line_is_virtual(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_reference_line_type
{
public:
  explicit Init_ReferenceLine_reference_line_type(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_line_is_model reference_line_type(::deva_planning_msgs2::msg::ReferenceLine::_reference_line_type_type arg)
  {
    msg_.reference_line_type = std::move(arg);
    return Init_ReferenceLine_line_is_model(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_merge_point
{
public:
  explicit Init_ReferenceLine_merge_point(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_reference_line_type merge_point(::deva_planning_msgs2::msg::ReferenceLine::_merge_point_type arg)
  {
    msg_.merge_point = std::move(arg);
    return Init_ReferenceLine_reference_line_type(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_original_merge_point
{
public:
  explicit Init_ReferenceLine_original_merge_point(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_merge_point original_merge_point(::deva_planning_msgs2::msg::ReferenceLine::_original_merge_point_type arg)
  {
    msg_.original_merge_point = std::move(arg);
    return Init_ReferenceLine_merge_point(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_line_id
{
public:
  explicit Init_ReferenceLine_line_id(::deva_planning_msgs2::msg::ReferenceLine & msg)
  : msg_(msg)
  {}
  Init_ReferenceLine_original_merge_point line_id(::deva_planning_msgs2::msg::ReferenceLine::_line_id_type arg)
  {
    msg_.line_id = std::move(arg);
    return Init_ReferenceLine_original_merge_point(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

class Init_ReferenceLine_reference_line
{
public:
  Init_ReferenceLine_reference_line()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceLine_line_id reference_line(::deva_planning_msgs2::msg::ReferenceLine::_reference_line_type arg)
  {
    msg_.reference_line = std::move(arg);
    return Init_ReferenceLine_line_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::ReferenceLine>()
{
  return deva_planning_msgs2::msg::builder::Init_ReferenceLine_reference_line();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINE__BUILDER_HPP_
