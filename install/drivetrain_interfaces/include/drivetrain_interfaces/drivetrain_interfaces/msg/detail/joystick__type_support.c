// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drivetrain_interfaces:msg/Joystick.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drivetrain_interfaces/msg/detail/joystick__rosidl_typesupport_introspection_c.h"
#include "drivetrain_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drivetrain_interfaces/msg/detail/joystick__functions.h"
#include "drivetrain_interfaces/msg/detail/joystick__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drivetrain_interfaces__msg__Joystick__init(message_memory);
}

void drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_fini_function(void * message_memory)
{
  drivetrain_interfaces__msg__Joystick__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_member_array[2] = {
  {
    "left_joystick_y_axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drivetrain_interfaces__msg__Joystick, left_joystick_y_axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_joystick_x_axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drivetrain_interfaces__msg__Joystick, right_joystick_x_axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_members = {
  "drivetrain_interfaces__msg",  // message namespace
  "Joystick",  // message name
  2,  // number of fields
  sizeof(drivetrain_interfaces__msg__Joystick),
  drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_member_array,  // message members
  drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_init_function,  // function to initialize message memory (memory has to be allocated)
  drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_type_support_handle = {
  0,
  &drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drivetrain_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drivetrain_interfaces, msg, Joystick)() {
  if (!drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_type_support_handle.typesupport_identifier) {
    drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drivetrain_interfaces__msg__Joystick__rosidl_typesupport_introspection_c__Joystick_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
