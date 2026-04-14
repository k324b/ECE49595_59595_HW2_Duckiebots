// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/AntiInstagramTransform.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/anti_instagram_transform__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/anti_instagram_transform__functions.h"
#include "duckietown_msgs/msg/detail/anti_instagram_transform__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__AntiInstagramTransform__init(message_memory);
}

void duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_fini_function(void * message_memory)
{
  duckietown_msgs__msg__AntiInstagramTransform__fini(message_memory);
}

size_t duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__size_function__AntiInstagramTransform__s(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__get_const_function__AntiInstagramTransform__s(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__get_function__AntiInstagramTransform__s(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__fetch_function__AntiInstagramTransform__s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__get_const_function__AntiInstagramTransform__s(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__assign_function__AntiInstagramTransform__s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__get_function__AntiInstagramTransform__s(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__AntiInstagramTransform, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__AntiInstagramTransform, s),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__size_function__AntiInstagramTransform__s,  // size() function pointer
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__get_const_function__AntiInstagramTransform__s,  // get_const(index) function pointer
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__get_function__AntiInstagramTransform__s,  // get(index) function pointer
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__fetch_function__AntiInstagramTransform__s,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__assign_function__AntiInstagramTransform__s,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "AntiInstagramTransform",  // message name
  2,  // number of fields
  sizeof(duckietown_msgs__msg__AntiInstagramTransform),
  duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_member_array,  // message members
  duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, AntiInstagramTransform)() {
  duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__AntiInstagramTransform__rosidl_typesupport_introspection_c__AntiInstagramTransform_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
