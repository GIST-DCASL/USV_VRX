// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_uv:msg/UvState.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__UV_STATE__TRAITS_HPP_
#define PX4_UV__MSG__DETAIL__UV_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_uv/msg/detail/uv_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pos'
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace px4_uv
{

namespace msg
{

inline void to_flow_style_yaml(
  const UvState & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    to_flow_style_yaml(msg.vel, out);
    out << ", ";
  }

  // member: current_yaw
  {
    out << "current_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_yaw, out);
    out << ", ";
  }

  // member: ref_lat
  {
    out << "ref_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lat, out);
    out << ", ";
  }

  // member: ref_lon
  {
    out << "ref_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lon, out);
    out << ", ";
  }

  // member: ref_alt
  {
    out << "ref_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_alt, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UvState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel:\n";
    to_block_style_yaml(msg.vel, out, indentation + 2);
  }

  // member: current_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.current_yaw, out);
    out << "\n";
  }

  // member: ref_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lat, out);
    out << "\n";
  }

  // member: ref_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lon, out);
    out << "\n";
  }

  // member: ref_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_alt, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UvState & msg, bool use_flow_style = false)
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
  const px4_uv::msg::UvState & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_uv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_uv::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_uv::msg::UvState & msg)
{
  return px4_uv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_uv::msg::UvState>()
{
  return "px4_uv::msg::UvState";
}

template<>
inline const char * name<px4_uv::msg::UvState>()
{
  return "px4_uv/msg/UvState";
}

template<>
struct has_fixed_size<px4_uv::msg::UvState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<px4_uv::msg::UvState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<px4_uv::msg::UvState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_UV__MSG__DETAIL__UV_STATE__TRAITS_HPP_
