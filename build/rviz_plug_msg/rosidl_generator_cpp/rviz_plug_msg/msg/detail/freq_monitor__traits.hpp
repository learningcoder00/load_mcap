// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__TRAITS_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_plug_msg/msg/detail/freq_monitor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rviz_plug_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const FreqMonitor & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: valid_length
  {
    out << "valid_length: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_length, out);
    out << ", ";
  }

  // member: topic_names
  {
    if (msg.topic_names.size() == 0) {
      out << "topic_names: []";
    } else {
      out << "topic_names: [";
      size_t pending_items = msg.topic_names.size();
      for (auto item : msg.topic_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: freqs
  {
    if (msg.freqs.size() == 0) {
      out << "freqs: []";
    } else {
      out << "freqs: [";
      size_t pending_items = msg.freqs.size();
      for (auto item : msg.freqs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: min_thresholds
  {
    if (msg.min_thresholds.size() == 0) {
      out << "min_thresholds: []";
    } else {
      out << "min_thresholds: [";
      size_t pending_items = msg.min_thresholds.size();
      for (auto item : msg.min_thresholds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_thresholds
  {
    if (msg.max_thresholds.size() == 0) {
      out << "max_thresholds: []";
    } else {
      out << "max_thresholds: [";
      size_t pending_items = msg.max_thresholds.size();
      for (auto item : msg.max_thresholds) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const FreqMonitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: valid_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_length: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_length, out);
    out << "\n";
  }

  // member: topic_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topic_names.size() == 0) {
      out << "topic_names: []\n";
    } else {
      out << "topic_names:\n";
      for (auto item : msg.topic_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: freqs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.freqs.size() == 0) {
      out << "freqs: []\n";
    } else {
      out << "freqs:\n";
      for (auto item : msg.freqs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: min_thresholds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.min_thresholds.size() == 0) {
      out << "min_thresholds: []\n";
    } else {
      out << "min_thresholds:\n";
      for (auto item : msg.min_thresholds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_thresholds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_thresholds.size() == 0) {
      out << "max_thresholds: []\n";
    } else {
      out << "max_thresholds:\n";
      for (auto item : msg.max_thresholds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FreqMonitor & msg, bool use_flow_style = false)
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

}  // namespace rviz_plug_msg

namespace rosidl_generator_traits
{

[[deprecated("use rviz_plug_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rviz_plug_msg::msg::FreqMonitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_plug_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_plug_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rviz_plug_msg::msg::FreqMonitor & msg)
{
  return rviz_plug_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_plug_msg::msg::FreqMonitor>()
{
  return "rviz_plug_msg::msg::FreqMonitor";
}

template<>
inline const char * name<rviz_plug_msg::msg::FreqMonitor>()
{
  return "rviz_plug_msg/msg/FreqMonitor";
}

template<>
struct has_fixed_size<rviz_plug_msg::msg::FreqMonitor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rviz_plug_msg::msg::FreqMonitor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rviz_plug_msg::msg::FreqMonitor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__TRAITS_HPP_
