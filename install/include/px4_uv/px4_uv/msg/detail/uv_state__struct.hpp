// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_uv:msg/UvState.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__UV_STATE__STRUCT_HPP_
#define PX4_UV__MSG__DETAIL__UV_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pos'
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_uv__msg__UvState __attribute__((deprecated))
#else
# define DEPRECATED__px4_uv__msg__UvState __declspec(deprecated)
#endif

namespace px4_uv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UvState_
{
  using Type = UvState_<ContainerAllocator>;

  explicit UvState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init),
    vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_yaw = 0.0f;
      this->ref_lat = 0.0f;
      this->ref_lon = 0.0f;
      this->ref_alt = 0.0f;
      this->battery = 0;
      this->status = 0;
    }
  }

  explicit UvState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init),
    vel(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_yaw = 0.0f;
      this->ref_lat = 0.0f;
      this->ref_lon = 0.0f;
      this->ref_alt = 0.0f;
      this->battery = 0;
      this->status = 0;
    }
  }

  // field types and members
  using _pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _pos_type pos;
  using _vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_type vel;
  using _current_yaw_type =
    float;
  _current_yaw_type current_yaw;
  using _ref_lat_type =
    float;
  _ref_lat_type ref_lat;
  using _ref_lon_type =
    float;
  _ref_lon_type ref_lon;
  using _ref_alt_type =
    float;
  _ref_alt_type ref_alt;
  using _battery_type =
    uint16_t;
  _battery_type battery;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__current_yaw(
    const float & _arg)
  {
    this->current_yaw = _arg;
    return *this;
  }
  Type & set__ref_lat(
    const float & _arg)
  {
    this->ref_lat = _arg;
    return *this;
  }
  Type & set__ref_lon(
    const float & _arg)
  {
    this->ref_lon = _arg;
    return *this;
  }
  Type & set__ref_alt(
    const float & _arg)
  {
    this->ref_alt = _arg;
    return *this;
  }
  Type & set__battery(
    const uint16_t & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE_STATUS_NORMAL =
    0u;
  static constexpr uint8_t VEHICLE_STATUS_STOP =
    1u;
  static constexpr uint8_t VEHICLE_STATUS_TAKEOFF =
    2u;
  static constexpr uint8_t VEHICLE_STATUS_LANDED =
    3u;

  // pointer types
  using RawPtr =
    px4_uv::msg::UvState_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_uv::msg::UvState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_uv::msg::UvState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_uv::msg::UvState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::UvState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::UvState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_uv::msg::UvState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_uv::msg::UvState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_uv::msg::UvState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_uv::msg::UvState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_uv__msg__UvState
    std::shared_ptr<px4_uv::msg::UvState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_uv__msg__UvState
    std::shared_ptr<px4_uv::msg::UvState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UvState_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->current_yaw != other.current_yaw) {
      return false;
    }
    if (this->ref_lat != other.ref_lat) {
      return false;
    }
    if (this->ref_lon != other.ref_lon) {
      return false;
    }
    if (this->ref_alt != other.ref_alt) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const UvState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UvState_

// alias to use template instance with default allocator
using UvState =
  px4_uv::msg::UvState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UvState_<ContainerAllocator>::VEHICLE_STATUS_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UvState_<ContainerAllocator>::VEHICLE_STATUS_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UvState_<ContainerAllocator>::VEHICLE_STATUS_TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UvState_<ContainerAllocator>::VEHICLE_STATUS_LANDED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_uv

#endif  // PX4_UV__MSG__DETAIL__UV_STATE__STRUCT_HPP_
