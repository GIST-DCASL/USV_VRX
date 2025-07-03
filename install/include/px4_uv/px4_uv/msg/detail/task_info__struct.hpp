// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_uv:msg/TaskInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK_INFO__STRUCT_HPP_
#define PX4_UV__MSG__DETAIL__TASK_INFO__STRUCT_HPP_

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
# define DEPRECATED__px4_uv__msg__TaskInfo __attribute__((deprecated))
#else
# define DEPRECATED__px4_uv__msg__TaskInfo __declspec(deprecated)
#endif

namespace px4_uv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskInfo_
{
  using Type = TaskInfo_<ContainerAllocator>;

  explicit TaskInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->task_description = "";
      this->target_type = 0;
      this->mission_id = "";
      this->required_payload_type = 0;
      this->task_status = 0;
      this->task_type = 0;
      this->reward = 0.0f;
    }
  }

  explicit TaskInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    task_description(_alloc),
    mission_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->task_description = "";
      this->target_type = 0;
      this->mission_id = "";
      this->required_payload_type = 0;
      this->task_status = 0;
      this->task_type = 0;
      this->reward = 0.0f;
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _task_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_description_type task_description;
  using _target_type_type =
    uint8_t;
  _target_type_type target_type;
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _required_payload_type_type =
    uint8_t;
  _required_payload_type_type required_payload_type;
  using _task_status_type =
    uint8_t;
  _task_status_type task_status;
  using _task_type_type =
    uint8_t;
  _task_type_type task_type;
  using _actions_type =
    std::vector<px4_uv::msg::Action_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_uv::msg::Action_<ContainerAllocator>>>;
  _actions_type actions;
  using _reward_type =
    float;
  _reward_type reward;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__task_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_description = _arg;
    return *this;
  }
  Type & set__target_type(
    const uint8_t & _arg)
  {
    this->target_type = _arg;
    return *this;
  }
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__required_payload_type(
    const uint8_t & _arg)
  {
    this->required_payload_type = _arg;
    return *this;
  }
  Type & set__task_status(
    const uint8_t & _arg)
  {
    this->task_status = _arg;
    return *this;
  }
  Type & set__task_type(
    const uint8_t & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__actions(
    const std::vector<px4_uv::msg::Action_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_uv::msg::Action_<ContainerAllocator>>> & _arg)
  {
    this->actions = _arg;
    return *this;
  }
  Type & set__reward(
    const float & _arg)
  {
    this->reward = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE_TYPE_NONE =
    0u;
  static constexpr uint8_t VEHICLE_TYPE_UAV =
    1u;
  static constexpr uint8_t VEHICLE_TYPE_UGV =
    2u;
  static constexpr uint8_t VEHICLE_TYPE_USV =
    3u;
  static constexpr uint8_t TASK_STATUS_REQUESTED =
    0u;
  static constexpr uint8_t TASK_STATUS_INPROCESS =
    1u;
  static constexpr uint8_t TASK_STATUS_COMPLETED =
    2u;
  static constexpr uint8_t PAYLOAD_TYPE_NULL =
    0u;
  static constexpr uint8_t PAYLOAD_TYPE_CAM =
    1u;
  static constexpr uint8_t TASK_TYPE_WAYPOINT =
    0u;
  static constexpr uint8_t TASK_TYPE_CHARGING =
    1u;

  // pointer types
  using RawPtr =
    px4_uv::msg::TaskInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_uv::msg::TaskInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::TaskInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::TaskInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_uv__msg__TaskInfo
    std::shared_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_uv__msg__TaskInfo
    std::shared_ptr<px4_uv::msg::TaskInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskInfo_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->task_description != other.task_description) {
      return false;
    }
    if (this->target_type != other.target_type) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->required_payload_type != other.required_payload_type) {
      return false;
    }
    if (this->task_status != other.task_status) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->actions != other.actions) {
      return false;
    }
    if (this->reward != other.reward) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskInfo_

// alias to use template instance with default allocator
using TaskInfo =
  px4_uv::msg::TaskInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::VEHICLE_TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::VEHICLE_TYPE_UAV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::VEHICLE_TYPE_UGV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::VEHICLE_TYPE_USV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::TASK_STATUS_REQUESTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::TASK_STATUS_INPROCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::TASK_STATUS_COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::PAYLOAD_TYPE_NULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::PAYLOAD_TYPE_CAM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::TASK_TYPE_WAYPOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskInfo_<ContainerAllocator>::TASK_TYPE_CHARGING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__TASK_INFO__STRUCT_HPP_
