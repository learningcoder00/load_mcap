// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/PairStringDouble.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/pair_string_double__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_PairStringDouble_second
{
public:
  explicit Init_PairStringDouble_second(::environment_model_msgs::msg::PairStringDouble & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::PairStringDouble second(::environment_model_msgs::msg::PairStringDouble::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::PairStringDouble msg_;
};

class Init_PairStringDouble_first
{
public:
  Init_PairStringDouble_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PairStringDouble_second first(::environment_model_msgs::msg::PairStringDouble::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_PairStringDouble_second(msg_);
  }

private:
  ::environment_model_msgs::msg::PairStringDouble msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::PairStringDouble>()
{
  return environment_model_msgs::msg::builder::Init_PairStringDouble_first();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__BUILDER_HPP_
