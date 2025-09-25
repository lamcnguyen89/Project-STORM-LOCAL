// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drivetrain_interfaces:msg/Joystick.idl
// generated code does not contain a copyright notice

#ifndef DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__STRUCT_HPP_
#define DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drivetrain_interfaces__msg__Joystick __attribute__((deprecated))
#else
# define DEPRECATED__drivetrain_interfaces__msg__Joystick __declspec(deprecated)
#endif

namespace drivetrain_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joystick_
{
  using Type = Joystick_<ContainerAllocator>;

  explicit Joystick_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_joystick_y_axis = 0.0;
      this->right_joystick_x_axis = 0.0;
    }
  }

  explicit Joystick_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_joystick_y_axis = 0.0;
      this->right_joystick_x_axis = 0.0;
    }
  }

  // field types and members
  using _left_joystick_y_axis_type =
    double;
  _left_joystick_y_axis_type left_joystick_y_axis;
  using _right_joystick_x_axis_type =
    double;
  _right_joystick_x_axis_type right_joystick_x_axis;

  // setters for named parameter idiom
  Type & set__left_joystick_y_axis(
    const double & _arg)
  {
    this->left_joystick_y_axis = _arg;
    return *this;
  }
  Type & set__right_joystick_x_axis(
    const double & _arg)
  {
    this->right_joystick_x_axis = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drivetrain_interfaces::msg::Joystick_<ContainerAllocator> *;
  using ConstRawPtr =
    const drivetrain_interfaces::msg::Joystick_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drivetrain_interfaces::msg::Joystick_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drivetrain_interfaces::msg::Joystick_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drivetrain_interfaces__msg__Joystick
    std::shared_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drivetrain_interfaces__msg__Joystick
    std::shared_ptr<drivetrain_interfaces::msg::Joystick_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joystick_ & other) const
  {
    if (this->left_joystick_y_axis != other.left_joystick_y_axis) {
      return false;
    }
    if (this->right_joystick_x_axis != other.right_joystick_x_axis) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joystick_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joystick_

// alias to use template instance with default allocator
using Joystick =
  drivetrain_interfaces::msg::Joystick_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drivetrain_interfaces

#endif  // DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__STRUCT_HPP_
