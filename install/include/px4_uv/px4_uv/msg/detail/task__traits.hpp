// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_uv:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK__TRAITS_HPP_
#define PX4_UV__MSG__DETAIL__TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_uv/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'actions'
#include "px4_uv/msg/detail/action__traits.hpp"

namespace px4_uv
{

namespace msg
{

inline void to_flow_style_yaml(
  const Task & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: target_type
  {
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Task & msg,
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

  // member: target_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Task & msg, bool use_flow_style = false)
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
  const px4_uv::msg::Task & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_uv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_uv::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_uv::msg::Task & msg)
{
  return px4_uv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_uv::msg::Task>()
{
  return "px4_uv::msg::Task";
}

template<>
inline const char * name<px4_uv::msg::Task>()
{
  return "px4_uv/msg/Task";
}

template<>
struct has_fixed_size<px4_uv::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_uv::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_uv::msg::Task>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_UV__MSG__DETAIL__TASK__TRAITS_HPP_
