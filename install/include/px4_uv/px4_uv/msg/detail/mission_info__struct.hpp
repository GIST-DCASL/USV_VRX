// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_uv:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_
#define PX4_UV__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tasks'
#include "px4_uv/msg/detail/task_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_uv__msg__MissionInfo __attribute__((deprecated))
#else
# define DEPRECATED__px4_uv__msg__MissionInfo __declspec(deprecated)
#endif

namespace px4_uv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionInfo_
{
  using Type = MissionInfo_<ContainerAllocator>;

  explicit MissionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->description = "";
      this->leftup_lat = 0.0;
      this->leftup_lon = 0.0;
      this->rightdown_lat = 0.0;
      this->rightdown_lon = 0.0;
      this->max_height = 0.0;
    }
  }

  explicit MissionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->description = "";
      this->leftup_lat = 0.0;
      this->leftup_lon = 0.0;
      this->rightdown_lat = 0.0;
      this->rightdown_lon = 0.0;
      this->max_height = 0.0;
    }
  }

  // field types and members
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _leftup_lat_type =
    double;
  _leftup_lat_type leftup_lat;
  using _leftup_lon_type =
    double;
  _leftup_lon_type leftup_lon;
  using _rightdown_lat_type =
    double;
  _rightdown_lat_type rightdown_lat;
  using _rightdown_lon_type =
    double;
  _rightdown_lon_type rightdown_lon;
  using _max_height_type =
    double;
  _max_height_type max_height;
  using _tasks_type =
    std::vector<px4_uv::msg::TaskInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_uv::msg::TaskInfo_<ContainerAllocator>>>;
  _tasks_type tasks;

  // setters for named parameter idiom
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__leftup_lat(
    const double & _arg)
  {
    this->leftup_lat = _arg;
    return *this;
  }
  Type & set__leftup_lon(
    const double & _arg)
  {
    this->leftup_lon = _arg;
    return *this;
  }
  Type & set__rightdown_lat(
    const double & _arg)
  {
    this->rightdown_lat = _arg;
    return *this;
  }
  Type & set__rightdown_lon(
    const double & _arg)
  {
    this->rightdown_lon = _arg;
    return *this;
  }
  Type & set__max_height(
    const double & _arg)
  {
    this->max_height = _arg;
    return *this;
  }
  Type & set__tasks(
    const std::vector<px4_uv::msg::TaskInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<px4_uv::msg::TaskInfo_<ContainerAllocator>>> & _arg)
  {
    this->tasks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_uv::msg::MissionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_uv::msg::MissionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::MissionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::MissionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_uv__msg__MissionInfo
    std::shared_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_uv__msg__MissionInfo
    std::shared_ptr<px4_uv::msg::MissionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionInfo_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->leftup_lat != other.leftup_lat) {
      return false;
    }
    if (this->leftup_lon != other.leftup_lon) {
      return false;
    }
    if (this->rightdown_lat != other.rightdown_lat) {
      return false;
    }
    if (this->rightdown_lon != other.rightdown_lon) {
      return false;
    }
    if (this->max_height != other.max_height) {
      return false;
    }
    if (this->tasks != other.tasks) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionInfo_

// alias to use template instance with default allocator
using MissionInfo =
  px4_uv::msg::MissionInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_
