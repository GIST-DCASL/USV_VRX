// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_uv:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK__STRUCT_HPP_
#define PX4_UV__MSG__DETAIL__TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'actions'
#include "px4_uv/msg/detail/action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_uv__msg__Task __attribute__((deprecated))
#else
# define DEPRECATED__px4_uv__msg__Task __declspec(deprecated)
#endif

namespace px4_uv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Task_
{
  using Type = Task_<ContainerAllocator>;

  explicit Task_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->target_type = 0;
    }
  }

  explicit Task_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->target_type = 0;
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _target_type_type =
    uint8_t;
  _target_type_type target_type;
  using _actions_type =
    std::vector<px4_uv::msg::Action_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_uv::msg::Action_<ContainerAllocator>>>;
  _actions_type actions;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__target_type(
    const uint8_t & _arg)
  {
    this->target_type = _arg;
    return *this;
  }
  Type & set__actions(
    const std::vector<px4_uv::msg::Action_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_uv::msg::Action_<ContainerAllocator>>> & _arg)
  {
    this->actions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_uv::msg::Task_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_uv::msg::Task_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_uv::msg::Task_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_uv::msg::Task_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::Task_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::Task_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::Task_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::Task_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_uv::msg::Task_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_uv::msg::Task_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_uv__msg__Task
    std::shared_ptr<px4_uv::msg::Task_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_uv__msg__Task
    std::shared_ptr<px4_uv::msg::Task_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->target_type != other.target_type) {
      return false;
    }
    if (this->actions != other.actions) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_

// alias to use template instance with default allocator
using Task =
  px4_uv::msg::Task_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__TASK__STRUCT_HPP_
