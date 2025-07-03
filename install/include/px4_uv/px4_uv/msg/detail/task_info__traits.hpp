// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_uv:msg/TaskInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK_INFO__TRAITS_HPP_
#define PX4_UV__MSG__DETAIL__TASK_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_uv/msg/detail/task_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'actions'
#include "px4_uv/msg/detail/action__traits.hpp"

namespace px4_uv
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: task_description
  {
    out << "task_description: ";
    rosidl_generator_traits::value_to_yaml(msg.task_description, out);
    out << ", ";
  }

  // member: target_type
  {
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: required_payload_type
  {
    out << "required_payload_type: ";
    rosidl_generator_traits::value_to_yaml(msg.required_payload_type, out);
    out << ", ";
  }

  // member: task_status
  {
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << ", ";
  }

  // member: task_type
  {
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: actions
  {
    if (msg.actions.size() == 0) {
      out << "actions: []";
    } else {
      out << "actions: [";
      size_t pending_items = msg.actions.size();
      for (auto item : msg.actions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reward
  {
    out << "reward: ";
    rosidl_generator_traits::value_to_yaml(msg.reward, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: task_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_description: ";
    rosidl_generator_traits::value_to_yaml(msg.task_description, out);
    out << "\n";
  }

  // member: target_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << "\n";
  }

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: required_payload_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "required_payload_type: ";
    rosidl_generator_traits::value_to_yaml(msg.required_payload_type, out);
    out << "\n";
  }

  // member: task_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << "\n";
  }

  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << "\n";
  }

  // member: actions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actions.size() == 0) {
      out << "actions: []\n";
    } else {
      out << "actions:\n";
      for (auto item : msg.actions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: reward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reward: ";
    rosidl_generator_traits::value_to_yaml(msg.reward, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskInfo & msg, bool use_flow_style = false)
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
  const px4_uv::msg::TaskInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_uv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_uv::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_uv::msg::TaskInfo & msg)
{
  return px4_uv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_uv::msg::TaskInfo>()
{
  return "px4_uv::msg::TaskInfo";
}

template<>
inline const char * name<px4_uv::msg::TaskInfo>()
{
  return "px4_uv/msg/TaskInfo";
}

template<>
struct has_fixed_size<px4_uv::msg::TaskInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_uv::msg::TaskInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_uv::msg::TaskInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_UV__MSG__DETAIL__TASK_INFO__TRAITS_HPP_
