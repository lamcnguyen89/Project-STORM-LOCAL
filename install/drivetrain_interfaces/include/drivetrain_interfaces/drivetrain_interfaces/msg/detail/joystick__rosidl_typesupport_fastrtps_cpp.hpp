// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from drivetrain_interfaces:msg/Joystick.idl
// generated code does not contain a copyright notice

#ifndef DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "drivetrain_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "drivetrain_interfaces/msg/detail/joystick__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace drivetrain_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drivetrain_interfaces
cdr_serialize(
  const drivetrain_interfaces::msg::Joystick & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drivetrain_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drivetrain_interfaces::msg::Joystick & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drivetrain_interfaces
get_serialized_size(
  const drivetrain_interfaces::msg::Joystick & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drivetrain_interfaces
max_serialized_size_Joystick(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drivetrain_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drivetrain_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drivetrain_interfaces, msg, Joystick)();

#ifdef __cplusplus
}
#endif

#endif  // DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
