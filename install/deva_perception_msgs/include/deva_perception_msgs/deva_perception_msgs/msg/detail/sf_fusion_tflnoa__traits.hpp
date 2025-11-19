// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'region'
// Member 'f120_region'
// Member 'f30_region'
#include "deva_perception_msgs/msg/detail/traffic_region__traits.hpp"
// Member 'tflquadranglevcs'
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__traits.hpp"
// Member 'tflquadrangleimg'
#include "deva_perception_msgs/msg/detail/quadrangle_img__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionTFLNOA & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    rosidl_generator_traits::value_to_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: relevancy
  {
    out << "relevancy: ";
    rosidl_generator_traits::value_to_yaml(msg.relevancy, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: cycle_time
  {
    out << "cycle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_time, out);
    out << ", ";
  }

  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << ", ";
  }

  // member: confi
  {
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << ", ";
  }

  // member: flashstatus
  {
    out << "flashstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.flashstatus, out);
    out << ", ";
  }

  // member: background
  {
    out << "background: ";
    rosidl_generator_traits::value_to_yaml(msg.background, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: poslgt
  {
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << ", ";
  }

  // member: poslat
  {
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: region
  {
    out << "region: ";
    to_flow_style_yaml(msg.region, out);
    out << ", ";
  }

  // member: tflquadranglevcs
  {
    out << "tflquadranglevcs: ";
    to_flow_style_yaml(msg.tflquadranglevcs, out);
    out << ", ";
  }

  // member: tflquadrangleimg
  {
    out << "tflquadrangleimg: ";
    to_flow_style_yaml(msg.tflquadrangleimg, out);
    out << ", ";
  }

  // member: utmx
  {
    out << "utmx: ";
    rosidl_generator_traits::value_to_yaml(msg.utmx, out);
    out << ", ";
  }

  // member: utmy
  {
    out << "utmy: ";
    rosidl_generator_traits::value_to_yaml(msg.utmy, out);
    out << ", ";
  }

  // member: utmz
  {
    out << "utmz: ";
    rosidl_generator_traits::value_to_yaml(msg.utmz, out);
    out << ", ";
  }

  // member: type_list
  {
    if (msg.type_list.size() == 0) {
      out << "type_list: []";
    } else {
      out << "type_list: [";
      size_t pending_items = msg.type_list.size();
      for (auto item : msg.type_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: color_list
  {
    if (msg.color_list.size() == 0) {
      out << "color_list: []";
    } else {
      out << "color_list: [";
      size_t pending_items = msg.color_list.size();
      for (auto item : msg.color_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: blocked
  {
    out << "blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.blocked, out);
    out << ", ";
  }

  // member: has_count_down
  {
    out << "has_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.has_count_down, out);
    out << ", ";
  }

  // member: light_num
  {
    out << "light_num: ";
    rosidl_generator_traits::value_to_yaml(msg.light_num, out);
    out << ", ";
  }

  // member: focus
  {
    out << "focus: ";
    rosidl_generator_traits::value_to_yaml(msg.focus, out);
    out << ", ";
  }

  // member: pole
  {
    out << "pole: ";
    rosidl_generator_traits::value_to_yaml(msg.pole, out);
    out << ", ";
  }

  // member: sync_from_track_id
  {
    out << "sync_from_track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_from_track_id, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: f120_region
  {
    out << "f120_region: ";
    to_flow_style_yaml(msg.f120_region, out);
    out << ", ";
  }

  // member: f30_region
  {
    out << "f30_region: ";
    to_flow_style_yaml(msg.f30_region, out);
    out << ", ";
  }

  // member: i_back1
  {
    out << "i_back1: ";
    rosidl_generator_traits::value_to_yaml(msg.i_back1, out);
    out << ", ";
  }

  // member: i_back2
  {
    out << "i_back2: ";
    rosidl_generator_traits::value_to_yaml(msg.i_back2, out);
    out << ", ";
  }

  // member: i_back3
  {
    out << "i_back3: ";
    rosidl_generator_traits::value_to_yaml(msg.i_back3, out);
    out << ", ";
  }

  // member: f_back1
  {
    out << "f_back1: ";
    rosidl_generator_traits::value_to_yaml(msg.f_back1, out);
    out << ", ";
  }

  // member: f_back2
  {
    out << "f_back2: ";
    rosidl_generator_traits::value_to_yaml(msg.f_back2, out);
    out << ", ";
  }

  // member: f_back3
  {
    out << "f_back3: ";
    rosidl_generator_traits::value_to_yaml(msg.f_back3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionTFLNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime: ";
    rosidl_generator_traits::value_to_yaml(msg.lifetime, out);
    out << "\n";
  }

  // member: relevancy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relevancy: ";
    rosidl_generator_traits::value_to_yaml(msg.relevancy, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: cycle_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_time, out);
    out << "\n";
  }

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: confi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << "\n";
  }

  // member: flashstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flashstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.flashstatus, out);
    out << "\n";
  }

  // member: background
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "background: ";
    rosidl_generator_traits::value_to_yaml(msg.background, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: poslgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << "\n";
  }

  // member: poslat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region:\n";
    to_block_style_yaml(msg.region, out, indentation + 2);
  }

  // member: tflquadranglevcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tflquadranglevcs:\n";
    to_block_style_yaml(msg.tflquadranglevcs, out, indentation + 2);
  }

  // member: tflquadrangleimg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tflquadrangleimg:\n";
    to_block_style_yaml(msg.tflquadrangleimg, out, indentation + 2);
  }

  // member: utmx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utmx: ";
    rosidl_generator_traits::value_to_yaml(msg.utmx, out);
    out << "\n";
  }

  // member: utmy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utmy: ";
    rosidl_generator_traits::value_to_yaml(msg.utmy, out);
    out << "\n";
  }

  // member: utmz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utmz: ";
    rosidl_generator_traits::value_to_yaml(msg.utmz, out);
    out << "\n";
  }

  // member: type_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.type_list.size() == 0) {
      out << "type_list: []\n";
    } else {
      out << "type_list:\n";
      for (auto item : msg.type_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: color_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.color_list.size() == 0) {
      out << "color_list: []\n";
    } else {
      out << "color_list:\n";
      for (auto item : msg.color_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.blocked, out);
    out << "\n";
  }

  // member: has_count_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.has_count_down, out);
    out << "\n";
  }

  // member: light_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_num: ";
    rosidl_generator_traits::value_to_yaml(msg.light_num, out);
    out << "\n";
  }

  // member: focus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus: ";
    rosidl_generator_traits::value_to_yaml(msg.focus, out);
    out << "\n";
  }

  // member: pole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pole: ";
    rosidl_generator_traits::value_to_yaml(msg.pole, out);
    out << "\n";
  }

  // member: sync_from_track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_from_track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_from_track_id, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: f120_region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f120_region:\n";
    to_block_style_yaml(msg.f120_region, out, indentation + 2);
  }

  // member: f30_region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f30_region:\n";
    to_block_style_yaml(msg.f30_region, out, indentation + 2);
  }

  // member: i_back1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_back1: ";
    rosidl_generator_traits::value_to_yaml(msg.i_back1, out);
    out << "\n";
  }

  // member: i_back2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_back2: ";
    rosidl_generator_traits::value_to_yaml(msg.i_back2, out);
    out << "\n";
  }

  // member: i_back3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_back3: ";
    rosidl_generator_traits::value_to_yaml(msg.i_back3, out);
    out << "\n";
  }

  // member: f_back1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_back1: ";
    rosidl_generator_traits::value_to_yaml(msg.f_back1, out);
    out << "\n";
  }

  // member: f_back2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_back2: ";
    rosidl_generator_traits::value_to_yaml(msg.f_back2, out);
    out << "\n";
  }

  // member: f_back3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_back3: ";
    rosidl_generator_traits::value_to_yaml(msg.f_back3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionTFLNOA & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::SFFusionTFLNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::SFFusionTFLNOA & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::SFFusionTFLNOA>()
{
  return "deva_perception_msgs::msg::SFFusionTFLNOA";
}

template<>
inline const char * name<deva_perception_msgs::msg::SFFusionTFLNOA>()
{
  return "deva_perception_msgs/msg/SFFusionTFLNOA";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::SFFusionTFLNOA>
  : std::integral_constant<bool, has_fixed_size<deva_perception_msgs::msg::QuadrangleImg>::value && has_fixed_size<deva_perception_msgs::msg::QuadrangleVcs>::value && has_fixed_size<deva_perception_msgs::msg::TrafficRegion>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::SFFusionTFLNOA>
  : std::integral_constant<bool, has_bounded_size<deva_perception_msgs::msg::QuadrangleImg>::value && has_bounded_size<deva_perception_msgs::msg::QuadrangleVcs>::value && has_bounded_size<deva_perception_msgs::msg::TrafficRegion>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::SFFusionTFLNOA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__TRAITS_HPP_
