// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_uv:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_
#define PX4_UV__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_uv/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tasks'
#include "px4_uv/msg/detail/task_info__traits.hpp"

namespace px4_uv
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: leftup_lat
  {
    out << "leftup_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.leftup_lat, out);
    out << ", ";
  }

  // member: leftup_lon
  {
    out << "leftup_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.leftup_lon, out);
    out << ", ";
  }

  // member: rightdown_lat
  {
    out << "rightdown_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdown_lat, out);
    out << ", ";
  }

  // member: rightdown_lon
  {
    out << "rightdown_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdown_lon, out);
    out << ", ";
  }

  // member: max_height
  {
    out << "max_height: ";
    rosidl_generator_traits::value_to_yaml(msg.max_height, out);
    out << ", ";
  }

  // member: tasks
  {
    if (msg.tasks.size() == 0) {
      out << "tasks: []";
    } else {
      out << "tasks: [";
      size_t pending_items = msg.tasks.size();
      for (auto item : msg.tasks) {
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
  const MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: leftup_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftup_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.leftup_lat, out);
    out << "\n";
  }

  // member: leftup_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftup_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.leftup_lon, out);
    out << "\n";
  }

  // member: rightdown_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightdown_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdown_lat, out);
    out << "\n";
  }

  // member: rightdown_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightdown_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdown_lon, out);
    out << "\n";
  }

  // member: max_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_height: ";
    rosidl_generator_traits::value_to_yaml(msg.max_height, out);
    out << "\n";
  }

  // member: tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tasks.size() == 0) {
      out << "tasks: []\n";
    } else {
      out << "tasks:\n";
      for (auto item : msg.tasks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionInfo & msg, bool use_flow_style = false)
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

}  // namespace px4_uv

namespace rosidl_generator_traits
{

[[deprecated("use px4_uv::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_uv::msg::MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_uv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_uv::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_uv::msg::MissionInfo & msg)
{
  return px4_uv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_uv::msg::MissionInfo>()
{
  return "px4_uv::msg::MissionInfo";
}

template<>
inline const char * name<px4_uv::msg::MissionInfo>()
{
  return "px4_uv/msg/MissionInfo";
}

template<>
struct has_fixed_size<px4_uv::msg::MissionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_uv::msg::MissionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_uv::msg::MissionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_UV__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_
