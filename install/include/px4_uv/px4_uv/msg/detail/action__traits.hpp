// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_uv:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__ACTION__TRAITS_HPP_
#define PX4_UV__MSG__DETAIL__ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_uv/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'setpoint'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace px4_uv
{

namespace msg
{

inline void to_flow_style_yaml(
  const Action & msg,
  std::ostream & out)
{
  out << "{";
  // member: agent_id
  {
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: setpoint
  {
    out << "setpoint: ";
    to_flow_style_yaml(msg.setpoint, out);
    out << ", ";
  }

  // member: param1
  {
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << ", ";
  }

  // member: param2
  {
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << ", ";
  }

  // member: param3
  {
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << ", ";
  }

  // member: param4
  {
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
    out << ", ";
  }

  // member: param5
  {
    out << "param5: ";
    rosidl_generator_traits::value_to_yaml(msg.param5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "setpoint:\n";
    to_block_style_yaml(msg.setpoint, out, indentation + 2);
  }

  // member: param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << "\n";
  }

  // member: param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << "\n";
  }

  // member: param3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << "\n";
  }

  // member: param4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
    out << "\n";
  }

  // member: param5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param5: ";
    rosidl_generator_traits::value_to_yaml(msg.param5, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action & msg, bool use_flow_style = false)
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
  const px4_uv::msg::Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_uv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_uv::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_uv::msg::Action & msg)
{
  return px4_uv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_uv::msg::Action>()
{
  return "px4_uv::msg::Action";
}

template<>
inline const char * name<px4_uv::msg::Action>()
{
  return "px4_uv/msg/Action";
}

template<>
struct has_fixed_size<px4_uv::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<px4_uv::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<px4_uv::msg::Action>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_UV__MSG__DETAIL__ACTION__TRAITS_HPP_
