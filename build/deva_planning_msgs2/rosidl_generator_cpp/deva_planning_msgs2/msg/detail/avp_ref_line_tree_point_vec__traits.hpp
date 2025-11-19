// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/AvpRefLineTreePointVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point_vec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vec'
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpRefLineTreePointVec & msg,
  std::ostream & out)
{
  out << "{";
  // member: vec
  {
    if (msg.vec.size() == 0) {
      out << "vec: []";
    } else {
      out << "vec: [";
      size_t pending_items = msg.vec.size();
      for (auto item : msg.vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvpRefLineTreePointVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vec.size() == 0) {
      out << "vec: []\n";
    } else {
      out << "vec:\n";
      for (auto item : msg.vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpRefLineTreePointVec & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::AvpRefLineTreePointVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::AvpRefLineTreePointVec & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::AvpRefLineTreePointVec>()
{
  return "deva_planning_msgs2::msg::AvpRefLineTreePointVec";
}

template<>
inline const char * name<deva_planning_msgs2::msg::AvpRefLineTreePointVec>()
{
  return "deva_planning_msgs2/msg/AvpRefLineTreePointVec";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::AvpRefLineTreePointVec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::AvpRefLineTreePointVec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::AvpRefLineTreePointVec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__TRAITS_HPP_
