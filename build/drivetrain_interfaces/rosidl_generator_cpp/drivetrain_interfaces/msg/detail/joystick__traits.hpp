// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drivetrain_interfaces:msg/Joystick.idl
// generated code does not contain a copyright notice

#ifndef DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__TRAITS_HPP_
#define DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drivetrain_interfaces/msg/detail/joystick__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drivetrain_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Joystick & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_joystick_y_axis
  {
    out << "left_joystick_y_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.left_joystick_y_axis, out);
    out << ", ";
  }

  // member: right_joystick_x_axis
  {
    out << "right_joystick_x_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.right_joystick_x_axis, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Joystick & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_joystick_y_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_joystick_y_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.left_joystick_y_axis, out);
    out << "\n";
  }

  // member: right_joystick_x_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_joystick_x_axis: ";
    rosidl_generator_traits::value_to_yaml(msg.right_joystick_x_axis, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Joystick & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drivetrain_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drivetrain_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drivetrain_interfaces::msg::Joystick & msg,
  std::ostream & out, size_t indentation = 0)
{
  drivetrain_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drivetrain_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const drivetrain_interfaces::msg::Joystick & msg)
{
  return drivetrain_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drivetrain_interfaces::msg::Joystick>()
{
  return "drivetrain_interfaces::msg::Joystick";
}

template<>
inline const char * name<drivetrain_interfaces::msg::Joystick>()
{
  return "drivetrain_interfaces/msg/Joystick";
}

template<>
struct has_fixed_size<drivetrain_interfaces::msg::Joystick>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drivetrain_interfaces::msg::Joystick>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drivetrain_interfaces::msg::Joystick>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__TRAITS_HPP_
