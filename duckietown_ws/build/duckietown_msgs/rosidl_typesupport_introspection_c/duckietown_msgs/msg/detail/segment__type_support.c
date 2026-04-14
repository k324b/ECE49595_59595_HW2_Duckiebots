// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from duckietown_msgs:msg/Segment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "duckietown_msgs/msg/detail/segment__rosidl_typesupport_introspection_c.h"
#include "duckietown_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "duckietown_msgs/msg/detail/segment__functions.h"
#include "duckietown_msgs/msg/detail/segment__struct.h"


// Include directives for member types
// Member `pixels_normalized`
// Member `normal`
#include "duckietown_msgs/msg/vector2_d.h"
// Member `pixels_normalized`
// Member `normal`
#include "duckietown_msgs/msg/detail/vector2_d__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "geometry_msgs/msg/point.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  duckietown_msgs__msg__Segment__init(message_memory);
}

void duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_fini_function(void * message_memory)
{
  duckietown_msgs__msg__Segment__fini(message_memory);
}

size_t duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__size_function__Segment__pixels_normalized(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_const_function__Segment__pixels_normalized(
  const void * untyped_member, size_t index)
{
  const duckietown_msgs__msg__Vector2D * member =
    (const duckietown_msgs__msg__Vector2D *)(untyped_member);
  return &member[index];
}

void * duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_function__Segment__pixels_normalized(
  void * untyped_member, size_t index)
{
  duckietown_msgs__msg__Vector2D * member =
    (duckietown_msgs__msg__Vector2D *)(untyped_member);
  return &member[index];
}

void duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__fetch_function__Segment__pixels_normalized(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const duckietown_msgs__msg__Vector2D * item =
    ((const duckietown_msgs__msg__Vector2D *)
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_const_function__Segment__pixels_normalized(untyped_member, index));
  duckietown_msgs__msg__Vector2D * value =
    (duckietown_msgs__msg__Vector2D *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__assign_function__Segment__pixels_normalized(
  void * untyped_member, size_t index, const void * untyped_value)
{
  duckietown_msgs__msg__Vector2D * item =
    ((duckietown_msgs__msg__Vector2D *)
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_function__Segment__pixels_normalized(untyped_member, index));
  const duckietown_msgs__msg__Vector2D * value =
    (const duckietown_msgs__msg__Vector2D *)(untyped_value);
  *item = *value;
}

size_t duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__size_function__Segment__points(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_const_function__Segment__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point * member =
    (const geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void * duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_function__Segment__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point * member =
    (geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__fetch_function__Segment__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_const_function__Segment__points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__assign_function__Segment__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_function__Segment__points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_member_array[4] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Segment, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pixels_normalized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Segment, pixels_normalized),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__size_function__Segment__pixels_normalized,  // size() function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_const_function__Segment__pixels_normalized,  // get_const(index) function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_function__Segment__pixels_normalized,  // get(index) function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__fetch_function__Segment__pixels_normalized,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__assign_function__Segment__pixels_normalized,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Segment, normal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(duckietown_msgs__msg__Segment, points),  // bytes offset in struct
    NULL,  // default value
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__size_function__Segment__points,  // size() function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_const_function__Segment__points,  // get_const(index) function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__get_function__Segment__points,  // get(index) function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__fetch_function__Segment__points,  // fetch(index, &value) function pointer
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__assign_function__Segment__points,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_members = {
  "duckietown_msgs__msg",  // message namespace
  "Segment",  // message name
  4,  // number of fields
  sizeof(duckietown_msgs__msg__Segment),
  duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_member_array,  // message members
  duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_init_function,  // function to initialize message memory (memory has to be allocated)
  duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_type_support_handle = {
  0,
  &duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_duckietown_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, Segment)() {
  duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, Vector2D)();
  duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, duckietown_msgs, msg, Vector2D)();
  duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_type_support_handle.typesupport_identifier) {
    duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &duckietown_msgs__msg__Segment__rosidl_typesupport_introspection_c__Segment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
