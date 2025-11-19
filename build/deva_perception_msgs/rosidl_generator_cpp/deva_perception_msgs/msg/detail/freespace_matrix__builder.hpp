// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/FreespaceMatrix.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_MATRIX__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_MATRIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/freespace_matrix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_FreespaceMatrix_orientation
{
public:
  explicit Init_FreespaceMatrix_orientation(::deva_perception_msgs::msg::FreespaceMatrix & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::FreespaceMatrix orientation(::deva_perception_msgs::msg::FreespaceMatrix::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespaceMatrix msg_;
};

class Init_FreespaceMatrix_position
{
public:
  explicit Init_FreespaceMatrix_position(::deva_perception_msgs::msg::FreespaceMatrix & msg)
  : msg_(msg)
  {}
  Init_FreespaceMatrix_orientation position(::deva_perception_msgs::msg::FreespaceMatrix::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_FreespaceMatrix_orientation(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespaceMatrix msg_;
};

class Init_FreespaceMatrix_freespace_matrix
{
public:
  explicit Init_FreespaceMatrix_freespace_matrix(::deva_perception_msgs::msg::FreespaceMatrix & msg)
  : msg_(msg)
  {}
  Init_FreespaceMatrix_position freespace_matrix(::deva_perception_msgs::msg::FreespaceMatrix::_freespace_matrix_type arg)
  {
    msg_.freespace_matrix = std::move(arg);
    return Init_FreespaceMatrix_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespaceMatrix msg_;
};

class Init_FreespaceMatrix_header
{
public:
  Init_FreespaceMatrix_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FreespaceMatrix_freespace_matrix header(::deva_perception_msgs::msg::FreespaceMatrix::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FreespaceMatrix_freespace_matrix(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespaceMatrix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::FreespaceMatrix>()
{
  return deva_perception_msgs::msg::builder::Init_FreespaceMatrix_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_MATRIX__BUILDER_HPP_
