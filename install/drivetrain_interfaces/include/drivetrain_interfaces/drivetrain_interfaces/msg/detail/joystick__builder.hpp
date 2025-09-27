// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drivetrain_interfaces:msg/Joystick.idl
// generated code does not contain a copyright notice

#ifndef DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__BUILDER_HPP_
#define DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drivetrain_interfaces/msg/detail/joystick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drivetrain_interfaces
{

namespace msg
{

namespace builder
{

class Init_Joystick_right_joystick_x_axis
{
public:
  explicit Init_Joystick_right_joystick_x_axis(::drivetrain_interfaces::msg::Joystick & msg)
  : msg_(msg)
  {}
  ::drivetrain_interfaces::msg::Joystick right_joystick_x_axis(::drivetrain_interfaces::msg::Joystick::_right_joystick_x_axis_type arg)
  {
    msg_.right_joystick_x_axis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drivetrain_interfaces::msg::Joystick msg_;
};

class Init_Joystick_left_joystick_y_axis
{
public:
  Init_Joystick_left_joystick_y_axis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joystick_right_joystick_x_axis left_joystick_y_axis(::drivetrain_interfaces::msg::Joystick::_left_joystick_y_axis_type arg)
  {
    msg_.left_joystick_y_axis = std::move(arg);
    return Init_Joystick_right_joystick_x_axis(msg_);
  }

private:
  ::drivetrain_interfaces::msg::Joystick msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drivetrain_interfaces::msg::Joystick>()
{
  return drivetrain_interfaces::msg::builder::Init_Joystick_left_joystick_y_axis();
}

}  // namespace drivetrain_interfaces

#endif  // DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__BUILDER_HPP_
