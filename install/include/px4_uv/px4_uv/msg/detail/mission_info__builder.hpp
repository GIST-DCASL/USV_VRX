// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_uv:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
#define PX4_UV__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_uv/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_uv
{

namespace msg
{

namespace builder
{

class Init_MissionInfo_tasks
{
public:
  explicit Init_MissionInfo_tasks(::px4_uv::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  ::px4_uv::msg::MissionInfo tasks(::px4_uv::msg::MissionInfo::_tasks_type arg)
  {
    msg_.tasks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

class Init_MissionInfo_max_height
{
public:
  explicit Init_MissionInfo_max_height(::px4_uv::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  Init_MissionInfo_tasks max_height(::px4_uv::msg::MissionInfo::_max_height_type arg)
  {
    msg_.max_height = std::move(arg);
    return Init_MissionInfo_tasks(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

class Init_MissionInfo_rightdown_lon
{
public:
  explicit Init_MissionInfo_rightdown_lon(::px4_uv::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  Init_MissionInfo_max_height rightdown_lon(::px4_uv::msg::MissionInfo::_rightdown_lon_type arg)
  {
    msg_.rightdown_lon = std::move(arg);
    return Init_MissionInfo_max_height(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

class Init_MissionInfo_rightdown_lat
{
public:
  explicit Init_MissionInfo_rightdown_lat(::px4_uv::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  Init_MissionInfo_rightdown_lon rightdown_lat(::px4_uv::msg::MissionInfo::_rightdown_lat_type arg)
  {
    msg_.rightdown_lat = std::move(arg);
    return Init_MissionInfo_rightdown_lon(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

class Init_MissionInfo_leftup_lon
{
public:
  explicit Init_MissionInfo_leftup_lon(::px4_uv::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  Init_MissionInfo_rightdown_lat leftup_lon(::px4_uv::msg::MissionInfo::_leftup_lon_type arg)
  {
    msg_.leftup_lon = std::move(arg);
    return Init_MissionInfo_rightdown_lat(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

class Init_MissionInfo_leftup_lat
{
public:
  explicit Init_MissionInfo_leftup_lat(::px4_uv::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  Init_MissionInfo_leftup_lon leftup_lat(::px4_uv::msg::MissionInfo::_leftup_lat_type arg)
  {
    msg_.leftup_lat = std::move(arg);
    return Init_MissionInfo_leftup_lon(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

class Init_MissionInfo_description
{
public:
  explicit Init_MissionInfo_description(::px4_uv::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  Init_MissionInfo_leftup_lat description(::px4_uv::msg::MissionInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_MissionInfo_leftup_lat(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

class Init_MissionInfo_mission_id
{
public:
  Init_MissionInfo_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionInfo_description mission_id(::px4_uv::msg::MissionInfo::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionInfo_description(msg_);
  }

private:
  ::px4_uv::msg::MissionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_uv::msg::MissionInfo>()
{
  return px4_uv::msg::builder::Init_MissionInfo_mission_id();
}

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
