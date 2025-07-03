// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_uv:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK__BUILDER_HPP_
#define PX4_UV__MSG__DETAIL__TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_uv/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_uv
{

namespace msg
{

namespace builder
{

class Init_Task_actions
{
public:
  explicit Init_Task_actions(::px4_uv::msg::Task & msg)
  : msg_(msg)
  {}
  ::px4_uv::msg::Task actions(::px4_uv::msg::Task::_actions_type arg)
  {
    msg_.actions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_uv::msg::Task msg_;
};

class Init_Task_target_type
{
public:
  explicit Init_Task_target_type(::px4_uv::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_actions target_type(::px4_uv::msg::Task::_target_type_type arg)
  {
    msg_.target_type = std::move(arg);
    return Init_Task_actions(msg_);
  }

private:
  ::px4_uv::msg::Task msg_;
};

class Init_Task_task_id
{
public:
  Init_Task_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_target_type task_id(::px4_uv::msg::Task::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_Task_target_type(msg_);
  }

private:
  ::px4_uv::msg::Task msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_uv::msg::Task>()
{
  return px4_uv::msg::builder::Init_Task_task_id();
}

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__TASK__BUILDER_HPP_
