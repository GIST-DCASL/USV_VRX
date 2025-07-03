// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_uv:msg/TaskInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK_INFO__BUILDER_HPP_
#define PX4_UV__MSG__DETAIL__TASK_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_uv/msg/detail/task_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_uv
{

namespace msg
{

namespace builder
{

class Init_TaskInfo_reward
{
public:
  explicit Init_TaskInfo_reward(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  ::px4_uv::msg::TaskInfo reward(::px4_uv::msg::TaskInfo::_reward_type arg)
  {
    msg_.reward = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_actions
{
public:
  explicit Init_TaskInfo_actions(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  Init_TaskInfo_reward actions(::px4_uv::msg::TaskInfo::_actions_type arg)
  {
    msg_.actions = std::move(arg);
    return Init_TaskInfo_reward(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_task_type
{
public:
  explicit Init_TaskInfo_task_type(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  Init_TaskInfo_actions task_type(::px4_uv::msg::TaskInfo::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_TaskInfo_actions(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_task_status
{
public:
  explicit Init_TaskInfo_task_status(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  Init_TaskInfo_task_type task_status(::px4_uv::msg::TaskInfo::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_TaskInfo_task_type(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_required_payload_type
{
public:
  explicit Init_TaskInfo_required_payload_type(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  Init_TaskInfo_task_status required_payload_type(::px4_uv::msg::TaskInfo::_required_payload_type_type arg)
  {
    msg_.required_payload_type = std::move(arg);
    return Init_TaskInfo_task_status(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_mission_id
{
public:
  explicit Init_TaskInfo_mission_id(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  Init_TaskInfo_required_payload_type mission_id(::px4_uv::msg::TaskInfo::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_TaskInfo_required_payload_type(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_target_type
{
public:
  explicit Init_TaskInfo_target_type(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  Init_TaskInfo_mission_id target_type(::px4_uv::msg::TaskInfo::_target_type_type arg)
  {
    msg_.target_type = std::move(arg);
    return Init_TaskInfo_mission_id(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_task_description
{
public:
  explicit Init_TaskInfo_task_description(::px4_uv::msg::TaskInfo & msg)
  : msg_(msg)
  {}
  Init_TaskInfo_target_type task_description(::px4_uv::msg::TaskInfo::_task_description_type arg)
  {
    msg_.task_description = std::move(arg);
    return Init_TaskInfo_target_type(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

class Init_TaskInfo_task_id
{
public:
  Init_TaskInfo_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskInfo_task_description task_id(::px4_uv::msg::TaskInfo::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskInfo_task_description(msg_);
  }

private:
  ::px4_uv::msg::TaskInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_uv::msg::TaskInfo>()
{
  return px4_uv::msg::builder::Init_TaskInfo_task_id();
}

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__TASK_INFO__BUILDER_HPP_
