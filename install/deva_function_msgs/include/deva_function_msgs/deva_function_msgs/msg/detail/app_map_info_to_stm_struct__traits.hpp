// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AppMapInfoToStmStruct & msg,
  std::ostream & out)
{
  out << "{";
  // member: route_id
  {
    out << "route_id: ";
    rosidl_generator_traits::value_to_yaml(msg.route_id, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_upload_use_map_type2
  {
    out << "aut_valt_prkg_map_upload_use_map_type2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_type2, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_upload_use_map_list1
  {
    out << "aut_valt_prkg_map_upload_use_map_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list1, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_upload_use_map_list2
  {
    out << "aut_valt_prkg_map_upload_use_map_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list2, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_upload_use_map_list3
  {
    out << "aut_valt_prkg_map_upload_use_map_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list3, out);
    out << ", ";
  }

  // member: aut_valt_prkg_map_upload_use_map_list4
  {
    out << "aut_valt_prkg_map_upload_use_map_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AppMapInfoToStmStruct & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: route_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_id: ";
    rosidl_generator_traits::value_to_yaml(msg.route_id, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_upload_use_map_type2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_upload_use_map_type2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_type2, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_upload_use_map_list1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_upload_use_map_list1: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list1, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_upload_use_map_list2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_upload_use_map_list2: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list2, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_upload_use_map_list3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_upload_use_map_list3: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list3, out);
    out << "\n";
  }

  // member: aut_valt_prkg_map_upload_use_map_list4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aut_valt_prkg_map_upload_use_map_list4: ";
    rosidl_generator_traits::value_to_yaml(msg.aut_valt_prkg_map_upload_use_map_list4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AppMapInfoToStmStruct & msg, bool use_flow_style = false)
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

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::AppMapInfoToStmStruct & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::AppMapInfoToStmStruct & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::AppMapInfoToStmStruct>()
{
  return "deva_function_msgs::msg::AppMapInfoToStmStruct";
}

template<>
inline const char * name<deva_function_msgs::msg::AppMapInfoToStmStruct>()
{
  return "deva_function_msgs/msg/AppMapInfoToStmStruct";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::AppMapInfoToStmStruct>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::AppMapInfoToStmStruct>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_function_msgs::msg::AppMapInfoToStmStruct>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__TRAITS_HPP_
