// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_uv:msg/UvState.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__UV_STATE__BUILDER_HPP_
#define PX4_UV__MSG__DETAIL__UV_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_uv/msg/detail/uv_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_uv
{

namespace msg
{

namespace builder
{

class Init_UvState_status
{
public:
  explicit Init_UvState_status(::px4_uv::msg::UvState & msg)
  : msg_(msg)
  {}
  ::px4_uv::msg::UvState status(::px4_uv::msg::UvState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

class Init_UvState_battery
{
public:
  explicit Init_UvState_battery(::px4_uv::msg::UvState & msg)
  : msg_(msg)
  {}
  Init_UvState_status battery(::px4_uv::msg::UvState::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_UvState_status(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

class Init_UvState_ref_alt
{
public:
  explicit Init_UvState_ref_alt(::px4_uv::msg::UvState & msg)
  : msg_(msg)
  {}
  Init_UvState_battery ref_alt(::px4_uv::msg::UvState::_ref_alt_type arg)
  {
    msg_.ref_alt = std::move(arg);
    return Init_UvState_battery(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

class Init_UvState_ref_lon
{
public:
  explicit Init_UvState_ref_lon(::px4_uv::msg::UvState & msg)
  : msg_(msg)
  {}
  Init_UvState_ref_alt ref_lon(::px4_uv::msg::UvState::_ref_lon_type arg)
  {
    msg_.ref_lon = std::move(arg);
    return Init_UvState_ref_alt(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

class Init_UvState_ref_lat
{
public:
  explicit Init_UvState_ref_lat(::px4_uv::msg::UvState & msg)
  : msg_(msg)
  {}
  Init_UvState_ref_lon ref_lat(::px4_uv::msg::UvState::_ref_lat_type arg)
  {
    msg_.ref_lat = std::move(arg);
    return Init_UvState_ref_lon(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

class Init_UvState_current_yaw
{
public:
  explicit Init_UvState_current_yaw(::px4_uv::msg::UvState & msg)
  : msg_(msg)
  {}
  Init_UvState_ref_lat current_yaw(::px4_uv::msg::UvState::_current_yaw_type arg)
  {
    msg_.current_yaw = std::move(arg);
    return Init_UvState_ref_lat(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

class Init_UvState_vel
{
public:
  explicit Init_UvState_vel(::px4_uv::msg::UvState & msg)
  : msg_(msg)
  {}
  Init_UvState_current_yaw vel(::px4_uv::msg::UvState::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_UvState_current_yaw(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

class Init_UvState_pos
{
public:
  Init_UvState_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UvState_vel pos(::px4_uv::msg::UvState::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_UvState_vel(msg_);
  }

private:
  ::px4_uv::msg::UvState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_uv::msg::UvState>()
{
  return px4_uv::msg::builder::Init_UvState_pos();
}

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__UV_STATE__BUILDER_HPP_
