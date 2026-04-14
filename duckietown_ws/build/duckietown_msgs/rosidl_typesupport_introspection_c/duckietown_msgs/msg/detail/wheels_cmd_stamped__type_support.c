// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/WheelsCmdStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/wheels_cmd_stamped__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/wheels_cmd_stamped__functions.h"
#include "duckietown_msgs/msg/detail/wheels_cmd_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__WheelsCmdStamped__init(message_memory);
}

void duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_fini_function(void * message_memory)
{
  duckietown_msgs__msg__WheelsCmdStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__WheelsCmdStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__WheelsCmdStamped, vel_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__WheelsCmdStamped, vel_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "WheelsCmdStamped",  // message name
  3,  // number of fields
  sizeof(duckietown_msgs__msg__WheelsCmdStamped),
  duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_member_array,  // message members
  duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, WheelsCmdStamped)() {
  duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__WheelsCmdStamped__rosidl_typesupport_introspection_c__WheelsCmdStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
