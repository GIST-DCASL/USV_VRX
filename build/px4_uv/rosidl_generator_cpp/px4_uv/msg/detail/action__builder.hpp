// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_uv:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__ACTION__BUILDER_HPP_
#define PX4_UV__MSG__DETAIL__ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_uv/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_uv
{

namespace msg
{

namespace builder
{

class Init_Action_param5
{
public:
  explicit Init_Action_param5(::px4_uv::msg::Action & msg)
  : msg_(msg)
  {}
  ::px4_uv::msg::Action param5(::px4_uv::msg::Action::_param5_type arg)
  {
    msg_.param5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_uv::msg::Action msg_;
};

class Init_Action_param4
{
public:
  explicit Init_Action_param4(::px4_uv::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_param5 param4(::px4_uv::msg::Action::_param4_type arg)
  {
    msg_.param4 = std::move(arg);
    return Init_Action_param5(msg_);
  }

private:
  ::px4_uv::msg::Action msg_;
};

class Init_Action_param3
{
public:
  explicit Init_Action_param3(::px4_uv::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_param4 param3(::px4_uv::msg::Action::_param3_type arg)
  {
    msg_.param3 = std::move(arg);
    return Init_Action_param4(msg_);
  }

private:
  ::px4_uv::msg::Action msg_;
};

class Init_Action_param2
{
public:
  explicit Init_Action_param2(::px4_uv::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_param3 param2(::px4_uv::msg::Action::_param2_type arg)
  {
    msg_.param2 = std::move(arg);
    return Init_Action_param3(msg_);
  }

private:
  ::px4_uv::msg::Action msg_;
};

class Init_Action_param1
{
public:
  explicit Init_Action_param1(::px4_uv::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_param2 param1(::px4_uv::msg::Action::_param1_type arg)
  {
    msg_.param1 = std::move(arg);
    return Init_Action_param2(msg_);
  }

private:
  ::px4_uv::msg::Action msg_;
};

class Init_Action_setpoint
{
public:
  explicit Init_Action_setpoint(::px4_uv::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_param1 setpoint(::px4_uv::msg::Action::_setpoint_type arg)
  {
    msg_.setpoint = std::move(arg);
    return Init_Action_param1(msg_);
  }

private:
  ::px4_uv::msg::Action msg_;
};

class Init_Action_action
{
public:
  Init_Action_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_setpoint action(::px4_uv::msg::Action::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Action_setpoint(msg_);
  }

private:
  ::px4_uv::msg::Action msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_uv::msg::Action>()
{
  return px4_uv::msg::builder::Init_Action_action();
}

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__ACTION__BUILDER_HPP_
