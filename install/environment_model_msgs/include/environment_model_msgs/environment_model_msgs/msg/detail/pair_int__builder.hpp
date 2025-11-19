// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/PairInt.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_INT__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/pair_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_PairInt_second
{
public:
  explicit Init_PairInt_second(::environment_model_msgs::msg::PairInt & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::PairInt second(::environment_model_msgs::msg::PairInt::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::PairInt msg_;
};

class Init_PairInt_first
{
public:
  Init_PairInt_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PairInt_second first(::environment_model_msgs::msg::PairInt::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_PairInt_second(msg_);
  }

private:
  ::environment_model_msgs::msg::PairInt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::PairInt>()
{
  return environment_model_msgs::msg::builder::Init_PairInt_first();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_INT__BUILDER_HPP_
