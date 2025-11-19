// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/ReferenceLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINES__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/reference_lines__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_ReferenceLines_curr_right_nums
{
public:
  explicit Init_ReferenceLines_curr_right_nums(::deva_planning_msgs2::msg::ReferenceLines & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::ReferenceLines curr_right_nums(::deva_planning_msgs2::msg::ReferenceLines::_curr_right_nums_type arg)
  {
    msg_.curr_right_nums = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

class Init_ReferenceLines_curr_left_nums
{
public:
  explicit Init_ReferenceLines_curr_left_nums(::deva_planning_msgs2::msg::ReferenceLines & msg)
  : msg_(msg)
  {}
  Init_ReferenceLines_curr_right_nums curr_left_nums(::deva_planning_msgs2::msg::ReferenceLines::_curr_left_nums_type arg)
  {
    msg_.curr_left_nums = std::move(arg);
    return Init_ReferenceLines_curr_right_nums(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

class Init_ReferenceLines_curr_line_virtual
{
public:
  explicit Init_ReferenceLines_curr_line_virtual(::deva_planning_msgs2::msg::ReferenceLines & msg)
  : msg_(msg)
  {}
  Init_ReferenceLines_curr_left_nums curr_line_virtual(::deva_planning_msgs2::msg::ReferenceLines::_curr_line_virtual_type arg)
  {
    msg_.curr_line_virtual = std::move(arg);
    return Init_ReferenceLines_curr_left_nums(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

class Init_ReferenceLines_curr_model_id
{
public:
  explicit Init_ReferenceLines_curr_model_id(::deva_planning_msgs2::msg::ReferenceLines & msg)
  : msg_(msg)
  {}
  Init_ReferenceLines_curr_line_virtual curr_model_id(::deva_planning_msgs2::msg::ReferenceLines::_curr_model_id_type arg)
  {
    msg_.curr_model_id = std::move(arg);
    return Init_ReferenceLines_curr_line_virtual(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

class Init_ReferenceLines_tar_id
{
public:
  explicit Init_ReferenceLines_tar_id(::deva_planning_msgs2::msg::ReferenceLines & msg)
  : msg_(msg)
  {}
  Init_ReferenceLines_curr_model_id tar_id(::deva_planning_msgs2::msg::ReferenceLines::_tar_id_type arg)
  {
    msg_.tar_id = std::move(arg);
    return Init_ReferenceLines_curr_model_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

class Init_ReferenceLines_curr_id
{
public:
  explicit Init_ReferenceLines_curr_id(::deva_planning_msgs2::msg::ReferenceLines & msg)
  : msg_(msg)
  {}
  Init_ReferenceLines_tar_id curr_id(::deva_planning_msgs2::msg::ReferenceLines::_curr_id_type arg)
  {
    msg_.curr_id = std::move(arg);
    return Init_ReferenceLines_tar_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

class Init_ReferenceLines_reference_lines
{
public:
  explicit Init_ReferenceLines_reference_lines(::deva_planning_msgs2::msg::ReferenceLines & msg)
  : msg_(msg)
  {}
  Init_ReferenceLines_curr_id reference_lines(::deva_planning_msgs2::msg::ReferenceLines::_reference_lines_type arg)
  {
    msg_.reference_lines = std::move(arg);
    return Init_ReferenceLines_curr_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

class Init_ReferenceLines_header
{
public:
  Init_ReferenceLines_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceLines_reference_lines header(::deva_planning_msgs2::msg::ReferenceLines::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReferenceLines_reference_lines(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReferenceLines msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::ReferenceLines>()
{
  return deva_planning_msgs2::msg::builder::Init_ReferenceLines_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINES__BUILDER_HPP_
