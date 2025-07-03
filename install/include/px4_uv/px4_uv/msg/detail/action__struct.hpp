// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_uv:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__ACTION__STRUCT_HPP_
#define PX4_UV__MSG__DETAIL__ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'setpoint'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_uv__msg__Action __attribute__((deprecated))
#else
# define DEPRECATED__px4_uv__msg__Action __declspec(deprecated)
#endif

namespace px4_uv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Action_
{
  using Type = Action_<ContainerAllocator>;

  explicit Action_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : setpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = "";
      this->action = 0;
      this->param1 = 0.0f;
      this->param2 = 0.0f;
      this->param3 = 0.0f;
      this->param4 = 0.0f;
      this->param5 = 0.0f;
    }
  }

  explicit Action_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : agent_id(_alloc),
    setpoint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = "";
      this->action = 0;
      this->param1 = 0.0f;
      this->param2 = 0.0f;
      this->param3 = 0.0f;
      this->param4 = 0.0f;
      this->param5 = 0.0f;
    }
  }

  // field types and members
  using _agent_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _agent_id_type agent_id;
  using _action_type =
    uint8_t;
  _action_type action;
  using _setpoint_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _setpoint_type setpoint;
  using _param1_type =
    float;
  _param1_type param1;
  using _param2_type =
    float;
  _param2_type param2;
  using _param3_type =
    float;
  _param3_type param3;
  using _param4_type =
    float;
  _param4_type param4;
  using _param5_type =
    float;
  _param5_type param5;

  // setters for named parameter idiom
  Type & set__agent_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->agent_id = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__setpoint(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->setpoint = _arg;
    return *this;
  }
  Type & set__param1(
    const float & _arg)
  {
    this->param1 = _arg;
    return *this;
  }
  Type & set__param2(
    const float & _arg)
  {
    this->param2 = _arg;
    return *this;
  }
  Type & set__param3(
    const float & _arg)
  {
    this->param3 = _arg;
    return *this;
  }
  Type & set__param4(
    const float & _arg)
  {
    this->param4 = _arg;
    return *this;
  }
  Type & set__param5(
    const float & _arg)
  {
    this->param5 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACTION_MOVE =
    0u;
  static constexpr uint8_t ACTION_TAKEOFF =
    1u;
  static constexpr uint8_t ACTION_LANDING =
    2u;
  static constexpr uint8_t ACTION_RETURN_HOME =
    3u;
  static constexpr uint8_t ACTION_PATROL =
    4u;

  // pointer types
  using RawPtr =
    px4_uv::msg::Action_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_uv::msg::Action_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_uv::msg::Action_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_uv::msg::Action_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::Action_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::Action_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::Action_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::Action_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_uv::msg::Action_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_uv::msg::Action_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_uv__msg__Action
    std::shared_ptr<px4_uv::msg::Action_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_uv__msg__Action
    std::shared_ptr<px4_uv::msg::Action_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Action_ & other) const
  {
    if (this->agent_id != other.agent_id) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->setpoint != other.setpoint) {
      return false;
    }
    if (this->param1 != other.param1) {
      return false;
    }
    if (this->param2 != other.param2) {
      return false;
    }
    if (this->param3 != other.param3) {
      return false;
    }
    if (this->param4 != other.param4) {
      return false;
    }
    if (this->param5 != other.param5) {
      return false;
    }
    return true;
  }
  bool operator!=(const Action_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Action_

// alias to use template instance with default allocator
using Action =
  px4_uv::msg::Action_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Action_<ContainerAllocator>::ACTION_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Action_<ContainerAllocator>::ACTION_TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Action_<ContainerAllocator>::ACTION_LANDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Action_<ContainerAllocator>::ACTION_RETURN_HOME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Action_<ContainerAllocator>::ACTION_PATROL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__ACTION__STRUCT_HPP_
