// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/StopLineReading.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/stop_line_reading__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/stop_line_reading__functions.h"
#include "duckietown_msgs/msg/detail/stop_line_reading__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `stop_line_point`
#include "geometry_msgs/msg/point.h"
// Member `stop_line_point`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__StopLineReading__init(message_memory);
}

void duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_fini_function(void * message_memory)
{
  duckietown_msgs__msg__StopLineReading__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__StopLineReading, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_line_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__StopLineReading, stop_line_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "at_stop_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__StopLineReading, at_stop_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_line_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__StopLineReading, stop_line_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "StopLineReading",  // message name
  4,  // number of fields
  sizeof(duckietown_msgs__msg__StopLineReading),
  duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_member_array,  // message members
  duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, StopLineReading)() {
  duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__StopLineReading__rosidl_typesupport_introspection_c__StopLineReading_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
