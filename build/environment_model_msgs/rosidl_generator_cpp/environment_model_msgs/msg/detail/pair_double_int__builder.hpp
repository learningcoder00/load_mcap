// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/PairDoubleInt.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_DOUBLE_INT__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_DOUBLE_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/pair_double_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_PairDoubleInt_second
{
public:
  explicit Init_PairDoubleInt_second(::environment_model_msgs::msg::PairDoubleInt & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::PairDoubleInt second(::environment_model_msgs::msg::PairDoubleInt::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::PairDoubleInt msg_;
};

class Init_PairDoubleInt_first
{
public:
  Init_PairDoubleInt_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PairDoubleInt_second first(::environment_model_msgs::msg::PairDoubleInt::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_PairDoubleInt_second(msg_);
  }

private:
  ::environment_model_msgs::msg::PairDoubleInt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::PairDoubleInt>()
{
  return environment_model_msgs::msg::builder::Init_PairDoubleInt_first();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_DOUBLE_INT__BUILDER_HPP_
