// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drivetrain_interfaces:msg/Joystick.idl
// generated code does not contain a copyright notice

#ifndef DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__STRUCT_H_
#define DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Joystick in the package drivetrain_interfaces.
typedef struct drivetrain_interfaces__msg__Joystick
{
  double left_joystick_y_axis;
  double right_joystick_x_axis;
} drivetrain_interfaces__msg__Joystick;

// Struct for a sequence of drivetrain_interfaces__msg__Joystick.
typedef struct drivetrain_interfaces__msg__Joystick__Sequence
{
  drivetrain_interfaces__msg__Joystick * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drivetrain_interfaces__msg__Joystick__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVETRAIN_INTERFACES__MSG__DETAIL__JOYSTICK__STRUCT_H_
